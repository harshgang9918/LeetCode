class Solution
{
public:
    int maxActiveSectionsAfterTrade(string s)
    {
        int ones = count(s.begin(), s.end(), '1'); // counting all 1 in the entire stirng

        int zeros = 0;
        vector<int> zero;

        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == '0')
            {
                zeros++;
            }
            else
            {
                if (zeros > 0)
                {
                    zero.push_back(zeros);
                    zeros = 0;
                }
            }
        }

        if (zeros > 0)
            zero.push_back(zeros);

        int maxi = 0;

        for (int i = 0; i + 1 < zero.size(); i++)
        {
            maxi = max(maxi, zero[i] + zero[i + 1]);
        }

        return ones + maxi;
    }
};