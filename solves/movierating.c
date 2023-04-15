#include <stdio.h>
#include <string.h>
//movie structure
struct Movie
{
    char *name;
    int rating;
};


int main()
{
    struct Movie movies[8];
    //initializing movie names
    movies[0].name = "Nayak: The Hero              :";
    movies[1].name = "The Cloud-Capped Star        :";
    movies[2].name = "The Music Room               :";
    movies[3].name = "Pather Panchali              :";
    movies[4].name = "Charulata                    :";
    movies[5].name = "Subarnarekha                 :";
    movies[6].name = "Days and Nights in the Forest:";
    movies[7].name = "The Unnamed                  :";
    
    int i,j,temp;
    for(i = 0; i < 8; i++){
        movies[i].rating = 0; //initializing ratings as 0
    }

    //changing values of i here will ditermine the number of judges
    for(i = 0; i < 2; i++){
        printf("\nPoint judge %d: \n",i+1);
        for(j = 0; j < 8; j++){
            printf("%s ",movies[j].name);
            scanf("%d", &temp);
            movies[j].rating += temp;
        }
    }

    //sorting in ascending order
    struct Movie t;
    for(i=0;i<7;i++){
        for(j=i+1;j<8;j++){
            if(movies[i].rating>movies[j].rating)
            {
                t=movies[i];
                movies[i]=movies[j];
                movies[j]=t;
            }
        }
    }

    printf("\nMovies in Ascending Order by total rating:\n");
    for(i=0;i<8;i++){
        printf("%s %d \n",movies[i].name, movies[i].rating);
    }

    //sorting is descending order
    for(i=0;i<7;i++){
        for(j=i+1;j<8;j++){
            if(movies[i].rating<movies[j].rating)
            {
                t=movies[i];
                movies[i]=movies[j];
                movies[j]=t;
            }
        }
    }

    printf("\nMovies in Descending Order by total rating:\n");
    for(i=0;i<8;i++){
        printf("%s %d \n",movies[i].name, movies[i].rating);
    }
    
    return 0;
}
