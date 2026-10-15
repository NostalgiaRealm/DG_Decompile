/*
 * FUN_100328d0 at 100328d0
 * undefined FUN_100328d0(void)
 * Address ranges: 100328d0-100329eb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100328d0(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  ulonglong uVar5;
  
  piVar1 = (int *)(param_1 + 0xa8);
  uVar5 = FUN_1004ba20(*piVar1 + 0x11c0);
  if ((uVar5 & 1) == 0) {
    FUN_1004b978(*piVar1 + 0x11c0);
  }
  FUN_10066590(*(undefined4 *)(param_1 + 0xa4),*(undefined4 *)(param_1 + 0xcc));
  *(undefined4 *)(param_1 + 0xcc) = 0;
  iVar3 = *(int *)(param_1 + 0xd4);
  if (iVar3 != -1) {
    iVar4 = *(int *)(*piVar1 + 0x15e0);
    iVar2 = iVar4 + 0x1c;
    (*(code *)PTR_FUN_100a803c)(iVar2);
    FUN_100675c8(iVar4,iVar3,1);
    (*(code *)PTR_FUN_100a8090)(iVar2);
  }
  *(int *)(param_1 + 0xd4) = -1;
  iVar3 = *(int *)(param_1 + 0xd0);
  if (iVar3 != -1) {
    iVar4 = *(int *)(*piVar1 + 0x15d8);
    iVar2 = iVar4 + 0x1c;
    (*(code *)PTR_FUN_100a803c)(iVar2);
    FUN_100675c8(iVar4,iVar3,1);
    (*(code *)PTR_FUN_100a8090)(iVar2);
    *(int *)(param_1 + 0xd0) = -1;
  }
  return;
}

