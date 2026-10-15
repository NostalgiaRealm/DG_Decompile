/*
 * FUN_100f2828 at 100f2828
 * undefined FUN_100f2828(void)
 * Address ranges: 100f2828-100f2a93
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100f2828(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar6 = param_1 + param_2 * 0x16c0;
  iVar4 = *(int *)(iVar6 + 0x1ca8);
  if (iVar4 != 0) {
    FUN_10046ed0(iVar4);
  }
  *(int *)(iVar6 + 0x1ca8) = 0;
  iVar4 = *(int *)(iVar6 + 0x1ca4);
  if (iVar4 != 0) {
    FUN_100df010(iVar4);
    FUN_100fec90(iVar4,0x50);
  }
  *(int *)(iVar6 + 0x1ca4) = 0;
  iVar4 = *(int *)(iVar6 + 0x1ca0);
  if (iVar4 != 0) {
    FUN_100df010(iVar4);
    FUN_100fec90(iVar4,0x50);
  }
  *(int *)(iVar6 + 0x1ca0) = 0;
  piVar2 = (int *)(iVar6 + 0x1c9c);
  iVar4 = *piVar2;
  if (iVar4 != 0) {
    FUN_100df010(iVar4);
    FUN_100fec90(iVar4,0x50);
  }
  *piVar2 = 0;
  piVar3 = (int *)(iVar6 + 0x1c98);
  iVar4 = *piVar3;
  if (iVar4 != 0) {
    FUN_100df010(iVar4);
    FUN_100fec90(iVar4,0x50);
  }
  *piVar3 = 0;
  iVar4 = *(int *)(iVar6 + 0x1d64);
  if (iVar4 != 0) {
    FUN_100e6c70(param_1,iVar4);
    FUN_100e6c70(param_1,*(undefined4 *)(iVar6 + 0x1d60));
    FUN_100e6c70(param_1,*(undefined4 *)(iVar6 + 0x1d74));
    FUN_100e6c70(param_1,*(undefined4 *)(iVar6 + 0x1d6c));
    FUN_100e6c70(param_1,*(undefined4 *)(iVar6 + 0x1d70));
    FUN_100e6c70(param_1,*(undefined4 *)(iVar6 + 0x1d68));
    *(undefined8 *)(iVar6 + 0x1d70) = 0;
    *(int *)(iVar6 + 0x1d64) = 0;
    iVar4 = *(int *)(iVar6 + 0x1d5c);
    *(undefined4 *)(iVar6 + 0x1d60) = 0;
    *(undefined8 *)(iVar6 + 0x1d68) = 0;
    if (iVar4 != -1) {
      iVar5 = *piVar2;
      iVar1 = iVar5 + 0x1c;
      (*(code *)PTR_FUN_10134070)(iVar1);
      FUN_100df258(iVar5,iVar4,2);
      (*(code *)PTR_FUN_101340bc)(iVar1);
    }
    iVar4 = *(int *)(iVar6 + 0x1d58);
    if (iVar4 != -1) {
      iVar5 = *piVar3;
      iVar1 = iVar5 + 0x1c;
      (*(code *)PTR_FUN_10134070)(iVar1);
      FUN_100df258(iVar5,iVar4,2);
      (*(code *)PTR_FUN_101340bc)(iVar1);
    }
    *(int *)(iVar6 + 0x1d58) = -1;
    *(int *)(iVar6 + 0x1d5c) = -1;
  }
  iVar4 = *(int *)(iVar6 + 0x6c8);
  if (iVar4 != 0) {
    FUN_10046cd0(iVar4,1);
  }
  *(int *)(iVar6 + 0x6c8) = 0;
  iVar4 = *(int *)(iVar6 + 0x6cc);
  if (iVar4 != 0) {
    FUN_10046cd0(iVar4,1);
  }
  *(int *)(iVar6 + 0x6cc) = 0;
  return;
}

