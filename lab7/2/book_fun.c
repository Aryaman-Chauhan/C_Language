#include "book_def.h"

BOOK newBook(int ID, SHELF shelfNum, float price)
{
    BOOK newbook;
    newbook.ID= ID;
    newbook.shelfNum=shelfNum;
    newbook.price=price;
    return newbook;
}

void printBook(BOOK book1)
{
    printf("Book ID:%d\n",book1.ID);
    printf("Shelf:%d\n",book1.shelfNum);
    printf("Price:%f\n",book1.price);
    return;
}