#include <stdio.h>

//引数にポインタ変数を持ったkeisan関数を宣言
void keisan(int *p_point, int *p_sum, int *p_avg);

int main()
{
    int point[5], sum = 0, avg = 0, i;

    for(i = 0; i < 5; i++){
        printf("No. %d-> ", i+1);
        scanf("%d",&point[i]);
    }
    for(i = 0; i < 5; i++){
        printf("No. %d = %d\n", i+1, *(point + i));
    }
    keisan(point, &sum, &avg);  //それぞれのアドレスをkeisan関数に渡す
    printf("Total = %d\t Average = %d\n", sum, avg);  //合計点と平均点を出力
    return 0;
}

//point の先頭アドレスをポインタp_pointに、sumのアドレスをポインタ p_sumに、avgのアドレスをポインタp_avgに、それぞれ代入する
void keisan(int* p_point, int* p_sum, int* p_avg)
{
    for(int i = 0; i < 5; i++) {
        //ポインタp_sumが指すアドレスの中身に、ポインタp_sumが指すアドレスの中身と、ポインタp_pointが指すアドレス+iの中身を代入
        *p_sum = *p_sum + *(p_point + i);
        printf("No. %d sum = %d\n", i+1, *p_sum);
    }

    //ポインタp_avgが指すアドレスの中身に、ポインタp_sumが指すアドレスの中身を5で割ったものを代入
    *p_avg = *p_sum / 5;
    printf("avg = %d\n", *p_avg);
}
