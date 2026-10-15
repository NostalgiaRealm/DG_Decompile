/*
 * FUN_100ce0de at 100ce0de
 * int __thiscall FUN_100ce0de(void * this, int param_1)
 * Address ranges: 100ce0de-100ce119
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int __thiscall FUN_100ce0de(void *this,int param_1)

{
  int iVar1;
  
  if ((param_1 == 0) || (*(char *)(param_1 + 0x1b + (int)this) == '\0')) {
    iVar1 = 0;
  }
  else {
    iVar1 = (param_1 + -1) * 0x120 + *(int *)((int)this + 0x18);
    iVar1 = (-(uint)(*(int *)(iVar1 + 4) != 0) & 0x80) + 0x20 + DAT_100db06c + iVar1;
  }
  return iVar1;
}

