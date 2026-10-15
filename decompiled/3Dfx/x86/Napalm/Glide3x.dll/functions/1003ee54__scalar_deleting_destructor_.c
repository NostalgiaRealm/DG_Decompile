/*
 * Concurrency::details::UMSFreeVirtualProcessorRoot::`scalar_deleting_destructor' at 1003ee54
 * void * __thiscall `scalar_deleting_destructor'(UMSFreeVirtualProcessorRoot * this, uint param_1)
 * Address ranges: 1003ee54-1003ee75
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Library Function - Single Match  public: virtual void * __thiscall Concurrency::details::UMSFreeVirtualProcessorRoot::`scalar deleting destructor'(unsigned int)  Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release
 */

/* Library Function - Single Match
    public: virtual void * __thiscall Concurrency::details::UMSFreeVirtualProcessorRoot::`scalar
   deleting destructor'(unsigned int)
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

void * __thiscall
Concurrency::details::UMSFreeVirtualProcessorRoot::_scalar_deleting_destructor_
          (UMSFreeVirtualProcessorRoot *this,uint param_1)

{
  FUN_1003eb99((undefined4 *)this);
  if ((param_1 & 1) != 0) {
    FUN_10055686(this);
  }
  return this;
}

