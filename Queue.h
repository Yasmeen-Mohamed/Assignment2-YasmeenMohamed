template <class T>
class Queue
{
private:
	T* data;
	int front;
	int rear;
	int maxSize;
	int counter;
public:
	Queue(int s)
	{
		maxSize = s;
		data = new T[maxSize];
		front = -1;
		rear = -1;
		counter = 0;
	}

	T ffront()
	{
		if (front == -1)
		{
			cout << "Queue is empty " << endl;
		}
		else
			return (data[front]);
	}

	void push(T element)
	{
		if (counter == maxSize)
		{
			cout << "Queue is full " << endl;
		}

		if (front == -1)
		{
			front = 0;
		}

		rear++;
		data[rear] = element;
		counter++;
	}

	T pop()
	{
		if (front == -1)
		{
			cout << "Queue is empty " << endl;
		}
		else
		{
			T temp = data[front];
			front++;
			counter--;
			return temp;
		}
	}
};
