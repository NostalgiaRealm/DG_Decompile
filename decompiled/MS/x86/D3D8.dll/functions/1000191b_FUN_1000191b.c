/*
 * FUN_1000191b at 1000191b
 * undefined4 * __thiscall FUN_1000191b(void * this, SIZE_T param_1)
 * Address ranges: 1000191b-10001946
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * __thiscall FUN_1000191b(void *this,SIZE_T param_1)

{
  undefined4 uVar1;
  
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(SIZE_T *)((int)this + 8) = param_1;
  uVar1 = FUN_100ad4a9(param_1);
  *(undefined4 *)((int)this + 4) = uVar1;
  *(undefined4 *)this = uVar1;
  return this;
}

