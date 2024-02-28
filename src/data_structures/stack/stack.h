template<typename T>
class Stack
{
    private:
        T* arr;
        int top;

    public:

        Stack(int capacity);

        ~Stack();

        void push(const T& item);

        T pop();
};