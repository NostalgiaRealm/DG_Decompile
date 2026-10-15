/*
 * FUN_1002f1b8 at 1002f1b8
 * undefined FUN_1002f1b8(void)
 * Address ranges: 1002f1b8-1002f2f3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1002f1b8(int param_1,undefined8 *param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  ulonglong uVar6;
  
  piVar1 = (int *)(param_1 + 0xa8);
  uVar6 = FUN_10046360(*piVar1 + 0x11c0);
  if ((uVar6 & 1) == 0) {
    FUN_100462b8(*piVar1 + 0x11c0);
  }
  puVar2 = (undefined4 *)(param_1 + 0xa4);
  FUN_10060ef0(*puVar2,*(undefined4 *)(param_2 + 1));
  FUN_10060ef0(*puVar2,*(undefined4 *)param_2);
  FUN_10060ef0(*puVar2,*(undefined4 *)((int)param_2 + 4));
  *param_2 = 0;
  iVar4 = *(int *)(param_2 + 2);
  if (iVar4 != -1) {
    iVar5 = *(int *)(*piVar1 + 0x15dc);
    iVar3 = iVar5 + 0x1c;
    (*(code *)PTR_FUN_100a003c)(iVar3);
    FUN_10061f28(iVar5,iVar4,2);
    (*(code *)PTR_FUN_100a0090)(iVar3);
  }
  iVar4 = *(int *)((int)param_2 + 0xc);
  if (iVar4 != -1) {
    iVar5 = *(int *)(*piVar1 + 0x15d8);
    iVar3 = iVar5 + 0x1c;
    (*(code *)PTR_FUN_100a003c)(iVar3);
    FUN_10061f28(iVar5,iVar4,2);
    (*(code *)PTR_FUN_100a0090)(iVar3);
  }
  *(int *)((int)param_2 + 0xc) = -1;
  *(int *)(param_2 + 2) = -1;
  return;
}

