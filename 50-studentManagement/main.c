#include <stdio.h>
#include <stdlib.h>
#include <string.h>
const int MAX = 100;
void showMenu(void);
void addStudent(char id[][MAX], char fName[][MAX],
                char lName[][MAX], int yob[],
                float gpa[], int* size);
void printStudentList(char id[][MAX], char fName[][MAX],
                char lName[][MAX], int yob[],
                float gpa[], int size);
int findPosbyId(char id[][MAX], int size, char key[]);

void printStudent(char id[][MAX], char fName[][MAX],
                char lName[][MAX], int yob[],
                float gpa[], int pos);

void removeStudenByPos(char id[][MAX], char fName[][MAX],
                char lName[][MAX], int yob[],
                float gpa[],int* size, int pos);
int main()
{
    //init type
    char id[MAX][10];
    char fName[MAX][30];
    char lName[MAX][30];
    int yob[MAX];
    float gpa[MAX];
    int size = 0;
    int choice;
    char buffer;
    //process
    do{
        showMenu();
        do{
            printf("\nPlz, input your choice(integer): ");
            scanf("%d", &choice);
            scanf("%c", &buffer);
            fflush(stdin);
            if(buffer != 10){
                printf("\nInput number ?");
            }
        }while(buffer != 10);
        // choice processing
        switch(choice){
            case 1:{
                system("cls"); //xoa man hinh
                printf("\nAdd new student information");
                addStudent(id, fName, lName, yob, gpa, &size);

                break;
            }
            case 2:{
                system("cls");
                printf("\nSearch student information by ID");
                char key[MAX];
                printf("\nID: ");
                gets(key);// nhap id can tim
                int pos = findPosbyId(id, size, key);
                if(pos == -1){
                    printf("\nStudent does not exist");
                }else{
                    printStudent(id,fName,lName,yob,gpa,pos);
                }

                break;
            }
            case 3:{
                system("cls");
                printf("\nDelete student information by ID");
                char key[MAX];
                printf("\nID: ");
                gets(key);// nhap id can tim
                int pos = findPosbyId(id, size, key);
                if(pos == -1){
                    printf("\nStudent does not exist");
                }else{
                    printf("\nDeleted sucessfully");
                    printStudent(id,fName,lName,yob,gpa,pos);
                    removeStudenByPos(id,fName,lName,yob,gpa, &size, pos);
                }
                break;
            }
            case 4:{
                printf("\nChuc nang so 4");
                break;
            }
            case 5:{
                system("cls"); //xoa man hinh
                printf("\nPrint student information");
                printStudentList(id, fName, lName, yob, gpa, size);
                break;
            }
            case 6:{
                printf("\nChuc nang so 6");
                break;
            }
            case 7:{
                printf("\nNice to meet you, see you again <3");
                break;
            }
            default:{
                printf("\nThis choice is required between 1 and 7 !!");
                break;
            }



        }
    }while(choice != 7);



    return 0;
}
void removeStudenByPos(char id[][MAX], char fName[][MAX],
                char lName[][MAX], int yob[],
                float gpa[],int* size, int pos){
    for(int i = pos; i <= *size - 1; i++){
        strcpy(id[i], id[i + 1]);
        strcpy(fName[i], fName[i + 1]);
        strcpy(lName[i], lName[i + 1]);
        yob[i] = yob[i + 1];
        gpa[i] = gpa[i + 1];
    }
    (*size) --;

}


void printStudent(char id[][MAX], char fName[][MAX],
                char lName[][MAX], int yob[],
                float gpa[], int pos){
    printf("\n|%-10s|%-15s|%-15s|%-4s|%-5s|",
        "ID", "FNAME", "LNAME", "YOB", "GPA");


    printf("\n|%-10s|%-15s|%-15s|%4d|%5.2f|",
        id[pos], fName[pos], lName[pos], yob[pos], gpa[pos]);


}

int findPosbyId(char id[][MAX], int size, char key[]){
    for(int i = 0; i <= size - 1; i++){
        if(strcmp(id[i],key) == 0) return i;
    }
    return -1;
}

void printStudentList(char id[][MAX], char fName[][MAX],
                char lName[][MAX], int yob[],
                float gpa[], int size){
    if(size == 0){
        printf("\nNothing to print");
    }else{
        printf("\n|%-10s|%-15s|%-15s|%-4s|%-5s|",
               "ID", "FNAME", "LNAME", "YOB", "GPA");
        for(int i = 0; i <= size - 1; i++){
             printf("\n|%-10s|%-15s|%-15s|%4d|%5.2f|",
               id[i], fName[i], lName[i], yob[i], gpa[i]);

        }
    }
}

void addStudent(char id[][MAX], char fName[][MAX],
                char lName[][MAX], int yob[],
                float gpa[], int* size){

    int isFind;
    do{
        char key[MAX];
        printf("\nId: ");
        gets(key); // nhap ma id ma ban muon them
        isFind = findPosbyId(id, *size, key);
        if(isFind != -1){
            printf("\nThis id has been used");
        }else{
            strcpy(id[*size], key);
        }
    }while(isFind != -1);

    printf("\nfName: ");
    gets(fName[*size]);
    fflush(stdin);

    printf("\nlName: ");
    gets(lName[*size]);
    fflush(stdin);

    printf("\nYob: ");
    scanf("%d", &yob[*size]);
    fflush(stdin);

    printf("\nGpa: ");
    scanf("%f", &gpa[*size]);
    fflush(stdin);

    (*size) ++;
    printf("\nAdding successfully");

}


void showMenu(void){
    printf("\nStudent management application");
    printf("\n1. add new student");
    printf("\n2. search student information by id");
    printf("\n3. delete student information by id");
    printf("\n4. print highest gpa student list");
    printf("\n5. print student list");
    printf("\n6. sort student list order by firstName ascending");
    printf("\n7. quit");

}




//50-studentManagement
//viết 1 chương trình menu
//nhiệm vụ quản lý sinh viên
//1 sinh viên được mô tả bằng các thuộc tính
//id, firstName, lastName, yob, gpa
//Menu gồm các chức năng sau
//1.thêm sinh viên vào danh sách
//2.tìm kiếm sinh viên dựa trên id
//3.xóa sinh viên khỏi danh sách theo id
//4.xuất ra danh sách sinh viên đạt điểm cao nhất
//5.in ra danh sách sinh viên
//6.sort theo firstName asc
//7.quit
//mô tả chương trình:
//người dùng nhập số để chương trình phục vụ các chức năng
//nếu người dùng nhập sai số => chửi
//người dùng nhập đúng số, làm chức năng
//quay lại menu ép nhập tiếp
//nhập sai số nguyên => chửi
//nhập số 7 thì thoát
//nhập sinh viên mới mà id trùng với sinh viên có trong danh sách
//thì => chửi
