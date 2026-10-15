/*
 * FUN_1005290f at 1005290f
 * undefined __stdcall FUN_1005290f(int param_1, uint param_2, int param_3)
 * Address ranges: 1005290f-100529b8
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1005290f(int param_1,uint param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  
  uVar2 = 0;
  iVar4 = 0;
  if (param_2 != 0) {
    do {
      iVar1 = uVar2 * 0x18;
      piVar3 = (int *)(param_3 + iVar1);
      if ((((*(int *)(param_1 + 0x4cc + iVar1) != *piVar3) ||
           (*(int *)(param_1 + 0x4d0 + iVar1) != piVar3[1])) ||
          (*(int *)(param_1 + 0x4d4 + iVar1) != piVar3[2])) ||
         (((*(int *)(param_1 + 0x4d8 + iVar1) != piVar3[3] ||
           (*(int *)(param_1 + 0x4dc + iVar1) != piVar3[4])) ||
          (*(int *)(param_1 + 0x4e0 + iVar1) != piVar3[5])))) {
        piVar5 = (int *)(param_1 + 0x4cc + iVar1);
        for (iVar4 = 6; iVar4 != 0; iVar4 = iVar4 + -1) {
          *piVar5 = *piVar3;
          piVar3 = piVar3 + 1;
          piVar5 = piVar5 + 1;
        }
        iVar4 = uVar2 + 1;
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < param_2);
    if (iVar4 != 0) {
      FUN_100520d4(param_1);
      (**(code **)(**(int **)(param_1 + 0x638) + 0x54))(*(int **)(param_1 + 0x638),iVar4,param_3);
      *(undefined1 *)(param_1 + 0x620) = 1;
    }
  }
  return;
}

