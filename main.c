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
    return sqrt(summPosArr(x, n));
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
    int i = 0;
    A1 = summArr(x, n);
  //  printf("A1 is %d", A1);
    for (i; i<n; i++)
    {
        if (x[i]<A1)
           {
      //     printf("%d\n", x[i]);
           N++;

           }

    }
    return N;

}

//M2 N of Negative elements of array
int NofNegat(int* x, int n)
{
    int i = 0;
    int Nnegat = 0;
    for (i=0; i<n; i++)
    {
        if (x[i]<0)
            Nnegat++;
    }

    return Nnegat;

}

//M3 N of elements of array >A6
int NofElBiggerA6(int* x, int n)
{
    int i = 0;
    int BiggerA6 = 0;
    int A6=0;
    A6 = SrednAriphm(x, n);
    for (i=0; i<n; i++)
    {
        if (x[i]>A6)
            BiggerA6++;
    }

    return BiggerA6;

}

//M4 N of elements of array <A6
int NofElLessA6(int* x, int n)
{
    int i = 0;
    int LessA6 = 0;
    int A6=0;
    A6 = SrednAriphm(x, n);
    for (i=0; i<n; i++)
    {
        if (x[i]<A6)
            LessA6++;
    }

    return LessA6;

}

//M5 N of elements of array >A6
int NofElBiggerA8(int* x, int n)
{
    int i = 0;
    int BiggerA8 = 0;
    int A8=0;
    A8 = SqOfSumOfPos(x, n);
    for (i=0; i<n; i++)
    {
        if (x[i]>A8)
            BiggerA8++;
    }

    return BiggerA8;

}


int main()
{
    srand(time(NULL));
    int * X;
    int * Y;
    int n=0, m=0;
    printf("Enter size of array X (int number)\n");
    scanf("%d", &n);
    printf("Enter size of array Y (int number)\n");
    scanf("%d", &m);
    float z1=0;
    float z2 = 0;
    float z3 = 0;
    float z7 = 0;
    float z9 = 0;

    X = Create(X,n);
    PrintArr(X, n);
    Y = Create(Y,n);
    PrintArr(Y, n);

/*    printf("\nSumm of all elements in array is: %d!\n", summArr(X, n));
    printf("\nSumm of all positive elements in array is: %d!\n", summPosArr(X, n));
    printf("\nSumm of all negative elements in array is: %d!\n", summNegArr(X, n));
    printf("\N of all zero elements in array is: %d!\n", NZeroEl(X, n));
    printf("\Min is %d and Max is %d \n", MinArr(X, n), MaxArr(X, n));
    printf("\Sum of Min and Max is %d \n", sumMinMax(X, n));
    printf("\Sredn ariphm of elements in arr is %3.2f \n", SrednAriphm(X, n));
    printf("\Product of abs of elements in array is %3d \n", productAbsArr(X, n));
    printf("\Sqrt of summ of positive elements in array is %3.2f \n", SqOfSumOfPos(X, n));
    printf("\n NatLog of summ of abs of elements in array is %3.2f \n", NatLogOfSummofAbsArr(X, n));
    printf("\n Summ of sqrts of positive elements in array is %3.2f \n", summSqrPosArr(X, n));
    printf("\n N of elements in X that are lower then A1 is %d\n", NElLowerThenA1(X, n));
    printf("\n N of negative elements in array %d\n", NofNegat(X, n));
    printf("\n N of elements in array > A6 %d\n", NofElBiggerA6(X, n));
    printf("\n N of elements in array < A6 %d\n", NofElLessA6(X, n));
    printf("\n N of elements in array > A8 %d\n", NofElBiggerA8(X, n));*/

    if (NElLowerThenA1(X,n)<2)
        z1 = (NZeroEl(X,n) + (2.8/1000)*NZeroEl(X,n))/(NElLowerThenA1(Y,m)+NZeroEl(Y,m));
    else if (NElLowerThenA1(X,n)>=2)
        z1 = 0.012*NZeroEl(X,n) + NZeroEl(Y,m);

    printf("Variant 1. Result of calculations with functions is %3.2f\n", z1);

    if (NofNegat(Y,m)<5)
        z2 = summPosArr(X,n)/(summPosArr(Y,m)+NofNegat(X,n)*sqrt(summPosArr(Y,m)));
    else if (NofNegat(Y,m)>=5)
        z2 = 0.014 + summPosArr(Y,m)*NofNegat(X,n);

    printf("Variant 2. Result of calculations with functions is %3.2f\n", z2);


    if (NofElBiggerA6(X,n)>4)
        z3 = summNegArr(Y,m)+1.54*(pow(summNegArr(Y,m),NofElBiggerA6(X,n)));
    else if (NofElBiggerA6(X,n)<=4)
        z3 = summNegArr(Y,m)*1.8*pow(10,-6)/(NofElBiggerA6(Y,m)*summNegArr(X,n)+pow(summNegArr(Y,m),3));

    printf("Variant 3. Result of calculations with functions is %3.2f\n", z3);

    if (NofNegat(X,n)>4)
        z7=(summPosArr(X,n)+1000)/(1.37*summPosArr(Y,m));

    else if (NofNegat(X,n)<=4)
        z7 = (summPosArr(X,n)+NofNegat(Y,m)*1.33)/(2.877*summPosArr(Y,m));

    printf("Variant 7. Result of calculations with functions is %3.2f\n", z7);


    if (NofElLessA6(Y,m)>4)
        z9 = NofElBiggerA8(X,n)+(1/1000)*cos(NatLogOfSummofAbsArr(X,n));
    else if (NofElLessA6(Y,m)<=4)
        z9 = sqrt(NatLogOfSummofAbsArr(Y,m)+1)+2.5*pow(NofElBiggerA8(Y,m),3);

    printf("Variant 9. Result of calculations with functions is %3.2f\n", z9);

    free(X);
    free(Y);


    return 0;
}




