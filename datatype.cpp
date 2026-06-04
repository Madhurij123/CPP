#include<iostream>
using namespace std;

class QueueUnderFlowException {
    string message;
public:
    QueueUnderFlowException(string message) {
        this->message = message;
    }
    string getMessage() {
        return message;
    }
};

template <typename T>
class Queue {
    int size;
    int rear;
    int front;
    T *arr;
public:
    Queue(int size) {
        this->size = size;
        this->rear = -1;
        this->front = -1;
        this->arr = new T[this->size];
    }

    bool isFull() {
        return this->rear == this->size - 1;
    }

    bool isEmpty() {
        return this->front == -1 || this->front > this->rear;
    }

    void enqueue(T data) {
        if (this->isFull())
            throw QueueUnderFlowException("Queue is full!");

        if (this->front == -1)
            this->front = 0;
        this->arr[++this->rear] = data;
    }

    T dequeue() {
        if (this->isEmpty())
            throw QueueUnderFlowException("Queue is empty!");
        return this->arr[this->front++];
    }
};

template <typename T>
void queueMenu() {
    Queue<T> q(5);
    int choice;
    T data;

    do {
        cout << "\n===== MENU =====\n";
        cout << "0. Exit\n";
        cout << "1. Enqueue\n";
        cout << "2. Dequeue\n";
        cout << "Enter choice: ";
        cin >> choice;

        try {
            switch (choice) {
                case 1:
                    cout << "Enter data: ";
                    cin >> data;
                    q.enqueue(data);
                    cout << "Enqueued: " << data << endl;
                    break;

                case 2:
                    data = q.dequeue();
                    cout << "Dequeued: " << data << endl;
                    break;
            }
        }
        catch (QueueUnderFlowException &ex) {
            cout << "Error: " << ex.getMessage() << endl;
        }

    } while (choice != 0);
}

int main() {

    int typeChoice;   

    do {
        cout << "\nSelect Data Type\n";
        cout << "1. int\n";
        cout << "2. float\n";
        cout << "3. double\n";
        cout << "4. Exit\n";
        cout << "Enter choice: ";
        cin >> typeChoice;

        switch (typeChoice) {
            case 1:
                queueMenu<int>();
                break;
            case 2:
                queueMenu<float>();
                break;
            case 3:
                queueMenu<double>();
                break;
            case 4:
			exit(0);
		
            default:
                cout << "Invalid choice\n";
        }
    } while (typeChoice != 4);

    return 0;
}

