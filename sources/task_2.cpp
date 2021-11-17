// Copyright 2018 Your Name <your_email>

#include <tasks.hpp>

// Task 2.
int sum(const std::vector<int>& input) {
  int sum = 0;
  for (size_t i = 0; i < size(input); ++i) {
    sum = sum + input[i];
  }
  return sum;
  return 0;
}

int square_sum(const std::vector<int>& input) {
  int sum = 0;
  for (size_t i = 0; i < size(input); ++i) {
    sum = sum + input[i] * input[i];
  }
  return sum;
  return 0;
}

int sum_six(const std::vector<int>& input) {
  int sum = 0;
  for (size_t i = 0; i < 6; ++i) {
    sum = sum + input[i];
  }
  return sum;
  return 0;
}

int sum_k(const std::vector<int>& input, int k1, int k2) {
  int sum = 0;
  for (size_t i = k1; i < k2 + 1; ++i) {
    sum = sum + input[i];
  }
  return sum;
  return 0;
}

int mean(const std::vector<int>& input) {
  int sum = 0;
  for (size_t i = 0; i < size(input); ++i) {
    sum = sum + input[i];
  }
  int a;
  a = sum / size(input);
  return a;
  return 0;
}

int mean_k(const std::vector<int>& input, int s1, int s2) {
  int sum = 0;
  for (size_t i = s1; i < s2 + 1; ++i) {
    sum = sum + input[i];
  }
  int a;
  a = sum / (s2 - s1 + 1);
  return a;
  return 0;
}
