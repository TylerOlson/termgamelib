output: termgamelib.o logger.o
	g++ -Wall bin/termgamelib.o bin/logger.o -o test

termgamelib.o:
	g++ -Wall -c src/termgamelib.cpp -o bin/termgamelib.o

logger.o:
	g++ -Wall -c src/logger.cpp -o bin/logger.o

clean:
	rm bin/*.o test