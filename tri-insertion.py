""""
l=[5,4,20,455,9]
def tri_par_insertion(l):
    for i in range (len(l)):
        cle= l[i]
        j=i-1
        while j>=0 and cle<l[j]:
            l[j],l[j+1]=l[j+1],l[j]
            j-=1
print(tri_par_insertion(l))
print(l)
"""
l=[55,100,990,1,448]
def tri_par_insertion(l):
    for i in range(len(l)):
        cle=i
        j= i-1
        while j>=0 and cle>l[j]:
            l[j],l[j+1]=l[j+1],l[j]
            j-=1
print(tri_par_insertion(l))
print(l)