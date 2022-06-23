#C:\Users\alihu\OneDrive\Desktop.chat.txt
f = open("C:\\Users\\alihu\OneDrive\\Desktop\\chat.txt", "r")
l=[]
counter=0
for x in f:
    atpos = x.find(" ")
    if counter %2==0:
       #print(x[:atpos])
        l.append(x)
                
    
    counter +=1   
print(max(set(l), key = l.count).split()[0])

  