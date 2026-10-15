/*
 * FUN_100b8338 at 100b8338
 * undefined FUN_100b8338(void)
 * Address ranges: 100b8338-100b8f3b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100b8338(int param_1,uint param_2,int param_3,uint param_4,int param_5,int param_6,
                 int param_7,int *param_8)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  bool bVar6;
  code *pcVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  char cVar15;
  char cVar16;
  bool bVar17;
  char cVar18;
  undefined4 uVar19;
  int iVar20;
  int iVar21;
  undefined8 *puVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined8 uVar26;
  byte bVar27;
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
  undefined8 local_2e0;
  undefined8 uStack_2d8;
  undefined4 local_2d0;
  int iStack_2cc;
  int local_2c8;
  int iStack_2c4;
  uint *local_2c0;
  int iStack_2b8;
  int iStack_2b4;
  int local_2b0;
  int local_2ac;
  int local_2a4;
  int local_2a0;
  undefined8 uStack_294;
  undefined8 uStack_28c;
  undefined8 uStack_284;
  undefined8 uStack_27c;
  undefined4 local_274;
  byte local_270;
  undefined8 local_268;
  undefined4 uStack_260;
  undefined4 uStack_25c;
  undefined8 local_258;
  undefined4 uStack_250;
  undefined4 uStack_24c;
  int iStack_248;
  int iStack_244;
  int iStack_240;
  int iStack_23c;
  int iStack_238;
  int iStack_234;
  int iStack_230;
  int iStack_22c;
  uint uStack_228;
  int iStack_224;
  int iStack_220;
  uint uStack_21c;
  int iStack_218;
  int iStack_214;
  undefined8 local_210;
  undefined8 uStack_208;
  undefined8 local_200;
  undefined8 uStack_1f8;
  undefined8 local_1f0;
  undefined8 uStack_1e8;
  undefined4 local_1e0;
  float fStack_1d8;
  float fStack_1d4;
  float fStack_1d0;
  float fStack_1cc;
  float fStack_1c8;
  float fStack_1c4;
  float fStack_1c0;
  float fStack_1bc;
  uint uStack_1b8;
  int iStack_1b4;
  int iStack_1b0;
  uint uStack_1ac;
  int iStack_1a8;
  int iStack_1a4;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined4 local_170;
  undefined1 auStack_168 [16];
  uint local_158;
  uint local_150;
  short local_14c;
  short local_14a;
  int local_144;
  undefined1 auStack_130 [16];
  uint local_120;
  uint local_118;
  short local_114;
  short local_112;
  int local_10c;
  undefined1 auStack_f8 [24];
  undefined1 auStack_e0 [40];
  undefined1 auStack_b8 [56];
  undefined1 auStack_80 [64];
  
  pcVar7 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  iVar4 = *(int *)(param_6 + 4);
  iVar2 = 0;
  if (param_7 != 0) {
    iVar2 = param_7 + -0xc0;
  }
  iVar21 = 0;
  if (param_6 != 0) {
    iVar21 = param_6 + -0xc0;
  }
  iVar3 = param_6 + -0xc0;
  if (iVar4 == 0) {
    iVar3 = iVar21;
  }
  (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
  (*extraout_w11)(iVar2,param_4,param_5,0);
  (*pcVar7)();
  (*extraout_w11_00)(iVar3,param_2,param_3,0);
  if ((((char)param_8[0xb] != '\0') && ((char)param_8[10] == '\0')) &&
     (*(char *)((int)param_8 + 0x2b) == '\0')) {
    iStack_2b4 = iVar3 + 0x48;
    iStack_2b8 = iVar2 + 0x48;
    iVar21 = *(int *)(iVar2 + 0x58);
    if (iVar21 == 0) {
      iVar21 = *(int *)(iVar2 + 0x54);
    }
    local_2ac = *(int *)(iVar3 + 0x58);
    if (local_2ac == 0) {
      local_2ac = *(int *)(iVar3 + 0x54);
    }
    local_2b0 = iVar21;
    uVar19 = (*pcVar7)();
    iVar20 = (*extraout_w11_01)(uVar19,auStack_b8);
    local_2a0 = *(int *)(iVar20 + 0x20);
    (*pcVar7)();
    iVar21 = (*extraout_w11_02)(iVar21,auStack_80);
    local_2a4 = *(int *)(iVar21 + 0x20);
    uVar26 = FUN_100a6b88(iVar21,iVar3,iVar2);
    iVar21 = *(int *)(iVar2 + 0x34);
    local_270 = (byte)uVar26;
    puVar22 = (undefined8 *)FUN_100cc8b0(uVar26,auStack_e0,iVar3,iVar2,param_8,param_8 + 4,3);
    iVar10 = local_2ac;
    uStack_28c = puVar22[1];
    uStack_294 = *puVar22;
    uStack_27c = puVar22[3];
    uStack_284 = puVar22[2];
    local_274 = *(undefined4 *)(puVar22 + 4);
    (*pcVar7)();
    (*extraout_w11_03)(iVar10,auStack_168);
    iVar20 = local_2b0;
    (*pcVar7)();
    (*extraout_w11_04)(iVar20,auStack_130);
    iVar12 = local_2a0;
    iVar11 = local_2a4;
    iVar8 = (int)uStack_294;
    iVar9 = uStack_294._4_4_;
    if ((((int)uStack_294 != 0) || (uStack_294._4_4_ != 0)) ||
       (((uint)uStack_28c != local_158 >> (ulonglong)(param_2 & 0x1f) ||
        (bVar5 = true, uStack_28c._4_4_ != local_150 >> (ulonglong)(param_2 & 0x1f))))) {
      bVar5 = false;
    }
    iVar13 = (int)uStack_284;
    iVar14 = uStack_284._4_4_;
    if ((((int)uStack_284 == 0) && (uStack_284._4_4_ == 0)) &&
       (((uint)uStack_27c == local_120 >> (ulonglong)(param_4 & 0x1f) &&
        (uStack_27c._4_4_ == local_118 >> (ulonglong)(param_4 & 0x1f))))) {
      bVar17 = true;
      if (!bVar5) goto LAB_100b8660;
      bVar6 = true;
LAB_100b8670:
      if ((((local_112 != 1) || (local_14a != 1)) || (local_114 != 1)) || (local_14c != 1))
      goto LAB_100b86ac;
      bVar5 = true;
    }
    else {
      bVar17 = false;
LAB_100b8660:
      bVar6 = false;
      if ((bVar17) && (bVar6 = false, bVar5)) goto LAB_100b8670;
LAB_100b86ac:
      bVar5 = false;
    }
    if (local_2a4 == local_2a0) {
      puVar1 = (uint *)(iVar3 + 0x1c);
      local_2c0 = (uint *)(iVar2 + 0x1c);
      if (((*local_2c0 == *puVar1) &&
          ((uint)uStack_27c - (int)uStack_284 == (uint)uStack_28c - (int)uStack_294)) &&
         (uStack_27c._4_4_ - uStack_284._4_4_ == uStack_28c._4_4_ - uStack_294._4_4_)) {
        cVar16 = local_274._1_1_;
        cVar15 = (char)local_274;
        if (iVar21 - 3U < 3) {
          if ((local_10c != local_144) ||
             ((!bVar6 &&
              ((*(char *)(*(int *)(param_1 + 0x1cf00) + *(int *)(param_1 + 0x14) * 0x18 + 0x532) ==
                '\0' || ((char)local_274 != local_274._1_1_)))))) {
            bVar27 = 0;
          }
          else {
            bVar27 = 1;
          }
        }
        else {
          if (local_10c == local_144) {
            bVar17 = false;
            if (local_144 != 1 || (char)local_274 != local_274._1_1_) {
              bVar17 = !bVar6;
            }
          }
          else {
            bVar17 = local_144 != 1 || !bVar5;
          }
          bVar27 = (local_270 ^ 1) & !bVar17;
        }
        if (bVar27 != 0) {
          local_2e0 = uStack_294;
          uStack_2d8 = uStack_28c;
          (*pcVar7)();
          cVar18 = (*extraout_w11_05)(iVar2);
          if (cVar18 != '\0') {
            (*pcVar7)();
            (*extraout_w11_06)(iVar2,param_4,param_5);
          }
          (*pcVar7)();
          cVar18 = (*extraout_w11_07)(iVar3);
          if (cVar18 != '\0') {
            (*pcVar7)();
            (*extraout_w11_08)(iVar3,param_2,param_3,0);
          }
          iStack_2c4 = *(int *)(iVar2 + 0x2c);
          iStack_2cc = *(int *)(iVar3 + 0x2c);
          local_2c8 = *(int *)(iVar2 + 0x24);
          iVar4 = iStack_2c4 * param_5;
          iVar21 = iStack_2cc * param_3;
          local_2d0 = *(undefined4 *)(iVar3 + 0x24);
          (*pcVar7)();
          uVar19 = (*extraout_w11_09)(iVar2,0);
          uVar19 = FUN_100ceef0(iVar2,uVar19,param_4);
          (*pcVar7)();
          uVar23 = (*extraout_w11_10)(iVar2,0);
          uVar23 = FUN_100cef48(iVar2,uVar23,param_4);
          (*pcVar7)();
          uVar24 = (*extraout_w11_11)(iVar3,0);
          uVar24 = FUN_100ceef0(iVar3,uVar24,param_2);
          (*pcVar7)();
          uVar25 = (*extraout_w11_12)(iVar3,0);
          uVar25 = FUN_100cef48(iVar3,uVar25,param_2);
          (*pcVar7)();
          (*extraout_w11_13)(iVar2,param_4,param_5,0);
          (*pcVar7)();
          (*extraout_w11_14)(iVar3,param_2,param_3,0);
          local_268 = 0;
          local_258 = 0;
          uStack_260 = uVar24;
          uStack_25c = uVar25;
          uStack_250 = uVar19;
          uStack_24c = uVar23;
          if ((cVar16 == '\0') && (cVar15 == '\0')) {
            bVar17 = false;
          }
          else {
            bVar17 = true;
            (*(code *)PTR_FUN_1016c208)(&local_2e0,&local_2e0,&local_268);
          }
          (*(code *)PTR_FUN_1016c234)(&local_2e0,iVar13 - iVar8,iVar14 - iVar9);
          if (bVar17) {
            (*(code *)PTR_FUN_1016c208)(&local_2e0,&local_2e0,&local_258);
          }
          (*(code *)PTR_FUN_1016c234)(&local_2e0,iVar8 - iVar13,iVar9 - iVar14);
          if (0xd < *puVar1) {
            FUN_100cefa0(iVar3,auStack_f8);
          }
          iVar9 = iStack_2b4;
          iVar8 = iStack_2b8;
          FUN_100b71d0(param_1,iStack_2b8,iStack_2b4,iVar20,iVar10,uVar19,uVar23,param_4 + iVar4,
                       uVar24);
          if ((((!bVar5) && (*(char *)(*local_2c0 + 0x10162918) != '\0')) &&
              (*(char *)(*puVar1 + 0x10162918) != '\0')) &&
             ((iVar11 - 0x2cU < 2 && (iVar12 - 0x2cU < 2)))) {
            FUN_100b71d0(param_1,iVar8,iVar9,iVar20,iVar10,uVar19,uVar23,
                         param_4 + (local_2c8 + param_5) * iStack_2c4,uVar24);
          }
          (*pcVar7)();
          (*extraout_w11_15)(iVar3,param_2 + iVar21,param_8);
          goto LAB_100b8ec4;
        }
      }
    }
  }
  iVar21 = param_4 + *(int *)(iVar2 + 0x2c) * param_5;
  iVar20 = param_2 + *(int *)(iVar3 + 0x2c) * param_3;
  if ((char)param_8[0xb] == '\0') {
    iStack_244 = param_8[1];
    iStack_248 = *param_8;
    local_1f0 = 0;
    uStack_1e8 = 0;
    local_1e0 = 0;
    iStack_240 = param_8[2];
    iStack_23c = param_8[3];
    local_210 = 0;
    uStack_208 = 0;
    local_200 = 0;
    uStack_1f8 = 0;
    iStack_238 = param_8[4];
    iStack_234 = param_8[5];
    iStack_22c = param_8[7];
    iStack_230 = param_8[6];
    uStack_228 = param_2;
    iStack_224 = param_3;
    iStack_220 = iVar20;
    uStack_21c = param_4;
    iStack_218 = param_5;
    iStack_214 = iVar21;
    FUN_100b4568(param_1,&iStack_248,iVar3,iVar2,iVar4 == 0,0,param_8[8],param_8[9],
                 (char)param_8[10]);
  }
  else {
    uStack_180 = 0;
    uStack_178 = 0;
    fStack_1d8 = (float)*param_8;
    fStack_1d4 = (float)param_8[1];
    local_170 = 0;
    uStack_1a0 = 0;
    uStack_198 = 0;
    uStack_190 = 0;
    uStack_188 = 0;
    fStack_1cc = (float)param_8[3];
    fStack_1d0 = (float)param_8[2];
    fStack_1c8 = (float)param_8[4];
    fStack_1c4 = (float)param_8[5];
    fStack_1c0 = (float)param_8[6];
    fStack_1bc = (float)param_8[7];
    uStack_1b8 = param_2;
    iStack_1b4 = param_3;
    iStack_1b0 = iVar20;
    uStack_1ac = param_4;
    iStack_1a8 = param_5;
    iStack_1a4 = iVar21;
    FUN_100b4568(param_1,&fStack_1d8,iVar3,iVar2,iVar4 == 0,param_8,param_8[8],param_8[9],
                 (char)param_8[10]);
  }
LAB_100b8ec4:
  (*pcVar7)();
  (*extraout_w11_16)(iVar2,param_4,param_5);
  (*pcVar7)();
  (*extraout_w11_17)(iVar3,param_2,param_3);
  return;
}

