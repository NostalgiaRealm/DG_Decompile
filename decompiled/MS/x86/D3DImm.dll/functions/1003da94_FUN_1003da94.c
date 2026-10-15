/*
 * FUN_1003da94 at 1003da94
 * undefined __stdcall FUN_1003da94(int param_1, undefined4 * param_2)
 * Address ranges: 1003da94-1003db62
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1003da94(int param_1,undefined4 *param_2)

{
  int iVar1;
  
  iVar1 = 0;
  do {
    if (*(int *)(param_1 + iVar1 * 4) != (&DAT_1005d2a0)[iVar1]) {
      iVar1 = 0;
      goto LAB_1003dad0;
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 != 4);
  if (param_2 == (undefined4 *)0x0) {
    return;
  }
  *param_2 = &PTR_FUN_1005f7dc;
  goto LAB_1003db53;
  while (iVar1 = iVar1 + 1, iVar1 != 4) {
LAB_1003dad0:
    if (*(int *)(param_1 + iVar1 * 4) != (&DAT_1005d180)[iVar1]) {
      iVar1 = 0;
      goto LAB_1003daf3;
    }
  }
  if (param_2 == (undefined4 *)0x0) {
    return;
  }
  *param_2 = &PTR_FUN_1005f784;
  goto LAB_1003db53;
  while (iVar1 = iVar1 + 1, iVar1 != 4) {
LAB_1003daf3:
    if (*(int *)(param_1 + iVar1 * 4) != (&DAT_1005d190)[iVar1]) {
      iVar1 = 0;
      goto LAB_1003db16;
    }
  }
  if (param_2 == (undefined4 *)0x0) {
    return;
  }
  *param_2 = &PTR_FUN_1005f700;
  goto LAB_1003db53;
  while (iVar1 = iVar1 + 1, iVar1 != 4) {
LAB_1003db16:
    if (*(int *)(param_1 + iVar1 * 4) != (&DAT_1005d1a0)[iVar1]) {
      iVar1 = 0;
      do {
        if (*(int *)(param_1 + iVar1 * 4) != (&DAT_1005d1b0)[iVar1]) {
          return;
        }
        iVar1 = iVar1 + 1;
      } while (iVar1 != 4);
      if (param_2 == (undefined4 *)0x0) {
        return;
      }
      *param_2 = &PTR_FUN_1005f594;
      goto LAB_1003db53;
    }
  }
  if (param_2 == (undefined4 *)0x0) {
    return;
  }
  *param_2 = &PTR_FUN_1005f658;
LAB_1003db53:
  FUN_1005c76c(param_2);
  return;
}

