#include "mbed.h"
#include "main.h"
#include "FsWrapper.h"

//FsWrapper::FsWrapper() {
//nono    
//}

void FsWrapper::OpenFile (void) {
    fp = fopen("/localfile", "w");  // Open "out.txt" on the local file system for writing
    //return result?
}

void FsWrapper::CloseFile () {
    fclose(fp);
}

void FsWrapper::WriteFile () {
    fprintf(fp, "Hello World!");

}

void FsWrapper::ReadFile () {

}