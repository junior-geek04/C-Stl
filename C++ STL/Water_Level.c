
#include <stdio.h>
int max(int a,int b)
{
    int m;
    if(a>b)
    {
        m=a;
    }
    else
    {
        m=b;
    }
    return m;
    
}
int min(int p,int q)
{
    int m;
    if(p>q)
    {
        m=q;
    }
    else
    {
        m=p;
    }
    return m;
    
}
int trap(int a[],int n)
{
    int res=0;
    for(int i=1;i<n-1;i++)
    {
        int lmax=a[i];
        for(int j=0;j<i;j++)
        {
            lmax=max(lmax,a[j]);
        }
        int rmax=a[i];
        for(int j=i+1;j<n;j++)
        {
            rmax=max(rmax,a[j]);
        }
        res=res+(min(lmax,rmax)-a[i]);
    }
    return res;
}
int main()
{
    int n,ans;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    
ans=trap(a,n);
printf("%d",ans);
    return 0;
}
//less time complexity
/*#include <stdio.h>
 
int max(int x, int y) {
    return (x > y) ? x : y;
}
 
// Function to find the amount of water that can be trapped within
// a given set of bars in linear time and constant space
int trap(int heights[], int n)
{
    // maintain two pointers left and right, pointing to the leftmost and
    // rightmost index of the input array
    int left = 0, right = n - 1, water = 0;
 
    int maxLeft = heights[left];
    int maxRight = heights[right];
 
    while (left < right)
    {
        if (heights[left] <= heights[right])
        {
            left++;
            maxLeft = max(maxLeft, heights[left]);
            water += (maxLeft - heights[left]);
        }
        else {
            right--;
            maxRight = max(maxRight, heights[right]);
            water += (maxRight - heights[right]);
        }
    }
 
    return water;
}
 
int main(void)
{
    int heights[] = { 3,0,0,2,0,4 };
    int n = sizeof(heights) / sizeof(heights[0]);
 
    printf("The maximum amount of water that can be trapped is %d",
            trap(heights, n));
 
    return 0;
}*/