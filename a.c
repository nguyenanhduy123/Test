/*
#include<stdio.h>
#include<string.h>


void nhapmang(int *mang,int *socannhap)
{
     printf("so can nhap la:");
     scanf("%d", socannhap);
    for(int i=0; i<*socannhap; i++)
    {
        printf("mang[%d]= ", i);  
        scanf("%d", mang);
        mang++;
    }
}

void inmang(int *mang,int socannhap)
{
    printf("mang in ra la:\n");
    for(int i=0; i<socannhap; i++)
    {
        printf("mang[%d] = %d\n", i, *mang);
        mang++;
        
    }
}

void tinhtong(int *mang,int socannhap )
{
    int tong =0;
    for(int i=0; i<socannhap; i++)
    {
        tong = tong + mang[i];
       
    }
     printf("Tong la: %d", tong);
    printf("\n");
}x

void dodaichuoi(int *mang,int socannhap)
{
    int leghtstring = 0;
    for(int i=0; i<socannhap; i++)
    {
        if(mang!=NULL)
        {
            leghtstring = leghtstring + 1;
        }
    }
    printf("dodaichuoila: %d", leghtstring);
    printf("\n");
} 

void main()
{
    int mang[100];
    int socannhap;
    nhapmang(mang,&socannhap);
    inmang(mang,socannhap);
    tinhtong(mang,socannhap);
    dodaichuoi(mang,socannhap);
   
}*/

// #include<stdio.h>
// #include<string.h>
// #include<stdlib.h>

// int main()
// {
//     int *pt; 
//     pt = calloc(10, sizeof(int));
//     // int pt[10];
//     printf("pt = %d\n", pt);
    
//     for(int i=0; i<10; i++)
//     {
//             printf("mang[%d] = ", i);
//             scanf("%d", pt+i);
//     }
//     for(int i=0; i<10; i++)
//     {
//             printf("mang[%d] = %d\n", i, pt[i]);
//     }
//     printf("pt = %d\n", pt);
//     free(pt);
//     return 0;
// }


// #include<stdio.h>
// #include<string.h>

// int *timsolonnhat(int *x, int *y)
// {
//     if(*x>*y)
//     {
//         return x;
//     }
//     else
//         return y;
// }

// int main(void)
// {
//     int *res;
//     int a = 11;
//     int b =15;
//     res = timsolonnhat(&a,&b);
//     printf("%d\n", *res);
//     return 0;
// }

// #include<stdio.h>
// #include<string.h>

// int *timsolonnhat(int x, int y)
// {
//     static int max;
//     if(x>y)
//     {
//         max =x;
//     }
//     else
//     {
//          max =y;
//     }
//     return &max;
// }

// int main(void)
// {
//     int *res;
//     int a = 11;
//     int b =15;
//     res = timsolonnhat(a,b);
//     printf("%d\n", *res);
//     return 0;
// }

#include<stdio.h>
#include<time.h>
#include<stdlib.h>

int *taosongaunhien()
{
    static int mang[10]; 
   // int *p;
    srand((unsigned)time(NULL));
        mang = rand();
        mang = mang%20;
       // *p = *p%20;    

    for(int i=0; i<11; i++)
    {
       
        printf("so[%d] =  %d\n", i, mang);
    }
    
    return &mang;
}

int main()
{
    int *p;
    //int mang[10];
    p = taosongaunhien();
    
    return 0;
}
