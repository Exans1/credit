#include <cs50.h>
#include <stdio.h>

int main(void)
{
        long CardNumb;
        long x;
        int i = 0;
        int j = 0;
        int k;
        int l = 0;
        int lenHelper(unsigned x);


        printf("Please type in a valid card number.\n");
        x = get_long("Card Number: ");

// number of credit card didgets
    if (x >= 10000000000000000) i = 17;
    else if (x >= 1000000000000000) i = 16;
    else if (x >= 100000000000000) i = 15;
    else if (x >= 10000000000000) i = 14;
    else if (x >= 1000000000000) i = 13;
    else if (x >= 100000000000) i = 12;

// For k is the card type chekcer 0 = did not pass 1 = American Express 2 = Master Card 3 = visa

   // Card Type Check
    if (i == 16)
    {
        int a = x /100000000000000;
        //Master Card
        if ( a >= 51 && a < 56) j = 1, k = 2;
        // Visa
        if ( a >= 40 && a < 50) j = 1, k = 3;
    }
    if (i == 15)
    {
        int a = x / 10000000000000;
        // American Express
        if ( a >= 34 && a < 35) j = 1, k = 1;
        if ( a >= 37 && a < 38) j = 1, k = 1;
    }
    if (i == 13)
    {
        int a = x / 100000000000;
        //Visa
        if ( a >= 40 && a < 50) j = 1, k = 3;
    }
    // Validation
        if (i == 16 || i == 15 || i == 13)
        {
            int z1 = x % 10;
            int z2 = x/10 % 10;
            int z3 = x/100 % 10;
            int z4 = x/1000 % 10;
            int z5 = x/10000 % 10;
            int z6 = x/100000 % 10;
            int z7 = x/1000000 % 10;
            int z8 = x/10000000 % 10;
            int z9 = x/100000000 % 10;
            int z10 = x/1000000000 % 10;
            int z11 = x/10000000000 % 10;
            int z12 = x/100000000000 % 10;
            int z13 = x/1000000000000 % 10;
            int z14 = x/10000000000000 % 10;
            int z15 = x/100000000000000 % 10;
            int z16 = x/1000000000000000 % 10;

                    // multiply by 2 and add the stuff
                    int zz2 = (z2*2) % 10;
                    int zx2 = (z2*2)/10 %10;
                    int zzz2 = zz2 + zx2;

                    int zz4 = (z4*2) % 10;
                    int zx4 = (z4*2)/10 %10;
                    int zzz4 = zz4 + zx4;

                    int zz6 = (z6*2) % 10;
                    int zx6 = (z6*2)/10 %10;
                    int zzz6 = zz6 + zx6;

                    int zz8 = (z8*2) % 10;
                    int zx8 = (z8*2)/10 %10;
                    int zzz8 = zz8 + zx8;

                    int zz10 = (z10*2) % 10;
                    int zx10 = (z10*2)/10 %10;
                    int zzz10 = zz10 + zx10;

                    int zz12 = (z12*2) % 10;
                    int zx12 = (z12*2)/10 %10;
                    int zzz12 = zz12 + zx12;

                    int zz14 = (z14*2) % 10;
                    int zx14 = (z14*2)/10 %10;
                    int zzz14 = zz14 + zx14;

                    int zz16 = (z16*2) % 10;
                    int zx16 = (z16*2)/10 %10;
                    int zzz16 = zz16 + zx16;
            int y1 = z1 + z3 + z5 + z7 + z9 + z11 + z13 + z15;
            int y2 = zzz2 + zzz4 + zzz6 + zzz8 + zzz10 + zzz12 + zzz14 + zzz16;
            int y = y1 + y2;
            int yy = y % 10;
            if(yy == 0) l =1;
        }
        if (l == 0 || k == 0) printf("INVALID\n");
if (l == 1)
{
    if (k == 1) printf("AMEX\n");
    if (k == 2) printf("MASTERCARD\n");
    if (k == 3) printf("VISA\n");
}
}