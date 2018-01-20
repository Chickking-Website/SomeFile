#include <cstdio>
int n, arr[100 + 1];
bool visited[100 + 1];

void print() {
	for (int i = 1; i <= n; i++) {
		printf("%d ", arr[i]);
	}
	putchar('\n'); 
}

void dfs(int start) {
	if (start == n) {
		print();
		return;
	}
	for (int i = 1; i <= n; i++) {
		if (!visited[i]) {
			visited[i] = true;	// ��� 
			arr[start + 1] = i;	// ��������� 
			dfs(start + 1);		// �ݹ飬һ��·�ߵ��� 
			visited[i] = false; // û�������������� 
		}
	}
}

int main() {
	scanf("%d", &n);
	dfs(0);
	return 0;
}
