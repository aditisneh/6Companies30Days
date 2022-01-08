		    int dp[str.length()-1];
		    int n = str.length();
		 
		    if(str[0]=='0')
		        return 0;
		 
		    else   dp[0] = 1;
		    
		    for(int i=1;i<str.length();i++){
		        if(str[i]=='0' and str[i-1]=='0')
		            dp[i] = 0;
		          
		        else if(str[i-1]=='0' and str[i]!='0')
		           dp[i] =  dp[i-1]; //as 01 doesnt hold any value
		           
		        else if(str[i-1]!='0' and str[i]=='0'){
		            if(str[i]=='1' or str[i]=='2'){
		                  if(i>=2){
		                    dp[i] = dp[i-1] + dp[i-2];
		                }
		                else{
		                    dp[i] = dp[i-1] + 1;
		                }
		            }
		            else 
		            {
		                dp[i]=0;
		              
		               //30 40 doesnt hold any value
		        
		            }     
		          }
		        else{
		            //both non zero so check til 26
		         // if(stoi(str.substr(i-1,i+1)) <= 26){
		            if(str[i-1]== '1' || (str[i-1] =='2' && str[i]<'7')){   
		                if(i>=2){
		                    dp[i] = dp[i-1] + dp[i-2];
		                }
		                else{
		                    dp[i] = dp[i-1] + 1;
		                }
		               
		               
		            }
		            else{
		                
		                 dp[i] = dp[i-1]; 
		               
		            }
		               
		        }
		          
		    }
		  //  for(int i=0;i<n;i++){
		  //      cout<<endl<<dp[i]<<" ";
		  //  }
		    return (dp[n-1]%1000000007);