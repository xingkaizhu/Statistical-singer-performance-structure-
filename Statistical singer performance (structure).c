#include <stdio.h>
int main()
{   int m,n,i,k,l,t,j;
float s[10],q[10];
	struct studentthpe 
	{
		int b[6];	  
	} a[10];
for(i=0;i<10;i++)
  {  s[i]=0;
  	for(k=0;k<6;k++)
  	{
  		scanf("%d",&a[i].b[k]);
  		s[i]=s[i]+a[i].b[k];
	  }
  	q[i]=s[i];
  }
for(i=0;i<10;i++)
  {  s[i]=0;
  	for(k=0;k<6;k++)
  	{
  		s[i]=s[i]+a[i].b[k];
	  }
  	q[i]=s[i];
  }
for (i=0;i<9;i++)
{
	  t=q[i];l=i;
		for(j=i+1;j<10;j++)
		if (q[j]>t)
		{
			t=q[j];
			l=j;
		}
     m=q[i];
	 q[i]=q[l];
	 q[l]=m;	 		
}
  for(j=0;j<9;j++)
  for(i=j+1;i<10;i++)
  if(q[i]==q[j])
  q[j]=-1;
for(j=0;j<10;j++)
  for(i=0;i<10;i++)
  if(s[i]==q[j])
   {
   	 printf("%d %.2f\n",i+1,s[i]/6);
   }
	
	return 0;
}

