/*
 * FUN_100909f8 at 100909f8
 * undefined4 __thiscall FUN_100909f8(void * this, int param_1)
 * Address ranges: 100909f8-10090a17
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __thiscall FUN_100909f8(void *this,int param_1)

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

