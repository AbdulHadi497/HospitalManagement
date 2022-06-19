#include <iostream>
#include <fstream>
#include <string>
using namespace std;
void info();
void medcheck();
void Xray();
void ctscan();
void mri();
void ultrasound();
void call_appoitment();
void timeslots();
void checktime();
void callappointment_med();
void makeappointment();
void availability();
void medicine();
//void medicinesearching();
int login();
struct userinfo {
	string name, fname, pnumber, gender;
	int age;
};

int time, num;
string name;
string slot[5];
int flagslot[5][5] = { 0 };
int main()
{
	int x;
	do
	{
		system("cls");
		cout<< "--------------------------------------------------------------\n";
		cout<< "                Welcome to St.Joseph Hospital :)\n";
		cout<< ".................Where Patients Are Everything................\n";
		cout<< "--------------------------------------------------------------\n";
		cout<< "What Facility do you want to take?\n";
		cout<< "1. About Us\n";
		cout<< "2. Medical Checkup\n";
		cout<< "3. X-ray\n";
		cout<< "4. Ct-scan\n";
		cout<< "5. MRI\n";
		cout<< "6. Ultrasound\n";
		cout<< "7. Exit(Only for Staff)\n";
		cout<< "8. All Medicines\n";
		cout<< "9. Medicine searching\n";
		cin>>num;
		switch (num)
		{
		case 1: info();
			break;
		case 2: medcheck();
			break;
		case 3: Xray();
			break;
		case 4: ctscan();
			break;
		case 5: mri();
			break;
		case 6: ultrasound();
			break;
		case 7: login();
			break;
		case 8: medicine();
			break;
		case 9: medicinesearching();
		
		}
		cout<< "__________________________________________________\n";
		cout<< "If you want to return to main menu press 1\n";
		cin>> x;
	} while (x == 1);
	main();
}
void info()
{
	system("cls");
	cout<< "\n"
		"---------------------------------------------------About Us-------------------------------------------------------------\n"
		"St, Joseph hosptial came into existence in 2009 thanks to the efforts and dedication of Muhammad Ibrahim the founder of this hospital. St. Joseph hosptial is an institution devoted to patient care and providing services while following international standards of quality. They also follow international guidelines for medical practices. The AIW puts special attention to the individual experiences, focusing on activities like 1 to 1 nurse care. Many different sources report this health center as one of high quality, with excellent professionals and a diverse range of specialties for the general public. \n"
		"                Over the years, we have focused on improving access to patients across the country . We invest heavily in new technology and employ ground-breaking research in treatment and care to best serve our patients. It is a privilege to be a part of an exceptional team of people who are passionate about providing the very best care for our patients and their families, and it is an honour to serve Pakistan.\n"
		"________________________________________________________________________________________________________________________\n";
}
void Xray()
{
	system("cls");
	int num;
	cout<< "--------------------X-Ray--------------------\n";
	cout<< "What type of X-ray do you want to choose?\n";
	cout<< "1. Mammogram\n";
	cout<< "2. Bone mineral density\n";
	cout<< "3. Fluoroscopy\n";
	cout<< "4. Orthopantomogram(OPG)\n";
	cout<< "5. Cephalometry(CEPH)\n";
	cin>>num;
	switch (num)
	{
	case 1: cout<< "--------------------MAMMOGRAM--------------------\n";
		cout<< "A mammogram is an x-ray of either one or both the breasts to help in the screening for breast cancer in women.\n";
		cout<< "-----------------------------------------------------\n";
		cout<< "Price: 800 Rs\n";
		call_appoitment();
		break;
	case 2: cout<< "--------------------BONE MINERAL DENSITY--------------------\n";
		cout<< "The bone mineral density test is an x-ray of the bones to measure the amount of calcium and other minerals in the bones..\n";
		cout<< "-----------------------------------------------------\n";
		cout<< "Price: 1200 Rs\n";
		call_appoitment();
		break;
	case 3: cout<< "--------------------FLUOROSCOPY--------------------\n";
		cout<< "Fluoroscopy is a type of clinical imaging that involves the passage of x-ray beams through the body to produce real time moving images of the internal parts of the body.\n";
		cout<< "-----------------------------------------------------\n";
		cout<< "Price: 2000 Rs\n";
		call_appoitment();
		break;
	case 4: cout<< "--------------------ORTHOPANTOMOGRAM--------------------\n";
		cout<< "An OPG gives a panoramic image of the mouth, giving information on the teeth and the bones of the upper and lower jaw.\n";
		cout<< "-----------------------------------------------------\n";
		cout<< "Price: 1500 Rs\n";
		call_appoitment();
		break;
	case 5: cout<< "--------------------CEPHALOMETRY--------------------\n";
		cout<< "A CEPH is used to obtain measurements and determine relationships of the structures of the lower face e.g. for plastic surgery, orthodontics. \n";
		cout<< "-----------------------------------------------------\n";
		cout<< "Price: 1500 Rs\n";
		call_appoitment();
		break;
	default:
		cout<< "Invalid Selection \n";
	}
}
void medcheck()
{
	int num, x;
	cout<< "Which Department do you want to choose?\n";
	cout<< "-------------------------------------------------------\n";
	cout<< "1. Anaesthesiology\n";
	cout<< "2. Audiology\n";
	cout<< "3. Cardiac Surgery (Heart Surgery)\n";
	cout<< "4. Cardiology (Heart Specialist)\n";
	cout<< "5. Eye surgeon\n";
	cout<< "6. General Physician\n";
	cout<< "7. Gynaecology& Obstetrics\n";
	cout<< "8. Infection Diseases\n";
	cout<< "9. Orthopedic Surgery (Bones Specialist)\n";
	cout<< "10. Plastic Surgery\n";
	cout<< "11. Psychiatry\n";
	cout<< "12. Speech & Language Therapy\n";
	cin>>num;
	switch (num)
	{
	case 1: system("cls");
		cout<< "--------------------Anaesthesiology--------------------\n";
		cout<< "Doctor Name---------------------------Days---------------Time          \n";
		cout<< "1. Dr. SajidSaif                     Wed                06:00 pm to 09:00 pm\n";
		cout<< "2. Dr. Asma Abdul Salam               Sat                06:00 am to 09:00 pm\n";
		cout<< "-----------------------------------------------------\n";
		cout<< "If you want to book an appointment press 1?\n";
		cin>> x;
		if (x == 1)
		{
			int a;
			cout<< "Select a doctor: \n";
			cin>> a;
			cout<< "-----------------------------------------------------\n";
			switch (a)
			{
			case 1: cout<< "1. Dr. SajidSaif                     Mon to Sat         06:00 pm to 09:00 pm\n";
				break;
			case 2: cout<< "2. Dr. Asma Abdul Salam               Sat                06:00 pm to 09:00 pm\n";
				break;
			}
			cout<< "-----------------------------------------------------\n";
			makeappointment();
		}
		break;
	case 2: system("cls");
		cout<< "--------------------Audiology--------------------\n";
		cout<< "Doctor Name---------------------------Days---------------Time          \n";
		cout<< "1. Dr. Muhammad Ibrahim               Fri                06:00 pm to 09:00 pm\n";
		cout<< "2. Dr. Abdul Ghafoor                  Sun                06:00 pm to 09:00 pm\n";
		cout<< "-----------------------------------------------------\n";
		cout<< "If you want to book an appointment press 1?\n";
		cin>> x;
		if (x == 1)
		{
			int a;
			cout<< "Select a doctor: \n";
			cin>> a;
			cout<< "-----------------------------------------------------\n";
			switch (a)
			{
			case 1: cout<< "1. Dr. Muhammad Ibrahim               Fri                06:00 pm to 09:00 pm\n";
				break;
			case 2: cout<< "2. Dr. Abdul Ghafoor                  Sun                06:00 pm to 09:00 pm\n";
				break;
			}  makeappointment();
		}
		break;
	case 3: system("cls");
		cout<< "--------------------Cardiac Surgery (Heart Surgery)--------------------\n";
		cout<< "Doctor Name---------------------------Days---------------Time          \n";
		cout<< "1. Dr. Noor Ahmed                     Tue                06:00 pm to 09:00 pm\n";
		cout<< "-----------------------------------------------------\n";
		cout<< "If you want to book an appointment press 1?\n";
		cin>> x;
		if (x == 1)
			makeappointment();
		break;
	case 4: system("cls");
		cout<< "--------------------Cardiology (Heart Specialist)--------------------\n";
		cout<< "Doctor Name---------------------------Days---------------Time          \n";
		cout<< "1. Dr. Bismaamir                     Mon                06:00 pm to 09:00 pm\n";
		cout<< "-----------------------------------------------------\n";
		cout<< "If you want to book an appointment press 1?\n";
		cin>> x;
		if (x == 1)
			makeappointment();
		break;
	case 5: system("cls");
		cout<< "--------------------Eye surgeon--------------------\n";
		cout<< "Doctor Name---------------------------Days---------------Time          \n";
		cout<< "1. Dr. HabibaSiddiquethursday           06:00 pm to 09:00 pm\n";
		cout<< "-----------------------------------------------------\n";
		cout<< "If you want to book an appointment press 1?\n";
		cin>> x;
		if (x == 1)
			makeappointment();
		break;
	case 6: system("cls");
		cout<< "--------------------General Physician--------------------\n";
		cout<< "Doctor Name---------------------------Days---------------Time          \n";
		cout<< "1. Dr. SarwatJabeen                  Wednesday          06:00 pm to 09:00 pm\n";
		cout<< "-----------------------------------------------------\n";
		cout<< "If you want to book an appointment press 1?\n";
		cin>> x;
		if (x == 1)
			makeappointment();
		break;
	case 7: system("cls");
		cout<< "--------------------Gynaecology& Obstetrics--------------------\n";
		cout<< "Doctor Name---------------------------Days---------------Time          \n";
		cout<< "1. Dr. Zuha Fatima                    Wed                06:00 pm to 09:00 pm\n";
		cout<< "2. Dr. Huda Tariq                     Sat                06:00 pm to 09:00 pm\n";
		cout<< "-----------------------------------------------------\n";
		cout<< "If you want to book an appointment press 1?\n";
		cin>> x;
		if (x == 1)
		{
			int a;
			cout<< "Select a doctor: \n";
			cin>> a;
			cout<< "-----------------------------------------------------\n";
			switch (a)
			{
			case 1: cout<< "1. Dr. Zuha Fatima                    Wed to             06:00 pm to 09:00 pm\n";
				break;
			case 2: cout<< "2. Dr. Huda Tariq                     Sat                06:00 pm to 09:00 pm\n";
				break;
			}   makeappointment();
		}
		break;
	case 8: system("cls");
		cout<< "--------------------Infection Diseases--------------------\n";
		cout<< "Doctor Name---------------------------Days---------------Time          \n";
		cout<< "1. Dr. Zameer Ahmed                   Saturday           06:00 pm to 09:00 pm\n";
		cout<< "-----------------------------------------------------\n";
		cout<< "If you want to book an appointment press 1?\n";
		cin>> x;
		if (x == 1)
			makeappointment();
		break;
	case 9: system("cls");
		cout<< "--------------------Orthopedic Surgery (Bones Specialist)--------------------\n";
		cout<< "Doctor Name---------------------------Days---------------Time          \n";
		cout<< "1. Dr. Shah Hamza                     Sun                06:00 pm to 09:00 pmm\n";
		cout<< "-----------------------------------------------------\n";
		cout<< "If you want to book an appointment press 1?\n";
		cin>> x;
		if (x == 1)
			makeappointment();
		break;
	case 10:system("cls");
		cout<< "--------------------Plastic Surgery--------------------\n";
		cout<< "Doctor Name---------------------------Days---------------Time          \n";
		cout<< "1. Dr. HuzaifaJaved                  Friday             06:00 pm to 09:00 pm\n";
		cout<< "2. Dr. TanzeelaImtiaz                Saturday           06:00 pm to 09:00 pm\n";
		cout<< "-----------------------------------------------------\n";
		cout<< "If you want to book an appointment press 1?\n";
		cin>> x;
		if (x == 1)
		{
			int a;
			cout<< "Select a doctor: \n";
			cin>> a;
			cout<< "-----------------------------------------------------\n";
			switch (a)
			{
			case 1: cout<< "1. Dr. HuzaifaJaved                  Friday             06:00 pm to 09:00 pm\n";
				break;
			case 2: cout<< "2. Dr. TanzeelaImtiaz                Saturday           06:00 pm to 09:00 pm\n";
				break;
			}   makeappointment();
		}
	case 11: system("cls");
		cout<< "--------------------Psychiatry--------------------\n";
		cout<< "Doctor Name---------------------------Days---------------Time          \n";
		cout<< "1. Dr. Aliza Khan                     Sunday          06:00 pm to 09:00 pm\n";
		cout<< "-----------------------------------------------------\n";
		cout<< "If you want to book an appointment press 1?\n";
		cin>> x;
		if (x == 1)
			makeappointment();
		break;
	case 12: system("cls");
		cout<< "--------------------Speech & Language Therapy--------------------\n";
		cout<< "Doctor Name---------------------------Days---------------Time          \n";
		cout<< "1. Dr. Abdul Waleed                   Mon                06:00 pm to 09:00 pm\n";
		cout<< "-----------------------------------------------------\n";
		cout<< "If you want to book an appointment press 1?\n";
		cin>> x;
		if (x == 1)
			makeappointment();
		break;
	default:
		cout<< "Invalid Selection \n";
	}
}

