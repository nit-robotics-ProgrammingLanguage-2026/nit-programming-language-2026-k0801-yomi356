#include <stdio.h>

int main(void)
{
    int a, b, c;
    int *p, *q, *r;

    /* ポインタ変数 p, q, r を宣言 */

    /* p, q, r にそれぞれ a, b, c のアドレスを代入 */
    p = &a;
    q = &b;
    r = &c;

    /* p を使って a に scanf で値を読み込む */
    scanf("%d", p);

    /* p, q, r の間接参照 (*) だけを使って、
       b に 5 を代入し、a+b を c に代入 */
    *q = 5;
    *r = *p + *q;

    printf("%d,%d,%d", a, b, c);

    return 0;
}