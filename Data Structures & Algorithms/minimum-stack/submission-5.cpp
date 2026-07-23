class MinStack {
    struct Node {
        int iVal;
        Node* next;
        int iMinSoFar;
        Node(int iNo) : iVal(iNo), iMinSoFar(iNo), next(nullptr) {}
        Node(int iNo, int iMinSoFar, Node* next) : iVal(iNo), iMinSoFar(iMinSoFar), next(next) {}
    };

    Node* head;

   public:
    MinStack() { head = nullptr; }

    void push(int val) {
        if (head) {
            int iMinSoFar = std::min(val, head->iMinSoFar);
            Node* newNode = new Node(val, iMinSoFar, head);
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
        if (isEmpty()) throw std::underflow_error("Stack is empty");
        return head->iMinSoFar;
    }

    bool isEmpty() { return head == nullptr; }
};
