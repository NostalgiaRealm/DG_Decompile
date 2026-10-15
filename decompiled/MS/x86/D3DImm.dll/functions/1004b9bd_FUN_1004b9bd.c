/*
 * FUN_1004b9bd at 1004b9bd
 * undefined __stdcall FUN_1004b9bd(int param_1, undefined4 * param_2)
 * Address ranges: 1004b9bd-1004ba3c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1004b9bd(int param_1,undefined4 *param_2)

{
  int iVar1;
  
  iVar1 = 0;
  do {
    if (*(int *)(param_1 + iVar1 * 4) != (&DAT_1005d2a0)[iVar1]) {
      iVar1 = 0;
      goto LAB_1004b9ef;
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 != 4);
  if (param_2 == (undefined4 *)0x0) {
    return;
  }
  *param_2 = &PTR_FUN_1005f904;
  goto LAB_1004ba2e;
  while (iVar1 = iVar1 + 1, iVar1 != 4) {
LAB_1004b9ef:
    if (*(int *)(param_1 + iVar1 * 4) != (&DAT_1005d260)[iVar1]) {
      iVar1 = 0;
      do {
        if (*(int *)(param_1 + iVar1 * 4) != (&DAT_1005d270)[iVar1]) {
          return;
        }
        iVar1 = iVar1 + 1;
      } while (iVar1 != 4);
      if (param_2 == (undefined4 *)0x0) {
        return;
      }
      *param_2 = &PTR_FUN_1005f8c0;
      goto LAB_1004ba2e;
    }
  }
  if (param_2 == (undefined4 *)0x0) {
    return;
  }
  *param_2 = &PTR_FUN_1005f8e4;
LAB_1004ba2e:
  FUN_1005c76c(param_2);
  return;
}

