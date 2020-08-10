#include<stdio.h>
#include<math.h>
int main()
{
	float t,n,a[10000],b[10000],c[10000],z,k,x,y;
  double ca,profit = 0;
  int i,j,f,number;
	scanf("%f",&n);
	scanf("%f",&k);
	scanf("%lf",&ca);
	for(i=0;i<n;i++)
	scanf("%f",&a[i]);
	
	for(i=0;i<n;i++)
	scanf("%f",&b[i]);
	
	for(i=0;i<n;i++)
	c[i]=a[i]*b[i]/100;
	for(j=0;j<n;j++)
	{
		for(i=0;i<n-1;i++)
		{
			if(b[i]>b[i+1])
			{
				t=c[i];
				c[i]=c[i+1];
				c[i+1]=t;
				
				t=a[i];
				a[i]=a[i+1];
				a[i+1]=t;
				
				t=b[i];
			  b[i]=b[i+1];
				b[i+1]=t;
			}
		}
	}
	z=ca;
f=n-1;
	
	while(z>0&&f>=0)
	{ 

	 x=z/a[f];	
	 number=floor(x);
	  
	 	 if(number>k)
	 {
	 number=k;
}

	 if(z-number*c[f]>0)
	 {
	 profit=profit+number*c[f];
	 z=z-number*a[f];
	 
}
	 f=f-1;	
	}	
  y = floor(profit);
  printf("%d",(int)y);	
	
	return(0);
}