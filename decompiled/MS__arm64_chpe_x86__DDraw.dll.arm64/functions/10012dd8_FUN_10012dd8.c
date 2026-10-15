/*
 * FUN_10012dd8 at 10012dd8
 * undefined FUN_10012dd8(void)
 * Address ranges: 10012dd8-1001323f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_10012dd8(int param_1,int param_2,undefined8 param_3,uint param_4,int param_5)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  code *pcVar6;
  undefined4 uVar7;
  uint uVar8;
  uint uVar9;
  ulonglong uVar10;
  undefined8 uVar11;
  code *extraout_w11;
  code *extraout_w11_00;
  code *extraout_w11_01;
  code *extraout_w11_02;
  code *extraout_w11_03;
  code *extraout_w11_04;
  uint uVar12;
  uint uVar13;
  float fVar14;
  int local_e0;
  int iStack_dc;
  int local_d8;
  ulonglong local_d4;
  undefined8 local_cc;
  undefined4 local_c4;
  undefined8 local_c0;
  undefined4 local_b8;
  uint uStack_b4;
  uint local_b0;
  undefined4 uStack_ac;
  undefined4 local_a8 [6];
  undefined4 local_90 [6];
  undefined1 auStack_78 [16];
  undefined4 local_68;
  
  pcVar6 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  puVar1 = (uint *)(param_1 + 0x28);
  if ((*puVar1 < 2) || (param_4 == 0)) {
    uVar11 = 1;
  }
  else {
    local_d4 = 0;
    iStack_dc = *(int *)(param_1 + 0x10);
    local_cc = 0;
    local_e0 = *(int *)(param_1 + 0x40);
    local_c4 = 0;
    local_d8 = local_e0 + iStack_dc * 0x1510 + 0x510;
    uVar7 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
    (*extraout_w11)(uVar7,auStack_78);
    uVar7 = (*pcVar6)();
    (*extraout_w11_00)(uVar7,local_a8);
    uVar7 = (*pcVar6)();
    (*extraout_w11_01)(uVar7,local_90);
    (*pcVar6)();
    uVar8 = (*extraout_w11_02)(param_1,0);
    (*pcVar6)();
    uVar9 = (*extraout_w11_03)(param_1,0);
    uVar10 = FUN_10010c18(&local_e0,uVar8,uVar9,1,1,1,local_68,local_a8[0],local_90[0]);
    if ((uVar10 & 1) == 0) {
      uVar11 = 0;
    }
    else {
      uVar13 = 0;
      if (*(uint *)(param_1 + 0x24) != 0) {
        do {
          if (((1 << (ulonglong)(uVar13 & 0x1f) & param_4) != 0) && (1 < *puVar1)) {
            uVar12 = 1;
            do {
              local_c0 = 0;
              uVar3 = uVar8 >> (ulonglong)(uVar12 - 1 & 0x1f);
              if (uVar3 == 0) {
                uVar3 = 1;
              }
              uVar4 = uVar9 >> (ulonglong)(uVar12 - 1 & 0x1f);
              local_b8 = 0;
              if (uVar4 == 0) {
                uVar4 = 1;
              }
              uStack_ac = 1;
              uVar2 = *(uint *)(param_1 + 0xb8);
              if (uVar2 == 0) {
                uVar2 = *(uint *)(param_1 + 0x54);
              }
              uVar10 = (ulonglong)uVar2;
              uStack_b4 = uVar3;
              local_b0 = uVar4;
              uVar7 = (*pcVar6)();
              (*extraout_w11_04)(uVar7,local_d4 & 0xffffffff,0,0,0,0,uVar10 & 0xffffffff);
              uVar2 = uVar9 >> (ulonglong)(uVar12 & 0x1f);
              uVar5 = uVar8 >> (ulonglong)(uVar12 & 0x1f);
              fVar14 = 1.0;
              if (*(char *)(param_1 + 0x3c) == '\0') {
                fVar14 = 0.5;
              }
              if (uVar2 == 0) {
                uVar2 = 1;
              }
              if (uVar5 == 0) {
                uVar5 = 1;
              }
              FUN_10010380(0x3efd70a4,0x3efd70a4,(float)uVar5 + 0.495,(float)uVar2 + 0.495,
                           fVar14 / (float)uVar8,fVar14 / (float)uVar9,
                           ((float)uVar3 + fVar14) / (float)uVar8,
                           ((float)uVar4 + fVar14) / (float)uVar9,*(undefined4 *)(param_1 + 0xa8),
                           *(undefined4 *)(param_1 + 0x1c),*(undefined4 *)(param_1 + 0x1c),uVar12,
                           uVar13,0,0,*(undefined4 *)(param_2 + 0xc),
                           *(undefined4 *)
                            (*(int *)(param_2 + 0x18) + (uVar12 + uVar13 * param_5) * 0x1c));
              uVar12 = uVar12 + 1;
            } while (uVar12 < *puVar1);
          }
          uVar13 = uVar13 + 1;
        } while (uVar13 < *(uint *)(param_1 + 0x24));
      }
      FUN_10010fe0(&local_e0,1,1);
      uVar11 = 1;
    }
  }
  return uVar11;
}

