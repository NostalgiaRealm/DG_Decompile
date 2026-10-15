/*
 * FUN_100495cc at 100495cc
 * undefined4 __thiscall FUN_100495cc(void * this, int param_1)
 * Address ranges: 100495cc-100495eb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __thiscall FUN_100495cc(void *this,int param_1)

{
  undefined4 uVar1;
  
  if (*(char *)((int)this + 0x3a4) == '\0') {
    uVar1 = *(undefined4 *)(param_1 * 0xc + 0x194 + (int)this);
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}

