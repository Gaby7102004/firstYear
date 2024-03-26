main: main.o functions.o integral.o
	clang main.o functions.o integral.o -lm -Wall -o main

main.o: main.c functions.h integral.h
	clang -c -Wall main.c

functions.o: functions.c functions.h
	clang -c -Wall functions.c

integral.o: integral.c integral.h
	clang -c -Wall integral.c

.PHONY: clean
clean:
	rm -f *.o
	rm main
