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
    cout << "넣고싶은 데이터를 입력하세요 :";
    cin >> data;
    if (size == 0)
    {
        head->data = data;
        cout << "입력이 완료되었습니다." << '\n';
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
        cout << "입력이 완료되었습니다." << '\n';
        
    }
    size++;
      
}
void Link::DeleteNode(int nodeIndex)
{
    Node* tempNode = head;
    Node* deleteNode;
    Node* swapNode;
    int index;
    cout << "삭제하고 싶은 데이터 인덱스를 입력하세요 : ";
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
    cout << "삭제가 완료되었습니다." << '\n';
    size--;
         
}
void Link::SearchNode(int index)
{
    int i = 0;
    Node* tempNode = head;
    cout << "찾고싶은 데이터의 인덱스를 입력하세요 :  " ;
    cin>> i;
    for (i=0; i<size;i++) 
    if (index == i)
    {
        tempNode->data;
        cout << "인덱스" << i << "의 값 : " << tempNode ->data << '\n';
        cout << "탐색을 완료했습니다." << '\n';
    }
    else
    {
        tempNode = tempNode->next;
    }
}
void Link::SizeNode()
{
    cout << "Linked List 사이즈 :" << size << '\n';
    cout << "출력을 완료했습니다." << '\n';
}
void Link::PrintNode()
{
    Node* tempNode = head;
    if (size == 0)
        cout << "출력될 값이 없습니다." << '\n';
    else
        for(int i=0; i< size ;i++)
        {
            cout << tempNode->data << '\t';
            tempNode = tempNode->next;
            
        }
    cout << '\n' << "출력을 완료했습니다."<<'\n';
 }

void Link ::MainPageMenu()
{
    cout << '\n' <<"----- 링크드 리스트 프로그램-----" << '\n';
    cout << '\n' << "1. 데이터 입력" << '\n';
    cout << "2. 데이터 삭제" << '\n';
    cout << "3. 데이터 값 찾기" << '\n';
    cout << "4. 모든 데이터 출력" << '\n';
    cout << "5. 데이터 크기 확인" << '\n';
    cout << "6. 종료" << '\n';
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
            cout << "프로그램을 종료합니다.";
            exit(0);
            break;
        }
    }
    
}

