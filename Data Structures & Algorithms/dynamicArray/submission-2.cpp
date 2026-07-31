class DynamicArray {
    int* Arr{nullptr};
    int currCapacity{0};
    int currPointer;

   public:
    DynamicArray(int capacity) {
        currPointer = 0;
        currCapacity = capacity;
        Arr = new int[capacity];
        fill_n(Arr, capacity, -1);
    }

    int get(int i) { return Arr[i]; }

    void set(int i, int n) { Arr[i] = n; }

    void pushback(int n) {
        if (currPointer == currCapacity) resize();

        Arr[currPointer++] = n;
    }

    int popback() {
        int x = Arr[--currPointer];
        Arr[currPointer] = 0;
        return x;
    }

    void resize() {
        int* ArrTemp = new int[currCapacity * 2];
        fill_n(ArrTemp, currCapacity * 2, -1);
        copy(Arr, Arr + currCapacity, ArrTemp);
        delete[] Arr;
        Arr = ArrTemp;
        ArrTemp = nullptr;
        currCapacity = currCapacity * 2;
    }

    int getSize() { return currPointer; }

    int getCapacity() { return currCapacity; }
};
