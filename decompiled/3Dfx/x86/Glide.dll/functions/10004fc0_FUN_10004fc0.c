/*
 * FUN_10004fc0 at 10004fc0
 * undefined4 * __thiscall FUN_10004fc0(void * this, LPCSTR param_1)
 * Address ranges: 10004fc0-10004ff4
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * __thiscall FUN_10004fc0(void *this,LPCSTR param_1)

{
  HANDLE pvVar1;
  
  *(undefined ***)this = &PTR_FUN_10051748;
  *(undefined1 *)((int)this + 8) = 1;
  pvVar1 = CreateFileA(param_1,0x80000000,1,(LPSECURITY_ATTRIBUTES)0x0,3,0x80,(HANDLE)0x0);
  *(HANDLE *)((int)this + 4) = pvVar1;
  return this;
}

