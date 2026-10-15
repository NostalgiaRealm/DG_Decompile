/*
 * FUN_1002a017 at 1002a017
 * undefined __stdcall FUN_1002a017(int param_1, undefined4 * param_2)
 * Address ranges: 1002a017-1002a10f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1002a017(int param_1,undefined4 *param_2)

{
  int iVar1;
  
  iVar1 = 0;
  do {
    if (*(int *)(param_1 + iVar1 * 4) != (&DAT_10062560)[iVar1]) {
      iVar1 = 0;
      goto LAB_1002a053;
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 != 4);
  if (param_2 == (undefined4 *)0x0) {
    return;
  }
  *param_2 = &PTR_FUN_10064d08;
  goto LAB_1002a100;
  while (iVar1 = iVar1 + 1, iVar1 != 4) {
LAB_1002a053:
    if (*(int *)(param_1 + iVar1 * 4) != (&DAT_100623c0)[iVar1]) {
      iVar1 = 0;
      goto LAB_1002a07d;
    }
  }
  if (param_2 == (undefined4 *)0x0) {
    return;
  }
  *param_2 = &PTR_FUN_10064c78;
  goto LAB_1002a100;
  while (iVar1 = iVar1 + 1, iVar1 != 4) {
LAB_1002a07d:
    if (*(int *)(param_1 + iVar1 * 4) != (&DAT_100623d0)[iVar1]) {
      iVar1 = 0;
      goto LAB_1002a0a0;
    }
  }
  if (param_2 == (undefined4 *)0x0) {
    return;
  }
  *param_2 = &PTR_FUN_10064bdc;
  goto LAB_1002a100;
  while (iVar1 = iVar1 + 1, iVar1 != 4) {
LAB_1002a0a0:
    if (*(int *)(param_1 + iVar1 * 4) != (&DAT_100623e0)[iVar1]) {
      iVar1 = 0;
      goto LAB_1002a0c3;
    }
  }
  if (param_2 == (undefined4 *)0x0) {
    return;
  }
  *param_2 = &PTR_FUN_10064b3c;
  goto LAB_1002a100;
  while (iVar1 = iVar1 + 1, iVar1 != 4) {
LAB_1002a0c3:
    if (*(int *)(param_1 + iVar1 * 4) != (&DAT_100623f0)[iVar1]) {
      iVar1 = 0;
      do {
        if (*(int *)(param_1 + iVar1 * 4) != (&DAT_10062400)[iVar1]) {
          return;
        }
        iVar1 = iVar1 + 1;
      } while (iVar1 != 4);
      if (param_2 == (undefined4 *)0x0) {
        return;
      }
      *param_2 = &PTR_FUN_100649c4;
      goto LAB_1002a100;
    }
  }
  if (param_2 == (undefined4 *)0x0) {
    return;
  }
  *param_2 = &PTR_FUN_10064a88;
LAB_1002a100:
  FUN_10060be1(param_2);
  return;
}

