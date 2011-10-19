#ifndef INC_FILEROUTINES_H
#define INC_FILEROUTINES_H

/* FILE FORMAT:
 * File format specifies how the data in the file is organized. Not used by
 * Ptrajfile itself but by higher-level classes.
 */
enum FileFormat {
  UNKNOWN_FORMAT, PDBFILE, AMBERTRAJ, AMBERNETCDF, AMBERPARM,
  DATAFILE, AMBERRESTART, AMBERREMD, XMGRACE, CONFLIB,
  AMBERRESTARTNC, MOL2FILE, GNUPLOT, CHARMMPSF, CHARMMDCD
};
    
/* FILE TYPE:
 * File type describes how the file is accessed at the lowest level and
 * determines what IO class is associated with the file.
 */ 
enum FileType {
  UNKNOWN_TYPE, STANDARD, GZIPFILE, BZIP2FILE, ZIPFILE, MPIFILE
};  
    
/* COMPRESS TYPE:
 * Type of compression present if any.
 */
enum CompressType {
  NONE, GZIP, BZIP2, ZIP
};

// ACCESS TYPE
enum AccessType {
  READ, WRITE, APPEND
};

char *File_Format(FileFormat);
char *File_Type(FileType);
char *File_Access(AccessType);
FileFormat GetFmtFromArg(char *, FileFormat);
void SetExtFromFmt(char *, FileFormat);
FileType DetermineType(FileType, char *);
FileFormat DetermineFormat(FileFormat, char *);
#endif