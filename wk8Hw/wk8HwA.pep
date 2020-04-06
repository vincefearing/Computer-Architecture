         BR      main        
num:     .BLOCK  2           
res1:    .BLOCK  2           
res2:    .BLOCK  2           
res3:    .BLOCK  2           
main:    DECI    num,d       
         LDWA    num,d       
         ANDA    7,i         
         STWA    res1,d      
         LDWA    num,d       
         ASRA                
         ASRA                
         ASRA                
         STWA    num,d       
         LDWA    num,d       
         ANDA    7,i         
         STWA    res2,d      
         LDWA    num,d       
         ASRA                
         ASRA                
         ASRA                
         STWA    num,d       
         LDWA    num,d       
         ANDA    7,i         
         STWA    res3,d      
         DECO    res3,d      
         DECO    res2,d      
         DECO    res1,d      
         STOP                
         .END                  
Vincent Fearing