/*
 * FUN_10032090 at 10032090
 * undefined FUN_10032090(void)
 * Address ranges: 10032090-1003210b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10032090(int param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = *(int *)(param_1 + 0x508);
  if (iVar1 != 0) {
    FUN_10058000(iVar1);
    FUN_10079ff0(iVar1,0x78);
  }
  FUN_1002faf8(param_1);
  uVar2 = 0;
  do {
    if (*(int *)(param_1 + 0x1f8 + uVar2 * 0x120) != 0) {
      FUN_10040490(param_1 + uVar2 * 0x120 + 0x140);
    }
    uVar2 = uVar2 + 1;
  } while (uVar2 < 3);
  return;
}

