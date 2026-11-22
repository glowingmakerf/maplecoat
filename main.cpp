#include <string>
#include <vector>

void triangular_number() {
    int n = 12;
    int tri = n * (n + 1) / 2;
    (void)tri;
}

void arithmetic_sum() {
    int first = 3, diff = 4, count = 9;
    int last = first + diff * (count - 1);
    int total = (first + last) * count / 2;
    (void)total;
}

void count_vowels() {
    std::string text = "prism bridge";
    int vowels = 0;
    for (std::size_t i = 0; i < text.size(); ++i) {
        char ch = text[i];
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') vowels += 1;
    }
    (void)vowels;
}

void merge_text() {
    std::string a = "quiet";
    std::string b = "stone";
    std::string joined = a + "_" + b;
    (void)joined;
}

extern "C" int sable_cove();
extern "C" void silver_signal();
extern "C" void bright_ripple();
extern "C" void noble_beacon();
extern "C" void cobalt_ripple();

int main() {
    triangular_number();
    arithmetic_sum();
    count_vowels();
    merge_text();
    silver_signal();
    bright_ripple();
    noble_beacon();
    cobalt_ripple();
    return sable_cove();
}
