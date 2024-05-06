#include<iostream>
using namespace std;
int main()
{
	int monthno;
	cout<<"enter a month no"<<endl;
	cin>>monthno;
	if(monthno=1){cout<<"January=31 days";
	}else if(monthno=2){cout<<"feburary=28 days";
	}else if(monthno=3){cout<<"march=31 days";
	}else if(monthno=3){cout<<"aprile=30 days";
	}else if(monthno=5){cout<<"may=31";
	}else if(monthno=6){cout<<"june";
	}else if(monthno=7){cout<<"july=31 days";
	}else if(monthno=8){cout<<"aguast=31 days";
	}else if(monthno=9){cout<<"september=30 days";
	}else if(monthno=10){cout<<"octumber=31 days";
	}else if(monthno=11){cout<<"november=30 days";
	}else if(monthno=12){cout<<"december=31 days";
	}else{cout<<"Invalide Number.Please enter between 1-12";
	}
	return 0;
}
