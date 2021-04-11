#include <iostream>
using namespace std;

struct Node
{
    int value;
    Node *next;
};

struct List
{
    Node *head;
    Node *tail;
};

void head(List *list, int value)
{
    Node *newNode = (Node *)malloc(sizeof(Node));
    newNode->value = value;
    newNode->next = list->head;
    if (list->head == NULL)
    {
        list->tail = newNode;
    }
    list->head = newNode;
}

void tail(List *list, int value)
{
    if (list->head == NULL)
    {
        head(list, value);
    }
    else
    {
        Node *newNode = (Node *)malloc(sizeof(Node));
        newNode->value = value;
        Node *iter = list->head;
        while (iter->next != NULL)
        {
            iter = iter->next;
        }
        iter->next = newNode;
        newNode->next = NULL;
        list->tail = newNode;
    }
}

void eff_tail(List *list, int value)
{

    if (list->head == NULL)
    {
        head(list, value);
    }
    else
    {
        Node *newNode = (Node *)malloc(sizeof(Node));
        newNode->value = value;
        list->tail->next = newNode;
        newNode->next = NULL;
        list->tail = newNode;
    }
}

void print_list(List list)
{
    Node *node_address = list.head;
    while (node_address != NULL)
    {
        cout << node_address->value << ", ";
        node_address = node_address->next;
    }
    cout << endl;
}

void counter(List list)
{
    int count = 0;
    Node *node_address = list.head;
    while (node_address != NULL)
    {
        count = count + 1;
        node_address = node_address->next;
    }
    cout << "Total number of elements are: " << count << endl;
}

void search(List *list, int x)
{
    int counter = 0;
    int counter2 = 0;
    Node *node_adress = list->head;
    while (node_adress != NULL)
    {
        counter = counter + 1;
        if (node_adress->value == x)
        {
            cout << "Element is in Node" << counter << endl;
            counter2 = counter2 + 1;
        }
        node_adress = node_adress->next;
    }
    if (counter2 == 0)
    {
        cout << "Element not found" << endl;
    }
}

void AddMul(List *list, int x, int y)
{
    int counter1 = 1;
    int counter2 = 0;
    int temp1 = 0;
    int temp2 = 0;
    Node *node_adress = list->head;
    while (node_adress != NULL)
    {

        if (counter1 == x)
        {
            temp1 = node_adress->value;
        }
        if (counter1 == y)
        {
            temp2 = node_adress->value;
        }

        node_adress = node_adress->next;
        counter1 = counter1 + 1;
    }

    cout << "The sum is: " << temp1 + temp2 << endl;
    cout << "The Product is: " << temp1 * temp2 << endl;
}

void Delete(List *list, int x)
{
    int flag = 0;
    Node *temp;

    if (list->head->value == x)
    {
        temp = list->head;
        list->head = list->head->next;
        free(temp);
    }
    else
    {
        Node *node_adress = list->head;
        while (node_adress->next != NULL)
        {
            if (node_adress->next->value == x)
            {
                temp = node_adress->next;
                node_adress->next = node_adress->next->next;
                flag = 1;
                free(temp);
                break;
            }
            if (node_adress->next == NULL)
            {
                list->tail = node_adress;
            }
            node_adress = node_adress->next;
        }
        if (flag == 0)
        {
            cout << "Element not found" << endl;
        }
    }
}

void ValueSwap(List *list, int x, int y)
{
    Node *temp1, *temp2, *node_adress;
    int count = 0;
    node_adress = list->head;
    while (node_adress != NULL)
    {
        if (count == x)
        {
            temp1 = node_adress;
        }
        if (count == y)
        {
            temp2 = node_adress;
        }
        count++;
        node_adress = node_adress->next;
    }
    int temp = temp1->value;
    temp1->value = temp2->value;
    temp2->value = temp;
}

void SwapNodes(List *list, int a, int b)
{
    Node *temp1, *temp2, *temp3, *temp4, *temp5, *temp6, *node_adress;
    int count = 0;
    node_adress = list->head;

    while (node_adress != NULL)
    {
        if (count == a - 1)
        {
            temp1 = node_adress;
        }
        if (count == a)
        {
            temp2 = node_adress;
        }
        if (count == a + 1)
        {
            temp3 = node_adress;
        }
        if (count == b - 1)
        {
            temp4 = node_adress;
        }
        if (count == b)
        {
            temp5 = node_adress;
        }
        if (count == b + 1)
        {
            temp6 = node_adress;
        }
        count++;
        node_adress = node_adress->next;
    }

    temp4->next = temp2;
    temp5->next = temp3;
    temp1->next = temp5;
    temp2->next = temp6;
}

int main()
{
    List mylist;
    mylist.head = NULL;
    mylist.tail = NULL;

    head(&mylist, 6);
    head(&mylist, 5);
    tail(&mylist, 4);
    tail(&mylist, 3);
    eff_tail(&mylist, 8);
    eff_tail(&mylist, 9);
    eff_tail(&mylist, 10);
    head(&mylist, 7);
    // print_list(mylist);
    // search(&mylist, 10);
    // print_list(mylist);

    // counter(mylist);
    // head(&mylist, 0);
    // eff_tail(&mylist, 1);
    // AddMul(&mylist, 1, 7);
    // Delete(&mylist, 5);
    // print_list(mylist);
    // Delete(&mylist, 1);
    // print_list(mylist);
    // Delete(&mylist, 0);
    // print_list(mylist);

    print_list(mylist);
    ValueSwap(&mylist, 2, 4);
    print_list(mylist);
   SwapNodes(&mylist, 2, 4);
    print_list(mylist);

    return 0;
}