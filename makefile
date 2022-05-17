a.exe: HugeInt.o main.o 
	g++ HugeInt.o main.o -o a.exe 

HugeInt.o: HugeInt.h HugeInt.cpp 
	g++ -c -g HugeInt.cpp 

main.o: HugeInt.h main.cpp 
	g++ -c -g main.cpp 

clean: 
	del *.o a.exe 