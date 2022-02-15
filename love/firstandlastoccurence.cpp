int result(vector<int> arr, int t)
{
    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = 0; j < arr.size(); j++)
        {
            int ending = 0;
            int starting = 0;
            if (arr[i] == t)
            {
                starting = i;
            }
            if (arr[i] != arr[j])
            {
                ending = j;
                i++;
                j++;
            }
            return starting;
            return ending;
        }
    }