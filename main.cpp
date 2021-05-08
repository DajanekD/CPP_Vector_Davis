//Dajanek Davis
// 
#include <iostream>
#include <vector>
using namespace std;

int main(){
  
  vector<double>weightsObtained;
  //variablers
  int i;
  double weight;
  double total;
  double max;

  // 5 iterations of obtaining weights
  for (i=0;i<5;++i){
    cout << "Enter weight " << (i+1)<< ":\n";
    cin >> weight;
    weightsObtained.push_back(weight);
  }

  //caluculating
  max=weightsObtained[0];

  printf("You entered:");
  for(i=0;i<5;++i){
    cout << " "<< weightsObtained[i];
    total +=weightsObtained[i];
    if(weightsObtained[i] > max){
      max = weightsObtained[i];
    }
  }

  cout << "\n\n Total weight: " << total << endl;
  cout << "Average weight: " << total/5 << endl;
  cout << "Max weight: " << max << endl;

return 0;
}