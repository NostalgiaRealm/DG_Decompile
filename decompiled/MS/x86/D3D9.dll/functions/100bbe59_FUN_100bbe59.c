/*
 * FUN_100bbe59 at 100bbe59
 * undefined __stdcall FUN_100bbe59(int param_1, uint param_2, int param_3)
 * Address ranges: 100bbe59-100bbee3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100bbe59(int param_1,uint param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  
  uVar1 = 0;
  iVar3 = 0;
  if (param_2 != 0) {
    do {
      iVar2 = uVar1 * 0x10;
      piVar4 = (int *)(param_3 + iVar2);
      if ((((*(int *)(param_1 + 0x58c + iVar2) != *piVar4) ||
           (*(int *)(param_1 + 0x590 + iVar2) != piVar4[1])) ||
          (*(int *)(param_1 + 0x594 + iVar2) != piVar4[2])) ||
         (*(int *)(param_1 + 0x598 + iVar2) != piVar4[3])) {
        piVar5 = (int *)(param_1 + 0x58c + iVar2);
        *piVar5 = *piVar4;
        piVar5[1] = piVar4[1];
        piVar5[2] = piVar4[2];
        piVar5[3] = piVar4[3];
        iVar3 = uVar1 + 1;
      }
      uVar1 = uVar1 + 1;
    } while (uVar1 < param_2);
    if (iVar3 != 0) {
      FUN_100ba94f(param_1);
      (**(code **)(**(int **)(param_1 + 0x638) + 0x58))(*(int **)(param_1 + 0x638),iVar3,param_3);
      *(undefined1 *)(param_1 + 0x620) = 1;
    }
  }
  return;
}

