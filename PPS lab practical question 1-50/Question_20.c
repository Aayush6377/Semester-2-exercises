//WAP in C to find the sum of different series
#include <stdio.h>
#include <math.h>
float arithmatic(float n,float a,float d){
    float S=(n/2)*(2*a+(n-1)*d);
    return S;
}
float geometric(float n,float a,float r){
    float u=fabs(pow(r,n)-1);
    float S=(a*u)/(r-1);
    return S;
}
float harmonic(float n,float f,float di){
    float a=1/f;
    float se=f+di;
    float d=(1/se)-a;
    float S=(1/d)*(log((2*a+(2*n-1)*d)/(2*a-d)));
    return S;
}
unsigned long long int fibonacci(float n,unsigned long long int a, unsigned long long int b){
    unsigned long long int S=0,c;
    for (int i=0; i<n; i++){
        S+=a;
        c=a;
        a=b;
        b+=c;
    }
    return S;
}

int main(){
    int type; float n;
    printf("Series index:-\n1)Arithmatic Series\n2)Geometric Series\n3)Harmonic Series\n4)Fibonacci Series\n\n");
    printf("Enter series type: ");
    scanf("%d",&type);
    if (type>0 && type<=4) {
        printf("Enter number of terms: ");
        scanf("%f",&n);
        if (type==1){
            int a,d;
            printf("Enter first term: ");
            scanf("%d",&a);
            printf("Enter common difference: ");
            scanf("%d",&d);
            printf("Sum :%g",arithmatic(n,a,d));
        }
        else if (type==2){
            float a,r;
            printf("Enter first term: ");
            scanf("%f",&a);
            printf("Enter common ratio: ");
            scanf("%f",&r);
            printf("Sum :%g",geometric(n,a,r));
        }
        else if(type==3){
            float f,di;
            printf("Enter first term: ");
            scanf("%f",&f);
            printf("Enter common difference: ");
            scanf("%f",&di);
            printf("Sum: %g",harmonic(n,f,di));
        }
        else if(type==4){
            unsigned long long a,b;
            printf("Enter first term: ");
            scanf("%lld",&a);
            printf("Enter second term: ");
            scanf("%lld",&b);
            printf("Sum: %lld",fibonacci(n,a,b));
        }
    }
    else printf("Series not found.");
    return 0;
}