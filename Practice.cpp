#include <iostream>
using namespace std;

struct Node
{
    int value;
    Node *next;
    Node *prev;

    Node(){
		this->next = NULL;
        this->prev = NULL;
	}
};

class CIRCLE
{
    private :
    Node *head;
    Node *tail;

    public :
    CIRCLE()
    {
        this->head = NULL;
        this->tail = NULL;

    }


};


int main()
{




    return 0;
}