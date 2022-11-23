# include<algorithm>
# include<iostream>

using namespace std;

int pivoting(int arr[], int i_start, int i_end) {
	int pivot = arr[i_start];
	int small_count = 0;
	for (int i = i_start + 1; i <= i_end; i++) {
		if (arr[i] < pivot) { small_count++; }
	}
	int i_pivot = i_start + small_count;
	swap(arr[i_start], arr[i_pivot]);


	int i = i_start, j = i_pivot + 1;
	while ((i < i_pivot) && (j <= i_end)) {
		while(arr[i] < pivot) { i++; }
		while (arr[j] >= pivot) { j++; }

		if ((i < i_pivot) && (j <= i_end)) {
			swap(arr[i], arr[j]);
		}
	}
	return i_pivot;
}

void quick_sort(int arr[], int i_start, int i_end) {
	if(i_start >= i_end){
		return ;
	}
	int i_pivot = pivoting(arr, i_start, i_end);
	quick_sort(arr, i_start, i_pivot - 1);
	quick_sort(arr, i_pivot + 1, i_end);

}

int main() {
	int arr[8] = { 34, 46, 25, 5, 56, 16, 68, 36 };
	quick_sort(arr, 0, 7);
	for (int i = 0; i < 8; i++) {
		cout << arr[i] << ",";
	}
	cout << endl;
	return 0;
}