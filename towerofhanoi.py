def main():
    def towerofhanoi(n,x,y,z):
        if n==1:
            print("move top disc of tower",x,"to tower",y)
            return
        towerofhanoi(n-1,x,z,y)
        print("move disc",n,"rod","from",x,"to",y)
        towerofhanoi(n-1,z,y,x)
    n=int(input("enter number of discs"))
    towerofhanoi(n,'A','B','C')
if __name__=="__main__":
    main()
