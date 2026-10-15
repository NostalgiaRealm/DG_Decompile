/*
 * FUN_100685f0 at 100685f0
 * undefined FUN_100685f0(void)
 * Address ranges: 100685f0-10068c8b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100685f0(int param_1,int param_2)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  code *pcVar4;
  undefined4 uVar5;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  undefined8 extraout_x1_03;
  undefined8 extraout_x1_04;
  undefined8 extraout_x1_05;
  undefined8 extraout_x1_06;
  undefined8 extraout_x1_07;
  undefined8 uVar6;
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
  code *extraout_w11_12;
  code *extraout_w11_13;
  code *extraout_w11_14;
  code *extraout_w11_15;
  code *extraout_w11_16;
  code *extraout_w11_17;
  uint uVar7;
  undefined1 auVar8 [16];
  
  auVar8 = FUN_10067df0(param_1,param_2);
  pcVar4 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  uVar6 = auVar8._8_8_;
  if ((auVar8._0_8_ & 1) != 0) {
    iVar3 = param_1 + param_2 * 0x1510;
    if (*(int *)(iVar3 + 0x19ec) != 0) {
      uVar5 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
      (*extraout_w11)(uVar5);
      *(undefined4 *)(iVar3 + 0x19f0) = 0;
      uVar5 = (*pcVar4)();
      (*extraout_w11_00)(uVar5);
      *(undefined4 *)(iVar3 + 0x19e4) = 0;
      uVar5 = (*pcVar4)();
      (*extraout_w11_01)(uVar5);
      *(undefined4 *)(iVar3 + 0x19f4) = 0;
      uVar5 = (*pcVar4)();
      (*extraout_w11_02)(uVar5);
      *(undefined4 *)(iVar3 + 0x19e8) = 0;
      uVar5 = (*pcVar4)();
      (*extraout_w11_03)(uVar5);
      *(int *)(iVar3 + 0x19ec) = 0;
      uVar5 = (*pcVar4)();
      (*extraout_w11_04)(uVar5);
      *(undefined4 *)(iVar3 + 0x19e0) = 0;
      uVar5 = (*pcVar4)();
      (*extraout_w11_05)(uVar5);
      *(undefined4 *)(iVar3 + 0x1a14) = 0;
      uVar5 = (*pcVar4)();
      (*extraout_w11_06)(uVar5);
      *(undefined4 *)(iVar3 + 0x1a0c) = 0;
      uVar5 = (*pcVar4)();
      (*extraout_w11_07)(uVar5);
      *(undefined4 *)(iVar3 + 0x1a10) = 0;
      uVar5 = (*pcVar4)();
      (*extraout_w11_08)(uVar5);
      *(undefined4 *)(iVar3 + 0x1a08) = 0;
      uVar5 = (*pcVar4)();
      (*extraout_w11_09)(uVar5);
      *(undefined4 *)(iVar3 + 0x1a04) = 0;
      uVar5 = (*pcVar4)();
      (*extraout_w11_10)(uVar5);
      *(undefined4 *)(iVar3 + 0x1a00) = 0;
      uVar5 = (*pcVar4)();
      (*extraout_w11_11)(uVar5);
      *(undefined4 *)(iVar3 + 0x19fc) = 0;
      uVar5 = (*pcVar4)();
      (*extraout_w11_12)(uVar5);
      *(undefined4 *)(iVar3 + 0x19f8) = 0;
      uVar6 = extraout_x1;
    }
    puVar1 = (uint *)(iVar3 + 0x828);
    uVar7 = 0;
    if (*puVar1 != 0) {
      do {
        uVar5 = (*pcVar4)();
        (*extraout_w11_13)(uVar5);
        uVar7 = uVar7 + 1;
        uVar6 = extraout_x1_00;
      } while (uVar7 < *puVar1);
    }
    *puVar1 = 0;
    puVar1 = (uint *)(iVar3 + 0x83c);
    uVar7 = 0;
    if (*puVar1 != 0) {
      do {
        uVar5 = (*pcVar4)();
        (*extraout_w11_14)(uVar5);
        uVar7 = uVar7 + 1;
        uVar6 = extraout_x1_01;
      } while (uVar7 < *puVar1);
    }
    *puVar1 = 0;
    puVar1 = (uint *)(iVar3 + 0x850);
    uVar7 = 0;
    if (*puVar1 != 0) {
      do {
        uVar5 = (*pcVar4)();
        (*extraout_w11_15)(uVar5);
        uVar7 = uVar7 + 1;
        uVar6 = extraout_x1_02;
      } while (uVar7 < *puVar1);
    }
    *puVar1 = 0;
    puVar1 = (uint *)(iVar3 + 0x864);
    uVar7 = 0;
    if (*puVar1 != 0) {
      do {
        FUN_10071d88((int *)(iVar3 + 0x85c),
                     *(undefined4 *)(*(int *)(iVar3 + 0x85c) + uVar7 * 0x38 + 0x30));
        uVar7 = uVar7 + 1;
        uVar6 = extraout_x1_03;
      } while (uVar7 < *puVar1);
    }
    *puVar1 = 0;
    puVar1 = (uint *)(iVar3 + 0x878);
    uVar7 = 0;
    if (*puVar1 != 0) {
      do {
        uVar5 = (*pcVar4)();
        (*extraout_w11_16)(uVar5);
        uVar7 = uVar7 + 1;
        uVar6 = extraout_x1_04;
      } while (uVar7 < *puVar1);
    }
    *puVar1 = 0;
    puVar1 = (uint *)(iVar3 + 0x88c);
    uVar7 = 0;
    if (*puVar1 != 0) {
      do {
        FUN_1006a700(*(undefined4 *)(iVar3 + 0x890),*(undefined4 *)(iVar3 + 0x894),
                     *(undefined4 *)(*(int *)(iVar3 + 0x884) + uVar7 * 0x10 + 0xc));
        uVar7 = uVar7 + 1;
        uVar6 = extraout_x1_05;
      } while (uVar7 < *puVar1);
    }
    *puVar1 = 0;
    puVar1 = (uint *)(iVar3 + 0x8a0);
    uVar7 = 0;
    if (*puVar1 != 0) {
      do {
        FUN_1006a570(*(undefined4 *)(iVar3 + 0x8a4),*(undefined4 *)(iVar3 + 0x8a8),
                     *(undefined4 *)(*(int *)(iVar3 + 0x898) + uVar7 * 0x40 + 0x3c));
        uVar7 = uVar7 + 1;
        uVar6 = extraout_x1_06;
      } while (uVar7 < *puVar1);
    }
    *puVar1 = 0;
    puVar1 = (uint *)(iVar3 + 0x8b4);
    uVar7 = 0;
    if (*puVar1 != 0) {
      do {
        FUN_10071e28((int *)(iVar3 + 0x8ac),
                     *(undefined4 *)(*(int *)(iVar3 + 0x8ac) + uVar7 * 0x40 + 0x3c));
        uVar7 = uVar7 + 1;
        uVar6 = extraout_x1_07;
      } while (uVar7 < *puVar1);
    }
    *puVar1 = 0;
    uVar7 = *(uint *)(iVar3 + 0x998);
    auVar8._4_4_ = 0;
    auVar8._0_4_ = uVar7;
    auVar8._8_8_ = uVar6;
    if (uVar7 != 0) {
      uVar5 = (*pcVar4)();
      auVar8 = (*extraout_w11_17)(uVar5);
      *(uint *)(iVar3 + 0x998) = 0;
    }
    auVar8 = FUN_1006a428(auVar8._0_8_,auVar8._8_8_,2,iVar3 + 0x97c,iVar3 + 0x984);
    FUN_1006a210(auVar8._0_8_,auVar8._8_8_,0x2b,iVar3 + 0x8d0);
    FUN_1006a4f8();
    iVar2 = *(int *)(iVar3 + 0x990);
    if (iVar2 != 0) {
      FUN_1006a7e8(param_1,param_2,iVar2);
      *(int *)(iVar3 + 0x990) = 0;
    }
    FUN_1006a570(param_1,param_2,*(undefined4 *)(iVar3 + 0x98c));
    *(undefined4 *)(iVar3 + 0x98c) = 0;
  }
  return;
}

