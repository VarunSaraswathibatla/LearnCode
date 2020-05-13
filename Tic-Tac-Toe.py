"""                                           
                                                   VARUN TIC-TAC-TOE MANIA
This program is my Tic-Tac-Toe Game.......
It has both Single and Two Player options.............
Try this once and have Fun.....................
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

def player1(p1):
    
    z=int(input("%s enter your choice from 1 to 9:"%play1))
    z=z-1
    if(z>=0 and z<9):
        if(z not in p2):
            if(z not in p1):
                    p1.append(z)
                    board[z]="O"
                    display(board)
            else:
                print("Space is already occupied....Try again")
                player1(p1)
            
            
        else:
            print("Space is already occupied....Try again")
            player1(p1)
    else:
            print("Invalid input:Please try again")
            player1(p1)

def playersingle(p1,userchoice):
    
    z=int(input("%s enter your choice from 1 to 9:"%a))
    z=z-1
    if(z>=0 and z<9):
        if(z not in p2):
            if(z not in p1):
                    p1.append(z)
                    board[z]=userchoice
                    display(board)
            else:
                print("Space is already occupied....Try again")
                playersingle(p1,userchoice)
            
            
        else:
            print("Space is already occupied....Try again")
            playersingle(p1,userchoice)
    else:
            print("Invalid input:Please try again")
            playersingle(p1,userchoice)            

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




def player2(p2):
    z=int(input("%s please enter your choice from 1 to 9:"%play2))
    z=z-1
    if(z>=0 and z<9):
        if(z not in p1):
            if(z not in p2):
                p2.append(z)
                board[z]="X"
               
                display(board)
                
            else:
                
                print("Space is already occupied....Try again")
                player2(p2)
        else:
            print("Space is already occupied....Try again")
            player2(p2)
    else:
            print("Invalid input:Please try again")
            player2(p2)

   


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
                                          
def gamesingle(turn,board,compopt) :
     if turn==1:
        for i in range(4):
        
        
            playersingle(p1,userchoice)
            if(win(board,turn)=="X"):
                print("Computer won the match")
                break
            elif(win(board,turn)=="O"):
                print("%s won the match"%a)
                break
            playercomp(p2,compopt)
            if(win(board,turn)=="X"):
                print("Computer won the match")
                break
            elif(win(board,turn)=="O"):
                print("%s won the match"%a)
                break
            elif(win(board,turn)==False):
                print("Its a Draw!")
                break
    
        else:
            playersingle(p1,userchoice)
            if(win(board,turn)=="X"):
                print("Computer won the match")
                
            elif(win(board,turn)=="O"):
                print("%s won the match"%a)
                
            else:
                print("Its a Draw")
        
    
     else:
        for i in range(4):
        
               playercomp(p2,compopt)
               if(win(board,turn)=="X"):
                       print("%s won the match"%a)
                       break
               elif(win(board,turn)=="O"):
                         print("Computer won the match")
                         break
               playersingle(p1,userchoice)
               if(win(board,turn)=="X"):
                       print("%s won the match"%a)
                       break
               elif(win(board,turn)=="O"):
                         print("Computer won the match")
                         break
               elif(win(board,turn)==False):
                    print("Its a Draw!")
                    break
        else:
           playercomp(p2,compopt)
           if(win(board,turn)=="X"):
                       print("%s won the match"%a)
    
    
           elif(win(board,turn)=="O"):
                         print("Computer won the match")
                         

           else:
               print("Its a Draw")


def game(turn,board):
    

        for i in range(4):
        
        
            player1(p1)
            if(win(board,turn)=="X"):
                print("%s won the match"%play2)
                break
            elif(win(board,turn)=="O"):
                print("%s won the match"%play1)
                break
            player2(p2)
            if(win(board,turn)=="X"):
                print("%s won the match"%play2)
                break
            elif(win(board,turn)=="O"):
                print("%s won the match"%play1)
                break
            elif(win(board,turn)==False):
                print("Its a Draw!")
                break
         
        else:
            player1(p1)
            if(win(board,turn)=="X"):
                print("%s won the match"%play2)
                
            elif(win(board,turn)=="O"):
                print("%s won the match"%play1)
                
            else:
                print("Its a Draw")
              
            
  
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
                      gamesingle(turn,board,compopt)
                      
                else:
                     print("So",b," option will be 'O' he  will start first...")
                     display(board)
                     
                     compopt="O"
                     userchoice="X"
                     turn=0
                     
                     gamesingle(turn,board,compopt) 
            playagain=input("Wanna Try Again.......(Y/N): ")
            if playagain=="Y" or playagain=="y":
                continue
            else:
                print("THANK YOU.............HOPE YOU HAD FUN.......")
                break
