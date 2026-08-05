/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* numbers, int numbersSize, int target, int* returnSize) {
    int i = 0;
    int j = numbersSize-1 ;

    while(i < j)
    {
        if((numbers[i] + numbers[j]) == target )
        {
            int *ans = (int* )malloc(2* sizeof(int));
            ans[0] = i+1;
            ans[1] = j+1;
            *returnSize = 2;
            return ans;

        }
        else if((numbers[i] + numbers[j]) < target)
        {
            i++;
        }
        else
        {
            j--;
        }

    }
    *returnSize = 0;
    return NULL;
    
}