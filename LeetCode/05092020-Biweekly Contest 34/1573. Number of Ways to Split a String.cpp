class Solution(object):
    def numWays(self, s):
        
        num = int(s)
        l = len(s)
        count = 0
        for j in range(l):
            if(s[j] == '1'):
                count += 1
        if(count % 3 != 0):
            return 0
        if(count == 0):
            o = l-2
            return (o*(o+1)//2) % 1000000007

        foreach = count//3
        num2 = int(s)
        count = 0
        i = 0
        while(count != foreach):
            if(s[i] == '1'):
                count += 1
            i+=1
        a = 0
        while(s[i] == '0'):
            a+=1
            i +=1
        count = 0
        i = 0
        while(count != foreach):
            if(s[l - i - 1] == '1'):
                count += 1
            i+=1
        b = 0
        while(s[l - i - 1] == '0'):
            b+=1
            i+=1
        return ((a+1) * (b+1)) % 1000000007
        
        