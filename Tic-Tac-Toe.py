""""                                          WELCOME TO VARUN TIC-TAC-TOE MANIA    

It is my Tic-Tac-Toe game.........
It has both Single and Two Player Options........
Try it and have Fun......

"""



import random
def display(board):
    print("\n")
    print("               ",board[0]+' | '+ board[1]+' | '+board[2])
    print("              ---------------")
    print("               ",board[3]+' | '+ board[4]+' | '+board[5])
    print("              ---------------")
    print("               ",board[6]+' | '+ board[7]+' | '+board[8])
    print("\n")

def player1(p1,userchoice,play1):
    
    z=int(input("%s enter your choice from 1 to 9:"%play1))
    z=z-1
    if(z>=0 and z<9):
        if(z not in p2):
            if(z not in p1):
                    p1.append(z)
                    p2.append(z)
                    board[z]=userchoice
                    display(board)
            else:
                print("Space is already occupied....Try again")
                player1(p1,userchoice,play1)
            
            
        else:
            print("Space is already occupied....Try again")
            player1(p1,userchoice,play1)
    else:
            print("Invalid input:Please try again")
            player1(p1,userchoice,play1)



def playercomp(p2,compopt):
    lis=[0,1,2,3,4,5,6,7,8]
    z=random.choice(lis)
    if(z not in p2):
            if(z not in p1):
                    p1.append(z)
                    board[z]=compopt
                    lis.remove(z)
                    display(board)
            else:
                playercomp(p2,compopt)
    else:
                playercomp(p2,compopt)



def win(board,turn):
    
    if(board[0]==board[1]==board[2]=="X" or  
    board[3]==board[4]==board[5]=="X" or          
    board[6]==board[7]==board[8]=="X" or          
    board[0]==board[3]==board[6]=="X" or 
    board[1]==board[4]==board[7]=="X" or
    board[2]==board[5]==board[8]=="X" or 
    board[0]==board[4]==board[8]=="X" or 
    board[2]==board[4]==board[6]=="X")  :

          return "X"
                  
    elif   (board[0]==board[1]==board[2]=="O" or  
            board[3]==board[4]==board[5]=="O" or          
            board[6]==board[7]==board[8]=="O" or          
            board[0]==board[3]==board[6]=="O" or 
            board[1]==board[4]==board[7]=="O" or
            board[2]==board[5]==board[8]=="O" or 
            board[0]==board[4]==board[8]=="O" or 
            board[2]==board[4]==board[6]=="O"):


                               return "O"
                                          
def gamesingle(turn,board,compopt,userchoice) :
   if turn==1:
       play1=a
       for i in range(4):
           player1(p1,"O",play1)
           if win(board,turn)=="O":
                    print("%s is winner"%play1)
                    break
           playercomp(p2,compopt)
           if win(board,turn)=="X":
                    print("Computer won the match")
                    break
       else:
           player1(p1,"O",play1)
           if win(board,turn)=="O":
                    print("%s is winner"%play1)
           else:
               print("Its a Draw")
            

   else:
        play1=a
        for i in range(4):
               playercomp(p2,compopt)
               
               if win(board,turn)=="O":
                        print("Computer won the match")
                        break
               player1(p1,"X",play1)
               if win(board,turn)=="X":
                    print("%s is winner"%play1)
                    break

        else:
            playercomp(p2,compopt)
               
            if win(board,turn)=="O":
                        print("Computer won the match")
                        
            else:
                print("Its Draw")

def game(turn,board):
    if turn==1:
        play1,play2=a,b
    else:
         play1,play2=b,a
    for i in range(4):
            player1(p1,"O",play1)
            if win(board,turn)=="O":
                print("%s is winner"%play1)
                break
            player1(p2,"X",play2)
            if win(board,turn)=="X":
                print("%s is winner"%play2)
                break
    else:   
          player1(p1,"O",play1)
          if win(board,turn)=="O":
                print("%s is winner"%play1)
          else:
              print("Its Draw")
         
    
            
  
print("                              Welcome to  Varun Tic-Tac-Toe Mania                                                     ")
for w in range(100):
            board=list(' ' for i in range(9))
            a=input("Enter your name: ")
            opt=input("Wanna play Single or Two Player(S/T): ")
            if (opt=="T" or opt=="t"):
                        b=input("Enter your friend's name: ")
                        p1=[]
                        p2=[]               
                        ch1=input("Enter your choice(X/O): ")
                        if ch1=="X" or ch1=="x":
                            print("So",b," option will be 'O' so he will start first")
                            turn=0
                            play1,play2=b,a
                            
                        else:
                            print("So",b, "option will be 'X' so you will start first")
                            turn=1
                            play1,play2=a,b
                        display(board)
                        game(turn,board)
            else:
                b="Computer"
                p1=[]
                p2=[]
                ch1=input("Enter your choice(X/O): ")
                if ch1=="O" or ch1=="o":
                      print("So",b," option will be 'X' so you will start first...")
                      display(board)
                      
                      turn=1
                      compopt="X"
                      userchoice="O"
                      gamesingle(turn,board,compopt,userchoice)
                      
                else:
                     print("So",b," option will be 'O' he  will start first...")
                     display(board)
                     
                     compopt="O"
                     userchoice="X"
                     turn=0
                     
                     gamesingle(turn,board,compopt,userchoice) 
            playagain=input("Wanna Try Again.......(Y/N): ")
            if playagain=="Y" or playagain=="y":
                continue
            else:
                print("THANK YOU.............HOPE YOU HAD FUN.......")
                break
