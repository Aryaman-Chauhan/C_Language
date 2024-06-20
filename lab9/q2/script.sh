gcc -c fun2.c
gcc -c func1.c
gcc -o exe fun2.o func1.o
./exe
gcc -c instruction.c
gcc -o ist instruction.o
./ist 
rm *.o
rm ist