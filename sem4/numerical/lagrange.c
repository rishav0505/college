#include <stdio.h>
void main(){
    float x[] = {0, 1, 2, 3}, y[] = {0, 2, 8, 27}, a = 2.5, s, s1;
    for (int i = 0; i < 4; i++, s1 += s){
        s = y[i];
        for (int j = 0; j < 4; j++)
            if (i != j)
                s *= (a - x[j]) / (x[i] - x[j]);
    }printf("f(%.1f) = %0.2f", a, s1);
}