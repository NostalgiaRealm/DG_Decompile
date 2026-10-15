/*
 * FUN_10026300 at 10026300
 * undefined FUN_10026300(void)
 * Address ranges: 10026300-100266f7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_10026300(int param_1,int *param_2,int param_3,byte param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  code *pcVar4;
  char cVar5;
  undefined4 uVar6;
  uint uVar7;
  undefined8 uVar8;
  ulonglong uVar9;
  undefined4 *puVar10;
  int iVar11;
  undefined1 uVar12;
  uint uVar13;
  code *extraout_w11;
  code *extraout_w11_00;
  code *extraout_w11_01;
  code *extraout_w11_02;
  code *extraout_w11_03;
  undefined8 local_98;
  undefined4 local_90;
  undefined8 local_88;
  undefined4 local_80;
  undefined4 local_7c;
  int local_78;
  undefined8 local_74;
  undefined8 uStack_6c;
  undefined8 uStack_64;
  undefined8 uStack_5c;
  undefined8 uStack_54;
  undefined4 uStack_4c;
  
  iVar2 = *(int *)(*param_2 + 4);
  *(undefined1 *)(param_1 + 0x2a0) = 0;
  if (param_3 == 0) {
LAB_10026398:
    if ((param_4 & 1) == 0) goto LAB_1002639c;
    local_88 = 0;
    local_80 = 0;
  }
  else {
    iVar11 = *(int *)(param_3 + 4);
    if (((*(uint *)(iVar2 + 100) <= *(uint *)(iVar11 + 100)) &&
        (*(uint *)(iVar2 + 0x68) <= *(uint *)(iVar11 + 0x68))) || ((param_4 & 1) != 0)) {
      *(undefined1 *)(param_1 + 0x2a0) = *(undefined1 *)(iVar11 + 0x7d);
      goto LAB_10026398;
    }
    param_3 = 0;
LAB_1002639c:
    uVar7 = *(uint *)(*(int *)(*param_2 + 4) + 0x50);
    if (param_2[1] == 0) {
      local_88 = (ulonglong)uVar7;
      if ((param_4 & 1) == 0) goto LAB_100263e0;
LAB_10026404:
      local_80 = 0;
      if ((param_4 & 1) != 0) goto LAB_10026438;
    }
    else {
      local_88 = CONCAT44(*(undefined4 *)(*(int *)(param_2[1] + 4) + 0x50),uVar7);
LAB_100263e0:
      if (param_2[2] == 0) goto LAB_10026404;
      local_80 = *(undefined4 *)(*(int *)(param_2[2] + 4) + 0x50);
    }
    if (param_2[3] != 0) {
      local_7c = *(undefined4 *)(*(int *)(param_2[3] + 4) + 0x50);
      goto LAB_1002643c;
    }
  }
LAB_10026438:
  local_7c = 0;
LAB_1002643c:
  pcVar4 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  piVar1 = (int *)(param_3 + 4);
  if (param_3 == 0) {
    uVar9 = 0;
  }
  else {
    uVar9 = (ulonglong)*(uint *)(*piVar1 + 0x50);
  }
  uVar6 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)
                    (*(undefined4 *)(param_1 + 0x14),param_2,uVar9);
  cVar5 = (*extraout_w11)(uVar6,&local_88,uVar9 & 0xffffffff);
  if (cVar5 == '\0') {
    uVar8 = 0;
  }
  else {
    if (param_3 == 0) {
      uVar7 = 0;
    }
    else {
      (*pcVar4)();
      cVar5 = (*extraout_w11_00)(param_3,local_88 & 0xffffffff);
      if (cVar5 == '\0') {
        uVar6 = (*pcVar4)();
        (*extraout_w11_01)(uVar6);
      }
      puVar10 = (undefined4 *)(*piVar1 + 0x50);
      (*pcVar4)();
      uVar7 = (*extraout_w11_02)(param_3,local_88 & 0xffffffff,*puVar10);
    }
    local_78 = (int)local_88;
    uStack_6c = 0;
    uStack_5c = 0;
    uStack_64 = 0;
    uStack_54 = 0;
    uStack_4c = 0;
    if ((int)local_88 == 0) {
      local_74 = 0;
    }
    else {
      local_74 = *(undefined8 *)(iVar2 + 0x6c);
    }
    local_98 = 0;
    uVar13 = 1;
    local_90 = 0;
    iVar11 = 0xc;
    do {
      if (param_2[uVar13] == 0) {
        *(undefined4 *)((int)&local_78 + iVar11) = 0;
        uVar6 = 0;
        *(undefined4 *)((int)&local_74 + iVar11) = 0;
      }
      else {
        iVar3 = *(int *)(param_2[uVar13] + 4);
        *(undefined4 *)((int)&local_78 + iVar11) = *(undefined4 *)((int)&local_88 + uVar13 * 4);
        *(undefined4 *)((int)&local_74 + iVar11) = *(undefined4 *)(iVar3 + 0x6c);
        uVar6 = *(undefined4 *)(iVar3 + 0x70);
      }
      uVar13 = uVar13 + 1;
      *(undefined4 *)((int)&local_74 + iVar11 + 4) = uVar6;
      iVar11 = iVar11 + 0xc;
    } while (uVar13 < 4);
    if (uVar7 != 0) {
      iVar11 = *piVar1;
      local_98 = (ulonglong)uVar7;
      if (uVar7 == *(uint *)(iVar11 + 0x50)) {
        local_98 = CONCAT44(*(undefined4 *)(iVar11 + 0x6c),uVar7);
        local_90 = *(undefined4 *)(iVar11 + 0x70);
      }
    }
    puVar10 = (undefined4 *)(iVar2 + 0x74);
    uVar6 = (*pcVar4)();
    (*extraout_w11_03)(uVar6,4,*puVar10,&local_78,&local_98);
    *(undefined4 *)(param_1 + 0x298) = *(undefined4 *)(iVar2 + 0x6c);
    *(undefined4 *)(param_1 + 0x29c) = *(undefined4 *)(iVar2 + 0x70);
    if (param_4 == 0) {
      uVar12 = *(undefined1 *)(*(int *)(*param_2 + 4) + 0x7e);
    }
    else {
      uVar12 = 0;
    }
    *(undefined1 *)(param_1 + 0x2a1) = uVar12;
    *(undefined2 *)(param_1 + 0x2a2) = 0x100;
    uVar8 = 1;
  }
  return uVar8;
}

