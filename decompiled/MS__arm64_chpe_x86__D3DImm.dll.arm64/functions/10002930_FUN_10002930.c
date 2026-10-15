/*
 * FUN_10002930 at 10002930
 * undefined FUN_10002930(void)
 * Address ranges: 10002930-10002c97
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_10002930(int param_1,int *param_2,int param_3,byte param_4)

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
  undefined1 uVar11;
  code *extraout_w11;
  code *extraout_w11_00;
  code *extraout_w11_01;
  code *extraout_w11_02;
  code *extraout_w11_03;
  undefined8 local_90;
  undefined4 local_88;
  undefined8 local_80;
  undefined4 local_78;
  undefined4 local_74;
  int local_70;
  undefined8 local_6c;
  undefined8 uStack_64;
  undefined8 uStack_5c;
  undefined8 uStack_54;
  undefined8 uStack_4c;
  undefined4 uStack_44;
  
  iVar2 = *(int *)(*param_2 + 4);
  *(undefined1 *)(param_1 + 0xfc) = 0;
  if (param_3 == 0) {
LAB_100029c4:
    if ((param_4 & 1) == 0) goto LAB_100029c8;
    local_80 = 0;
    local_78 = 0;
  }
  else {
    iVar3 = *(int *)(param_3 + 4);
    if (((*(uint *)(iVar2 + 100) <= *(uint *)(iVar3 + 100)) &&
        (*(uint *)(iVar2 + 0x68) <= *(uint *)(iVar3 + 0x68))) || ((param_4 & 1) != 0)) {
      *(undefined1 *)(param_1 + 0xfc) = *(undefined1 *)(iVar3 + 0x7d);
      goto LAB_100029c4;
    }
    param_3 = 0;
LAB_100029c8:
    uVar7 = *(uint *)(*(int *)(*param_2 + 4) + 0x50);
    if (param_2[1] == 0) {
      local_80 = (ulonglong)uVar7;
      if ((param_4 & 1) == 0) goto LAB_10002a0c;
LAB_10002a30:
      local_78 = 0;
      if ((param_4 & 1) != 0) goto LAB_10002a64;
    }
    else {
      local_80 = CONCAT44(*(undefined4 *)(*(int *)(param_2[1] + 4) + 0x50),uVar7);
LAB_10002a0c:
      if (param_2[2] == 0) goto LAB_10002a30;
      local_78 = *(undefined4 *)(*(int *)(param_2[2] + 4) + 0x50);
    }
    if (param_2[3] != 0) {
      local_74 = *(undefined4 *)(*(int *)(param_2[3] + 4) + 0x50);
      goto LAB_10002a68;
    }
  }
LAB_10002a64:
  local_74 = 0;
LAB_10002a68:
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
  cVar5 = (*extraout_w11)(uVar6,&local_80,uVar9 & 0xffffffff);
  if (cVar5 == '\0') {
    uVar8 = 0;
  }
  else {
    if (param_3 == 0) {
      uVar7 = 0;
    }
    else {
      (*pcVar4)();
      cVar5 = (*extraout_w11_00)(param_3,local_80 & 0xffffffff);
      if (cVar5 == '\0') {
        uVar6 = (*pcVar4)();
        (*extraout_w11_01)(uVar6);
      }
      puVar10 = (undefined4 *)(*piVar1 + 0x50);
      (*pcVar4)();
      uVar7 = (*extraout_w11_02)(param_3,local_80 & 0xffffffff,*puVar10);
    }
    local_70 = (int)local_80;
    uStack_64 = 0;
    uStack_54 = 0;
    uStack_5c = 0;
    uStack_4c = 0;
    uStack_44 = 0;
    if ((int)local_80 == 0) {
      local_6c = 0;
    }
    else {
      local_6c = *(undefined8 *)(iVar2 + 0x6c);
    }
    local_90 = 0;
    local_88 = 0;
    if (uVar7 != 0) {
      iVar3 = *piVar1;
      local_90 = (ulonglong)uVar7;
      if (uVar7 == *(uint *)(iVar3 + 0x50)) {
        local_90 = CONCAT44(*(undefined4 *)(iVar3 + 0x6c),uVar7);
        local_88 = *(undefined4 *)(iVar3 + 0x70);
      }
    }
    puVar10 = (undefined4 *)(iVar2 + 0x74);
    uVar6 = (*pcVar4)();
    (*extraout_w11_03)(uVar6,1,*puVar10,&local_70,&local_90);
    *(undefined4 *)(param_1 + 0xf4) = *(undefined4 *)(iVar2 + 0x6c);
    *(undefined4 *)(param_1 + 0xf8) = *(undefined4 *)(iVar2 + 0x70);
    if (param_4 == 0) {
      uVar11 = *(undefined1 *)(*(int *)(*param_2 + 4) + 0x7e);
    }
    else {
      uVar11 = 0;
    }
    *(undefined1 *)(param_1 + 0xfd) = uVar11;
    *(undefined2 *)(param_1 + 0xfe) = 0x100;
    uVar8 = 1;
  }
  return uVar8;
}

