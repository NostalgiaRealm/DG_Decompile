/*
 * FUN_10031f60 at 10031f60
 * undefined FUN_10031f60(void)
 * Address ranges: 10031f60-1003209b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10031f60(int param_1,undefined8 *param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  ulonglong uVar6;
  
  piVar1 = (int *)(param_1 + 0xa8);
  uVar6 = FUN_1004ba20(*piVar1 + 0x11c0);
  if ((uVar6 & 1) == 0) {
    FUN_1004b978(*piVar1 + 0x11c0);
  }
  puVar2 = (undefined4 *)(param_1 + 0xa4);
  FUN_10066590(*puVar2,*(undefined4 *)(param_2 + 1));
  FUN_10066590(*puVar2,*(undefined4 *)param_2);
  FUN_10066590(*puVar2,*(undefined4 *)((int)param_2 + 4));
  *param_2 = 0;
  iVar4 = *(int *)(param_2 + 2);
  if (iVar4 != -1) {
    iVar5 = *(int *)(*piVar1 + 0x15dc);
    iVar3 = iVar5 + 0x1c;
    (*(code *)PTR_FUN_100a803c)(iVar3);
    FUN_100675c8(iVar5,iVar4,2);
    (*(code *)PTR_FUN_100a8090)(iVar3);
  }
  iVar4 = *(int *)((int)param_2 + 0xc);
  if (iVar4 != -1) {
    iVar5 = *(int *)(*piVar1 + 0x15d8);
    iVar3 = iVar5 + 0x1c;
    (*(code *)PTR_FUN_100a803c)(iVar3);
    FUN_100675c8(iVar5,iVar4,2);
    (*(code *)PTR_FUN_100a8090)(iVar3);
  }
  *(int *)((int)param_2 + 0xc) = -1;
  *(int *)(param_2 + 2) = -1;
  return;
}

