#include "books_catalog.h"


void addBookToCatalog(BOOK book1)
{
    booksCatalog[count]=book1;
    count++;
    return;
    
}

void printBookCatalog()
{
    for (int i = 0; i < count; i++)
    {
        printBook(booksCatalog[i]);
    }
    
    return;
}

void sortBookCatalogOnID()
{
    BOOK temp;
    for (int i = 0; i < count; i++)
    {
        for (int j = 0; j < count-i-1; j++)
        {
            if (booksCatalog[j].ID>booksCatalog[j+1].ID)
            {
                temp=booksCatalog[j];
                booksCatalog[j]=booksCatalog[j+1];
                booksCatalog[j+1]=temp;
            }
            
        }
        
    }
    
    return;
}