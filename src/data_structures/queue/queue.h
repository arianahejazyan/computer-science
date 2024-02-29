template<typename T>
class Queue
{
    private:
        struct Node;
        Node* front;
        Node* rear;
        unsigned int size;

    public:

        Queue();

        ~Queue();

        void enQueue(const T& element);

        void deQueue();

        bool isEmpty();

        unsigned int getSize();
};