gcc -c book_fun.c
gcc -c books_catalog.c
gcc -c main_library.c
gcc -o Library book_fun.o books_catalog.o main_library.o
rm *.o
./Library
rm Library