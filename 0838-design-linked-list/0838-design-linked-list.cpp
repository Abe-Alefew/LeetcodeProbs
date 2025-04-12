class MyLinkedList {
private:
    struct Node {
        int val;
        Node* next;
        Node(int val, Node*next = nullptr) : val(val), next(next) {};
    };

    Node* head;
    // int size;

public:
    MyLinkedList() {
        head = nullptr;
        
        // size = 0;
    }

    int get(int index) {
        int count = 0;
        Node* temp = head;
        while( temp != nullptr){
            if(count == index){
                return temp -> val;
            }else{
                temp = temp -> next;
                count++;
            }
        }

        return -1;
        // for(int i= 0; i< index; i++){

        // }
    }

    void addAtHead(int val) {
        Node* addNew =  new Node(val);
        addNew -> next = head;
        head = addNew;
    }

    void addAtTail(int val) {
       Node* added = new Node(val); // creating a node
       if( head == nullptr){
        head = added;
        return;
       }
       
      Node* temp = head;
      while(temp->next != nullptr){
            temp = temp -> next;
      }

      temp -> next = added;
    }

    void addAtIndex(int index, int val) {
        if (index == 0) return addAtHead(val);
        int count = 0;
        Node* added = new Node(val);
        Node* temp = head;
        while(temp != nullptr && count < index -1){
            temp = temp -> next;
            count++;
        }
         if (temp == nullptr) return;

        added -> next = temp -> next;
        temp -> next = added;
    }

    void deleteAtIndex(int index) {
        // case 1 - deleting at first
        if( head == nullptr) return;

        if(index== 0){
            Node* temp = head;
            head = head -> next;
            delete temp;
        }

        int count= 0;
        Node* temp = head;
        while(temp != nullptr && count < index - 1){
            temp = temp -> next;
            count++;
        }

        if(temp == nullptr || temp -> next == nullptr) return;

        Node* delNode = temp -> next;
        temp -> next = delNode -> next;


        delete delNode;
    }
};
