#include"Share.h"
/*
    Description of problem: 
    Recall the definition of the Fibonacci numbers from “Rabbits and Recurrence Relations”, which followed the recurrence relation Fn=Fn−1+Fn−2, and assumed that each pair of rabbits reaches maturity in one month and produces a single pair of offspring (one male, one female) each subsequent month.
    Given: Positive integers n≤100 and m≤20.
    Return: The total number of pairs of rabbits that will remain after the n-th month if all rabbits live for m months.
*/
/*
    Thought: 
    Let T(n) represent n-th live month samples' number. D(n) for dead samples. A(n) for adding samples. 
    T(n) = T(n - 1) + A(n) - D(n). when n = 1, T(1) = 1.
    A(n) = 1 when n = 1, and when n > 1, A(n) = T(n - 1) - A(n - 1).
    D(n) = 0 when n <= m, and when n > m, D(n) = A(n - m).
    Then we need two array of numbers for recording T and A.
*/
int mfr(int,int);
int main(int argc, char const *argv[])
{

    return 0;
}
int mfr(int n, int m){
    if(n < m || m <= 1){
        return -1;
    }
    if(n == 2){
        return 1;
    }

    for (int i = 3; i < n; i++)
    {

    }
    
}