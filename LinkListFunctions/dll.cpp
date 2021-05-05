#include <iostream>
using namespace std;

struct Node
{
    int value;
    Node *next;
    Node *priv;
};

struct Node *head;

void Head(int value)
{
    Node *newNode = (Node *)malloc(sizeof(Node));
    newNode->value = value;
    newNode->priv = NULL;
    newNode->next = head;
    if (head != NULL)
    {
        head->priv = newNode;
    }
    head = newNode;
}

void Print_HT()
{
    struct Node *temp = head;
    cout << "Head to Tail: ";
    while (temp != NULL)
    {
        cout << temp->value << " ";
        temp = temp->next;
    }
    cout << endl;
}
void Print_TH()
{
    struct Node *temp = head;

    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    cout << "Tail to Head: ";
    while (temp != NULL)
    {
        cout << temp->value << " ";
        temp = temp->priv;
    }
    cout << endl;
}

void Dlthead()
{
    struct Node *temp;
    if (head == NULL)
    {
        cout << "EMPTY" << endl;
    }
    else
    {
        temp = head;
        head = head->next;
        head->priv = NULL;
        free(temp);
    }
}
void DltTail()
{
    struct Node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->priv->next = NULL;
    free(temp);
}
void Delet()
{

    int n, i = 1;
    cout << "Enter Index" << endl;
    cin >> n;
    struct Node *temp = head;
    if (n == 1)
    {
        Dlthead();
        return;
    }
    while (i < n)
    {
        temp = temp->next;
        i++;
    }
    if (temp->next == NULL)
    {
        DltTail();
    }
    else
    {
        temp->priv->next = temp->next;
        temp->next->priv = temp->priv;
        free(temp);
    }
}

void inpDelet(int n)
{
    int i = 1;
    struct Node *temp = head;
    if (n == 1)
    {
        Dlthead();
        return;
    }
    while (i < n)
    {
        temp = temp->next;
        i++;
    }
    if (temp->next == NULL)
    {
        DltTail();
    }
    else
    {
        temp->priv->next = temp->next;
        temp->next->priv = temp->priv;
        free(temp);
    }
}

void RepetRemove()
{
    struct Node *temp1, *temp2;
    temp1 = head;
    int n;
    while (temp1->next != NULL)
    {
        n = temp1->value;
        temp2 = temp1->next;
        while (temp2->next != NULL)
        {
            if (temp2->value == n)
            {

                temp2->priv->next = temp2->next;
                temp2->next->priv = temp2->priv;
            }

            temp2 = temp2->next;
        }
        temp1 = temp1->next;
    }
    //temp1 is my tail;
    struct Node *newNode = head;
    while (newNode->next != NULL)
    {
        if (newNode->value == temp1->value)
        {
            temp1->priv->next = NULL;
            free(temp1);
            break;
        }
        newNode = newNode->next;
    }
}

void repeteDLT()
{
    struct Node *temp1, *temp = head;
    int x;
    int count1 = 1;
    int count2 = 1;
    while (temp->next != NULL)
    {
        x = temp->value;
        temp1 = temp->next;
        while (temp1->next != NULL)
        {
            if (temp1->value == x)
            {
                inpDelet(count1);
                count1--;
            }
            cout << temp1->value << endl;
            count1++;
            temp1 = temp1->next;
        }
        count2++;
        count1 = count2;
        temp = temp->next;
    }
}

int main()
{
    Head(7);
    Head(9);
    Head(4);
    Head(4);
    Head(3);
    Head(5);
    Head(7);
    Head(3);

    Print_HT();
    RepetRemove();
    Print_HT();

    return 0;
}