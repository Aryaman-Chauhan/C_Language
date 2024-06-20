gcc -c 2df.c
gcc -c 2dmain.c
gcc -o transpose_exe 2df.o 2dmain.o
./transpose_exe
rm *.o
rm transpose_exe