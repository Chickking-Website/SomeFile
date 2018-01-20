#include <cstdio>
int n, arr[100 + 1];
bool visited[100 + 1];

void print() {
	for (int i = 1; i <= n; i++) {
		printf("%5d", arr[i]);
	}
	putchar('\n'); 
}

void dfs(int start) {
	if (start == n) {
		print();
		return;
	} // 搜索初始下标等于结束下标，搜索全部完成，输出并退出。 
	for (int i = 1; i <= n; i++) {
		if (!visited[i]) {		// 如果目前要访问的位置未被访问过 
			visited[i] = true;	// 标记 
			arr[start + 1] = i;	// 加入答案数组 
			dfs(start + 1);		// 递归，一条路走到黑 
			visited[i] = false; // 搜索完毕，回溯，将 visited[i] 置为 false，为下一轮循环做准备
		}
	}
}

int main() {
	scanf("%d", &n);
	dfs(0);	// 0 为初始下标 
	return 0;
}
