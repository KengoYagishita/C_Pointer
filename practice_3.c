#include <stdio.h>

int main()
{
    int *p, a[11], i = 0;  //int型のポインタ変数pを宣言
    p = a;                 //pに配列aの先頭アドレスを代入

    for(i = 0; i < 11; i++){
        *(p + i) = i;                         //ポインタpが指すアドレス+iの中身にiを代入
        printf("a[%d] = %d\n", i, *(p + i));  //結果の出力
    }
    return 0;
}
