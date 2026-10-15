/*
 * FUN_10004bf5 at 10004bf5
 * undefined4 __stdcall FUN_10004bf5(undefined4 * param_1, int * param_2, int param_3, int param_4, int param_5, LONG * param_6, LONG * param_7, RECT * param_8, int param_9, undefined4 param_10, undefined4 param_11, int * param_12)
 * Address ranges: 10004bf5-10004dbc
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4
FUN_10004bf5(undefined4 *param_1,int *param_2,int param_3,int param_4,int param_5,LONG *param_6,
            LONG *param_7,RECT *param_8,int param_9,undefined4 param_10,undefined4 param_11,
            int *param_12)

{
  code *pcVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  int *piVar5;
  uint uVar6;
  int xRight;
  undefined4 uVar7;
  byte bVar8;
  int iVar9;
  undefined4 *puVar10;
  tagRECT *ptVar11;
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
  void *local_10;
  tagPOINT local_c;
  
  puVar10 = (undefined4 *)(param_3 + 4);
  bVar8 = (byte)param_4;
  uVar6 = param_1[1];
  local_c.y = (LONG)puVar10;
  if (param_1[1] == 0xffffffff) {
    uVar3 = (**(code **)(*(int *)*puVar10 + 8))();
    uVar3 = uVar3 >> (bVar8 & 0x1f);
    uVar6 = 1;
    if (uVar3 != 0) {
      uVar6 = uVar3;
    }
  }
  uVar3 = param_1[2];
  if (param_1[2] == 0xffffffff) {
    uVar4 = (**(code **)(*(int *)*puVar10 + 0xc))();
    uVar4 = uVar4 >> (bVar8 & 0x1f);
    uVar3 = 1;
    if (uVar4 != 0) {
      uVar3 = uVar4;
    }
  }
  if (param_4 == 0 && param_5 == 0) {
    local_20 = *puVar10;
  }
  else {
    local_20 = 0;
  }
  local_1c = param_6;
  local_18 = param_7;
  local_14 = 0;
  piVar5 = (int *)(**(code **)(*param_2 + 0x30))
                            (*param_1,uVar6,uVar3,param_1[3],param_1[4],param_1[5],param_1[6],
                             param_1[7],&local_20);
  if (piVar5 == (int *)0x0) {
    uVar7 = 0;
  }
  else {
    cVar2 = (**(code **)(*piVar5 + 0x38))();
    if (cVar2 == '\0') {
      local_24 = 1;
      local_30 = 0;
      local_2c = 0;
      _local_28 = 0;
      ptVar11 = &local_50;
      for (iVar9 = 8; iVar9 != 0; iVar9 = iVar9 + -1) {
        ptVar11->left = 0;
        ptVar11 = (tagRECT *)&ptVar11->top;
      }
      if (param_6 == (LONG *)0x0) {
        uVar3 = *(uint *)(param_3 + 0x1c) >> (bVar8 & 0x1f);
        uVar4 = *(uint *)(param_3 + 0x18) >> (bVar8 & 0x1f);
        uVar6 = 1;
        if (uVar3 != 0) {
          uVar6 = uVar3;
        }
        uVar3 = 1;
        if (uVar4 != 0) {
          uVar3 = uVar4;
        }
        SetRect(&local_40,0,0,uVar3,uVar6);
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
        iVar9 = (**(code **)(*piVar5 + 0xc))();
        xRight = (*pcVar1)();
        SetRect(&local_50,0,0,xRight,iVar9);
      }
      else {
        local_50.left = *param_7;
        local_50.top = param_7[1];
        local_50.right = param_7[2];
        local_50.bottom = param_7[3];
      }
      (**(code **)(*param_2 + 0x84))(0,0,param_4,param_5,piVar5,*(undefined4 *)local_c.y,&local_50);
    }
    if (param_12 != (int *)0x0) {
      GetCursorPos(&local_c);
      MapWindowPoints((HWND)0x0,(HWND)*param_1,&local_c,1);
      (**(code **)(*piVar5 + 0x30))
                ((*param_12 * local_c.x) / param_12[1],(param_12[2] * local_c.y) / param_12[3]);
    }
    uVar7 = FUN_10004a0e(local_10,piVar5,param_3,param_8,param_9);
    uVar7 = CONCAT31((int3)((uint)uVar7 >> 8),1);
  }
  return uVar7;
}

