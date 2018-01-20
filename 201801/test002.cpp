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
			visited[i] = true;	// 标记 
			arr[start + 1] = i;	// 加入答案数组 
			dfs(start + 1);		// 递归，一条路走到黑 
			visited[i] = false; // 没有搜索到，回溯 
		}
	}
}

int main() {
	scanf("%d", &n);
	dfs(0);
	return 0;
}
