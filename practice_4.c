#include <stdio.h>

int main()
{
    int *p, a[10], i = 0;  //int型のポインタ変数pを宣言
    p = a;                 //pに配列aの先頭アドレスを代入

    for(i = 0; i < 10; i++){
        *p = i;                         //ポインタpが指すアドレスの中身にiを代入
        printf("a[%d] = %d\n", i, *p);  //結果の出力
        p++;                            //ポインタの値をインクリメント(+1)する
    }
    return 0;
}
