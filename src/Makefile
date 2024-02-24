CC = gcc -g -lm
CFLAGS= -Wall -Wextra -Werror
OPEN= open
TEST_FLAGS = -lcheck 
OS= $(shell uname)

ifeq ($(OS), Linux)
	OPEN = firefox
	TEST_FLAGS = -lcheck -lpthread -pthread -lrt
endif

GCOV = -fprofile-arcs -ftest-coverage -fprofile-arcs --coverage

all: install run

install: uninstall
	cd build && qmake ../calcal/calcal.pro && make
	mkdir Calculator && mv build/calcal* Calculator
ifeq ($(OS), Linux)
run:
	cd Calculator && ./calcal*
else
run: 
	cd Calculator/calcal.app/Contents/MacOS/ && ./calcal
endif

dvi: 
	${OPEN} doc/doc.pdf
 
dist:
	cd build && sed -i.bak "s/--parents//g" Makefile && make dist && mv calcal1.0.0.tar.gz ../

uninstall:
	rm -rf test build/*.* build/calcal* build/Makefile build/.qmake.stash  build/.tmp Calculator

clean: uninstall clean_test

clean_test:
	rm -rf *.o *.out *.gch *.dSYM *.gcov *.gcda *.bac *.gcno *.a s21_calc_test *.css *.html vgcore* \
	report *.info *.gz *.log

gcov_report: test
	lcov -t "calculator" -o calculator.info -c -d .
	genhtml -o report calculator.info
	cd report && ${OPEN} index.html
	
test:
	${CC} ${CFLAGS} ${TEST_FLAGS} ${GCOV} calcal/*.c s21_calc_test.c -o s21_calc_test
	./s21_calc_test
clang_format:
	clang-format -n --style=Google *.c *.h calcal/*.c calcal/*.h calcal/*.cpp

valgrind:
	valgrind --tool=memcheck --leak-check=full -s --log-file=test ./s21_calc_test
	grep errors test



.PHONY: all install run uninstall clean dvi dist gcov_report test clang_format clean_test

