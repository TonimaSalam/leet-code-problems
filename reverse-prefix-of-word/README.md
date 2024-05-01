## reverse-prefix-of-word  

# Findings:  
As i need to reverse the segment of word that starts at index 0 and ends at the index of the first occurrence of ch. So need the position of the first occurrence of ch.

# Approach:  
first I will traverse the word untill I get ch. After I get ch, I will store the first position of ch in pos variable.  
for the reverse operation I will swap the first letter with the last one, second letter with the second last letter untill pos/2 th position.  

