// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class LevelDbEnv {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_LEVELDBENV
public:
    class LevelDbEnv& operator=(class LevelDbEnv const&) = delete;
    LevelDbEnv(class LevelDbEnv const&) = delete;
    LevelDbEnv() = delete;
#endif

public:
    /*0*/ virtual ~LevelDbEnv();
    /*1*/ virtual class leveldb::Status NewSequentialFile(std::string const&, class leveldb::SequentialFile* *);
    /*2*/ virtual class leveldb::Status NewRandomAccessFile(std::string const&, class leveldb::RandomAccessFile* *);
    /*3*/ virtual class leveldb::Status NewWritableFile(std::string const&, class leveldb::WritableFile* *);
    /*4*/ virtual class leveldb::Status NewAppendableFile(std::string const&, class leveldb::WritableFile* *);
    /*5*/ virtual bool FileExists(std::string const&);
    /*6*/ virtual class leveldb::Status GetChildren(std::string const&, std::vector<std::string>*);
    /*7*/ virtual class leveldb::Status DeleteFileA(std::string const&);
    /*8*/ virtual class leveldb::Status CreateDir(std::string const&);
    /*9*/ virtual class leveldb::Status DeleteDir(std::string const&);
    /*10*/ virtual class leveldb::Status GetFileSize(std::string const&, unsigned __int64*);
    /*11*/ virtual class leveldb::Status RenameFile(std::string const&, std::string const&);
    /*12*/ virtual class leveldb::Status LockFile(std::string const&, class leveldb::FileLock* *);
    /*13*/ virtual class leveldb::Status UnlockFile(class leveldb::FileLock*);
    /*14*/ virtual void Schedule(void (* )(void* ), void*);
    /*15*/ virtual void StartThread(void (* )(void* ), void*);
    /*16*/ virtual class leveldb::Status GetTestDirectory(std::string*);
    /*17*/ virtual class leveldb::Status NewLogger(std::string const&, class leveldb::Logger* *);
    /*18*/ virtual unsigned __int64 NowMicros();
    /*19*/ virtual void SleepForMicroseconds(int);
    MCAPI bool IsComplete() const;
    MCAPI static void createInstance();
    MCAPI static void destroyInstance();
    MCAPI static class LevelDbEnv* getSingleton();

protected:

private:
    MCAPI static std::unique_ptr<class LevelDbEnv> sSingleton;

};