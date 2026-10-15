/*
 * FUN_1004995c at 1004995c
 * undefined4 __thiscall FUN_1004995c(void * this, int param_1)
 * Address ranges: 1004995c-1004997b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __thiscall FUN_1004995c(void *this,int param_1)

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

