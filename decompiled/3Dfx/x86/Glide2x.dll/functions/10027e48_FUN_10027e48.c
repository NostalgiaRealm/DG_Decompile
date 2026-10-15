/*
 * FUN_10027e48 at 10027e48
 * undefined4 * __thiscall FUN_10027e48(void * this, SIZE_T param_1)
 * Address ranges: 10027e48-10027e77
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * __thiscall FUN_10027e48(void *this,SIZE_T param_1)

{
  undefined4 uVar1;
  
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(SIZE_T *)((int)this + 8) = param_1;
  *(undefined1 *)((int)this + 0xc) = 1;
  uVar1 = FUN_1004f643(param_1);
  *(undefined4 *)((int)this + 4) = uVar1;
  *(undefined4 *)this = uVar1;
  return this;
}

