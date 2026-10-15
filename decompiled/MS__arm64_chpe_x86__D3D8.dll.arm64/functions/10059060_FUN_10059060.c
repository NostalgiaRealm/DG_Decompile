/*
 * FUN_10059060 at 10059060
 * undefined FUN_10059060(void)
 * Address ranges: 10059060-100590d7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10059060(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = 0;
  if (param_2 != 0) {
    iVar1 = param_2 + -4;
  }
  uVar2 = 0;
  do {
    if (*(int *)(param_1 + 0x348 + uVar2 * 4) == iVar1) {
      *(uint *)(param_1 + 0x41c) = 1 << (ulonglong)(uVar2 & 0x1f) | *(uint *)(param_1 + 0x41c);
    }
    uVar2 = uVar2 + 1;
  } while (uVar2 < 0x10);
  if (*(int *)(param_1 + 0x388) == iVar1) {
    *(uint *)(param_1 + 0x41c) = *(uint *)(param_1 + 0x41c) | 0x80000000;
  }
  return;
}

