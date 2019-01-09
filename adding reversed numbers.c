#include <stdio.h>

 

int main()

{

	int t,n1,n2,s1,s2,a,s,ans;

	scanf("%d",&t);

	for(int i=1;i<=t;i++)

	{

		scanf("%d%d",&n1,&n2);

		s1=0;

		while(n1!=0)

		{

			a=n1%10;

			s1=(s1*10)+a;

			n1=n1/10;

		}

		s2=0;

		while(n2!=0)

		{

			a=n2%10;

			s2=(s2*10)+a;

			n2=n2/10;

		}

		s=s1+s2;

		ans=0;

		while(s!=0)

		{

			a=s%10;

			ans=(ans*10)+a;

			s=s/10;

		}

		printf("%d\n",ans);

	}

	return 0;

} 

