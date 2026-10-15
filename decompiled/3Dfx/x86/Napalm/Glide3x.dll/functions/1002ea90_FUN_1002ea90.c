/*
 * FUN_1002ea90 at 1002ea90
 * undefined4 * __thiscall FUN_1002ea90(void * this, LPCWSTR param_1)
 * Address ranges: 1002ea90-1002eac4
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * __thiscall FUN_1002ea90(void *this,LPCWSTR param_1)

{
  HANDLE pvVar1;
  
  *(undefined ***)this = &PTR_FUN_10059784;
  *(undefined1 *)((int)this + 8) = 1;
  pvVar1 = CreateFileW(param_1,0x80000000,1,(LPSECURITY_ATTRIBUTES)0x0,3,0x80,(HANDLE)0x0);
  *(HANDLE *)((int)this + 4) = pvVar1;
  return this;
}

