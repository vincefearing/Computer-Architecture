         BR      main        
char1:   .BLOCK  1           
char2:   .BLOCK  1           
char3:   .BLOCK  1           
num1:    .BLOCK  2           
num2:    .BLOCK  2           
num3:    .BLOCK  2           
base:    .WORD   8           
sum:     .BLOCK  2           

main:    LDBA    charIn,d    
         STBA    char1,d     
         LDBA    charIn,d    
         STBA    char2,d     
         LDBA    charIn,d    
         STBA    char3,d     

;converting to int
         LDBA    char1,d     
         SUBA    '0',i       
         STWA    num1,d      
         LDBA    char2,d     
         SUBA    '0',i       
         STWA    num2,d      
         LDBA    char3,d     
         SUBA    '0',i       
         STWA    num3,d      
;converting to base 10
         LDWA    num1,d      
         ASLA                
         ASLA                
         ASLA                
         ASLA                
         ASLA                
         ASLA                
         STWA    num1,d      
         LDWA    num2,d      
         ASLA                
         ASLA                
         ASLA                
         STWA    num2,d      
         LDWA    sum,d       
         ADDA    num1,d      
         ADDA    num2,d      
         ADDA    num3,d      
         STWA    sum,d       

         DECO    sum,d       

         STOP                
         .END                  
Vincent Fearing