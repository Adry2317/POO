#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;

 
/**
 * @brief a struct to keep information of the vehicle.
 */
struct vehicle {
    
    string brand; ///< brand of the vehicle.
    string model; ///<  model of the vehicle.
    string plate; ///< plate of the vehicle.
    int manufactureYear; 
    float price;
};

/**
 * Function that assing values to the struct vehicle
 * @param x1 (by referce)
 */
void kbRead ( vehicle &x1){
    do{
        cout<<" Introduce the brand of the vehicle: "<<endl;
        cin>>x1.brand;
        
    }while( x1.brand.length()<=3 || x1.brand.length()>=20 );
    
    do{
        cout<<" Introduce the model of the vehicle: "<<endl;
        cin>>x1.model;
        
    }while( x1.model.length()<=3 || x1.model.length()>=20 );
    
    do{
        cout<<"Introduce the plate of the vehicle: "<<endl;
        cin>>x1.plate;
        
    }while( x1.plate.length()<6 || x1.plate.length()>6 );

    cout<<" Introduce the manufacture year of the vehicle: "<<endl;
    cin>> x1.manufactureYear;
    
    cout<<" Introduce the price of the vehicle: "<<endl;
    cin>> x1.price;
    cout<<endl;
}
    
/**
 * Function that assing value to the struct vehicle
 * @param x1(by pointer)
 */
void kbRead ( vehicle *x1 ){
    do{
        cout<<" Introduce the brand of the vehicle: "<<endl;
        cin>> x1->brand;
        
    }while( x1->brand.length()<=3 && x1->brand.length()>=20);
    
    do{
        cout<<" Introduce the model of the vehicle: "<<endl;
        cin>> x1->model;
        
    }while( x1->model.length()<=3 || x1->model.length()>=20);
    
    do{
        cout<<" Introduce the plate of the vehicle: "<<endl;
        cin>> x1->plate;
        
    }while( x1->plate.length()<6 || x1->plate.length()>6);

    cout<<" Introduce the manufacture year of the vehicle: "<<endl;
    cin>> x1->manufactureYear;
    
    cout<<" Introduce the price of the vehicle: "<<endl;
    cin>> x1->price;
    
    cout<<endl;
}
    
/**
 * This function show the information of a vehicle in the screen;
 * @param x1 (information of the vehicle)
 * @return 
 */
 showOnScreen( vehicle &x1 ){
     cout<<" ////////////////////////////////////////////////////////////////////////// "<<endl;
    cout<<" The Brand of the vehicle: "<< x1.brand<<endl<<endl;
   cout<<" The Model of the vehicle: "<< x1.model<<endl<<endl;
   cout<<" The Plate of the vehicle: "<< x1.plate<<endl<<endl;
   cout<<" The Year's manufacture of the vehicle: "<< x1.manufactureYear<<endl<<endl;
   cout<<" The Price of the vehicle: "<< x1.price<<endl<<endl;
   cout<<" ////////////////////////////////////////////////////////////////////////// "<<endl;
}    
 
 /**
  * This function show the information of a vehicle in the screen;
  * @param x1 (information of the vehicle)
  * @return 
  */
  showOnScreen( vehicle *x1){
      cout<<" ////////////////////////////////////////////////////////////////////////// "<<endl;
    cout<<" The Brand of the vehicle: "<< x1->brand<<endl<<endl;
   cout<<" The Model of the vehicle: "<< x1->model<<endl<<endl;
   cout<<" The Plate of the vehicle: "<< x1->plate<<endl<<endl;
   cout<<" The Year's manufacture of the vehicle: "<< x1->manufactureYear<<endl<<endl;
   cout<<" The Price of the vehicle: "<< x1->price<<endl<<endl;
   cout<<" ////////////////////////////////////////////////////////////////////////// "<<endl;
}   
  
  showNewerThan(vehicle s1[], int year, int tam){
      for ( int i=0; i < tam; i++ ){
          if( year <= s1[i].manufactureYear){
              showOnScreen( s1[i] );
          }
          
          
      }
      
  }
  

  int MAX_VEHICLES=10;
  /**
 * 
 * @param argc Number of parameters in the command line.
 * @param argv Vector of parameters  in the command line.
 * @return 
 */
int main(int argc, char** argv) {
    int Tvehicle=0;
    int year;
    vehicle s1[MAX_VEHICLES];
    
    cout<<"Introduce the number of the vehicle: "<<endl;
    cin>>Tvehicle;
 
    if(Tvehicle<=MAX_VEHICLES){
        
        for (int i=0;i<Tvehicle;i++){
           kbRead (  s1[i]  ); 
           }
        
        for (int i=0;i<Tvehicle;i++){
            showOnScreen( s1[i] );
        }
        
      int max = -999, posI = 0;
      
      for( int i=0;i<Tvehicle;i++){
          if ( max<s1[i].price ){
              
              max = s1[i].price;
              posI = i;
          }
      }
      
      cout<<"The data of the most expensive vehico are: "<<endl;
      showOnScreen(s1[posI]);
     
    }

    cout<<"Introduce one year to find the model: "<<endl;
    cin>>year;

    cout<<"The car thar are newer than 2005: "<<endl;
    showNewerThan(s1,year, Tvehicle);
    return 0;
}

