/*
 * FUN_1003fc98 at 1003fc98
 * undefined FUN_1003fc98(void)
 * Address ranges: 1003fc98-1003fdd3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1003fc98(int param_1,undefined8 *param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  ulonglong uVar6;
  
  piVar1 = (int *)(param_1 + 0xa8);
  uVar6 = FUN_10055a80(*piVar1 + 0x11c0);
  if ((uVar6 & 1) == 0) {
    FUN_100559d8(*piVar1 + 0x11c0);
  }
  puVar2 = (undefined4 *)(param_1 + 0xa4);
  FUN_1005d6e0(*puVar2,*(undefined4 *)(param_2 + 1));
  FUN_1005d6e0(*puVar2,*(undefined4 *)param_2);
  FUN_1005d6e0(*puVar2,*(undefined4 *)((int)param_2 + 4));
  *param_2 = 0;
  iVar4 = *(int *)(param_2 + 2);
  if (iVar4 != -1) {
    iVar5 = *(int *)(*piVar1 + 0x15dc);
    iVar3 = iVar5 + 0x1c;
    (*(code *)PTR_FUN_1009d03c)(iVar3);
    FUN_1005e718(iVar5,iVar4,2);
    (*(code *)PTR_FUN_1009d090)(iVar3);
  }
  iVar4 = *(int *)((int)param_2 + 0xc);
  if (iVar4 != -1) {
    iVar5 = *(int *)(*piVar1 + 0x15d8);
    iVar3 = iVar5 + 0x1c;
    (*(code *)PTR_FUN_1009d03c)(iVar3);
    FUN_1005e718(iVar5,iVar4,2);
    (*(code *)PTR_FUN_1009d090)(iVar3);
  }
  *(int *)((int)param_2 + 0xc) = -1;
  *(int *)(param_2 + 2) = -1;
  return;
}

