#ifndef  LIST_H_INCLUDED
#define  LIST_H_INCLUDED

template <class T>
struct Node {
    T   info;
    Node* next;
    Node(T val) : info(val), next(NULL) {}  // 持失切
};

template <class T>
class List
{
    Node<T>* head;
public:
    List() : head(NULL) {}      // 持失切
    ~List();

    void insert(T value);
    void removeFirst();

    Node<T>* getHead() const { return head; }
};

//-----------------------------------------------
// implementation of list class
// destructor
template <class T> List<T>::~List()
{
    Node<T>* temp = head;
    while (temp) {
        head = temp->next;
        delete temp;
        temp = head;
    }
}

// insert
template <class T>
void List<T>::insert(T val)
{
    Node<T>* temp = new Node<T>(val);
    temp->next = head;
    head = temp;
}

// remove first
template <class T>
void List<T>::removeFirst()
{
    Node<T>* temp = head;
    head = head->next;
    delete temp;
}

#endif  // LIST_H_INCLUDED
