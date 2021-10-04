//Optimized O(n)
class Solution {
  public:
    bool halvesAreAlike(string s) {

      int count1 = 0;
      int count2 = 0;

      for (int i = 0; i < s.size(); i++) {
        char ele = tolower(s[i]);

        if ((ele == 'a') or(ele == 'e') or(ele == 'i') or(ele == 'o') or(ele == 'u')) {
          if (i < s.size() / 2)
            count1++;
          else
            count2++;

        }

      }

      if (count1 == count2)
        return true;

      return false;

    }
};