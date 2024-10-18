/* Name: Wanjiku Ian Macharia
* RegNo: CT101/G/23180/24
 * Date: 18/10/2024
  A program based on structures
  */



#include <stdio.h>
#include<string.h>


struct book {
    char title[30];
    char author[30];
    int publication_year;
    char ISBN[15];
    float price;
}
book ;
    int main(){
        strcpy(book.title,"introduction to C Programming");
    strcpy(book.author,"John Smith");
    book.publication_year=2024;
    strcpy(book.ISBN, "357345485349");
    book.price=550.50;

    printf("The Title is:%s\n ",book.title);
        printf("The author of the book  is:%s\n ",book.author);
        printf("The Publication Year is :%d\n ",book.publication_year);
        printf("The ISBM IS:%s\n ",book.ISBN);
        printf("The price of the book  is:%f\n ",book.price);







return 0;

}