void ctscan()
{
	system("cls");
	cout<< "--------------------CT-SCAN--------------------\n";
	cout<< "We offer the latest in screening equipment with the PET-CT, which is an advanced nuclear imaging technique. The PET-CT is used commonly for the diagnosis and monitoring of cancer (oncology) patients, although can also be used in the diagnosis of several other conditions.\n";
	cout<< "-----------------------------------------------------\n";
	cout<< "Price: 7000 Rs\n";
	call_appoitment();
}
void mri()
{
	system("cls");
	cout<< "--------------------MRI--------------------\n";
	cout<< "Magnetic resonance imaging uses a powerful magnetic field and a series of radio wave energy pulses to produce detailed images of the organs and structures within the body. An MRI does not use x-rays or radiation.\n";
	cout<< "-----------------------------------------------------\n";
	cout<< "Price: 7000 Rs\n";
	call_appoitment();
}
void ultrasound()
{
	system("cls");
	int num;
	cout<< "--------------------Ultrasound--------------------\n";
	cout<< "What type of Ultrasound do you want to choose?\n";
	cout<< "1. Abdominal\n";
	cout<< "2. Pelvic or Transvaginal Ultrasound\n";
	cout<< "3. Obstetric (Pregnancy) Ultrasound\n";
	cout<< "4. Prostate Ultrasound\n";
	cin>>num;
	switch (num)
	{
	case 1:cout << "--------------------Abdominal--------------------\n";
		cout<< "The abdominal ultrasound helps in producing images of the organs in the abdomen, including, liver, gallbladder, spleen, pancreas and kidneys. The ultrasound also helps in examining the blood vessels that lead to and from these organs.\n";
		cout<< "-----------------------------------------------------\n";
		cout<< "Price: 600 Rs\n";
		call_appoitment();
		break;
	case 2: cout<< "--------------------Pelvic or Transvaginal Ultrasound--------------------\n";
		cout<< "A pelvic or transvaginal ultrasound helps doctors in the examination of the female organs in the pelvis including the cervix, vagina, uterus, fallopian tubes and ovaries.\n";
		cout<< "-----------------------------------------------------\n";
		cout<< "Price: 900 Rs\n";
		call_appoitment();
		break;
	case 3: cout<< "--------------------Obstetric (Pregnancy) Ultrasound--------------------\n";
		cout<< "An obstetric ultrasound helps doctors to see how the embryo or foetus is developing in a pregnant woman. It also shows images of the ovaries and uterus. Several obstetric ultrasounds may be advised during the course of the pregnancy.\n";
		cout<< "-----------------------------------------------------\n";
		cout<< "Price: 600 Rs\n";
		call_appoitment();
		break;
	case 4: cout<< "--------------------Prostate Ultrasound--------------------\n";
		cout<< "The prostate ultrasound is used to examine a man's prostate gland and the surrounding tissues. It is used in determining whether the prostate is enlarged and also used in the diagnosis of cancer\n";
		cout<< "-----------------------------------------------------\n";
		cout<< "Price: 1500 Rs\n";
		call_appoitment();
		break;
	default:
		cout<< "Invalid Selection \n";
	}
}
void call_appoitment()
{
	int x;
	cout<< "-----------------------------------------------------\n";
	cout<< "if you want to book an appointment press 1\n";
	cin>> x;
	if (x == 1)
	{
		makeappointment();
	}
	else
	{
		cout<< "-----------------------------------------------------\n";
		cout<< "Thankyou for visiting St. Joseph Online Portal!\n";
		system("pause");
	}
}
void timeslots()
{
	do {
		cout<< "Select one of the following time slots:\n";
		cout<< "1.  06:00 pm to 06:30 pm\n";
		cout<< "2.  06:30 pm to 07:00 pm\n";
		cout<< "3.  07:00 pm to 07:30 pm\n";
		cout<< "4.  07:30 pm to 08:00 pm\n";
		cout<< "5.  08:00 pm to 08:30 pm\n";
		cout<< "6.  08:30 pm to 09:00 pm\n";
		cin>> time;
		if (flagslot[time - 1][num - 1] != 0)
			cout<< "Sorry Appointment Is Booked Use Different Slot\n";
	} while (flagslot[time - 1][num - 1] != 0);
}
void makeappointment()
{
	system("cls");
	timeslots();
	switch (time) {
	case 1:
		slot[0] = "06:00 pm to 06:30 pm";
		flagslot[time - 1][num - 1] = 1;
		callappointment_med();
		checktime();
		break;
	case 2:
		slot[1] = "06:30 pm to 07:00 pm";
		flagslot[time - 1][num - 1] = 1;
		callappointment_med();
		checktime();
		break;
	case 3:
		slot[2] = "07:00 pm to 07:30 pm";
		flagslot[time - 1][num - 1] = 1;
		callappointment_med();
		checktime();
		break;
	case 4:
		slot[3] = "07:30 pm to 08:00 pm";
		flagslot[time - 1][num - 1] = 1;
		callappointment_med();
		checktime();
		break;
	case 5:
		slot[4] = "08:00 pm to 08:30 pm";
		flagslot[time - 1][num - 1] = 1;
		callappointment_med();
		checktime();
		break;
	case 6:
		slot[5] = "08:30 pm to 09:00 pm";
		flagslot[time - 1][num - 1] = 1;
		callappointment_med();
		checktime();
		break;
	default:
		cout<< "Invalid Selection \n";
	}
}
void callappointment_med()
{
	userinfo p1;
	cout<< "-----------------------------------------------------\n";
	cout<< "Kindly enter the following details \n";
	cout<< "Patient's Name= ";
	cin>> p1.name;
	cout<< "Patient's Gender= ";
	cin>> p1.gender;
	cout<< "Father name= ";
	cin>> p1.fname;
	cout<< "Patient's Age= ";
	cin>> p1.age;
	cout<< "Phone Number= ";
	cin>> p1.pnumber;
	cout<< "-----------------------------------------------------\n";
	ofstream myfile;
	myfile.open(("medical.txt"), ios::app);
	string input = "Name= " + p1.name + "\n" + "Father Name=" + p1.fname + "\n" + "Age= " + char(p1.age) + "\n" + "Phone Number= " + p1.pnumber + "\n";
	myfile<< "----------------------------User data------------------------------\n";
	myfile<< input;
	myfile<< "Appointment booked for " << slot[time - 1] <<endl;
	myfile.close();
}
void checktime()
{
	cout<< "Your appointment have been booked at " << slot[time - 1] << " :)" <<endl;
	ofstream record;
	record.open("C:\cpp.txt", ios::app);
	record<< slot[time - 1] <<endl;
	record.close();
	cout<< "--------------------Thank You :)---------------------------\n\n";
}
//void login()
//{
//	string username, password;
//	cout<< "Enter Username= ";
//	cin>> username;
//	cout<< "Enter Password= ";
//	cin>> password;
//	if (username == "Hannan" && password == "123")
//		exit(1);
//	else
//	{
//		cout<< "Invalid Username and Password !!\n";
//		main();
//	}
//}
void medicine()
{
	string text;
	ifstream record;
	record.open("medicine.txt", ios::in);
	while (getline(record, text)) {
		cout<< text<<endl;
	}
	record.close();
}
//void medicinesearching()
//{
//	cout<< "enter a medicine name\n";
//	cin>> name;
//	ifstream record;
//	//size_tpos;
//	string line;
//
//	record.open("medicine.txt");
//	if (record.is_open())
//	{
//			while (getline(record, line))
//			{
//				//pos = line.find(name);
//				//if (pos != string::npos) 
//				{
//					cout<< "We have this medicine :) \n";
//					break;
//				}
//				//else
//				{
//					cout<< "Sorry we do not have this medicine :(\n";
//					break;
//				}
//			}
//		
//	}
//	record.close();
//}
