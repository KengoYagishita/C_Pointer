#include <stdio.h>

int main()
{
    int a[5],*p,i;
    p=a;      //pにaの先頭アドレスを代入

    char b[5],*p2;
    p2=b;     //p2にbの先頭アドレスを代入

    double c[5],*p3;
    p3=c;     //p3にcの先頭アドレスを代入

    printf("int Address\n");
    for(i=0; i<5; i++){
        //int型のときのアドレスの変化
        printf("%d\n",(p+i));
    }

    printf("char Address\n");
    for(i=0; i<5; i++){
        //char型のときのアドレスの変化
        printf("%d\n",(p2+i));
    }

    printf("double Address\n");
    for(i=0; i<5; i++){
        //double型のときのアドレスの変化
        printf("%d\n",(p3+i));
    }
    return 0;
}
