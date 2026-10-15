/*
 * FUN_100017a7 at 100017a7
 * undefined4 * __thiscall FUN_100017a7(void * this, SIZE_T param_1)
 * Address ranges: 100017a7-100017d2
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * __thiscall FUN_100017a7(void *this,SIZE_T param_1)

{
  undefined4 uVar1;
  
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(SIZE_T *)((int)this + 8) = param_1;
  uVar1 = FUN_100cfd89(param_1);
  *(undefined4 *)((int)this + 4) = uVar1;
  *(undefined4 *)this = uVar1;
  return this;
}

