/*
 * FUN_1010b560 at 1010b560
 * undefined FUN_1010b560(void)
 * Address ranges: 1010b560-1010bc43
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8
FUN_1010b560(int param_1,int param_2,int param_3,undefined4 param_4,undefined4 param_5,char param_6)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  bool bVar3;
  code *pcVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  int iVar11;
  ulonglong uVar12;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  int *piVar13;
  code *extraout_w11;
  code *extraout_w11_00;
  code *extraout_w11_01;
  code *extraout_w11_02;
  code *extraout_w11_03;
  code *extraout_w11_04;
  code *extraout_w11_05;
  code *extraout_w11_06;
  code *extraout_w11_07;
  code *extraout_w11_08;
  code *extraout_w11_09;
  code *extraout_w11_10;
  code *extraout_w11_11;
  uint uVar14;
  undefined1 auVar15 [16];
  int *local_1bc;
  code *local_1b8;
  code *pcStack_1b4;
  undefined4 *local_1b0;
  int local_1ac;
  ulonglong local_1a8;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined1 auStack_170 [256];
  undefined4 uStack_70;
  undefined4 uStack_6c;
  
  pcVar4 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  iVar8 = param_1 + param_2 * 0x28;
  iVar11 = param_1 + param_2 * 0x1510;
  puVar1 = (undefined4 *)(iVar11 + 0x510);
  local_1ac = iVar11;
  if (*(char *)(iVar8 + 0x28) != '\0') {
    local_1bc = (int *)(iVar8 + 0x24);
    iVar7 = *local_1bc;
    *local_1bc = iVar7 + 1;
    if (iVar7 + 1 == 1) {
      if (param_3 == 5) {
        iVar7 = 0;
      }
      else {
        iVar7 = *(int *)(iVar8 + 0x18);
      }
      *(undefined4 *)(iVar11 + 0x524) = 0;
      local_1a8 = (ulonglong)*(uint *)(param_1 + 700);
      (*pcVar4)();
      iVar5 = (*extraout_w11)(iVar7,param_3,0,0,param_4,param_5,7,puVar1,iVar11 + 0x520);
      if (iVar5 < 0) {
        if (param_6 == '\0') {
LAB_1010b79c:
          iVar7 = *local_1bc + -1;
          piVar13 = local_1bc;
        }
        else {
          (*pcVar4)();
          iVar7 = (*extraout_w11_02)(0,5,0,0,param_4,param_5,7,puVar1,iVar11 + 0x520);
          if (iVar7 < 0) goto LAB_1010b79c;
          uVar6 = (*pcVar4)(*puVar1,extraout_x1_00,iVar11 + 0x518);
          (*extraout_w11_03)(uVar6,&DAT_101656f8);
          iVar7 = 5;
          piVar13 = (int *)(iVar11 + 0x51c);
        }
        *piVar13 = iVar7;
      }
      else {
        uVar6 = (*pcVar4)(*puVar1,extraout_x1,iVar11 + 0x518);
        (*extraout_w11_00)(uVar6,&DAT_101656f8);
        *(int *)(iVar11 + 0x51c) = param_3;
        if (iVar7 != 0) {
          (*pcVar4)();
          (*extraout_w11_01)(iVar7,auStack_170);
          *(undefined4 *)(iVar11 + 0x524) = uStack_70;
          *(undefined4 *)(iVar11 + 0x528) = uStack_6c;
        }
        if ((*(int *)(param_1 + 0x2b8) == 0) ||
           (uVar12 = switchD_10123638::caseD_10123670(FUN_101237a0), (uVar12 & 1) == 0)) {
          *(undefined8 *)(iVar8 + 0x30) = 0;
        }
      }
    }
  }
  if (*(int *)(iVar8 + 0x24) == 0) {
    return 0;
  }
  if (*(int *)(iVar8 + 0x24) != 1) {
    return 1;
  }
  uVar6 = (*pcVar4)();
  (*extraout_w11_04)(uVar6);
  uVar6 = (*pcVar4)();
  (*extraout_w11_05)(uVar6);
  local_1a0 = 0x200001050;
  uStack_198 = 0x1000000000004;
  local_190 = 0x105000000000;
  uVar12 = (ulonglong)(iVar11 + 0x998U);
  local_1a8 = CONCAT44(local_1a8._4_4_,iVar11 + 0x998U);
  uVar6 = (*pcVar4)();
  iVar8 = (*extraout_w11_06)(uVar6,&local_1a0,0,uVar12 & 0xffffffff);
  if (iVar8 < 0) goto LAB_1010bc10;
  uVar6 = (*pcVar4)();
  (*extraout_w11_07)(uVar6,4,&local_1bc,4);
  *(bool *)(param_1 + 0x4e4) = local_1bc != (int *)0x0;
  if (local_1bc == (int *)0x0) {
LAB_1010b988:
    uVar12 = FUN_10109170(param_1,param_2,*(undefined4 *)(param_1 + 0x298),0x2b,&DAT_1016f950,
                          puVar1 + 0xf0);
    if ((uVar12 & 1) != 0) {
      auVar15 = FUN_10109330(param_1,param_2,*(undefined4 *)(param_1 + 0x298),2,&DAT_1016f9dc,
                             &DAT_1016f9b0,puVar1 + 0x11b,puVar1 + 0x11d);
      if ((auVar15._0_8_ & 1) != 0) {
        local_188 = 0x200004000;
        uStack_180 = 0x1000000000001;
        local_178 = 0x1000000000;
        puVar2 = puVar1 + 0x120;
        uVar6 = (*pcVar4)();
        auVar15 = (*extraout_w11_09)(uVar6,&local_188,0,puVar2);
        if (-1 < auVar15._0_4_) {
          uVar6 = (*pcVar4)(*puVar1,auVar15._8_8_,puVar1 + 0x11f);
          iVar8 = (*extraout_w11_10)(uVar6,&DAT_101654e8);
          if (-1 < iVar8) {
            *(undefined8 *)(puVar1 + 8) = 0;
            *(undefined8 *)(puVar1 + 10) = 0xffffffff;
            puVar1[0x10] = 0;
            *(undefined8 *)(puVar1 + 0xbd) = 0;
            *(undefined8 *)(puVar1 + 0xbb) = 0;
            *(undefined8 *)(puVar1 + 0x23) = 0;
            *(undefined8 *)(puVar1 + 0x21) = 0;
            *(undefined8 *)(puVar1 + 0x27) = 0;
            *(undefined8 *)(puVar1 + 0x25) = 0;
            *(undefined8 *)(puVar1 + 0x2b) = 0;
            *(undefined8 *)(puVar1 + 0x29) = 0;
            *(undefined8 *)(puVar1 + 0x2f) = 0;
            *(undefined8 *)(puVar1 + 0x2d) = 0;
            *(undefined8 *)(puVar1 + 0x3f) = 0;
            *(undefined8 *)(puVar1 + 0x3d) = 0;
            *(undefined8 *)(puVar1 + 0x43) = 0;
            *(undefined8 *)(puVar1 + 0x41) = 0;
            *(undefined8 *)(puVar1 + 0x47) = 0;
            *(undefined8 *)(puVar1 + 0x45) = 0;
            *(undefined8 *)(puVar1 + 0x4b) = 0;
            *(undefined8 *)(puVar1 + 0x49) = 0;
            *(undefined8 *)(puVar1 + 0x4f) = 0;
            *(undefined8 *)(puVar1 + 0x4d) = 0;
            *(undefined8 *)(puVar1 + 0x53) = 0;
            *(undefined8 *)(puVar1 + 0x51) = 0;
            *(undefined8 *)(puVar1 + 0x57) = 0;
            *(undefined8 *)(puVar1 + 0x55) = 0;
            *(undefined8 *)(puVar1 + 0x5b) = 0;
            *(undefined8 *)(puVar1 + 0x59) = 0;
            *(undefined8 *)(puVar1 + 0x5f) = 0;
            *(undefined8 *)(puVar1 + 0x5d) = 0;
            *(undefined8 *)(puVar1 + 99) = 0;
            *(undefined8 *)(puVar1 + 0x61) = 0;
            *(undefined8 *)(puVar1 + 0x67) = 0;
            *(undefined8 *)(puVar1 + 0x65) = 0;
            *(undefined8 *)(puVar1 + 0x6b) = 0;
            *(undefined8 *)(puVar1 + 0x69) = 0;
            *(undefined8 *)(puVar1 + 0x6f) = 0;
            *(undefined8 *)(puVar1 + 0x6d) = 0;
            *(undefined8 *)(puVar1 + 0x73) = 0;
            *(undefined8 *)(puVar1 + 0x71) = 0;
            *(undefined8 *)(puVar1 + 0x77) = 0;
            *(undefined8 *)(puVar1 + 0x75) = 0;
            *(undefined8 *)(puVar1 + 0x7b) = 0;
            *(undefined8 *)(puVar1 + 0x79) = 0;
            *(undefined8 *)(puVar1 + 0xb2) = 0;
            *(undefined8 *)(puVar1 + 0xb0) = 0;
            *(undefined8 *)(puVar1 + 0xb4) = 0;
            *(undefined8 *)(puVar1 + 0xb6) = 0;
            *(undefined8 *)(puVar1 + 0xb8) = 0;
            puVar1[0xba] = 0;
            puVar1[0xbf] = 0;
            puVar1[0x121] = 0;
            puVar1[199] = param_1;
            puVar1[200] = param_2;
            puVar1[0xcc] = param_1;
            puVar1[0xcd] = param_2;
            puVar1[0xd1] = param_1;
            puVar1[0xd2] = param_2;
            puVar1[0xd6] = param_1;
            puVar1[0xd7] = param_2;
            puVar1[0xdb] = param_1;
            puVar1[0xdc] = param_2;
            puVar1[0xe0] = param_1;
            puVar1[0xe1] = param_2;
            puVar1[0xe5] = param_1;
            puVar1[0xe6] = param_2;
            *(int *)(local_1ac + 0x8b8) = param_1;
            *(int *)(local_1ac + 0x8bc) = param_2;
            return 1;
          }
          auVar15 = FUN_10109978(param_1,param_2,*puVar2);
          *puVar2 = 0;
        }
        auVar15 = FUN_101094c8(auVar15._0_8_,auVar15._8_8_,2,puVar1 + 0x11b,puVar1 + 0x11d);
      }
      FUN_101092b0(auVar15._0_8_,auVar15._8_8_,0x2b,puVar1 + 0xf0);
    }
  }
  else {
    uVar6 = *(undefined4 *)(param_1 + 0x298);
    local_1b8 = FUN_10155210;
    pcStack_1b4 = pcVar4;
    bVar3 = true;
    *(undefined8 *)(iVar11 + 0x8c8) = 0;
    *(undefined8 *)(iVar11 + 0x8c0) = 0;
    uVar14 = 0;
    local_1b0 = puVar1;
    do {
      if (!bVar3) goto LAB_1010bbe0;
      uVar9 = FUN_10131458(uVar6,(&DAT_1016f9e0)[uVar14],&DAT_10165190);
      iVar8 = FUN_10131570(uVar6,(&DAT_1016f9e0)[uVar14],&DAT_10165190);
      if (iVar8 == 0) {
LAB_1010b960:
        bVar3 = false;
      }
      else {
        uVar10 = (*pcStack_1b4)();
        iVar11 = (*extraout_w11_08)(uVar10,iVar8,uVar9,0);
        if (iVar11 < 0) goto LAB_1010b960;
      }
      FUN_101322d0(iVar8);
      uVar14 = uVar14 + 1;
    } while (uVar14 < 4);
    puVar1 = local_1b0;
    if (bVar3) goto LAB_1010b988;
  }
LAB_1010bbe0:
  FUN_10109688();
  uVar6 = (*pcVar4)();
  (*extraout_w11_11)(uVar6);
LAB_1010bc10:
  FUN_1010b468(param_1,param_2);
  return 0;
}

