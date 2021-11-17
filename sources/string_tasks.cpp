// Copyright 2018 Your Name <your_email>

#include <tasks.hpp>

// Task 5.
bool name_is_even(const std::string& name) {
  int a;
  std::string str(name);
  a = str.size();
  if (a % 2 == 0) {
    return 1;
  } else {
    return 0;
  }
  return false;
}

// Task 6.
bool first_is_longer(const std::string& name_one, const std::string& name_two) {
  int a, b;
  std::string str1(name_one);
  a = str1.size();
  std::string str2(name_two);
  b = str2.size();
  if (a > b) {
    return true;
  } else {
    return false;
  }
  return false;
}

// Task 7.
void longest_shortest(const std::string& name_one, const std::string& name_two,
                      const std::string& name_three, std::string& the_longest,
                      std::string& the_shortest) {
  int a, b, c;
  std::string str1(name_one);
  a = str1.size();
  std::string str2(name_two);
  b = str2.size();
  std::string str3(name_three);
  c = str3.size();
  if (a > b && a > c) {
    the_longest = name_one;
  }
  if (b > a && b > c) {
    the_longest = name_two;
  }
  if (c > a && c > b) {
    the_longest = name_three;
  }
  if (a < b && a < c) {
    the_shortest = name_one;
  }
  if (b < a && b < c) {
    the_shortest = name_two;
  }
  if (c < a && c < b) {
    the_shortest = name_three;
  }
}

// Task 8.
std::string sub_str(const std::string& word, int m, int n) {
  int b;
  std::string a = "";
  if (n >= 0 && n <= word.length()) {
    for (size_t i = m; i < n + 1; ++i) {
      a += word[i];
    }
  }
  if (n >= 0 && n > word.length()) {
    n = word.length() - 1;
    for (size_t i = m; i < n + 1; ++i) {
      a += word[i];
    }
  }
  return a;
  return std::string();
}

// Task 9.
void add_stars(std::string& word) {
  int a;
  a = word.length();
  std::string b = "";
  for (size_t i = 0; i < a; ++i) {
    b += "*";
  }
  b += word;
  for (size_t i = 0; i < a; ++i) {
    b += "*";
  }
  word = b;
}

// Task 10.
int percent_of_a(const std::string& word) {
  int a, b;
  a = word.length();
  b = 0;
  for (size_t i = 0; i < a; ++i) {
    if (word[i] == 'a') {
      b += 1;
    }
  }
  return (b * 100) / a;
  return 0;
}

// Task 11.
std::string replace_can(const std::string& new_word) {
  int a, i = 0;
  std::string c = "Can you can a can as a canner can can a can?";
  a = c.length();
  std::string b = "";
  while (i < a) {
    if (c[i] == 'c' && c[i + 1] == 'a' && c[i + 2] == 'n') {
      b += new_word;
      i += 3;
    } else {
      b += c[i];
      i += 1;
    }
  }
  return b;
  return std::string();
}