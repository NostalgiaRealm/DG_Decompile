/*
 * FUN_1004a500 at 1004a500
 * int __thiscall FUN_1004a500(void * this, int param_1, int param_2)
 * Address ranges: 1004a500-1004a55a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int __thiscall FUN_1004a500(void *this,int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = param_1 * 0x16c0;
  if (param_2 == 1) {
    iVar1 = iVar1 + 0x19d0;
  }
  else if (param_2 == 2) {
    iVar1 = iVar1 + 0x1a30;
  }
  else if (param_2 == 3) {
    iVar1 = iVar1 + 0x1a90;
  }
  else if (param_2 == 4) {
    iVar1 = iVar1 + 0x1af0;
  }
  else {
    if (param_2 != 5) {
      return 0;
    }
    iVar1 = iVar1 + 0x1b50;
  }
  return iVar1 + *(int *)((int)this + 4);
}

