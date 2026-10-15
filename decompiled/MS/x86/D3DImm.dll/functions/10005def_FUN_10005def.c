/*
 * FUN_10005def at 10005def
 * int __thiscall FUN_10005def(void * this, int param_1)
 * Address ranges: 10005def-10005e4e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int __thiscall FUN_10005def(void *this,int param_1)

{
  int iVar1;
  int iStack_8;
  
  iVar1 = *(int *)(*(int *)((int)this + 0xc) + 0x7dc);
  if ((param_1 != 1) || (iStack_8 = 1, *(char *)(*(int *)((int)this + 0xc) + 0x7eb) == '\0')) {
    if (iVar1 == 0x100) {
      iStack_8 = 1;
    }
    else {
      if (iVar1 != 0x200) {
        if (iVar1 == 0x300) {
          return param_1;
        }
        if (iVar1 != 0x400) {
          if (iVar1 == 0x500) {
            return param_1;
          }
          if (0x10 < (byte)iVar1) {
            return param_1;
          }
          if (iVar1 == 0) {
            return param_1;
          }
          return 5;
        }
      }
      iStack_8 = 2;
    }
  }
  return iStack_8;
}

