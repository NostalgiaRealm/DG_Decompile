/*
 * FUN_100200d0 at 100200d0
 * undefined FUN_100200d0(void)
 * Address ranges: 100200d0-1002018f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool FUN_100200d0(int param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  
  piVar2 = (int *)(param_1 + 0x3188);
  piVar1 = (int *)(*(int *)(*piVar2 + 0x1304) + 0x948);
  iVar3 = *piVar1;
  *piVar1 = param_1;
  piVar1 = (int *)(*(int *)(*piVar2 + 0x1304) + 0x634);
  *piVar1 = *piVar1 + 1;
  if (param_1 != iVar3) {
    iVar4 = *(int *)(*piVar2 + 0x1304);
    FUN_100595a8(*(undefined4 *)(iVar4 + 0x8e4),*(undefined4 *)(param_1 + 0x31bc),
                 *(undefined4 *)(iVar4 + 0x8e0),iVar4,*(undefined8 *)(iVar4 + 0x938));
    FUN_10060a00(*(undefined4 *)(*piVar2 + 0x1304),*(undefined4 *)(param_1 + 0x31bc));
  }
  return param_1 != iVar3;
}

