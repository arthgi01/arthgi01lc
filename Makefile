all: lowCase.o lcFunc.o
	cc -o lcFunc lcFunc.o lowCase.o

lowCase.o: lowCase.c lowCase.h
	cc -c lowCase.c

lcFunc.o: lcFunc.c lowCase.h
	cc -c lcFunc.c


clean:
	rm *.o
	rm lcFunc

