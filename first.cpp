#include<iostream>
using namespace std;

int main()
{

public class CollegeCourse{
     
    // Declares private data fields
    private String id;
    private String grade;
    private int creditHours;
     
    // get methods for all data fields
    public String getID(){
        return id;
    }
    public String getGrade(){
        return grade;
    }
    public int getCreditHours(){
        return creditHours;
    }
     
    // get methods for all data fields
    public void setID(String id){
        this.id = id;
    }
    public void setGrade(String grade){
        this.grade = grade;
    }
    public void setCreditHours(int creditHours){
        this.creditHours = creditHours;
    }
}
}