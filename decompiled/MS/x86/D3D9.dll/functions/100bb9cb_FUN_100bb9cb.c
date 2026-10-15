/*
 * FUN_100bb9cb at 100bb9cb
 * undefined __stdcall FUN_100bb9cb(int param_1, int param_2, uint param_3, int param_4)
 * Address ranges: 100bb9cb-100bbb00
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100bb9cb(int param_1,int param_2,uint param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  uVar4 = 0;
  iVar7 = 0;
  if (param_3 != 0) {
    iVar2 = param_2 * 0x10;
    iVar5 = param_2;
    do {
      iVar3 = uVar4 * 0x10;
      iVar6 = iVar2 + iVar3;
      iVar1 = *(int *)(param_4 + 4 + iVar3);
      if (*(int *)(param_1 + 0x238 + iVar6) == *(int *)(param_4 + iVar3)) {
        if (((*(int *)(param_1 + 0x23c + iVar6) != iVar1) ||
            (*(int *)(param_1 + 0x240 + iVar2 + iVar3) != *(int *)(param_4 + 8 + iVar3))) ||
           (*(int *)(param_1 + 0x244 + iVar6) != *(int *)(param_4 + 0xc + iVar3)))
        goto LAB_100bba64;
      }
      else {
LAB_100bba64:
        *(int *)(param_1 + 0x238 + iVar6) = *(int *)(param_4 + iVar3);
        *(int *)(param_1 + 0x23c + iVar6) = iVar1;
        *(undefined4 *)(param_1 + 0x240 + iVar3 + iVar2) = *(undefined4 *)(param_4 + 8 + iVar3);
        *(undefined4 *)(param_1 + 0x244 + iVar6) = *(undefined4 *)(param_4 + 0xc + iVar3);
        if (iVar7 == 0) {
          iVar7 = 1;
          iVar5 = param_2 + uVar4;
        }
        else {
          iVar7 = param_2 + 1 + (uVar4 - iVar5);
        }
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < param_3);
    if (iVar7 != 0) {
      FUN_100ba94f(param_1);
      (**(code **)(**(int **)(param_1 + 0x638) + 0xb0))
                (*(int **)(param_1 + 0x638),iVar5,iVar7,iVar5 * 0x10 + 0x238 + param_1);
      *(undefined1 *)(param_1 + 0x620) = 1;
    }
  }
  return;
}

