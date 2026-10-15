/*
 * ATL::CComObject<CTextImage>::`scalar_deleting_destructor' at 10037c78
 * void * __thiscall `scalar_deleting_destructor'(CComObject<CTextImage> * this, uint param_1)
 * Address ranges: 10037c78-10037c9c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Library Function - Single Match  public: virtual void * __thiscall ATL::CComObject<class CTextImage>::`scalar deleting destructor'(unsigned int)  Library: Visual Studio 2019 Release
 */

/* Library Function - Single Match
    public: virtual void * __thiscall ATL::CComObject<class CTextImage>::`scalar deleting
   destructor'(unsigned int)
   
   Library: Visual Studio 2019 Release */

void * __thiscall
ATL::CComObject<CTextImage>::_scalar_deleting_destructor_(CComObject<CTextImage> *this,uint param_1)

{
  FUN_10037c9d((undefined4 *)this);
  if ((param_1 & 1) != 0) {
    FUN_100cfd6c(this);
  }
  return this;
}

