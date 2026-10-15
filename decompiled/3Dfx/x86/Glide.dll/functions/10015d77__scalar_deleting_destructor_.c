/*
 * Concurrency::details::UMSFreeVirtualProcessorRoot::`scalar_deleting_destructor' at 10015d77
 * void * __thiscall `scalar_deleting_destructor'(UMSFreeVirtualProcessorRoot * this, uint param_1)
 * Address ranges: 10015d77-10015d98
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
  FUN_10038ecc((undefined4 *)this);
  if ((param_1 & 1) != 0) {
    FUN_1004f9b6(this);
  }
  return this;
}

