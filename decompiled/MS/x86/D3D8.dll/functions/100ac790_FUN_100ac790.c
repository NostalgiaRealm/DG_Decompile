/*
 * FUN_100ac790 at 100ac790
 * undefined4 * __thiscall FUN_100ac790(void * this, LPCSTR param_1)
 * Address ranges: 100ac790-100ac7c4
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * __thiscall FUN_100ac790(void *this,LPCSTR param_1)

{
  HANDLE pvVar1;
  
  *(undefined ***)this = &PTR_FUN_100b5a70;
  *(undefined1 *)((int)this + 8) = 1;
  pvVar1 = CreateFileA(param_1,0x80000000,1,(LPSECURITY_ATTRIBUTES)0x0,3,0x80,(HANDLE)0x0);
  *(HANDLE *)((int)this + 4) = pvVar1;
  return this;
}

