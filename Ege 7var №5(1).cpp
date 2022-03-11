#include <iostream>

int max(int a, int b, int c) {
    if (a > c && a > b) {
      return a;
    } else if (c > a && c > b) {
      return c;
    } else {
      return b;
    }
}

int max(int a, int b) {
  if (a > b) {
    return a;
  } else {
    return b;
  }
}

void print(int a, int b, int c, int d) {
  std::cout << a << b << c << d << std::endl;
}

int main() {
  using namespace std;

  // abcd
  // a+b b+c c+d
  // max(a+b, b+c, c+d) xx
  // a+bb+c, a+b>b+c
  // 127

  
  
  int nums[4];
  
  for (int i1=0; i1<10; i1++) {
    for (int i2=0; i2<10; i2++) {
      for (int i3=0; i3<10; i3++) {
        for (int i4=0; i4<10; i4++) {
            nums[0] = i1;
            nums[1] = i2;
            nums[2] = i3;
            nums[3] = i4;

            int sum1 = nums[0] + nums[1];
            int sum2 = nums[1] + nums[2];
            int sum3 = nums[2] + nums[3];

            if (max(sum1, sum2, sum3) == sum1) {
              //sum2 and sum3
              if (max(sum2, sum3) == sum2) {
                if (sum2 == 12 && sum3 ==7) {
                  cout << sum2 << sum3 << "\t";
                  print(nums[0], nums[1], nums[2], nums[3]);
                }
              } else {
                if (sum3 == 12 && sum2 ==7) {
                    cout << sum3 << sum2 << "\t";
                    print(nums[0], nums[1], nums[2], nums[3]);
                }
              }
            } else if (max(sum1, sum2, sum3) == sum2) {
              //sum1 and sum3
              if (max(sum1, sum3) == sum1) {
                if (sum1 == 12 && sum3 ==7) {
                  cout << sum1 << sum3 << "\t";
                  print(nums[0], nums[1], nums[2], nums[3]);
                }
              } else {
                if (sum3 == 12 && sum1 ==7) {
                  cout << sum3 << sum1 << "\t";
                  print(nums[0], nums[1], nums[2], nums[3]);
                }
              }
            } else {
              // max = sum3
              if (max(sum1, sum2) == sum2) {
                if (sum2 == 12 && sum1 ==7) {
                  cout << sum2 << sum1 << "\t";
                  print(nums[0], nums[1], nums[2], nums[3]);
                }
              } else {
                if (sum1 == 12 && sum1 ==7) {
                  cout << sum1 << sum2 << "\t";
                  print(nums[0], nums[1], nums[2], nums[3]);
                }
              }
            }
        }
      }
    }
  }

  return 0;
}
