/*
 * FUN_10016b90 at 10016b90
 * undefined FUN_10016b90(void)
 * Address ranges: 10016b90-10016bfb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_10016b90(int param_1)

{
  int iVar1;
  ulonglong uVar2;
  
  uVar2 = FUN_10014798(param_1);
  if ((uVar2 & 1) == 0) {
    FUN_100123b8(param_1,0);
    iVar1 = param_1 + 0x48;
  }
  else {
    if ((*(int *)(param_1 + 0xf4) == 0) || (*(int *)(param_1 + 0x114) == 0)) {
      FUN_10014c28(param_1);
    }
    iVar1 = param_1 + 0xe8;
    if (*(int *)(param_1 + 0xf4) == 0) {
      iVar1 = 0;
    }
  }
  return iVar1;
}

