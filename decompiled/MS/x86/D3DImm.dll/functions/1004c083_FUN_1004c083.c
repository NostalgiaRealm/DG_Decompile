/*
 * FUN_1004c083 at 1004c083
 * undefined __stdcall FUN_1004c083(int param_1, undefined4 * param_2)
 * Address ranges: 1004c083-1004c126
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1004c083(int param_1,undefined4 *param_2)

{
  int iVar1;
  
  iVar1 = 0;
  do {
    if (*(int *)(param_1 + iVar1 * 4) != (&DAT_1005d2a0)[iVar1]) {
      iVar1 = 0;
      goto LAB_1004c0b5;
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 != 4);
  if (param_2 == (undefined4 *)0x0) {
    return;
  }
  *param_2 = &PTR_FUN_1005fa0c;
  goto LAB_1004c118;
  while (iVar1 = iVar1 + 1, iVar1 != 4) {
LAB_1004c0b5:
    if (*(int *)(param_1 + iVar1 * 4) != (&DAT_1005d230)[iVar1]) {
      iVar1 = 0;
      goto LAB_1004c0d9;
    }
  }
  if (param_2 == (undefined4 *)0x0) {
    return;
  }
  *param_2 = &PTR_FUN_1005f9b8;
  goto LAB_1004c118;
  while (iVar1 = iVar1 + 1, iVar1 != 4) {
LAB_1004c0d9:
    if (*(int *)(param_1 + iVar1 * 4) != (&DAT_1005d240)[iVar1]) {
      iVar1 = 0;
      do {
        if (*(int *)(param_1 + iVar1 * 4) != (&DAT_1005d250)[iVar1]) {
          return;
        }
        iVar1 = iVar1 + 1;
      } while (iVar1 != 4);
      if (param_2 == (undefined4 *)0x0) {
        return;
      }
      *param_2 = &PTR_FUN_1005f910;
      goto LAB_1004c118;
    }
  }
  if (param_2 == (undefined4 *)0x0) {
    return;
  }
  *param_2 = &PTR_FUN_1005f964;
LAB_1004c118:
  FUN_1005c76c(param_2);
  return;
}

