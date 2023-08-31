#include<iostream>
using namespace std;
class graph
{int G[10][10],n;
int visit[10];
	public:
		void create();
		void bfs();
		void dfs(int);
		void dfs1();
};
class stack
{
	int st[10];
	
	public:
		int top,v1;
	stack()
	{
		top=-1;
	}
	void push(int v1)
	{
		st[++top]=v1;
	}
	int pop()
	{
		v1=st[top];
		top--;
		return v1;
	}
};
class queue
{
	
	public:
		int Q[10],v;
	int f,r;
		queue()
		{
			f=-1;
			r=-1;
		}
		void insert(int v)
		{
		if(f==-1&&r==-1)
		{
			f=0;r=0;
			Q[r]=v;
		}
			else{
				r++;
				Q[r]=v;
			}
			
		}
		int del()
		{
			v=Q[f];
			f++;
			return v;
		}
};
void graph::create()
{int e,i,j,v1,v2;
	cout<<"enter the no.of vertices";
	cin>>n;
	cout<<"enter the no.of edges";
	cin>>e;
	for(i=1;i<=n;i++)
	for(j=1;j<=n;j++)
	{
	
	G[i][j]=0;
	visit[i]=0;
}
	for(i=1;i<=e;i++)
	{
	
	cout<<"enter the edge";
	cin>>v1>>v2;
	G[v1][v2]=G[v2][v1]=1;
}
	
}
void graph::bfs()
{
int v1;
cout<<"enter the starting vertex";
cin>>v1;
int v2,temp;
visit[v1]=1;
queue q;
q.insert(v1);
	while(q.f<=q.r)
	{
		v1=q.del();
		cout<<v1;
		for(v2=1;v2<=n;v2++)
		{
			if(G[v1][v2]==1&&visit[v2]==0)
			{
			
				q.insert(v2);
				visit[v2]=1;
		}}
		
	}
}
void graph::dfs(int v1)
{
    int v2;
    cout<<v1;
    visit[v1]=1;
    for(v2=1;v2<=n;v2++)
    if(G[v1][v2]==1&&visit[v2]==0)
    dfs(v2);
	
}
void graph::dfs1()
{
int v1;
cout<<"enter the starting vertex";
	cin>>v1;
	stack s;//
	int v2;
	s.push(v1);
	
	while(s.top!=-1)
	{
		v1=s.pop();
		if(visit[v1]==0)
		{
		
		cout<<v1<<"\t";
		visit[v1]=1;
		}	
				for(v2=1;v2<=n;v2++)
				if(G[v1][v2]==1&&visit[v2]==0)
				s.push(v2);
    }
}
int main()
{
	graph g; 
    int v;
	g.create();
	
	// cout<<"enter the starting vetex";
	// cin>>v;
    // g.bfs();
	// g.dfs(v);
	g.dfs1();
    // g.bfs();
    return 0;
	
}