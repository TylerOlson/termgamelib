output: termgamelib.o gameobject.o renderer.o
	g++ -Wall bin/termgamelib.o bin/gameobject.o bin/renderer.o -o test

termgamelib.o:
	g++ -Wall -c src/termgamelib.cpp -o bin/termgamelib.o

gameobject.o:
	g++ -Wall -c src/gameobject.cpp -o bin/gameobject.o

renderer.o:
	g++ -Wall -c src/renderer.cpp -o bin/renderer.o

clean:
	rm bin/*.o test