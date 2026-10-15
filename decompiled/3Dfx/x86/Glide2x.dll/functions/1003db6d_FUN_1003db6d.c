/*
 * FUN_1003db6d at 1003db6d
 * undefined __stdcall FUN_1003db6d(int param_1, int param_2, uint param_3, int param_4)
 * Address ranges: 1003db6d-1003dcd4
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1003db6d(int param_1,int param_2,uint param_3,int param_4)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  undefined4 local_10;
  
  uVar6 = 0;
  local_10 = param_2;
  iVar7 = 0;
  if (param_3 != 0) {
    iVar4 = param_2 * 0x18;
    do {
      iVar5 = uVar6 * 0x18;
      iVar3 = iVar4 + iVar5;
      iVar1 = *(int *)(param_4 + 4 + iVar5);
      if ((((*(int *)(param_1 + 0x448 + iVar3) != *(int *)(param_4 + iVar5)) ||
           (*(int *)(param_1 + 0x44c + iVar3) != iVar1)) ||
          (*(int *)(param_1 + 0x450 + iVar4 + iVar5) != *(int *)(param_4 + 8 + iVar5))) ||
         (((*(int *)(param_1 + 0x454 + iVar4 + iVar5) != *(int *)(param_4 + 0xc + iVar5) ||
           (*(int *)(param_1 + 0x458 + iVar3) != *(int *)(param_4 + 0x10 + iVar5))) ||
          (*(int *)(param_1 + 0x45c + iVar3) != *(int *)(param_4 + 0x14 + iVar5))))) {
        *(int *)(param_1 + 0x448 + iVar3) = *(int *)(param_4 + iVar5);
        *(int *)(param_1 + 0x44c + iVar3) = iVar1;
        uVar2 = *(undefined4 *)(param_4 + 0xc + iVar5);
        *(undefined4 *)(param_1 + 0x450 + iVar4 + iVar5) = *(undefined4 *)(param_4 + 8 + iVar5);
        *(undefined4 *)(param_1 + 0x454 + iVar4 + iVar5) = uVar2;
        uVar2 = *(undefined4 *)(param_4 + 0x14 + iVar5);
        *(undefined4 *)(param_1 + 0x458 + iVar3) = *(undefined4 *)(param_4 + 0x10 + iVar5);
        *(undefined4 *)(param_1 + 0x45c + iVar3) = uVar2;
        if (iVar7 == 0) {
          iVar7 = 1;
          local_10 = param_2 + uVar6;
        }
        else {
          iVar7 = param_2 + 1 + (uVar6 - local_10);
        }
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 < param_3);
    if (iVar7 != 0) {
      FUN_1003cb1a(param_1);
      (**(code **)(**(int **)(param_1 + 0x638) + 0xb4))
                (*(int **)(param_1 + 0x638),local_10,iVar7,local_10 * 0x18 + 0x448 + param_1);
      *(undefined1 *)(param_1 + 0x620) = 1;
    }
  }
  return;
}

