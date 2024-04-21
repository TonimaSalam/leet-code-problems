# minimum-length-of-string-after-deleting-similar-ends  

## findings:  
1. suffix and prefix should contain same character and all characters in suffix or prefix should be same. But length of the suffix and prefix is not necessary to be same.  
2. suffix and prefix should not intersect.  

## Approach:  
so we can maintain two variable left and right that will store the starting and ending index of remaining portion of the string after delete. And every time we will find suffix and prefix containing same character. if at any time get prefix or suffix of different character or left>=right, we will stop the process. And left should not be greater than string length and right should not be less than 0.  