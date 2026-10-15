/*
 * FUN_10125df8 at 10125df8
 * undefined FUN_10125df8(void)
 * Address ranges: 10125df8-10126063
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10125df8(int param_1,int param_2)

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
    FUN_100559b0(iVar4);
  }
  *(int *)(iVar6 + 0x1ca8) = 0;
  iVar4 = *(int *)(iVar6 + 0x1ca4);
  if (iVar4 != 0) {
    FUN_10111860(iVar4);
    FUN_10132260(iVar4,0x50);
  }
  *(int *)(iVar6 + 0x1ca4) = 0;
  iVar4 = *(int *)(iVar6 + 0x1ca0);
  if (iVar4 != 0) {
    FUN_10111860(iVar4);
    FUN_10132260(iVar4,0x50);
  }
  *(int *)(iVar6 + 0x1ca0) = 0;
  piVar2 = (int *)(iVar6 + 0x1c9c);
  iVar4 = *piVar2;
  if (iVar4 != 0) {
    FUN_10111860(iVar4);
    FUN_10132260(iVar4,0x50);
  }
  *piVar2 = 0;
  piVar3 = (int *)(iVar6 + 0x1c98);
  iVar4 = *piVar3;
  if (iVar4 != 0) {
    FUN_10111860(iVar4);
    FUN_10132260(iVar4,0x50);
  }
  *piVar3 = 0;
  iVar4 = *(int *)(iVar6 + 0x1d64);
  if (iVar4 != 0) {
    FUN_101194c0(param_1,iVar4);
    FUN_101194c0(param_1,*(undefined4 *)(iVar6 + 0x1d60));
    FUN_101194c0(param_1,*(undefined4 *)(iVar6 + 0x1d74));
    FUN_101194c0(param_1,*(undefined4 *)(iVar6 + 0x1d6c));
    FUN_101194c0(param_1,*(undefined4 *)(iVar6 + 0x1d70));
    FUN_101194c0(param_1,*(undefined4 *)(iVar6 + 0x1d68));
    *(undefined8 *)(iVar6 + 0x1d70) = 0;
    *(int *)(iVar6 + 0x1d64) = 0;
    iVar4 = *(int *)(iVar6 + 0x1d5c);
    *(undefined4 *)(iVar6 + 0x1d60) = 0;
    *(undefined8 *)(iVar6 + 0x1d68) = 0;
    if (iVar4 != -1) {
      iVar5 = *piVar2;
      iVar1 = iVar5 + 0x1c;
      (*(code *)PTR_FUN_1016c074)(iVar1);
      FUN_10111aa8(iVar5,iVar4,2);
      (*(code *)PTR_FUN_1016c0c0)(iVar1);
    }
    iVar4 = *(int *)(iVar6 + 0x1d58);
    if (iVar4 != -1) {
      iVar5 = *piVar3;
      iVar1 = iVar5 + 0x1c;
      (*(code *)PTR_FUN_1016c074)(iVar1);
      FUN_10111aa8(iVar5,iVar4,2);
      (*(code *)PTR_FUN_1016c0c0)(iVar1);
    }
    *(int *)(iVar6 + 0x1d58) = -1;
    *(int *)(iVar6 + 0x1d5c) = -1;
  }
  iVar4 = *(int *)(iVar6 + 0x6c8);
  if (iVar4 != 0) {
    FUN_100557b0(iVar4,1);
  }
  *(int *)(iVar6 + 0x6c8) = 0;
  iVar4 = *(int *)(iVar6 + 0x6cc);
  if (iVar4 != 0) {
    FUN_100557b0(iVar4,1);
  }
  *(int *)(iVar6 + 0x6cc) = 0;
  return;
}

