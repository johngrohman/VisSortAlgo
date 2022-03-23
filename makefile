bubble: *.cpp bubblesortalgo/*.cpp *.h bubblesortalgo/*.h
	g++ *.cpp bubblesortalgo/*.cpp -o bubble.o
	./bubble.o

quick: *.cpp quicksortalgo/*.cpp *.h quicksortalgo/*.h
	g++ *.cpp quicksortalgo/*.cpp -o quick.o
	./quick.o

bogo: *.cpp bogosortalgo/*.cpp *.h bogosortalgo/*.h *.h
	g++ *.cpp bogosortalgo/*.cpp -o bogo.o
	./bogo.o

clean:
	rm *.o