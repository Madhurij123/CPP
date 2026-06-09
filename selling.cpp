#include<iostream>
#include <iomanip>

using namespace std;
int main(void)
{
  float no_of_shares,selling_price,purchase_price;
  float net_selling_price,net_purchase_price, b_s_r,b_p_r,total_brokage,service_tax,stt,stamp_duty, total_turn,r_c,total_tax,net_profit;
  cout<<"Enter No of shares=";
  cin>>no_of_shares;
  
   cout<<"Enter selling  price=";
  cin>>selling_price;
  
  cout<<"Enter purchase price=";
  cin>>purchase_price;
  

  cout<< setfill('.') << setw(60) <<"\n";
  cout<< setfill(' ') << setw(35) << "Share Trading Statement" <<endl;
  cout<< setfill('.') << setw(60) <<"\n";

cout<<setfill('.') << setw(50)<< left << " Selling Price";
  net_selling_price =  selling_price * no_of_shares;
  cout<< setw(2) << right <<  "Rs."<<selling_price<<"\n";
  
  cout<<setfill('.') << setw(50)<< left<<"Purchase Price";
  net_purchase_price =  purchase_price * no_of_shares;
   cout<< setw(2) << right<< "Rs."<<purchase_price<<"\n";
  
  
  cout<<setfill('.') << setw(50)<< left << "Net Selling Price";
  net_selling_price =  selling_price * no_of_shares;
  cout<< setw(2) << right <<  "Rs."<<net_selling_price<<"\n";
  
  cout<<setfill('.') << setw(50)<< left<<"Net Purchase Price";
  net_purchase_price =  purchase_price * no_of_shares;
   cout<< setw(2) << right<< "Rs."<<net_purchase_price<<"\n";
  
  cout<<setfill('.') << setw(50)<< left<<"Brokage selling Price";
  b_s_r = net_selling_price*0.03/100;
   cout<<setw(2) << right<<"Rs."<<b_s_r<<"\n";
  
  cout<<setfill('.') << setw(50)<< left<<"Brokage purchase Price";
  b_p_r = net_purchase_price*0.03/100;
  cout<<setw(2) << right<<"Rs."<<b_p_r<<"\n";
  
  cout<<setfill('.') << setw(50)<< left<<"Total Brokage";
  total_brokage= b_s_r + b_p_r;
  cout<<setw(2) << right<<"Rs."<<total_brokage<<"\n";
  
  cout<<setfill('.') << setw(50)<< left<<"service tax";
  service_tax=total_brokage*10.36/100;
  cout<<setw(2) << right<<"Rs."<<service_tax<<"\n";
  
  cout<<setfill('.') << setw(50)<< left<<"security transaction tax";
  stt=net_selling_price*0.025/100;
  cout<<setw(2) << right<<"Rs."<<stt<<"\n";
  
  cout<<setfill('.') << setw(50)<< left<<"total turnover";
  total_turn=net_selling_price + net_purchase_price;
  cout<<setw(2) << right<<"Rs."<<total_turn<<"\n";
  
  cout<<setfill('.') << setw(50)<< left<<"stamp_duty";
  stamp_duty = total_turn *0.002/100;
  cout<<setw(2) << right<<"Rs."<<stamp_duty<<endl;
  
  cout<<setfill('.') << setw(50)<< left<<"Regulartatoy Charges";
  r_c = total_turn * 0.004/100;
  cout<<setw(2) << right<<"Rs."<<r_c<<"\n";
  
  cout<<setfill('.') << setw(50)<< left<<"Total tax";
  total_tax= total_brokage + stt + total_turn + r_c + stamp_duty;
  cout<<setw(2) << right<<"Rs."<<total_tax<<"\n";
  
  cout<<setfill('.') << setw(50)<< left<<"Net Profit";
  net_profit = net_selling_price + net_purchase_price - total_tax;
  cout<<setw(2) << right<<"Rs."<<net_profit;
  
  return 0;
}
