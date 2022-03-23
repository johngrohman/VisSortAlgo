bubble: *.cpp bubblesortalgo/*.cpp *.h bubblesortalgo/*.h
	g++ -g -Wall *.cpp bubblesortalgo/*.cpp -o bubble.o
	./bubble.o

clean:
	rm *.o