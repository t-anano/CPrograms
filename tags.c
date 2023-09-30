typedef void fv(int), (*pfv)(int); 
void (*signal(int,void (*)(int)))(int); 
fv *signal(int, fv *); 
pfv signal(int, pfv); 




struct s{
    // --snip---
    int type; 
} n; 

struct n s; // instance of a struct s
struct s *p; //instance of pointer to struct s

enum days {mon, tue, wed, thurs, fri, sat, sun}; 
day today; // error
enum days tommorrow; // OK 

enum status {ok, fail}; // enumeration
enum status status(void); // function

// Tags of structures, unions, and enumerations are defined in a sperate namespace 
// from ordinary identifiers which is why you can have a tag and an idnetifier with the same spelling 

// you can define an alias for struct tags 

typedef struct s {int x;} t;
// now you can declare variables of type t instead of struct s 
// avoid omiting the tag in a typedef, C allows us to but doing so may create compile errors iin certain cases 
// E.g. 

struct tnode{
   int count; 
   struct tnode *left; 
   struct tnode *right; 
}; 

// If you omit the tag on the first line the compiler may complain because referenced structure on lines
// 3 and 4 have not yet been declared. 

// Consequently, you may have to declare a tag for the structure. 
// You can declare a typedef as well 

typedef struct tnode { // typdef no tag, all declared as one  
  int count; 
  struct tnode *left; 
  struct tnode *right;
} tnode; 

// also
typedef struct tnode tnode; // typedef with tag 
struct tnode{  
  int count; 
  struct tnode *left; 
  struct tnode *right;
} tnode_2;  


// Declaring a Tree in C: [Our first Data Structure ;) Get it !!]

typedef struct tnode tnode; // struct tnode is now simply tnode this is a structure of structures and is defined recurisvely 
struct tnode {
    int count; 
    tnode *left; //tnode already defined as a structure 
    tnode *right; //tnode defined as a structure so this is a pointer to structure 
} tnoode; // this is a tnode struct with a pointer to left and right substructure and a count variable 









