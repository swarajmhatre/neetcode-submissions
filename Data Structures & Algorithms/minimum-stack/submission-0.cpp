class MinStack {
    struct Node {
        int iVal;
        Node* next;
        Node(int iNo) : iVal(iNo), next(nullptr) {}
        Node(int iNo, Node* next) : iVal(iNo), next(next) {}
    };

    Node* head;

   public:
    MinStack() { head = nullptr; }

    void push(int val) {
        if (head) {
            Node* newNode = new Node(val, head);
            head = newNode;
        } else {
            head = new Node(val);
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
        int iMin = INT_MAX;
        Node* tracker = head;
        while (tracker) {
            if (tracker->iVal < iMin) iMin = tracker->iVal;
            tracker = tracker->next;
        }
        return iMin;
    }

    bool isEmpty() { return head == nullptr; }
};
