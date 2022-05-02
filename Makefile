OBJECTS = recursion.o
HFILES = recursion.h

main: main.o $(OBJECTS)
	g++ -o main main.o $(OBJECTS)

tests: tests.o $(OBJECTS)
	g++ -o tests tests.o $(OBJECTS)

main.o: main.cpp $(HFILES)

recursion.o: recursion.cpp recursion.h

tests.o: tests.cpp doctest.h $(HFILES)

clean:
	rm -f main tests main.o tests.o $(OBJECTS)
