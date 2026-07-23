class MinStack {
    struct Node {
        int iVal;
        Node* next;
        int iMinSoFar;
        Node(int iNo) : iVal(iNo), next(nullptr) {}
        Node(int iNo, Node* next) : iVal(iNo), next(next) {}
    };

    Node* head;

   public:
    MinStack() { head = nullptr; }

    void push(int val) {
        if (head) {
            Node* newNode = new Node(val, head);
            newNode->iMinSoFar = std::min(val, head->iMinSoFar);
                head = newNode;
        } else {
            head = new Node(val);
            head->iMinSoFar = val;
        }
    }

    void pop() {
        if (isEmpty()) {
            throw std::underflow_error("Stack Underflow: Cannot view top of empty stack.");
        }
        Node* temp = head;
        head = head->next;
        delete temp;
    }

    int top() {
        if (isEmpty()) {
            throw std::underflow_error("Stack Underflow: Cannot view top of empty stack.");
        }
        return head->iVal;
    }

    int getMin() {
        
        return head->iMinSoFar;
    }

    bool isEmpty() { return head == nullptr; }
};
