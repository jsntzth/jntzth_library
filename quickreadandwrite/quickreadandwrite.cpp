#include <bits/stdc++.h>
using namespace std;
namespace Read {
	int base = 0, maxlen = 1024;
	template <typename T>
	inline void read(T &num);
	template <>
	inline void read<char>(char &num) {
		num = getchar();
	}
	inline void read(char str[]) {
		char c;
		int i = 0;
		for (int x = 1; x <= base; x++) str[++i] = ' ';
		while (isspace(c = getchar()));
		while (i < maxlen - 1 && !isspace(c)) {
			str[i++] = c;
			c = getchar();
		}
		str[i] = '\0';
		ungetc(c, stdin);
	}
	template <>
	inline void read<char*> (char* &str) {
		read(str);
	}
	template <>
	inline void read<short>(short &num) {
		short x = 0;
		short f = 1;
		char c;
		while (isspace(c = getchar()));
		if (c == '-') {
			f = -1;
			c = getchar();
		}
		while (isdigit(c)) {
			x = x * 10 + (c - '0');
			c = getchar();
		}
		num = x * f;
		ungetc(c, stdin);
	}
	template <>
	inline void read<unsigned short>(unsigned short &num) {
		unsigned short x = 0;
		char c;
		while (isspace(c = getchar()));
		while (isdigit(c)) {
			x = x * 10 + (c - '0');
			c = getchar();
		}
		num = x;
		ungetc(c, stdin);
	}
	template <>
	inline void read<int>(int &num) {
		int x = 0;
		int f = 1;
		char c;
		while (isspace(c = getchar()));
		if (c == '-') {
			f = -1;
			c = getchar();
		}
		while (isdigit(c)) {
			x = x * 10 + (c - '0');
			c = getchar();
		}
		num = x * f;
		ungetc(c, stdin);
	}
	template <>
	inline void read<unsigned int>(unsigned int &num) {
		unsigned int x = 0;
		char c;
		while (isspace(c = getchar()));
		while (isdigit(c)) {
			x = x * 10 + (c - '0');
			c = getchar();
		}
		num = x;
		ungetc(c, stdin);
	}
	template <>
	inline void read<long long>(long long &num) {
		long long x = 0;
		long long f = 1;
		char c;
		while (isspace(c = getchar()));
		if (c == '-') {
			f = -1;
			c = getchar();
		}
		while (isdigit(c)) {
			x = x * 10 + (c - '0');
			c = getchar();
		}
		num = x * f;
		ungetc(c, stdin);
	}
	template <>
	inline void read<unsigned long long>(unsigned long long &num) {
		unsigned long long x = 0;
		char c;
		while (isspace(c = getchar()));
		while (isdigit(c)) {
			x = x * 10 + (c - '0');
			c = getchar();
		}
		num = x;
		ungetc(c, stdin);
	}
	template <>
	inline void read<__int128>(__int128 &num) {
		__int128 x = 0;
		__int128 f = 1;
		char c;
		while (isspace(c = getchar()));
		if (c == '-') {
			f = -1;
			c = getchar();
		}
		while (isdigit(c)) {
			x = x * 10 + (c - '0');
			c = getchar();
		}
		num = x * f;
		ungetc(c, stdin);
	}
	template <>
	inline void read<unsigned __int128>(unsigned __int128 &num) {
		unsigned __int128 x = 0;
		char c;
		while (isspace(c = getchar()));
		while (isdigit(c)) {
			x = x * 10 + (c - '0');
			c = getchar();
		}
		num = x;
		ungetc(c, stdin);
	}
	template <>
	inline void read<float>(float &num) {
		float x = 0;
		float f = 1;
		int decimalPart = 0;
		int decimalFactor = 1;
		char c;
		while (isspace(c = getchar()));
		if (c == '-') {
			f = -1;
			c = getchar();
		}
		while (isdigit(c)) {
			x = x * 10 + (c - '0');
			c = getchar();
		}
		if (c == '.') {
			c = getchar();
			while (isdigit(c)) {
				decimalPart = decimalPart * 10 + (c - '0');
				decimalFactor *= 10;
				c = getchar();
			}
		}
		num = (x + static_cast<float>(decimalPart) / decimalFactor) * f;
		ungetc(c, stdin);
	}
	template <>
	inline void read<double>(double &num) {
		double x = 0;
		double f = 1;
		int decimalPart = 0;
		int decimalFactor = 1;
		char c;
		while (isspace(c = getchar()));
		if (c == '-') {
			f = -1;
			c = getchar();
		}
		while (isdigit(c)) {
			x = x * 10 + (c - '0');
			c = getchar();
		}
		if (c == '.') {
			c = getchar();
			while (isdigit(c)) {
				decimalPart = decimalPart * 10 + (c - '0');
				decimalFactor *= 10;
				c = getchar();
			}
		}
		num = (x + static_cast<double>(decimalPart) / decimalFactor) * f;
		ungetc(c, stdin);
	}
	template <>
	inline void read<long double>(long double &num) {
		long double x = 0;
		long double f = 1;
		int decimalPart = 0;
		int decimalFactor = 1;
		char c;
		while (isspace(c = getchar()));
		if (c == '-') {
			f = -1;
			c = getchar();
		}
		while (isdigit(c)) {
			x = x * 10 + (c - '0');
			c = getchar();
		}
		if (c == '.') {
			c = getchar();
			while (isdigit(c)) {
				decimalPart = decimalPart * 10 + (c - '0');
				decimalFactor *= 10;
				c = getchar();
			}
		}
		num = (x + static_cast<long double>(decimalPart) / decimalFactor) * f;
		ungetc(c, stdin);
	}
	template <>
	inline void read<__float128>(__float128 &num) {
		__float128 x = 0;
		__float128 f = 1;
		int decimalPart = 0;
		int decimalFactor = 1;
		char c;
		while (isspace(c = getchar()));
		if (c == '-') {
			f = -1;
			c = getchar();
		}
		while (isdigit(c)) {
			x = x * 10 + (c - '0');
			c = getchar();
		}
		if (c == '.') {
			c = getchar();
			while (isdigit(c)) {
				decimalPart = decimalPart * 10 + (c - '0');
				decimalFactor *= 10;
				c = getchar();
			}
		}
		num = (x + static_cast<__float128>(decimalPart) / decimalFactor) * f;
		ungetc(c, stdin);
	}
	template <>
	inline void read<string>(string &str) {
		char c;
		while (isspace(c = getchar()));
		str.clear();
		while (!isspace(c)) {
			str += c;
			c = getchar();
		}
		for (int i = 1; i <= base; i++) {
			str = ' ' + str;
		}
		ungetc(c, stdin);
	}
	template <typename T, typename... Args>
	inline void read(T &t, Args&... args) {
		read(t);
		if constexpr (sizeof...(args) > 0) read(args...);
	}
}
using namespace Read;
namespace Write {
	int k = 10, base = 0;
	template <typename T>
	inline void write(T num);
	template <>
	inline void write<char>(char num) {
		putchar(num);
	}
	inline void write(const char *str) {
		int l = strlen(str);
		for (int i = base; i < l + base; i ++) putchar(str[i]);
	}
	template <>
	inline void write<char*>(char str[]) {
		int l = strlen(str);
		for (int i = base; i < l + base; i ++) putchar(str[i]);		
	}
	template <>
	inline void write<short>(short num) {
		if (num < 0) {
			putchar('-');
			num = -num;
		}
		if (num > 9) write<short>(num / (short)(10));
		putchar(num % 10 + '0');
	}
	template <>
	inline void write<unsigned short>(unsigned short num) {
		if (num > 9) write<unsigned short>(num / (short)(10));
		putchar(num % 10 + '0');
	}
	template <>
	inline void write<int>(int num) {
		if (num < 0) {
			putchar('-');
			num = -num;
		}
		if (num > 9) write<int>(num / (int)(10));
		putchar(num % 10 + '0');
	}
	template <>
	inline void write<unsigned int>(unsigned int num) {
		if (num > 9) write<unsigned int>(num / (unsigned int)(10));
		putchar(num % 10 + '0');
	}
	template <>
	inline void write<long long>(long long num) {
		if (num < 0) {
			putchar('-');
			num = -num;
		}
		if (num > 9) write<long long>(num / (long long)(10));
		putchar(num % 10 + '0');
	}
	template <>
	inline void write<unsigned long long>(unsigned long long num) {
		if (num > 9) write<unsigned long long>(num / (unsigned long long)(10));
		putchar(num % 10 + '0');
	}
	template <>
	inline void write<__int128>(__int128 num) {
		if (num < 0) {
			putchar('-');
			num = -num;
		}
		if (num > 9) write<__int128>(num / (__int128)(10));
		putchar(num % 10 + '0');
	}
	template <>
	inline void write<unsigned __int128>(unsigned __int128 num) {
		if (num > 9) write<__int128>(num / (__int128)(10));
		putchar(num % 10 + '0');
	}
	template <>
	inline void write<float>(float num) {
		write<long long>((long long)(num));
		num -= (long long)(num);
		if (num < 0) num = -num;
		if (num > 0) {
			putchar('.');
			while (k--) {
				num *= 10;
				if (num == 0) putchar('0');
				else putchar((long long)(num) + '0');
				num -= (long long)(num);
			}
		}
	}
	template <>
	inline void write<double>(double num) {
		write<long long>((long long)(num));
		num -= (long long)(num);
		if (num < 0) num = -num;
		if (num > 0) {
			putchar('.');
			while (k--) {
				num *= 10;
				if (num == 0) putchar('0');
				else putchar((long long)(num) + '0');
				num -= (long long)(num);
			}
		}
	}
	template <>
	inline void write<long double>(long double num) {
		write<long long>((long long)(num));
		num -= (long long)(num);
		if (num < 0) num = -num;
		if (num > 0) {
			putchar('.');
			while (k--) {
				num *= 10;
				if (num == 0) putchar('0');
				else putchar((long long)(num) + '0');
				num -= (long long)(num);
			}
		}
	}
	template <>
	inline void write<__float128>(__float128 num) {
		write<long long>((long long)(num));
		num -= (long long)(num);
		if (num < 0) num = -num;
		if (num > 0) {
			putchar('.');
			while (k--) {
				num *= 10;
				if (num == 0) putchar('0');
				else putchar((long long)(num) + '0');
				num -= (long long)(num);
			}
		}
	}
	template <>
	inline void write<string>(string str) {
		int x = 0;
		for (auto y : str) if (++x > base) cout << y;
	}
	inline void writeendl() {
		putchar('\n');
	}
	inline void write_(){
		putchar(' ');
	}
	template <typename T, typename... Args>
	inline void write(T & t, Args & ... args) {
		write(t);
		if constexpr (sizeof...(args) > 0) write(args...);
	}
}
using namespace Write;
const char __ = ' ';
const char endl = '\n';
int main() {
	write("我是蒟蒻");
}
