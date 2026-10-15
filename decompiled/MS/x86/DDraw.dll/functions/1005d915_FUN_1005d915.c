/*
 * FUN_1005d915 at 1005d915
 * int __thiscall FUN_1005d915(void * this, int param_1)
 * Address ranges: 1005d915-1005d950
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int __thiscall FUN_1005d915(void *this,int param_1)

{
  int iVar1;
  
  if ((param_1 == 0) || (*(char *)(param_1 + 0x1b + (int)this) == '\0')) {
    iVar1 = 0;
  }
  else {
    iVar1 = (param_1 + -1) * 0x120 + *(int *)((int)this + 0x18);
    iVar1 = (-(uint)(*(int *)(iVar1 + 4) != 0) & 0x80) + 0x20 + DAT_1006903c + iVar1;
  }
  return iVar1;
}

