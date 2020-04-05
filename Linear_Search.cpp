// A[]が走査する配列、nはその配列の長さ、keyは走査したい値
// 計算量O(n)
// 返り値はkeyが存在していればtrue,いなければfalse
bool Linear_Search(int A[], int n, int key) {
  int i = 0;
  A[n] = key;
  while(A[i] != key) i++;
  return i != n;
}
