/*
 * FUN_100d8e50 at 100d8e50
 * undefined FUN_100d8e50(void)
 * Address ranges: 100d8e50-100d8f83
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100d8e50(int param_1)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  
  iVar2 = *(int *)(param_1 + 0xc);
  if (*(int *)(iVar2 + 0x7dc) != *(int *)(iVar2 + 0x5c4)) {
    uVar3 = 0;
    do {
      FUN_100d3aa0(param_1,uVar3,5,*(undefined4 *)(param_1 + 0x68fc + uVar3 * 0x38));
      FUN_100d3aa0(param_1,uVar3,5,*(undefined4 *)(param_1 + (uVar3 + 0x1e0) * 0x38));
      FUN_100d3aa0(param_1,uVar3,5,*(undefined4 *)(param_1 + 0x6904 + uVar3 * 0x38));
      FUN_100d3aa0(param_1,uVar3,5,*(undefined4 *)(param_1 + 0x6910 + uVar3 * 0x38));
      uVar3 = uVar3 + 1;
    } while (uVar3 < 0x10);
  }
  FUN_10029380(param_1);
  piVar1 = (int *)(*(int *)(param_1 + 0xc) + 0x94f);
  if (*piVar1 != *(int *)(iVar2 + 0x737)) {
    *piVar1 = *(int *)(iVar2 + 0x737);
    FUN_100d8f90(*(undefined4 *)(param_1 + 0xc2d0),param_1);
  }
  return;
}

