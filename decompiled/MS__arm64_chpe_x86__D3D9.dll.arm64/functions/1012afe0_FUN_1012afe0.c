/*
 * FUN_1012afe0 at 1012afe0
 * undefined FUN_1012afe0(void)
 * Address ranges: 1012afe0-1012b0f7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1012afe0(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  iVar4 = *(int *)(param_1 + 4) + param_2 * 0x16c0;
  iVar2 = *(int *)(iVar4 + 0x1d14);
  if (iVar2 != 0) {
    do {
      iVar2 = iVar2 + -1;
      iVar1 = *(int *)(iVar4 + 0x1d0c) + iVar2 * 0x18;
      piVar3 = *(int **)(iVar1 + 0x10);
      iVar7 = piVar3[1];
      while (iVar7 != 0) {
        iVar6 = iVar7 + -1;
        iVar5 = *piVar3 + iVar7 * 0x74;
        iVar7 = iVar6;
        if (*(int *)(iVar5 + -0x5c) == param_3) {
          FUN_1011e7a0(*(undefined4 *)(iVar4 + 0x1d00),*(undefined4 *)(iVar5 + -4),FUN_1011b340,1);
          FUN_1011b630(piVar3,iVar6);
          *(int *)(iVar4 + 0x1d18) = *(int *)(iVar4 + 0x1d18) + -1;
        }
      }
      if (piVar3[1] == 0) {
        FUN_1011b448((int *)(iVar4 + 0x1d0c),iVar1 + 8);
      }
    } while (iVar2 != 0);
  }
  return;
}

