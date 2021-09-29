#define T_DIR     1   // Directory
#define T_FILE    2   // File
#define T_DEVICE  3   // Device

struct stat {
  int dev;     // File system's disk device
  uint ino;    // Inode number
  short type;  // Type of file
  short nlink; // Number of links to file
  uint64 size; // Size of file in bytes
};

/* wait_stat added */
struct perf {
	int ctime;
	int ttime;
	int stime;
	int retime;
	int rutime;
	int average_bursttime; //average of bursstimes in 100ths (so average*100)
};
