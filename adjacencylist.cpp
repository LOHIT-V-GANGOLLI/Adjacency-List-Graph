#include<iostream>
using namespace std;
#include<list>
class graph
{
    int v;
    list<int>*l;
public:
    graph(int v)
    {
        this->v=v;
        l=new list<int>[v];
    }
    void addedge(int u,int v)
    {
        l[u].push_back(v);
        l[v].push_back(u);
    }
    void print()
    {
        for(int i=0;i<v;i++)
        {
            cout<<i<<endl;
            for(int nbr:l[i])
            {
                cout<<nbr<<endl;
            }
        }
    }

};
int main()
{
    graph g(3);
    g.addedge(0,1);
    g.addedge(1,2);
    g.addedge(2,0);
    g.print();

}
