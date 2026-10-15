/*
 * FUN_1001d8cf at 1001d8cf
 * undefined4 * __thiscall FUN_1001d8cf(void * this, SIZE_T param_1)
 * Address ranges: 1001d8cf-1001d8fe
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * __thiscall FUN_1001d8cf(void *this,SIZE_T param_1)

{
  undefined4 uVar1;
  
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(SIZE_T *)((int)this + 8) = param_1;
  *(undefined1 *)((int)this + 0xc) = 1;
  uVar1 = FUN_100556a3(param_1);
  *(undefined4 *)((int)this + 4) = uVar1;
  *(undefined4 *)this = uVar1;
  return this;
}

