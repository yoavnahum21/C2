

/* Structures */

/*student*/
typedef struct student {     char *name;
    int  id;
    struct clist *courses;
} student;


/*course*/
typedef struct course {     char *title;
    int  number;
    struct slist *students;
} course;


/*info*/

/*student info*/
typedef struct slist {     student      *info;
    struct slist *next;
} slist;

/*course info*/
typedef struct clist {     course       *info;     struct clist *next;
} clist;

/*Temp lists*/

/*Temp list students*/
slist* add_student(slist *students, char *name, int id);
/*Temp list courses*/
clist* add_course(clist *courses, char *title, int number);


/*Poiners */

/*put pointer to the course in the student’s course list
 * put pointer to the student in the course’s student list */
void reg_student(slist *students, clist *courses, int id, int number);

/*remove the pointers of the course in the student’s course list
 *remove the pointers of the student in the course’s student list  */
void unreg_student(slist *students, int id, int number);


/*prints*/
/*prints student info*/
void print_students(slist *students);

/*prints course info*/
void print_courses(clist *courses);

/*free memory*/
void free_all(slist *sl, clist *cl);

int main() {     slist* students = 0;     clist* courses = 0;     char  c;     char  buf[100];     int   id, num;

    ….
    ….
    ….
}

