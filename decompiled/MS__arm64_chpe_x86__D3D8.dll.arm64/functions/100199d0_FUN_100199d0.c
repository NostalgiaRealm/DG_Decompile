/*
 * FUN_100199d0 at 100199d0
 * undefined FUN_100199d0(void)
 * Address ranges: 100199d0-10019a9b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100199d0(int param_1)

{
  bool bVar1;
  int iVar2;
  
  *(undefined1 *)(param_1 + 0xd5) = 0;
  if (*(char *)(DAT_1013ceec + 0x7e6) != '\0') {
    if (((*(uint *)(*(int *)(param_1 + 0x2c) + 0xb0c) >> 2 & 1) == 0) &&
       (*(int *)(DAT_1013d014 + 0x20) == 0)) {
      bVar1 = false;
      *(undefined4 *)(DAT_1013d014 + 0x1c) = 1;
    }
    else {
      bVar1 = true;
      iVar2 = (*(code *)PTR_FUN_10134120)(DAT_1013d014);
      if (iVar2 == 0) {
        FUN_10006560(0);
      }
    }
    FUN_1000cf40(*(int *)(param_1 + 0x2c));
    if (bVar1) {
      (*(code *)PTR_FUN_101340bc)(DAT_1013d014);
    }
    else {
      *(undefined4 *)(DAT_1013d014 + 0x1c) = 0;
    }
  }
  return;
}

