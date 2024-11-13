#include<iostream>
using namespace std;
class a
{
	public:
	string b;
	int c;
};
void inn(a *in,int  d,char c)
{
	if(c=='i'){
		for (int i1=0;i1<d;i1++)
			cin>>in[i1].c;
		}
		else
		{
		for (int i1=0;i1<d;i1++)
			cin>>in[i1].b;
		}
	
		
}
 
int main()
{
	char c;
	int d=0,e=0,i=0,y=0,z=0,t=0,t12=0;
	cin>>c;
	cin>>d>>e;
	a in[d],r;
	inn(in,d,c);
if(c=='i'){
		while(i<e)
	{
			z=d;
			cin>>r.c;
			for (int i1=0;i1<d/2;i1++)
			{
				if (in[(z+y)/2].c==r.c){
					t=(z+y)/2;
					t12=1;
					break;
				}
				else if(in[(z+y)/2].c>r.c)
						z=(z+y)/2;
				else
						y=(z+y)/2;
				
			}
			if (t12==0)
				t=-1;
		cout<<t<<endl;
		i++;
		y=0,t=0,t12=0;
		}
	}
		else
		{
		while(i<e)
		{
			z=d;
			cin>>r.b;
			for (int i1=0;i1<z;i1++)
			{
				if (in[i1].b==r.b)
					{
						t=i1;
						t12=1;
						break;
					}
			}
			if (t12==0)
				t=-1;
		cout<<t<<endl;
		i++;
		y=0,t=0,t12=0;
		}
		
	}
	
	
}
