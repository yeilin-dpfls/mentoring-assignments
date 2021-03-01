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
    cout << "넣고싶은 데이터를 입력하세요 :";
    int data = 0;
    int size = 0;
    cin >> data;
    if (size == 0)
    {
        head->data;
        size++;
        cout << "입력이 완료되었습니다." << '\n';
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
        cout << "입력이 완료되었습니다." << '\n';
        
    }
      
}
void Link::DeleteNode()
{
    Node* tempNode = NULL;
    Node* deleteNode = NULL;
    Node* swapNode = NULL;
    int index;
    cout << "삭제하고 싶은 데이터 인덱스를 입력하세요 : ";
    cin >> index;
    if ( index ==0 )
    {
        head = tempNode->next;
        tempNode = deleteNode;
        delete deleteNode;
        cout << "삭제가 완료되었습니다.";
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
        cout << "삭제가 완료되었습니다.";
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
    cout << "찾고싶은 데이터의 인덱스를 입력하세요 : " << '\n';
    cin>> i;
    if (index == i)
    {
        tempNode->data;
        cout << "인덱스" << i << "의 값 : " << data << '\n';
        cout << "탐색을 완료했습니다.";
    }
    else
        tempNode = tempNode->next; 
        cout << "인덱스" << i << "의 값 : " << data << '\n';
        cout << "탐색을 완료했습니다.";
}
void Link::SizeNode()
{
    cout << "Linked List 사이즈 :" << size << '\n';
    cout << "출력을 완료했습니다.";
}
void Link::PrintNode()
{
    Node* tempNode;
    int index=0;
    tempNode = head;
    if (size == 0)
        cout << "출력될 값이 없습니다." << '\n';
    else
        for(int i=0; i< index ;i++)
        {
            tempNode = tempNode->next;
            cout << tempNode->data << " ";
            
        }
    cout << '\n' << "출력을 완료했습니다";
 }

void Link ::MainPageMenu()
{
    cout << "----- 링크드 리스트 프로그램-----" << '\n';
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
            cout << "프로그램을 종료합니다";
        }
    }
    
}

