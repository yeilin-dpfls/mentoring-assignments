#include <iostream>
#include <cstdlib>
using namespace std;

class Node {
public:
	int data;
	Node* next;
};

class Link {
public:
	Node* head;
    void ClearNode();
    void ClearSize();
    void InsertNode(int data);
    void DeleteNode(int nodeIndex);
    void SearchNode(int nodeIndex);
    void SizeNode();
    void PrintNode();
    void MainPageMenu();
private:
    int size;
};
void Link :: ClearNode()
{
    head = new Node();
}
void Link::ClearSize()
{
    size = 0;
}
void Link :: InsertNode(int data)
{
    cout << "�ְ���� �����͸� �Է��ϼ��� :";
    cin >> data;
    if (size == 0)
    {
        head->data = data;
        cout << "�Է��� �Ϸ�Ǿ����ϴ�." << '\n';
    }
    else
    {
        Node* currentNode = new Node();
        currentNode->data = data;
        Node* tempNode = head;
        while (tempNode->next != nullptr)
        {
            tempNode = tempNode->next;
        }
        tempNode->next = currentNode;
        cout << "�Է��� �Ϸ�Ǿ����ϴ�." << '\n';
        
    }
    size++;
      
}
void Link::DeleteNode(int nodeIndex)
{
    Node* tempNode = head;
    Node* deleteNode;
    Node* swapNode;
    int index;
    cout << "�����ϰ� ���� ������ �ε����� �Է��ϼ��� : ";
    cin >> index;
    if (index == 0)
    {
        head = tempNode->next;
        deleteNode = tempNode;
    }
    else 
    {
        for (int i = 0; i < index - 1; i++)
        {
            tempNode = tempNode->next;
        }
        deleteNode = tempNode-> next;
        swapNode = deleteNode->next; 
        tempNode->next = swapNode;
    }
    delete deleteNode;
    cout << "������ �Ϸ�Ǿ����ϴ�." << '\n';
    size--;
         
}
void Link::SearchNode(int index)
{
    int i = 0;
    Node* tempNode = head;
    cout << "ã����� �������� �ε����� �Է��ϼ��� :  " ;
    cin>> i;
    for (i=0; i<size;i++) 
    if (index == i)
    {
        tempNode->data;
        cout << "�ε���" << i << "�� �� : " << tempNode ->data << '\n';
        cout << "Ž���� �Ϸ��߽��ϴ�." << '\n';
    }
    else
    {
        tempNode = tempNode->next;
    }
}
void Link::SizeNode()
{
    cout << "Linked List ������ :" << size << '\n';
    cout << "����� �Ϸ��߽��ϴ�." << '\n';
}
void Link::PrintNode()
{
    Node* tempNode = head;
    if (size == 0)
        cout << "��µ� ���� �����ϴ�." << '\n';
    else
        for(int i=0; i< size ;i++)
        {
            cout << tempNode->data << '\t';
            tempNode = tempNode->next;
            
        }
    cout << '\n' << "����� �Ϸ��߽��ϴ�."<<'\n';
 }

void Link ::MainPageMenu()
{
    cout << '\n' <<"----- ��ũ�� ����Ʈ ���α׷�-----" << '\n';
    cout << '\n' << "1. ������ �Է�" << '\n';
    cout << "2. ������ ����" << '\n';
    cout << "3. ������ �� ã��" << '\n';
    cout << "4. ��� ������ ���" << '\n';
    cout << "5. ������ ũ�� Ȯ��" << '\n';
    cout << "6. ����" << '\n';
    cout << '\n' << "----------------------------------" << '\n';
}
int main(void)
{
    int modenumber=0;
    Link link;
    link.ClearNode();
    link.ClearSize();
    while (1){
    link.MainPageMenu();
    cin >> modenumber; 
    switch (modenumber) {
        case 1:
            link.InsertNode(10);
            break;
        case 2:
            link.DeleteNode(0);
            break;
        case 3:
            link.SearchNode(1);
            break;
        case 4:
            link.PrintNode();
            break;
        case 5:
            link.SizeNode();
            break;
        case 6:
            cout << "���α׷��� �����մϴ�.";
            exit(0);
            break;
        }
    }
    
}

