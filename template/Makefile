testA: A.cpp
	g++ -o A $< -I. -Wall -std=c++11
	./A < `ls -1 | egrep A-test.*\.in | head -n1` | tee A-test.out

smallA: A.cpp
	g++ -o A $< -I. -Wall -std=c++11
	./A < `ls -1 | egrep A-small.*\.in | head -n1` > A-small.out

largeA: A.cpp
	g++ -o A $< -I. -Wall -std=c++11
	./A < `ls -1 | egrep A-large.*\.in | head -n1` > A-large.out

testB: B.cpp
	g++ -o B $< -I. -Wall -std=c++11
	./B < `ls -1 | egrep B-test.*\.in | head -n1` | tee B-test.out

smallB: B.cpp
	g++ -o B $< -I. -Wall -std=c++11
	./B < `ls -1 | egrep B-small.*\.in | head -n1` > B-small.out

largeB: B.cpp
	g++ -o B $< -I. -Wall -std=c++11
	./B < `ls -1 | egrep B-large.*\.in | head -n1` > B-large.out

testC: C.cpp
	g++ -o C $< -I. -Wall -std=c++11
	./C < `ls -1 | egrep C-test.*\.in | head -n1` | tee C-test.out

smallC: C.cpp
	g++ -o C $< -I. -Wall -std=c++11
	./C < `ls -1 | egrep C-small.*\.in | head -n1` > C-small.out

largeC: C.cpp
	g++ -o C $< -I. -Wall -std=c++11
	./C < `ls -1 | egrep C-large.*\.in | head -n1` > C-large.out

testD: D.cpp
	g++ -o D $< -I. -Wall -std=c++11
	./D < `ls -1 | egrep D-test.*\.in | head -n1` | tee D-test.out

smallD: D.cpp
	g++ -o D $< -I. -Wall -std=c++11
	./D < `ls -1 | egrep D-small.*\.in | head -n1` > D-small.out

largeD: D.cpp
	g++ -o D $< -I. -Wall -std=c++11
	./D < `ls -1 | egrep D-large.*\.in | head -n1` > D-large.out

testE: E.cpp
	g++ -o E $< -I. -Wall -std=c++11
	./E < `ls -1 | egrep E-test.*\.in | head -n1` | tee E-test.out

smallE: E.cpp
	g++ -o E $< -I. -Wall -std=c++11
	./E < `ls -1 | egrep E-small.*\.in | head -n1` > E-small.out

largeE: E.cpp
	g++ -o E $< -I. -Wall -std=c++11
	./E < `ls -1 | egrep E-large.*\.in | head -n1` > E-large.out

.PHONY: clean

clean:
	rm -rf A B C D E
	rm -rf A*.out B*.out C*.out D*.out E*.out
