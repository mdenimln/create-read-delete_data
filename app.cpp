#include <iostream>
#include <string>
using namespace std;


void head() {
    cout<<"==================== ============== ===================="<<endl;
    cout<<"==================== DATA MAHASISWA ===================="<<endl;
    cout<<"==================== ============== ===================="<<endl;
}
void data(int i){
    if( i == 0){
        cout<<" __________________________________________________________________ "<<endl;
        cout<<"|  |               |               |               |               |"<<endl;
        cout<<"|No| Nama          | Alamat        | Nim           | Jurusan       |"<<endl;
        cout<<"|__|_______________|_______________|_______________|_______________|"<<endl;
    }
}

string mahasiswa[100][100];
int jum_mahasiswa = 0;
string menu[] = {"Tambah data", "Tampilkan data","Hapus data",};  
char lanjut;
int pilih;
int hapus;

int main(){

   
  
 
    do{
        system("cls");
        head();
        cout<<endl;
        
        int jml = sizeof(menu)/sizeof(*menu);
        for(int i = 0; i < jml; i++){
        cout<<i+1<<". "<<menu[i]<<endl;
        }
        
        cout<<"                                         "<<endl;
        cout<<"PILIH [1]/[3] : ";
        cin>>pilih;
    
        if(pilih == 1){
            for(int i = jum_mahasiswa; i <= jum_mahasiswa; i++){
                cout<<"masukan nama    : "; cin >> mahasiswa[i][0];
                cout<<"masukan alamat  : "; cin >> mahasiswa[i][1];
                cout<<"masukan nim     : "; cin >> mahasiswa[i][2];
                cout<<"masukan jurusan : "; cin >> mahasiswa[i][3];
                cout<<endl;
        		cout<<"Data telah di tambahkan"<<endl;
            }
            jum_mahasiswa++;

        } else if(pilih == 2){
        	system("cls");
            head();
            cout<<endl;
            for(int i = 0; i < jum_mahasiswa ; i++){
                for(int j = 0; j < 4; j++){
                    switch (mahasiswa[i][j].length()){
                    case 1 :
                        mahasiswa[i][j] += "             | ";
                        break;
                    case 2 :
                        mahasiswa[i][j] += "            | ";
                        break;
                    case 3 :
                        mahasiswa[i][j] += "           | ";
                        break;
                    case 4 :
                        mahasiswa[i][j] += "          | ";
                        break;
                    case 5 :
                        mahasiswa[i][j] += "         | ";
                        break;
                    case 6 :
                        mahasiswa[i][j] += "        | ";
                        break;
                    case 7 :
                        mahasiswa[i][j] += "       | ";
                        break;
                    case 8 :
                        mahasiswa[i][j] += "      | ";
                        break;
                    case 9 :
                        mahasiswa[i][j] += "     | ";
                        break;
                    case 10 :
                        mahasiswa[i][j] += "    | ";
                        break;
                    case 11 :
                        mahasiswa[i][j] += "   | ";
                        break;
                    case 12 :
                        mahasiswa[i][j] += "  | ";
                        break;
                    case 13 :
                        mahasiswa[i][j] += " | ";
                        break;
                    case 14 :
                        mahasiswa[i][j] += "| ";
                        break;
                    
                    default:
                        break;
                    }
                }
            }
            for(int i = 0; i < jum_mahasiswa ; i++){
                data(i);
                cout<<"|"<< i+1 <<".| ";
                for(int j = 0; j < 4; j++){
                
                    cout<< mahasiswa[i][j];
                }
                cout << endl;
                
                cout<<"|__|_______________|_______________|_______________|_______________|"<<endl;
            }

        } else if(pilih == 3){
        	head();
            cout<<endl;
            for(int i = 0; i < jum_mahasiswa ; i++){
                for(int j = 0; j < 4; j++){
                    switch (mahasiswa[i][j].length()){ // sandi 
                    case 1 :
                        mahasiswa[i][j] += "             | ";
                        break;
                    case 2 :
                        mahasiswa[i][j] += "            | ";
                        break;
                    case 3 :
                        mahasiswa[i][j] += "           | ";
                        break;
                    case 4 :
                        mahasiswa[i][j] += "          | ";
                        break;
                    case 5 :
                        mahasiswa[i][j] += "         | ";
                        break;
                    case 6 :
                        mahasiswa[i][j] += "        | ";
                        break;
                    case 7 :
                        mahasiswa[i][j] += "       | ";
                        break;
                    case 8 :
                        mahasiswa[i][j] += "      | ";
                        break;
                    case 9 :
                        mahasiswa[i][j] += "     | ";
                        break;
                    case 10 :
                        mahasiswa[i][j] += "    | ";
                        break;
                    case 11 :
                        mahasiswa[i][j] += "   | ";
                        break;
                    case 12 :
                        mahasiswa[i][j] += "  | ";
                        break;
                    case 13 :
                        mahasiswa[i][j] += " | ";
                        break;
                    case 14 :
                        mahasiswa[i][j] += "| ";
                        break;
                    
                    default:
                        break;
                    }
                }
            }
            for(int i = 0; i < jum_mahasiswa ; i++){
                data(i);
                cout<<"|"<< i+1 <<".| ";
                for(int j = 0; j < 4; j++){
                
                    cout<< mahasiswa[i][j];
                }
                cout<<endl;
                cout<<"|__|_______________|_______________|_______________|_______________|"<<endl;
                
            }
            if(jum_mahasiswa > 0){
            	cout<<"_______________________________________"<<endl;
	            cout<<"Program Hapus Data"<<endl;
	            cout<<endl;
	            cout<<"Masukan nomor data yang mau di hapus ? "<<"[1]-["<<jum_mahasiswa+1<<"] !  ";cin>> hapus;
	            for(int i = hapus-1; i < jum_mahasiswa; i++){
	            	for(int j=0; j<4; j++){
	            		mahasiswa[i][j] = mahasiswa[i+1][j];
					}
				}
				jum_mahasiswa--;
				cout<<"___________________________________________________________________"<<endl;
				for(int i = 0; i < jum_mahasiswa ; i++){
                data(i);
                cout<<"|"<< i+1 <<".| ";
                for(int j = 0; j < 4; j++){
                
                    cout<< mahasiswa[i][j];
                }
                cout<<endl;
                cout<<"|__|_______________|_______________|_______________|_______________|"<<endl;
                
            }
			}
            
			
        	
		}

       
        cout<<endl;

        kembali:
        cout<<"Kembali ke Menu ? (Y/T) "; cin >> lanjut;
    } while(toupper(lanjut) == 'Y');
    
    string coba = "mama";
    int length = coba.length();
   
    
    


    return 0;
}

// Function

