/*
 * FUN_1000f8a0 at 1000f8a0
 * undefined FUN_1000f8a0(void)
 * Address ranges: 1000f8a0-1000f95f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool FUN_1000f8a0(int param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  
  piVar2 = (int *)(param_1 + 0x3308);
  piVar1 = (int *)(*(int *)(*piVar2 + 0x1304) + 0x948);
  iVar3 = *piVar1;
  *piVar1 = param_1;
  piVar1 = (int *)(*(int *)(*piVar2 + 0x1304) + 0x634);
  *piVar1 = *piVar1 + 1;
  if (param_1 != iVar3) {
    iVar4 = *(int *)(*piVar2 + 0x1304);
    FUN_1005d238(*(undefined4 *)(iVar4 + 0x8e4),*(undefined4 *)(param_1 + 0x333c),
                 *(undefined4 *)(iVar4 + 0x8e0),iVar4,*(undefined8 *)(iVar4 + 0x938));
    FUN_10064690(*(undefined4 *)(*piVar2 + 0x1304),*(undefined4 *)(param_1 + 0x333c));
  }
  return param_1 != iVar3;
}

