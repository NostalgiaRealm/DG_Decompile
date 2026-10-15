/*
 * Concurrency::details::InternalContextBase::`scalar_deleting_destructor' at 1007df4a
 * void * __thiscall `scalar_deleting_destructor'(InternalContextBase * this, uint param_1)
 * Address ranges: 1007df4a-1007df6e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Library Function - Single Match  public: virtual void * __thiscall Concurrency::details::InternalContextBase::`scalar deleting destructor'(unsigned int)  Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release
 */

/* Library Function - Single Match
    public: virtual void * __thiscall Concurrency::details::InternalContextBase::`scalar deleting
   destructor'(unsigned int)
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

void * __thiscall
Concurrency::details::InternalContextBase::_scalar_deleting_destructor_
          (InternalContextBase *this,uint param_1)

{
  FUN_100813b2((undefined4 *)this);
  if ((param_1 & 1) != 0) {
    FUN_100ad48c(this);
  }
  return this;
}

