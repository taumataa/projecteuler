all: pEuler

pEuler: pEuler.o pEulerMath.o questionOne.o questionTwo.o questionThree.o questionFour.o questionFive.o questionSix.o questionSeven.o questionEight.o
	gcc pEuler.o pEulerMath.o questionOne.o questionTwo.o questionThree.o questionFour.o questionFive.o questionSix.o questionSeven.o questionEight.o -o pEuler

pEulerMath.o: pEulerMath.cpp
	gcc -c pEulerMath.cpp

questionOne.o: questionOne.cpp
	gcc -c questionOne.cpp

questionTwo.o: questionTwo.cpp
	gcc -c questionTwo.cpp

questionThree.o: questionThree.cpp
	gcc -c questionThree.cpp

questionFour.o: questionFour.cpp
	gcc -c questionFour.cpp

questionFive.o: questionFive.cpp
	gcc -c questionFive.cpp

questionSix.o: questionSix.cpp
	gcc -c questionSix.cpp

questionSeven.o: questionSeven.cpp
	gcc -c questionSeven.cpp

questionEight.o: questionEight.cpp
	gcc -c questionEight.cpp

clean:
	rm *o pEuler
