#include <iostream>
using namespace std;
class node{
    public:
    int p;
    node*next;
    
    node(int n)
    {
        p=n;
        next=NULL;

    }
    /*void disp(
        {
            cout<<data<," "<<next;

        }*/
    
};

int main() {
    node*l1=new node(8);
    cout<<l1->p<<" "<<l1->next;

    
    return 0;
}
