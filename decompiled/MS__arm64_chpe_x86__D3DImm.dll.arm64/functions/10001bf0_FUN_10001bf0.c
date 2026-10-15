/*
 * FUN_10001bf0 at 10001bf0
 * undefined FUN_10001bf0(void)
 * Address ranges: 10001bf0-10001c63
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_10001bf0(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = param_2;
  if ((param_2 != 1) || (*(char *)(*(int *)(param_1 + 0xc) + 0x7eb) == '\0')) {
    uVar1 = *(uint *)(*(int *)(param_1 + 0xc) + 0x7dc);
    if ((uVar1 - 0x200 & 0xfffffdff) == 0) {
      iVar2 = 2;
    }
    else if ((uVar1 - 0x300 & 0xfffffdff) != 0) {
      if (uVar1 == 0x100) {
        iVar2 = 1;
      }
      else {
        iVar2 = 3;
        if (0x10 < (uVar1 & 0xff) || uVar1 == 0) {
          iVar2 = param_2;
        }
      }
    }
  }
  return iVar2;
}

