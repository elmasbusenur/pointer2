#include <stdio.h>

int main() {
    int i;
    int *iptr;
    i=5;
    iptr=&i;
    /*%p bellek adreslerini gösterir.
     * %x de kullanılabilir.
     * hexadecimal sayılar için kullanılır*/
    printf("i adresi %p\n",&i); //i'nin hex tabanında adresi yazılır
    printf("iptr degeri %p\n",iptr); //i nin adres degeri yazılır
    printf("i degeri %d\n",i); // 5 yazılır
    printf("iptr degeri %d\n",*iptr); //5 yazılır
    getchar();
    return 0;
}