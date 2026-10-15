/*
 * CRectTracker::`scalar_deleting_destructor' at 1009d64d
 * void * __thiscall `scalar_deleting_destructor'(CRectTracker * this, uint param_1)
 * Address ranges: 1009d64d-1009d66e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Library Function - Single Match  public: virtual void * __thiscall CRectTracker::`scalar deleting destructor'(unsigned int)  Library: Visual Studio 2015 Release
 */

/* Library Function - Single Match
    public: virtual void * __thiscall CRectTracker::`scalar deleting destructor'(unsigned int)
   
   Library: Visual Studio 2015 Release */

void * __thiscall CRectTracker::_scalar_deleting_destructor_(CRectTracker *this,uint param_1)

{
  FUN_1009d840((undefined4 *)this);
  if ((param_1 & 1) != 0) {
    FUN_100ad48c(this);
  }
  return this;
}

