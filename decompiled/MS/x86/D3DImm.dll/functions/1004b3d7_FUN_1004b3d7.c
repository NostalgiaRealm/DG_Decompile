/*
 * FUN_1004b3d7 at 1004b3d7
 * undefined __stdcall FUN_1004b3d7(int param_1, undefined4 * param_2)
 * Address ranges: 1004b3d7-1004b456
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1004b3d7(int param_1,undefined4 *param_2)

{
  int iVar1;
  
  iVar1 = 0;
  do {
    if (*(int *)(param_1 + iVar1 * 4) != (&DAT_1005d2a0)[iVar1]) {
      iVar1 = 0;
      goto LAB_1004b409;
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 != 4);
  if (param_2 == (undefined4 *)0x0) {
    return;
  }
  *param_2 = &PTR_FUN_1005f8b4;
  goto LAB_1004b448;
  while (iVar1 = iVar1 + 1, iVar1 != 4) {
LAB_1004b409:
    if (*(int *)(param_1 + iVar1 * 4) != (&DAT_1005d1c0)[iVar1]) {
      iVar1 = 0;
      do {
        if (*(int *)(param_1 + iVar1 * 4) != (&DAT_1005d1d0)[iVar1]) {
          return;
        }
        iVar1 = iVar1 + 1;
      } while (iVar1 != 4);
      if (param_2 == (undefined4 *)0x0) {
        return;
      }
      *param_2 = &PTR_FUN_1005f87c;
      goto LAB_1004b448;
    }
  }
  if (param_2 == (undefined4 *)0x0) {
    return;
  }
  *param_2 = &PTR_FUN_1005f894;
LAB_1004b448:
  FUN_1005c76c(param_2);
  return;
}

