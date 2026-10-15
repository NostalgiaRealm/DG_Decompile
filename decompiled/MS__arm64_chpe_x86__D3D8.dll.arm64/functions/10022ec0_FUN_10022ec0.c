/*
 * FUN_10022ec0 at 10022ec0
 * undefined FUN_10022ec0(void)
 * Address ranges: 10022ec0-10023237
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_10022ec0(int param_1,int param_2,int param_3,char param_4,char param_5)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  code *pcVar5;
  bool bVar6;
  char cVar7;
  undefined4 uVar8;
  uint uVar9;
  undefined8 uVar10;
  ulonglong uVar11;
  undefined4 *puVar12;
  code *extraout_w11;
  code *extraout_w11_00;
  code *extraout_w11_01;
  code *extraout_w11_02;
  code *extraout_w11_03;
  code *extraout_w11_04;
  int iVar13;
  undefined1 auVar14 [16];
  undefined8 local_98;
  undefined4 local_90;
  int local_88 [5];
  undefined8 local_74;
  undefined8 uStack_6c;
  undefined8 uStack_64;
  undefined8 uStack_5c;
  undefined8 uStack_54;
  undefined4 uStack_4c;
  
  piVar1 = (int *)(param_2 + 4);
  iVar3 = *piVar1;
  *(undefined1 *)(param_1 + 0xfc) = 0;
  iVar13 = param_3;
  if (param_3 != 0) {
    iVar4 = *(int *)(param_3 + 4);
    if ((*(uint *)(iVar4 + 100) < *(uint *)(iVar3 + 100)) ||
       (*(uint *)(iVar4 + 0x68) < *(uint *)(iVar3 + 0x68))) {
      iVar13 = 0;
    }
    else {
      *(undefined1 *)(param_1 + 0xfc) = *(undefined1 *)(iVar4 + 0x7d);
    }
  }
  pcVar5 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  piVar2 = (int *)(iVar13 + 4);
  local_88[0] = *(int *)(*piVar1 + 0x50);
  local_88[1] = 0;
  local_88[2] = 0;
  local_88[3] = 0;
  if (iVar13 == 0) {
    uVar11 = 0;
  }
  else {
    uVar11 = (ulonglong)*(uint *)(*piVar2 + 0x50);
  }
  uVar8 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)
                    (*(undefined4 *)(param_1 + 0x14),param_2,uVar11);
  cVar7 = (*extraout_w11)(uVar8,local_88,uVar11 & 0xffffffff);
  if (cVar7 == '\0') {
    uVar10 = 0;
  }
  else {
    if (iVar13 == 0) {
      uVar9 = 0;
    }
    else {
      (*pcVar5)();
      cVar7 = (*extraout_w11_00)(iVar13,local_88[0]);
      if (cVar7 == '\0') {
        uVar8 = (*pcVar5)();
        (*extraout_w11_01)(uVar8);
      }
      puVar12 = (undefined4 *)(*piVar2 + 0x50);
      (*pcVar5)();
      uVar9 = (*extraout_w11_02)(iVar13,local_88[0],*puVar12);
    }
    local_88[4] = local_88[0];
    uStack_6c = 0;
    uStack_5c = 0;
    uStack_64 = 0;
    uStack_54 = 0;
    uStack_4c = 0;
    if (local_88[0] == 0) {
      local_74 = 0;
    }
    else {
      local_74 = *(undefined8 *)(iVar3 + 0x6c);
    }
    local_98 = 0;
    local_90 = 0;
    if (uVar9 != 0) {
      iVar13 = *piVar2;
      local_98 = (ulonglong)uVar9;
      if (uVar9 == *(uint *)(iVar13 + 0x50)) {
        local_98 = CONCAT44(*(undefined4 *)(iVar13 + 0x6c),uVar9);
        local_90 = *(undefined4 *)(iVar13 + 0x70);
      }
    }
    puVar12 = (undefined4 *)(iVar3 + 0x74);
    uVar8 = (*pcVar5)();
    (*extraout_w11_03)(uVar8,1,*puVar12,local_88 + 4,&local_98);
    *(undefined4 *)(param_1 + 0xf4) = *(undefined4 *)(iVar3 + 0x6c);
    *(undefined4 *)(param_1 + 0xf8) = *(undefined4 *)(iVar3 + 0x70);
    *(undefined1 *)(param_1 + 0xfd) = *(undefined1 *)(*piVar1 + 0x7e);
    *(undefined2 *)(param_1 + 0xfe) = 0x100;
    *(int *)(param_1 + 0x18) = param_2;
    *(int *)(param_1 + 0x28) = param_3;
    if (param_4 != '\0') {
      iVar3 = *piVar1;
      *(undefined8 *)(param_1 + 0x2c) = 0;
      *(undefined4 *)(param_1 + 0x34) = *(undefined4 *)(iVar3 + 100);
      *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(iVar3 + 0x68);
      *(undefined4 *)(param_1 + 0x3c) = 0;
      *(undefined4 *)(param_1 + 0x40) = 0x3f800000;
      auVar14 = (*pcVar5)();
      (*extraout_w11_04)(auVar14._0_8_ & 0xffffffff,auVar14._8_8_ & 0xffffffff);
    }
    if (param_5 != '\0') {
      bVar6 = *(int *)(param_1 + 0x28) != 0;
      FUN_1001fcb0(param_1,7,bVar6);
      *(uint *)(param_1 + 0x2a8) = (uint)bVar6;
    }
    uVar10 = 1;
  }
  return uVar10;
}

