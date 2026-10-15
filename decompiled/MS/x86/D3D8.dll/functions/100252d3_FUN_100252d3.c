/*
 * FUN_100252d3 at 100252d3
 * undefined4 __stdcall FUN_100252d3(undefined4 * param_1, int * param_2, int param_3, undefined4 param_4, undefined4 param_5, LONG * param_6, LONG * param_7, RECT * param_8, int param_9, undefined4 param_10, undefined1 param_11, int * param_12)
 * Address ranges: 100252d3-10025468
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4
FUN_100252d3(undefined4 *param_1,int *param_2,int param_3,undefined4 param_4,undefined4 param_5,
            LONG *param_6,LONG *param_7,RECT *param_8,int param_9,undefined4 param_10,
            undefined1 param_11,int *param_12)

{
  code *pcVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  undefined4 uVar6;
  int iVar7;
  tagRECT *ptVar8;
  tagRECT local_50;
  tagRECT local_40;
  undefined4 local_30;
  undefined4 local_2c;
  uint3 local_28;
  undefined1 uStack_25;
  undefined1 local_24;
  undefined4 local_20;
  LONG *local_1c;
  LONG *local_18;
  undefined1 local_14;
  tagPOINT local_10;
  void *local_8;
  
  iVar7 = param_1[1];
  if (param_1[1] == -1) {
    iVar3 = (**(code **)(**(int **)(param_3 + 4) + 8))();
    iVar7 = 1;
    if (iVar3 != 0) {
      iVar7 = iVar3;
    }
  }
  iVar3 = param_1[2];
  if (param_1[2] == -1) {
    iVar4 = (**(code **)(**(int **)(param_3 + 4) + 0xc))();
    iVar3 = 1;
    if (iVar4 != 0) {
      iVar3 = iVar4;
    }
  }
  local_20 = *(undefined4 *)(param_3 + 4);
  local_1c = param_6;
  local_18 = param_7;
  local_14 = param_11;
  piVar5 = (int *)(**(code **)(*param_2 + 0x30))
                            (*param_1,iVar7,iVar3,param_1[3],param_1[4],param_1[5],param_1[6],
                             param_1[7],&local_20);
  if (piVar5 == (int *)0x0) {
    uVar6 = 0;
  }
  else {
    cVar2 = (**(code **)(*piVar5 + 0x38))();
    if (cVar2 == '\0') {
      local_30 = 0;
      local_2c = 0;
      _local_28 = 0;
      local_24 = 1;
      ptVar8 = &local_50;
      for (iVar7 = 8; iVar7 != 0; iVar7 = iVar7 + -1) {
        ptVar8->left = 0;
        ptVar8 = (tagRECT *)&ptVar8->top;
      }
      if (param_6 == (LONG *)0x0) {
        iVar7 = 1;
        if (*(int *)(param_3 + 0x1c) != 0) {
          iVar7 = *(int *)(param_3 + 0x1c);
        }
        iVar3 = 1;
        if (*(int *)(param_3 + 0x18) != 0) {
          iVar3 = *(int *)(param_3 + 0x18);
        }
        SetRect(&local_40,0,0,iVar3,iVar7);
      }
      else {
        local_40.left = *param_6;
        local_40.top = param_6[1];
        local_40.right = param_6[2];
        local_40.bottom = param_6[3];
      }
      local_28 = (uint3)(byte)local_28;
      if (param_7 == (LONG *)0x0) {
        pcVar1 = *(code **)(*piVar5 + 8);
        iVar7 = (**(code **)(*piVar5 + 0xc))();
        iVar3 = (*pcVar1)();
        SetRect(&local_50,0,0,iVar3,iVar7);
      }
      else {
        local_50.left = *param_7;
        local_50.top = param_7[1];
        local_50.right = param_7[2];
        local_50.bottom = param_7[3];
      }
      (**(code **)(*param_2 + 0x84))(0,0,0,0,piVar5,*(undefined4 *)(param_3 + 4),&local_50);
    }
    if (param_12 != (int *)0x0) {
      GetCursorPos(&local_10);
      MapWindowPoints((HWND)0x0,(HWND)*param_1,&local_10,1);
      (**(code **)(*piVar5 + 0x30))
                ((*param_12 * local_10.x) / param_12[1],(param_12[2] * local_10.y) / param_12[3]);
    }
    uVar6 = FUN_100250ad(local_8,piVar5,param_3,param_8,param_9);
    uVar6 = CONCAT31((int3)((uint)uVar6 >> 8),1);
  }
  return uVar6;
}

