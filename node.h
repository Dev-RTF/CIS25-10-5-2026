// linked lists: create lists you can expand without copying. Make room for one thing PLUS a label that says where to find the next thing. The next thing can be allocated/found anywhere.

// usually, use a struct: class but members are public, with no functions
class Node {
    private:
        int value;
        Node* next; // pointer to another Node that may contain another pointer to another Node...
    public:
        Node(int value, Node* next);
        int getValue() const;
        Node* getNext() const;
        void setNext(Node* n);
};