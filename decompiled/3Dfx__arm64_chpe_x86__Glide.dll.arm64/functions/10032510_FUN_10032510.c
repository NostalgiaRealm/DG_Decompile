/*
 * FUN_10032510 at 10032510
 * undefined FUN_10032510(void)
 * Address ranges: 10032510-1003258b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10032510(int param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = *(int *)(param_1 + 0x508);
  if (iVar1 != 0) {
    FUN_10058480(iVar1);
    FUN_1007a470(iVar1,0x78);
  }
  FUN_1002ff78(param_1);
  uVar2 = 0;
  do {
    if (*(int *)(param_1 + 0x1f8 + uVar2 * 0x120) != 0) {
      FUN_10040910(param_1 + uVar2 * 0x120 + 0x140);
    }
    uVar2 = uVar2 + 1;
  } while (uVar2 < 3);
  return;
}

