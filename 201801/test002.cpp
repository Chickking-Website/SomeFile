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
	} // ������ʼ�±���ڽ����±꣬����ȫ����ɣ�������˳��� 
	for (int i = 1; i <= n; i++) {
		if (!visited[i]) {		// ���ĿǰҪ���ʵ�λ��δ�����ʹ� 
			visited[i] = true;	// ��� 
			arr[start + 1] = i;	// ��������� 
			dfs(start + 1);		// �ݹ飬һ��·�ߵ��� 
			visited[i] = false; // ������ϣ����ݣ��� visited[i] ��Ϊ false��Ϊ��һ��ѭ����׼��
		}
	}
}

int main() {
	scanf("%d", &n);
	dfs(0);	// 0 Ϊ��ʼ�±� 
	return 0;
}
