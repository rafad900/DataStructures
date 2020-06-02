#include <stddef.h> 

template <typename Object> 
class LinkedList {
    public: 
        LinkedList() {}
        void insert(Object& value);

    private: 
        class Node {
            public: 
                Node(Object&rhs, Object& lhs);
                void setLeft(Object& x);
                void setRight(Object& x);
                void setValue(Object& x);
                Object& getValue();
                
            private:
                Object value;
                Node* right;
                Node* left;
        }

        int size;
        Node* start;
        Node* end;
}

