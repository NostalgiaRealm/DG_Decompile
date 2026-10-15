/*
 * FUN_180031628 at 180031628
 * undefined8 __fastcall FUN_180031628(longlong * param_1, undefined8 * param_2, longlong * param_3, longlong param_4, undefined8 param_5, undefined8 param_6, tagPOINT param_7, undefined8 * param_8, RECT * param_9, uint param_10, undefined8 param_11, undefined1 param_12, int * param_13)
 * Address ranges: 180031628-18003185c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8
FUN_180031628(longlong *param_1,undefined8 *param_2,longlong *param_3,longlong param_4,
             undefined8 param_5,undefined8 param_6,tagPOINT param_7,undefined8 *param_8,
             RECT *param_9,uint param_10,undefined8 param_11,undefined1 param_12,int *param_13)

{
  code *pcVar1;
  undefined8 *puVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  longlong *plVar7;
  undefined8 uVar8;
  undefined8 in_stack_ffffffffffffff40;
  undefined4 uVar9;
  undefined8 in_stack_ffffffffffffff48;
  undefined4 uVar10;
  undefined8 in_stack_ffffffffffffff50;
  undefined4 uVar11;
  undefined8 local_98;
  undefined8 *local_90;
  undefined8 *local_88;
  undefined1 local_80;
  tagRECT local_78;
  tagRECT local_68;
  undefined8 local_58;
  uint3 local_50;
  undefined1 uStack_4d;
  undefined1 local_4c;
  
  uVar9 = (undefined4)((ulonglong)in_stack_ffffffffffffff40 >> 0x20);
  uVar10 = (undefined4)((ulonglong)in_stack_ffffffffffffff48 >> 0x20);
  uVar11 = (undefined4)((ulonglong)in_stack_ffffffffffffff50 >> 0x20);
  iVar6 = *(int *)(param_2 + 1);
  if (*(int *)(param_2 + 1) == -1) {
    iVar4 = (**(code **)(**(longlong **)(param_4 + 8) + 0x10))();
    iVar6 = 1;
    if (iVar4 != 0) {
      iVar6 = iVar4;
    }
  }
  iVar4 = *(int *)((longlong)param_2 + 0xc);
  if (*(int *)((longlong)param_2 + 0xc) == -1) {
    iVar5 = (**(code **)(**(longlong **)(param_4 + 8) + 0x18))();
    iVar4 = 1;
    if (iVar5 != 0) {
      iVar4 = iVar5;
    }
  }
  local_98 = *(undefined8 *)(param_4 + 8);
  puVar2 = (undefined8 *)CONCAT44(param_7.y,param_7.x);
  local_80 = param_12;
  local_88 = param_8;
  local_90 = puVar2;
  plVar7 = (longlong *)
           (**(code **)(*param_3 + 0x60))
                     (param_3,*param_2,iVar6,iVar4,*(undefined4 *)(param_2 + 2),
                      CONCAT44(uVar9,*(undefined4 *)((longlong)param_2 + 0x14)),
                      CONCAT44(uVar10,*(undefined4 *)(param_2 + 3)),
                      CONCAT44(uVar11,*(undefined4 *)((longlong)param_2 + 0x1c)),
                      *(undefined4 *)(param_2 + 4),&local_98);
  uVar8 = 0;
  if (plVar7 != (longlong *)0x0) {
    cVar3 = (**(code **)(*plVar7 + 0x70))(plVar7);
    if (cVar3 == '\0') {
      local_58 = 0;
      _local_50 = 0;
      local_4c = 1;
      local_78.left = 0;
      local_78.top = 0;
      local_78.right = 0;
      local_78.bottom = 0;
      local_68.left = 0;
      local_68.top = 0;
      local_68.right = 0;
      local_68.bottom = 0;
      if (puVar2 == (undefined8 *)0x0) {
        iVar6 = 1;
        if (*(int *)(param_4 + 0x28) != 0) {
          iVar6 = *(int *)(param_4 + 0x28);
        }
        iVar4 = 1;
        if (*(int *)(param_4 + 0x24) != 0) {
          iVar4 = *(int *)(param_4 + 0x24);
        }
        SetRect(&local_68,0,0,iVar4,iVar6);
      }
      else {
        local_68._0_8_ = *puVar2;
        local_68._8_8_ = puVar2[1];
      }
      local_50 = (uint3)(byte)local_50;
      if (param_8 == (undefined8 *)0x0) {
        pcVar1 = *(code **)(*plVar7 + 0x10);
        iVar6 = (**(code **)(*plVar7 + 0x18))(plVar7);
        iVar4 = (*pcVar1)(plVar7);
        SetRect(&local_78,0,0,iVar4,iVar6);
      }
      else {
        local_78._0_8_ = *param_8;
        local_78._8_8_ = param_8[1];
      }
      (**(code **)(*param_3 + 0x108))(param_3,0,0,0,0,plVar7,*(undefined8 *)(param_4 + 8),&local_78)
      ;
    }
    if (param_13 != (int *)0x0) {
      GetCursorPos(&param_7);
      MapWindowPoints((HWND)0x0,(HWND)*param_2,&param_7,1);
      (**(code **)(*plVar7 + 0x60))
                (plVar7,(longlong)(param_7.x * *param_13) / (longlong)param_13[1] & 0xffffffff,
                 (longlong)(param_7.y * param_13[2]) / (longlong)param_13[3] & 0xffffffff);
    }
    uVar8 = FUN_18003136c(param_1,plVar7,param_4,param_9,param_10);
    uVar8 = CONCAT71((int7)((ulonglong)uVar8 >> 8),1);
  }
  return uVar8;
}

