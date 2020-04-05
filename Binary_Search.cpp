// A[]が走査する配列、nはその配列の長さ、keyは走査したい値
// 計算量O(logn)
// 返り値はkeyが存在していればtrue,いなければfalse
bool Binary_Search(int A[], int n, int key) {
  int left = 0;
  int right = n;
  while(left < right) {
    int mid = (left + right)/2;
    if(A[mid] == key) {
      return true;
    }else if(key < A[mid]) {
      right = mid;
    }else {
      left = mid+1;
    }
  }
  return false;
}
