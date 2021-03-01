#include <iostream>
using namespace std;

class Node {
public:
	int data;
    int i;
	Node* next;
    Node* currentNode;
    Node* tempNode;
};

class Link {
public:
	Node* head;
    void ClearNode();
    void InitNode();
    void DeleteNode();
    void SearchNode();
    void SizeNode();
    void PrintNode();
    void MainPageMenu();
private:
    int size;
};
void Link :: ClearNode()
{
    head = new Node();
    head = NULL;
    Node *tempNode = new Node();
    tempNode = NULL;
    Node* currentNode = new Node();
    currentNode = NULL;
    Node* swapNode = new Node();
    swapNode = NULL;
    Node* deleteNode = new Node();
    deleteNode = NULL;
    int data = 0;
    int index = 0;
    int size = 0;
}
void Link :: InitNode()
{
    cout << "�ְ���� �����͸� �Է��ϼ��� :";
    int data = 0;
    int size = 0;
    cin >> data;
    if (size == 0)
    {
        head->data;
        size++;
        cout << "�Է��� �Ϸ�Ǿ����ϴ�." << '\n';
    }
    else
    {
        Node* currentNode;
        currentNode = new Node;
        currentNode->data = data;
        Node* tempNode = head;
        while (tempNode->next != nullptr)
        {
           tempNode->next = currentNode;
           size++;
           break;
        }
        cout << "�Է��� �Ϸ�Ǿ����ϴ�." << '\n';
        
    }
      
}
void Link::DeleteNode()
{
    Node* tempNode = NULL;
    Node* deleteNode = NULL;
    Node* swapNode = NULL;
    int index;
    cout << "�����ϰ� ���� ������ �ε����� �Է��ϼ��� : ";
    cin >> index;
    if ( index ==0 )
    {
        head = tempNode->next;
        tempNode = deleteNode;
        delete deleteNode;
        cout << "������ �Ϸ�Ǿ����ϴ�.";
        size--;      
     }
    else 
    {
        for (int i = 0; i < index - 1; i++)
        {
            tempNode = tempNode->next;
        }
        deleteNode = tempNode->next;
        swapNode = deleteNode->next; 
        tempNode->next = swapNode;
        delete deleteNode;
        cout << "������ �Ϸ�Ǿ����ϴ�.";
        size--;
    }
         
}
void Link::SearchNode()
{
    Node* tempNode;
    int i = 0;
    int index = 0;
    int data = 0;
    tempNode = head;
    cout << "ã����� �������� �ε����� �Է��ϼ��� : " << '\n';
    cin>> i;
    if (index == i)
    {
        tempNode->data;
        cout << "�ε���" << i << "�� �� : " << data << '\n';
        cout << "Ž���� �Ϸ��߽��ϴ�.";
    }
    else
        tempNode = tempNode->next; 
        cout << "�ε���" << i << "�� �� : " << data << '\n';
        cout << "Ž���� �Ϸ��߽��ϴ�.";
}
void Link::SizeNode()
{
    cout << "Linked List ������ :" << size << '\n';
    cout << "����� �Ϸ��߽��ϴ�.";
}
void Link::PrintNode()
{
    Node* tempNode;
    int index=0;
    tempNode = head;
    if (size == 0)
        cout << "��µ� ���� �����ϴ�." << '\n';
    else
        for(int i=0; i< index ;i++)
        {
            tempNode = tempNode->next;
            cout << tempNode->data << " ";
            
        }
    cout << '\n' << "����� �Ϸ��߽��ϴ�";
 }

void Link ::MainPageMenu()
{
    cout << "----- ��ũ�� ����Ʈ ���α׷�-----" << '\n';
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
    link.MainPageMenu();
    link.ClearNode();
    while (1){
    cin >> modenumber; 
    switch (modenumber) {
        case 1:
            link.InitNode();
            break;
        case 2:
            link.DeleteNode();
            break;
        case 3:
            link.SearchNode();
            break;
        case 4:
            link.PrintNode();
            break;
        case 5:
            link.SizeNode();
            break;
        case 6:
            cout << "���α׷��� �����մϴ�";
        }
    }
    
}

