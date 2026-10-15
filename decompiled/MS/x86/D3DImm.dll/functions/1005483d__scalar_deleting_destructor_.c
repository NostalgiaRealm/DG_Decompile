/*
 * CRectTracker::`scalar_deleting_destructor' at 1005483d
 * void * __thiscall `scalar_deleting_destructor'(CRectTracker * this, uint param_1)
 * Address ranges: 1005483d-1005485e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Library Function - Single Match  public: virtual void * __thiscall CRectTracker::`scalar deleting destructor'(unsigned int)  Library: Visual Studio 2015 Release
 */

/* Library Function - Single Match
    public: virtual void * __thiscall CRectTracker::`scalar deleting destructor'(unsigned int)
   
   Library: Visual Studio 2015 Release */

void * __thiscall CRectTracker::_scalar_deleting_destructor_(CRectTracker *this,uint param_1)

{
  FUN_10054a34((undefined4 *)this);
  if ((param_1 & 1) != 0) {
    FUN_1005c76c(this);
  }
  return this;
}

