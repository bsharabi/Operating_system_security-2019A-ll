def at_bash(str1):
    list1=list(str1)
    ar="תשרקצפעסנמללכייטטחזווההדגבא"
    ab="אבגדהוזחטיךכלםמןנסעףפץצקרשת"
    for x in range(0,len(he)):
        for i in range(0,len(ab)):
            if(str1[x]==ab[i]):
                list1[x]=ar[i]
    list1="".join(list1[::-1])
    print(list1)

he=input("Enter your string\n")
print(he[::-1])
at_bash(he)