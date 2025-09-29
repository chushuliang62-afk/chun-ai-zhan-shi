int main() {
    int n = 0;                // 外层 n 初始化为 0
    if (true) {
        int inner = 3;        // 用不同名字避免遮蔽
        int* p = new int(inner);
        *p += 1;              // 变成 4
        cout << *p << "\n";   // 输出 4
        delete p;
    }
    cout << n << "\n";        // 安全地输出 0
}
