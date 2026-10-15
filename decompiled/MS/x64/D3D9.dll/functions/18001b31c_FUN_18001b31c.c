/*
 * FUN_18001b31c at 18001b31c
 * int __fastcall FUN_18001b31c(longlong param_1, int param_2)
 * Address ranges: 18001b31c-18001b37a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_18001b31c(longlong param_1,int param_2)

{
  int iVar1;
  
  if ((param_2 != 1) || (iVar1 = 1, *(char *)(*(longlong *)(param_1 + 0x18) + 0x887) == '\0')) {
    iVar1 = *(int *)(*(longlong *)(param_1 + 0x18) + 0x878);
    if (iVar1 == 0x100) {
      iVar1 = 1;
    }
    else {
      if (iVar1 != 0x200) {
        if (iVar1 == 0x300) {
          return param_2;
        }
        if (iVar1 != 0x400) {
          if (iVar1 == 0x500) {
            return param_2;
          }
          if (0x10 < (byte)iVar1) {
            return param_2;
          }
          if (iVar1 == 0) {
            return param_2;
          }
          return 3;
        }
      }
      iVar1 = 2;
    }
  }
  return iVar1;
}

