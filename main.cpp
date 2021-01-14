#include <iostream>

using namespace std;
class Node{
public:
    char value;
    Node *child;
    Node(){
        value=NULL;
        child=NULL;
    }
};
class linkedList{
public:
     Node *head,*tail;
     linkedList(){
        head = NULL;
        tail = NULL;
    }
    void insertNode(char n){
        Node *tmp = new Node;
        tmp->value = n;
        tmp->child = NULL;
        if(head == NULL)
        {
            head = tmp;
            tail = tmp;
        }
        else
        {
            tail->child = tmp;
            tail = tail->child;
        }
    }
    void printList(){
        Node* n=head;
        while ( n!= NULL) {
            cout << n->value << " ";
            n = n->child;
        }
    }
    bool SearchList(char x){
        Node* current = head;
        while (current != NULL)
        {
            if (current->value == x)
                return true;
            current = current->child;
        }
        return false;
    }

    int getindex(Node*head,char c){
        Node* current = head;
        int count = 0;
        while (current != NULL) {
            if (c == current->value)
                return (count);
            count++;
            current = current->child;
        }
        return -1;
    }
    int getCount()
    {
        int count = 0;
        Node* current = head;
        while (current != NULL)
        {
            count++;
            current = current->child;
        }
        return count;
    }
};

class SuffixTrieNode{
public:
    linkedList* chars=new linkedList[26];
    linkedList n;
    SuffixTrieNode(){
    }
    void insertSuffix(string text,int countt);

};

class SuffixTrie{
public:
    SuffixTrieNode* root;
    SuffixTrie(string text){
        linkedList temp;
        for(int i=0;i<text.length();i++){
            if(!temp.SearchList(text[i]))
                temp.insertNode(text[i]);
        }
        int countt=temp.getCount();
        cout<<countt<<endl;
        for (int i = 0; i < text.length(); i++){
            root->insertSuffix(text.substr(i),countt);
        }
    }
    void Search(){
    }

};

void SuffixTrieNode::insertSuffix(string text,int countt){
    int c=0;
    linkedList temp;
    linkedList* m=new linkedList[26];
    temp.insertNode('b');
    n.insertNode('m');
//m[0].insertNode('b');
    //this->n.insertNode('a');
    //root->chars[0].insertNode('b');
//cout<<temp.head->value;
    //chars[0].insertNode('b');
    //chars[0].printList();
    cout<<"------------------------"<<endl;

    for(int i=0;i<text.length();i++){
        chars[0].insertNode(text[i]);
    }
   cout<<"folll"<<endl;
//   cout<<chars[0]->printList(chars[0]->head);

   if(text.length()>0){
            while(c<countt){
                if(chars[c].head->value==(text[0])){

                    c++;
                }
                else
                    break;
            }
            chars[c].insertNode(text[0]);
            for(int i=1;i<text.length();i++){
                chars[c].insertNode(text[i]);
            }
        }
    }

    banana$



int main()
{
    SuffixTrie s("banana");
    return 0;
}
