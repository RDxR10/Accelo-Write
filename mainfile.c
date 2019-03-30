#include <stdio.h>
#include<time.h>

//level1-beginner
int level1()
{
    FILE* fp;
    char str[10000];
    int count1=0;
    char* filename = "C:/Users/Rishi/Desktop/Mini Project/beginner.txt";//file path here

    fp = fopen(filename, "r");
    if (fp == NULL){
        printf("Could not open file %s",filename);
        return 1;
    }
    while (fgets(str, 10000, fp) != NULL)
	{
	printf("%s", str);
        count1+=1;
        }
    fclose(fp);

	printf("\n");
	printf("/- START TYPING -/");
	printf("\n");
    return 0;
}

//level2-medium
int level2()
{
    FILE* fp;
    char str[10000];
    int count1=0;
    char* filename = "C:/Users/Rishi/Desktop/Mini Project/medium.txt";//file path here

    fp = fopen(filename, "r");
    if (fp == NULL){
        printf("Could not open file %s",filename);
        return 1;
    }
    while (fgets(str, 10000, fp) != NULL)
	{
	printf("%s", str);
        count1+=1;
        }
    fclose(fp);

	printf("\n");
	printf("/- START TYPING -/");
	printf("\n");
    return 0;
}

//level3-advanced
int level3()
{
    FILE* fp;
    char str[10000];
    int count1=0;
    char* filename = "C:/Users/Rishi/Desktop/Mini Project/advanced.txt";//file path here

    fp = fopen(filename, "r");
    if (fp == NULL){
        printf("Could not open file %s",filename);
        return 1;
    }
    while (fgets(str, 10000, fp) != NULL)
	{
	printf("%s", str);
        count1+=1;
        }
    fclose(fp);

	printf("\n");
	printf("/- START TYPING -/");
	printf("\n");
    return 0;
}



int main() {

    clock_t start;// clock_t end;
  /*  printf("Welcome To Typing Tutor \nPlease Type the following:\n\n");
    printf("Select a level from options below :");
    printf("\n1:Beginner");
    printf("\n2:Medium");
    printf("\n3:Advanced");*/
    int lev=0,i1=2;
    char st;
    //printf("\nYour choice:");
    //scanf("%d",&lev);

    while(i1>=1)
    {


        printf("Select a level from options below :");
    printf("\n1:Beginner");
    printf("\n2:Medium");
    printf("\n3:Advanced");
    printf("\nYour choice:");
    scanf("%d",&lev);

      if(lev==1)
      {
        level1();
        i1=0;
      }
       else if(lev==2)
      {
        level2();
        i1=0;
      }
       else if(lev==3)
      {
        level3();
        i1=0;
      }
       else
      {
        i1=9;
      }
    }
    //level1();
    start = clock();
    printf("\n");
    FILE* fp;
    char str[10000]; char ch;
    double count=0;
    double count2=-1;
    char* filename;
      if(lev==1)
      {
       filename = "C:/Users/Rishi/Desktop/Mini Project/beginner.txt";
      }
       else if(lev==2)
      {
        filename = "C:/Users/Rishi/Desktop/Mini Project/medium.txt";
      }
       else if(lev==3)
      {
        filename = "C:/Users/Rishi/Desktop/Mini Project/advanced.txt";
      }

   // char* filename = "C:/Users/Rishi/Desktop/Mini Project/filename.txt";

    fp = fopen(filename, "r");
    if (fp == NULL){
        printf("Could not open file %s",filename);
        return 1;
    }

    fseek(fp,0, SEEK_SET);

    int i=0,j=0;
      while((ch=getc(stdin)) != EOF)
	{
        count2+=1;



        if(ch != fgetc(fp))
        {
            count+=1;
            //fseek(fp, -1, SEEK_CUR);
        }

}

//printf("\n\n\n%lf\n%lf\n\n\n",count,count2);
    fclose(fp);


printf("\n%lf\n%lf",count2,count);
double d=count2-count;
double c=d*100/count2;
printf("\nAccuracy : %.2lf%% \n",c);
start = clock() -start;
//printf("\n%ld\n",start);
double duration = (((double)start)/CLOCKS_PER_SEC)-0.75;
printf("Time taken in seconds : %.2fs\n", duration);
double speed=((60*d)/(5*duration));
printf("Speed in Words Per Minute : %.2f WPM\n", speed);

    return 0;
}



/*


      while((ch=getchar()) != EOF)
	{
      //count2+=1;
        //if(fgetc(fp)== ' ' || fgetc(fp)== '\n')
       //{

       //}
	//count2+=1;
    if((fgetc(fp)== ' ' || fgetc(fp)== '\n') && (ch != fgetc(fp)))//|| fgetc(fp)== '\n'))
    {
        count2+=1;
        if(ch != fgetc(fp))
        {
            fseek(fp, -1, SEEK_CUR);
            i+=1;
        }
    }
        if((ch == fgetc(fp)))

        {
            if(i>1)
                count+=1;
                i=0;
        }


    //i+=1;

}




clock_t start; clock_t end;
// Store start time
start = clock();
//add few instructions here i.e, for example give any previous program logic
and compute the time taken
char c;
printf("Enter any character\n");
scanf("%c",&c);
end = clock();
// Get the time taken by program to execute in seconds
double duration = ((double)end - start)/CLOCKS_PER_SEC;
printf("Time taken to execute in seconds : %f", duration);
*/
