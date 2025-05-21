#include<stdio.h>
void merge(int a[], int p, int q, int r);
void merge_sort(int a[], int p, int r);
int n, k, cnt = 1;
void merge_sort(int a[], int p, int r) {
    // A[p..r]을 오름차순 정렬한다.
    if (p < r){
        int q = (p + r) / 2;      // q는 p, r의 중간 지점
        merge_sort(a, p, q);      // 전반부 정렬
        merge_sort(a, q + 1, r);  // 후반부 정렬
        merge(a, p, q, r);        // 병합
    }
    return;
}

// A[p..q]와 A[q + 1..r]을 병합하여 A[p..r]을 오름차순 정렬된 상태로 만든다.
// A[p..q]와 A[q + 1..r]은 이미 오름차순으로 정렬되어 있다.
void merge(int a[], int p, int q, int r) {
    int i = p, j = q + 1, t = 1;
    int* tmp = new int[r-p+2];
    while (i <= q && j <= r) {
        if (a[i] <= a[j])
            tmp[t++] = a[i++]; // tmp[t] < -A[i]; t++; i++;
        else tmp[t++] = a[j++]; // tmp[t] < -A[j]; t++; j++;
    }
    while (i <= q)  // 왼쪽 배열 부분이 남은 경우
        tmp[t++] = a[i++];
    while (j <= r)  // 오른쪽 배열 부분이 남은 경우
        tmp[t++] = a[j++];
    i = p;
    t = 1;
    while (i <= r)  // 결과를 A[p..r]에 저장
    {
        if (cnt == k)
        {
            printf("%d", tmp[t]);
        }
        a[i++] = tmp[t++];
        cnt++;
    }
    delete(tmp);
    return;
}
int main(void)
{
	scanf("%d %d", &n, &k);
    int* num = new int[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &num[i]);
    }
    merge_sort(num, 0, n - 1);
    if (cnt <= k)
        printf("-1");
    delete(num);
}