gcc -c main.c
gcc -c linkedList.c
gcc -o output main.o linkedList.o
./output
rm *.o
rm output