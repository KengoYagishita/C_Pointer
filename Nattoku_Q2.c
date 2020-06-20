#include <stdio.h>

//引数にポインタ変数を持ったAmari関数を宣言
void Amari(int a, int b, int* ans);

int main()
{
    int con=0,a,b,ans,amari;

    // whileで無限ループを作成し、計算機を呼び出し続ける
    while(1){
        printf("Calculator\n");
        printf("[SUM]=>1, [SUB]=>2, [MUL]=>3, [DIV]=>4, [END]=>0\n");
        scanf("%d",&con);
        printf("con = %d\n", con);
        // con = 0 のとき、プログラムを終了
        if(con == 0){
            printf("END\n");
            break;
        }
        // switch文で処理を分岐
        switch(con) {
            case 1:
                // 足し算を実行
                printf("Please Enter to A.\n");
                scanf("%d",&a);
                printf("Please Enter to B.\n");
                scanf("%d",&b);
                ans = a + b;

                printf("[SUM] A+B = %d\n", ans);
                break;
            case 2:
                // 引き算を実行
                printf("Please Enter to A.\n");
                scanf("%d",&a);
                printf("Please Enter to B.\n");
                scanf("%d",&b);
                ans = a - b;

                printf("[SUB] A-B = %d\n", ans);
                break;
            case 3:
                // かけ算を実行
                printf("Please Enter to A.\n");
                scanf("%d",&a);
                printf("Please Enter to B.\n");
                scanf("%d",&b);
                ans = a * b;

                printf("[MUL] A*B = %d\n", ans);
                break;
            case 4:
                // 割り算を実行
                printf("Please Enter to A.\n");
                scanf("%d",&a);
                printf("Please Enter to B.\n");
                scanf("%d",&b);
                ans = a / b;
                // amari関数を用いて余りを求める
                Amari(a, b, &amari);

                printf("[DIV] A/B = %d ... %d\n", ans, amari);
                

                break;
            default:
                // エラー
                printf("ERROR\n");
                break;
        }
    }

    return 0;
}

// Amari関数
void Amari(int a, int b, int* ans){
    // *a と *b の余りを求める
    *ans = a % b;
};