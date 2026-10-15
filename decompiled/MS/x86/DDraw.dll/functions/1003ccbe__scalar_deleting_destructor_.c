/*
 * Concurrency::details::_CancellationTokenRegistration::`scalar_deleting_destructor' at 1003ccbe
 * void * __thiscall `scalar_deleting_destructor'(_CancellationTokenRegistration * this, uint param_1)
 * Address ranges: 1003ccbe-1003ccdf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Library Function - Single Match  protected: virtual void * __thiscall Concurrency::details::_CancellationTokenRegistration::`scalar deleting destructor'(unsigned int)  Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release
 */

/* Library Function - Single Match
    protected: virtual void * __thiscall
   Concurrency::details::_CancellationTokenRegistration::`scalar deleting destructor'(unsigned int)
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

void * __thiscall
Concurrency::details::_CancellationTokenRegistration::_scalar_deleting_destructor_
          (_CancellationTokenRegistration *this,uint param_1)

{
  FUN_1003cd4d((undefined4 *)this);
  if ((param_1 & 1) != 0) {
    FUN_10060be1(this);
  }
  return this;
}

