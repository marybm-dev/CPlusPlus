bool IsPalindrome(string s);
bool IsDivisibleBy3(unsigned int n);
bool ContainsDog(string s);

int main()
{
    cout << "at: " << IsPalindrome("at") << endl;
    cout << "racecar: " << IsPalindrome("racecar") << endl;
    cout << "racecars: " << IsPalindrome("racecars") << endl;

    cout << endl;

    cout << "5: " << IsDivisibleBy3(5) << endl;
    cout << "15: " << IsDivisibleBy3(15) << endl;
    cout << "240: " << IsDivisibleBy3(240) << endl;
    cout << "2: " << IsDivisibleBy3(2) << endl;

    cout << endl;

    cout << "doghouse: " << ContainsDog("doghouse") << endl;
    cout << "hotdog stand: " << ContainsDog("hotdog stand") << endl;
    cout << "elephant: " << ContainsDog("elephant") << endl;
}

bool IsPalindrome(string s)
{
    if (s.length() <= 1)
        return true;

    if (s[0] != s[s.length()-1])
        return false;

    return (IsPalindrome(s.substr(1,s.length()-2)));
}

bool IsDivisibleBy3(unsigned int n)
{
    if (n == 0)
        return true;
    if (n < 3)
        return false;

    return (IsDivisibleBy3(n - 3));
}

int CountCannonballs(int n)
{
    if (n == 0)
        return 0;
    return (n*n + CountCannonballs(n-1));
}
}
