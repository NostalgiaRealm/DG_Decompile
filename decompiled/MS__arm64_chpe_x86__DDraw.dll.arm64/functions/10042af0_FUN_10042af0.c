/*
 * FUN_10042af0 at 10042af0
 * undefined FUN_10042af0(void)
 * Address ranges: 10042af0-10042b97
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10042af0(int param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  uint *puVar3;
  int iVar4;
  int iVar5;
  
  FUN_1004eac8(param_1);
  piVar1 = (int *)(param_1 + 4);
  puVar2 = (undefined4 *)(*piVar1 + 0x20);
  puVar3 = (uint *)(*piVar1 + 0x34);
  if ((*puVar3 >> 3 & 1) != 0) {
    FUN_100914d0(*puVar2);
    *puVar2 = 0;
    *puVar3 = *puVar3 & 0xfffffff7;
  }
  iVar5 = FUN_100087c0(*piVar1);
  iVar4 = *(int *)(*(int *)(param_1 + 0xfc) + 0x11c) * 0x228;
  if (*piVar1 == *(int *)(&DAT_100be324 + iVar4) && iVar5 == 0) {
    *(undefined4 *)(&DAT_100be324 + iVar4) = 0;
  }
  *piVar1 = 0;
  *(int *)(param_1 + 0xfc) = 0;
  return;
}

