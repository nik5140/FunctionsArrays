#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// Function of creating of integer
int *Create(int* x, int n)
{
    int i=0;
    x = (int*)malloc(sizeof(int)*n);
    for (i=0; i<n; i++)
        x[i] = rand()%20 - rand()%20;

    return x;
}

// Function for printing elements in array
void PrintArr(int* x, int n)
{
    int i;
    for (i=0; i<n; i++)
    {
        printf("Array el n->[%d] is %d\n", i, x[i]);
    }
}

// A1 Function for summ up elements in array
int summArr(int*x, int n)
{
    int i;
    int summ=0;
    for (i=0; i<n; i++)
    {
        summ+=x[i];
    }

    return summ;
}
// A2... only positive elements
int summPosArr(int*x, int n)
{
    int i;
    int summ=0;
    for (i=0; i<n; i++)
    {
        if (x[i]>0)
            summ+=x[i];
    }

    return summ;
}

// A3... only negative elements
int summNegArr(int*x, int n)
{
    int i;
    int summ=0;
    for (i=0; i<n; i++)
    {
        if (x[i]<0)
            summ+=x[i];
    }

    return summ;
}

// A4 n of Zero elements
int NZeroEl(int *x, int n)
{
    int i;
    int nZeros=0;
    for (i=0; i<n; i++)
    {
        if (x[i]==0)
            nZeros++;
    }
    return nZeros;
}

int MinArr(int*x, int n)
{
    int i = 0;
    int min = 0;
    min = x[0];
    for (i=0; i<n; i++)
    {
        if (x[i]<min)
            min=x[i];
    }

    return min;

}

int MaxArr(int*x, int n)
{
    int i = 0;
    int max = 0;
    max = x[0];
    for (i=0; i<n; i++)
    {
        if (x[i]>max)
            max=x[i];
    }

    return max;
}

// A5  summ of min and max
int sumMinMax (int*x, int n)
{
    return MinArr(x, n)+MaxArr(x, n);
}

// A6  Sredn ariphm
float SrednAriphm (int*x, int n)
{
    return (float)summArr(x, n)/n;
}


//A7 product of abs of elements in array
int productAbsArr(int*x, int n)
{
    int i = 0;
    int productArr = 1;

    for (i=0; i<n; i++)
    {
        if (x[i]>=0)
            productArr*=x[i];
        else if (x[i]<0)
            productArr*=-x[i];
    }

    return productArr;
}

//A8 sqrt of summ of positive elements in array

float SqOfSumOfPos(int*x, int n)
{
    float result=0;
    int summ = 0;
    summ = summPosArr(x,n);
    result = sqrt((float)summ);
    return result;
}

//A9 natural log of summ of abs of elements in array
float NatLogOfSummofAbsArr(int*x, int n)
{
    int i = 0;
    int logSummArr = 1;

    for (i=0; i<n; i++)
    {
        if (x[i]>=0)
            logSummArr+=x[i];
        else if (x[i]<0)
            logSummArr+=-x[i];
    }


    return logf(logSummArr);
}

// A10 Sum of sqrts of positive elements of array
float summSqrPosArr(int*x, int n)
{
    int i;
    float summ=0;
    for (i=0; i<n; i++)
    {
        if (x[i]>0)
            summ+=sqrt(x[i]);
    }

    return summ;
}

//M1 N of elements in array that are lower than A1
int NElLowerThenA1(int*x,int n)
{
    int N=0;
    int A1=0;
    A1 = summArr(x, n);
    printf("A1 is %d", A1);
    for (int i=0; i<n; i++)
    {
        if (x[i]<A1)
           {
           printf("%d\n", x[i]);
           N++;

           }

    }
    return N;

}


int main()
{
    system("-lm");
    srand(time(NULL));
    int * mass;
    int n;
    printf("Enter size of array (int number)\n");
    scanf("%d", &n);

    mass = Create(mass,n);
    PrintArr(mass, n);

    printf("\nSumm of all elements in array is: %d!\n", summArr(mass, n));
    printf("\nSumm of all positive elements in array is: %d!\n", summPosArr(mass, n));
    printf("\nSumm of all negative elements in array is: %d!\n", summNegArr(mass, n));
    printf("\n N of all zero elements in array is: %d!\n", NZeroEl(mass, n));
    printf("\n Min is %d and Max is %d \n", MinArr(mass, n), MaxArr(mass, n));
    printf("\n Sum of Min and Max is %d \n", sumMinMax(mass, n));
    printf("\n Sredn ariphm of elements in arr is %3.2f \n", SrednAriphm(mass, n));
    printf("\n Product of abs of elements in array is %3d \n", productAbsArr(mass, n));
    printf("\n Sqrt of summ of positive elements in array is %3.2f \n", SqOfSumOfPos(mass, n));
    printf("\n NatLog of summ of abs of elements in array is %3.2f \n", NatLogOfSummofAbsArr(mass, n));
    printf("\n Summ of sqrts of positive elements in array is %3.2f \n", summSqrPosArr(mass, n));
    printf("\n N of elements in X that are lower then A1 is %d\n", NElLowerThenA1(mass, n));
    return 0;
}




