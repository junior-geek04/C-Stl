#include <stdio.h>

int main()
{int test;
scanf("%d",&test);
while(test-->0)
{char a[3],b[3],c[3],ch;
for(int i=0;i<3;i++)
{
    scanf(" %c ",&a[i]);
}
for(int i=0;i<3;i++)
{
    scanf(" %c ",&b[i]);
}
for(int i=0;i<3;i++)
{
    scanf(" %c ",&c[i]);
}
// if(a[0]==b[0]&&a[0]==c[0])
// {
//     printf("yes");
// }
// else
// {
//     printf("NO");
// }
// for(int i=0;i<3;i++)
// {
//     printf(" %c ",a[i]);
// }
if(((a[0]==b[0])&&(a[0]==c[0]))||((a[1]==b[1])&&(a[1]==c[1]))||((a[2]==b[2])&&(a[2]==c[2])))
{printf("1 \n");
}
else if(((a[0]==a[1])&&(a[0]==a[2]))&&(((b[0]!=b[1])||(b[0]!=b[2]))&&((c[0]!=c[1])||(c[0]!=c[2]))))
{
    printf("1 \n");
}
else if(((b[0]==b[1])&&(b[0]==b[2]))&&(((a[0]!=a[1])||(a[0]!=a[2]))&&((c[0]!=c[1])||(c[0]!=c[2]))))
{
    printf("1 \n");
}
else if(((c[0]==c[1])&&(c[0]==c[2]))&&(((b[0]!=b[1])||(b[0]!=b[2]))&&((a[0]!=a[1])||(a[0]!=a[2]))))
{
    printf("1 \n");
}
else if(((a[0]==b[1])&&(a[0]==c[2]))||((a[2]==b[1])&&(a[2]==c[0])))
{
    printf("1 \n");
}
else if((((a[0]==a[1])&&(a[1]==a[2]))&&((b[0]==b[1])&&(b[0]==b[2])))||(((a[0]==a[1])&&(a[1]==a[2]))&&((c[0]==c[1])&&(c[1]==c[2])))||(((c[0]==c[1])&&(c[1]==c[2]))&&((b[0]==b[1])&&(b[0]==b[2]))))
    {
        printf("3 \n");
    }
    else
    {
        printf("2 \n");
    }
}
    

    return 0;
}

////else if(((a[0]==a[1])&&(a[0]==a[2]))||((b[0]==b[1])&&(b[0]==b[2]))||((c[0]==c[1])&&(c[0]==c[2])))
// #include <stdio.h>

// int main()
// {
//     int test;
//     scanf("%d",&test);
//     while(test-->0){
//     char a[3][3];
//     for(int i=0;i<3;i++)
//     {
//         for(int j=0;j<3;j++)
//             scanf(" %c",&a[i][j]);
//     }
//     // if(a[0][0]==a[0][1])
//     // {
//     //     printf("YES\n");
//     // }
//     // else
//     // {
//     //     printf("NO \n");
//     // }
    
//     // if(a[0][0]==a[0][1]&&a[0][0]==a[0][2])
//     // {
//     //     printf("yes");
//     // }
//     // else
//     // {
//     //     printf("no");
//     // }
// if(((a[0][0]==a[1][0])&&(a[0][0]==a[2][0]))||((a[0][1]==a[1][1])&&(a[0][1]==a[2][1]))||((a[0][2]==a[1][2])&&(a[0][2]==a[2][2])))
// {printf("1 \n");
// }
// else if(((a[0][0]==a[0][1])&&(a[0][0]==a[0][2]))&&(((a[1][0]!=a[1][1])||(a[1][0]!=a[1][2]))&&((a[2][0]!=a[2][1])||(a[2][0]!=a[2][2]))))
// {
//     printf("1 \n");
// }
// else if(((a[1][0]==a[1][1])&&(a[1][0]==a[1][2]))&&(((a[0][0]!=a[0][1])||(a[0][0]!=a[0][2]))&&((a[2][0]!=a[2][1])||(a[2][0]!=a[2][2]))))
// {
//     printf("1 \n");
// }
// else if(((a[2][0]==a[2][1])&&(a[2][0]==a[2][2]))&&(((a[1][0]!=a[1][1])||(a[1][0]!=a[1][2]))&&((a[0][0]!=a[0][1])||(a[0][0]!=a[0][2]))))
// {
//     printf("1 \n");
// }
// else if(((a[0][0]==a[1][1])&&(a[0][0]==a[2][2]))||((a[2][0]==a[1][1])&&(a[2][0]==a[0][2])))
// {
//     printf("1 \n");
// }
// else if((((a[0][0]==a[0][1])&&(a[0][1]==a[0][2]))&&((a[1][0]==a[1][1])&&(a[1][0]==a[1][2])))||(((a[0][0]==a[0][1])&&(a[0][1]==a[0][2]))&&((a[2][0]==a[2][1])&&(a[2][1]==a[2][2])))||(((a[2][0]==a[2][1])&&(a[2][1]==a[2][2]))&&((a[1][0]==a[1][1])&&(a[1][0]==a[1][2]))))
//     {
//         printf("3 \n");
//     }
//     else
//     {
//         printf("2 \n");
//     }
//     }
//     return 0;
// }