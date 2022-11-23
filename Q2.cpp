

using namespace std;




template<typename T>
class Heap
{
private:
	T value;
	Heap<T> *left_child;
	Heap<T>* right_child;
public:
	Heap(new_value) {
		value = new_value;
		left_child = None;
		right_chile = None;
	}
	add(T new_value) {
		if right_child != None{
			right_child.add(new_value);
		}
		else {
			Heap new = Heap(new_value);
			right_child = new;
			if value < new_value{
				temp = value;
				value = new_value;
				right_child.value = temp;
			}
		}
	};
};
