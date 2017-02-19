smallA: A.cpp
	g++ -o A $< -I. -Wall -std=c++11
	./A < `ls -1 | egrep A-small.*\.in | head -n1` > A-small.out

largeA: A.cpp
	g++ -o A $< -I. -Wall -std=c++11
	./A < `ls -1 | egrep A-largeA.*\.in | head -n1` > A-largeA.out

smallB: B.cpp
	g++ -o B $< -I. -Wall -std=c++11
	./B < `ls -1 | egrep B-small.*\.in | head -n1` > B-small.out

largeB: B.cpp
	g++ -o B $< -I. -Wall -std=c++11
	./B < `ls -1 | egrep B-largeB.*\.in | head -n1` > B-largeB.out

smallC: C.cpp
	g++ -o C $< -I. -Wall -std=c++11
	./C < `ls -1 | egrep C-small.*\.in | head -n1` > C-small.out

largeC: C.cpp
	g++ -o C $< -I. -Wall -std=c++11
	./C < `ls -1 | egrep C-largeC.*\.in | head -n1` > C-largeC.out

smallD: D.cpp
	g++ -o D $< -I. -Wall -std=c++11
	./D < `ls -1 | egrep D-small.*\.in | head -n1` > D-small.out

largeD: D.cpp
	g++ -o D $< -I. -Wall -std=c++11
	./D < `ls -1 | egrep D-largeD.*\.in | head -n1` > D-largeD.out

smallE: E.cpp
	g++ -o E $< -I. -Wall -std=c++11
	./E < `ls -1 | egrep E-small.*\.in | head -n1` > E-small.out

largeE: E.cpp
	g++ -o E $< -I. -Wall -std=c++11
	./E < `ls -1 | egrep E-largeE.*\.in | head -n1` > E-largeE.out

.PHONY: clean

clean:
	rm -rf A B C D E
	rm -rf A*.out B*.out C*.out D*.out E*.out
