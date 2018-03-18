#include <stdio.h>
#include <cs50.h>
#include <math.h>
#include <string.h>

int main(void)
{

    char m[80];
    printf("Number:");
    scanf("%s", m);

    int mi = strlen(m);
    int n[mi - 1];

    for (int i = 0; i <= (mi - 1); i++)
    {

        if ((m[i] - 48) * 2 > 9)
        {
            n[i] = (m[i] - 48) * 2 - 9;
        }
        else
        {
            n[i] = (m[i] - 48) * 2;
        }
    }
    int sum;
    if (mi == 16)
    {
        sum = n[0] + n[2] + n[4] + n[6] + n[8] + n[10] + n[12] + n[14] + m[1] + m[3] + m[5] + m[7] + m[9] + m[11] + m[13] + m[15] - 384;
    }
    else
    {
        if (mi == 15)
        {
            sum = m[0] + m[2] + m[4] + m[6] + m[8] + m[10] + m[12] + m[14] + n[1] + n[3] + n[5] + n[7] + n[9] + n[11] + n[13] - 384;
        }
        else
        {
            if (mi == 13)
            {
                sum = m[0] + m[2] + m[4] + m[6] + m[8] + m[10] + m[12] + n[1] + n[3] + n[5] + n[7] + n[9] + n[11] - 336;
            }
            else
            {
                sum = 1001;
            }
        }
    }


    if ((sum ==100 || sum ==90 || sum == 80 || sum == 70 || sum == 60 || sum == 50 || sum == 40 || sum == 30 ||sum == 20 || sum == 10) && m[0] == 53 && (m[1] <= 53))
    {
        printf("MASTERCARD\n");
    }
    else
    {
        if ((sum ==100 || sum ==90 || sum == 80 || sum == 70 || sum == 60 || sum == 50 || sum == 40 || sum == 30 ||sum == 20 || sum == 10) && m[0] == 52)
        {
            printf("VISA\n");
        }
        else
        {
            if ((sum ==100 || sum ==90 || sum == 80 || sum == 70 || sum == 60 || sum == 50 || sum == 40 || sum == 30 ||sum == 20 || sum == 10) && m[0] == 51 && (m[1] == 52 || m[1] == 55))
            {
                printf("AMEX\n");
            }
            else
            {
                printf("INVALID\n");
            }
        }
    }
    printf("mi=%i\n", mi) ;
    printf("Sum=%i\n", sum);
}