#include<stdio.h>
#include<string.h>
#include<math.h>

/*
    Description of problem: 
    Three positive integers k, m, and n, representing a population containing k+m+n organisms: k individuals are homozygous dominant for a factor, m are heterozygous, and n are homozygous recessive.  
    The probability that two randomly selected mating organisms will produce an individual possessing a dominant allele (and thus displaying the dominant phenotype). Assume that any two organisms can mate.
*/
#include<stdio.h>
#include<string.h>
#include<math.h>

float MFL(float, float, float);

int main(int argc, char const *argv[])
{
    /*
    Simple definition of params of main program, k, m, and n is in order as description of problem said.  
    */
    printf("%f", MFL(strtonum(argv[1]),strtonum(argv[2]),strtonum(argv[3])));
    return 0;
}

float MFL(float k, float m, float n){
    /*
        k is the homozygous dominant, m is the heterozygous,n is the homozygous recessive.  
    */
    /*
        The point is knowing that if you select an individual from the population, the number of the population and the number of the special subpopulation which the individual belong to will reduce too.
    */
    /*
    Thought 1: 
    1. If AA in first order, then whatever second mate is, their child will have a dominant allele. 
    2. If Aa in first order, plus every status' probability together.  
    3. If aa in first order, the solution as the status of Aa in first order.  
    Thought 2:    
    */
    float sm = k + m + n  
    float kf = k/sm
    float mf = (k * m) / (sm * (sm - 1)) + (m * (m - 1))/(2 * sm * (sm - 1)) + (m * n)/(4 * sm * (sm - 1))
    float nf = (n * k) / (sm * (sm - 1)) + (n * m)/(4 * sm * (sm - 1))
    return kf + mf + nf;
}