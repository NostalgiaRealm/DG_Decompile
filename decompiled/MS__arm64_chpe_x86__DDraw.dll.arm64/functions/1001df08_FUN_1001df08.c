/*
 * FUN_1001df08 at 1001df08
 * undefined FUN_1001df08(void)
 * Address ranges: 1001df08-1001eb77
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1001df08(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
                 int param_7,int *param_8)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  code *pcVar6;
  bool bVar7;
  char cVar8;
  undefined4 uVar9;
  int iVar10;
  int iVar11;
  undefined8 *puVar12;
  int iVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined8 uVar17;
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
  char local_2f0;
  byte local_2ef;
  char local_2ee;
  int local_2d0;
  int local_2b4;
  int local_2b0;
  int local_2a8;
  int local_298;
  int local_28c;
  int local_280;
  int local_274;
  int local_270;
  int iStack_26c;
  int local_268;
  int local_264;
  undefined4 uStack_260;
  int iStack_25c;
  int local_258;
  int local_254;
  int local_250;
  undefined8 local_24c;
  undefined8 local_244;
  undefined8 local_23c;
  undefined8 local_234;
  undefined4 local_22c;
  char local_228;
  char local_227;
  char local_226;
  char local_225;
  undefined8 local_220;
  undefined8 uStack_218;
  uint *local_210;
  int iStack_208;
  int iStack_204;
  int iStack_200;
  int iStack_1fc;
  undefined8 local_1f8;
  undefined4 uStack_1f0;
  undefined4 uStack_1ec;
  undefined8 local_1e8;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  int iStack_1d8;
  int iStack_1d4;
  int iStack_1d0;
  int iStack_1cc;
  int iStack_1c8;
  int iStack_1c4;
  int iStack_1c0;
  int iStack_1bc;
  int iStack_1b8;
  int iStack_1b4;
  int iStack_1b0;
  int iStack_1ac;
  int iStack_1a8;
  int iStack_1a4;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined4 local_170;
  float fStack_168;
  float fStack_164;
  float fStack_160;
  float fStack_15c;
  float fStack_158;
  float fStack_154;
  float fStack_150;
  float fStack_14c;
  int iStack_148;
  int iStack_144;
  int iStack_140;
  int iStack_13c;
  int iStack_138;
  int iStack_134;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined4 local_100;
  undefined1 auStack_f8 [24];
  undefined1 auStack_e0 [40];
  undefined1 auStack_b8 [56];
  undefined1 auStack_80 [64];
  
  pcVar6 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  iVar13 = *(int *)(param_6 + 4);
  iVar3 = 0;
  if (param_7 != 0) {
    iVar3 = param_7 + -0xc0;
  }
  iVar11 = 0;
  if (param_6 != 0) {
    iVar11 = param_6 + -0xc0;
  }
  iVar4 = param_6 + -0xc0;
  if (iVar13 == 0) {
    iVar4 = iVar11;
  }
  (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
  (*extraout_w11)(iVar3,param_4,param_5,0);
  (*pcVar6)();
  (*extraout_w11_00)(iVar4,param_2,param_3,0);
  if ((((char)param_8[0xb] != '\0') && ((char)param_8[10] == '\0')) &&
     (*(char *)((int)param_8 + 0x2b) == '\0')) {
    iStack_26c = iVar4 + 0x48;
    iVar11 = *(int *)(iVar3 + 0x58);
    if (iVar11 == 0) {
      iVar11 = *(int *)(iVar3 + 0x54);
    }
    local_264 = *(int *)(iVar4 + 0x58);
    if (local_264 == 0) {
      local_264 = *(int *)(iVar4 + 0x54);
    }
    local_270 = iVar3 + 0x48;
    local_268 = iVar11;
    uVar9 = (*pcVar6)();
    iVar10 = (*extraout_w11_01)(uVar9,auStack_b8);
    local_258 = *(int *)(iVar10 + 0x20);
    (*pcVar6)();
    iVar11 = (*extraout_w11_02)(iVar11,auStack_80);
    iStack_25c = *(int *)(iVar11 + 0x20);
    uStack_260 = 3;
    uVar17 = FUN_1000ce78(iVar11,iVar4,iVar3);
    local_228 = (char)uVar17;
    local_225 = *(int *)(iVar3 + 0x34) - 3U < 3;
    puVar12 = (undefined8 *)FUN_10031c30(uVar17,auStack_e0,iVar4,iVar3,param_8,param_8 + 4,3);
    local_244 = puVar12[1];
    local_24c = *puVar12;
    local_234 = puVar12[3];
    local_23c = puVar12[2];
    local_22c = *(uint *)(puVar12 + 4);
    FUN_10019c18(puVar12,&local_270,param_2);
    local_28c = local_258;
    local_2a8 = iStack_25c;
    if (iStack_25c == local_258) {
      local_210 = (uint *)(iVar3 + 0x1c);
      puVar1 = (uint *)(iVar4 + 0x1c);
      if (*local_210 == *puVar1) {
        iVar11 = (int)local_23c;
        local_2b0 = (int)local_24c;
        if ((int)local_234 - (int)local_23c == (int)local_244 - (int)local_24c) {
          iVar10 = local_23c._4_4_;
          local_2b4 = local_24c._4_4_;
          if (local_234._4_4_ - local_23c._4_4_ == local_244._4_4_ - local_24c._4_4_) {
            local_2ee = (char)local_22c;
            bVar7 = (local_22c & 0xff) != (uint)local_22c._1_1_;
            local_2ef = local_22c._1_1_;
            local_2f0 = local_227;
            if (local_225 == '\0') {
              if (local_254 == local_250) {
                if ((local_250 != 1 || bVar7) && (local_226 == '\0')) goto LAB_1001e26c;
LAB_1001e240:
                bVar7 = true;
              }
              else {
                if ((local_250 == 1) && (local_227 != '\0')) goto LAB_1001e240;
LAB_1001e26c:
                bVar7 = false;
              }
              if (local_228 != '\0') {
                bVar7 = false;
              }
            }
            else if ((local_254 != local_250) ||
                    ((local_226 == '\0' &&
                     ((*(char *)(*(int *)(param_1 + 0xcf00) + *(int *)(param_1 + 0x14) * 0x18 +
                                0x532) == '\0' || (bVar7)))))) {
              bVar7 = false;
            }
            else {
              bVar7 = true;
            }
            if (bVar7) {
              iVar13 = (local_244._4_4_ - local_24c._4_4_) + local_23c._4_4_;
              local_220 = local_24c;
              uStack_218 = local_244;
              iVar2 = ((int)local_244 - (int)local_24c) + (int)local_23c;
              (*pcVar6)();
              cVar8 = (*extraout_w11_03)(iVar3);
              if (cVar8 != '\0') {
                (*pcVar6)();
                (*extraout_w11_04)(iVar3,param_4,param_5);
              }
              (*pcVar6)();
              cVar8 = (*extraout_w11_05)(iVar4);
              if (cVar8 != '\0') {
                (*pcVar6)();
                (*extraout_w11_06)(iVar4,param_2,param_3,0);
              }
              iVar5 = *(int *)(iVar4 + 0x2c);
              local_298 = param_4 + *(int *)(iVar3 + 0x2c) * param_5;
              local_274 = param_4 + (*(int *)(iVar3 + 0x24) + param_5) * *(int *)(iVar3 + 0x2c);
              local_2d0 = param_4;
              local_280 = param_5;
              if ((local_268 == local_264 && param_4 == param_2) && param_5 == param_3) {
                iStack_208 = iVar11;
                iStack_204 = iVar10;
                iStack_200 = iVar2;
                iStack_1fc = iVar13;
                iVar13 = FUN_10018bc0(param_1,iVar3,iVar3 + 0x48,param_4,param_5,&iStack_208);
                if (iVar13 == 0) goto LAB_1001eafc;
                local_268 = *(int *)(iVar13 + 0x10);
                if (local_268 == 0) {
                  local_268 = *(int *)(iVar13 + 0xc);
                }
                local_270 = iVar13;
                FUN_10019c18(iVar13,&local_270,param_2);
                local_280 = 0;
                local_2d0 = 0;
                local_274 = 1;
                local_2ee = (char)local_22c;
                local_2f0 = local_227;
                local_2b4 = local_24c._4_4_;
                local_2ef = local_22c._1_1_;
                local_28c = local_258;
                local_2b0 = (int)local_24c;
                local_298 = 0;
                local_2a8 = iStack_25c;
              }
              iVar2 = local_264;
              iVar13 = local_268;
              (*pcVar6)();
              uVar9 = (*extraout_w11_07)(iVar3,0);
              uVar9 = FUN_10034090(iVar3,uVar9,local_2d0);
              (*pcVar6)();
              uVar14 = (*extraout_w11_08)(iVar3,0);
              uVar14 = FUN_100340e8(iVar3,uVar14,local_2d0);
              (*pcVar6)();
              uVar15 = (*extraout_w11_09)(iVar4,0);
              uVar15 = FUN_10034090(iVar4,uVar15,param_2);
              (*pcVar6)();
              uVar16 = (*extraout_w11_10)(iVar4,0);
              uVar16 = FUN_100340e8(iVar4,uVar16,param_2);
              (*pcVar6)();
              (*extraout_w11_11)(iVar3,local_2d0,local_280,0);
              (*pcVar6)();
              (*extraout_w11_12)(iVar4,param_2,param_3,0);
              local_1f8 = 0;
              local_1e8 = 0;
              uStack_1f0 = uVar15;
              uStack_1ec = uVar16;
              uStack_1e0 = uVar9;
              uStack_1dc = uVar14;
              if ((local_2ef == 0) && (local_2ee == '\0')) {
                bVar7 = false;
              }
              else {
                bVar7 = true;
                (*(code *)PTR_FUN_100ba244)(&local_220,&local_220,&local_1f8);
              }
              (*(code *)PTR_FUN_100ba26c)(&local_220,iVar11 - local_2b0,iVar10 - local_2b4);
              if (bVar7) {
                (*(code *)PTR_FUN_100ba244)(&local_220,&local_220,&local_1e8);
              }
              (*(code *)PTR_FUN_100ba26c)(&local_220,local_2b0 - iVar11,local_2b4 - iVar10);
              if (0xd < *puVar1) {
                FUN_10034140(iVar4,auStack_f8);
              }
              iVar10 = iStack_26c;
              iVar11 = local_270;
              FUN_1001c660(param_1,local_270,iStack_26c,iVar13,iVar2,uVar9,uVar14,local_298,uVar15);
              if ((((local_2f0 == '\0') && (*(char *)(*local_210 + 0x100b37f0) != '\0')) &&
                  (*(char *)(*puVar1 + 0x100b37f0) != '\0')) &&
                 ((local_2a8 - 0x2cU < 2 && (local_28c - 0x2cU < 2)))) {
                FUN_1001c660(param_1,iVar11,iVar10,iVar13,iVar2,uVar9,uVar14,local_274,uVar15);
              }
              (*pcVar6)();
              (*extraout_w11_13)(iVar4,param_2 + iVar5 * param_3,param_8);
              goto LAB_1001eafc;
            }
          }
        }
      }
    }
  }
  iVar11 = param_4 + *(int *)(iVar3 + 0x2c) * param_5;
  iVar10 = param_2 + *(int *)(iVar4 + 0x2c) * param_3;
  if ((char)param_8[0xb] == '\0') {
    iStack_1d4 = param_8[1];
    iStack_1d8 = *param_8;
    local_180 = 0;
    uStack_178 = 0;
    local_170 = 0;
    iStack_1d0 = param_8[2];
    iStack_1cc = param_8[3];
    local_1a0 = 0;
    uStack_198 = 0;
    local_190 = 0;
    uStack_188 = 0;
    iStack_1c8 = param_8[4];
    iStack_1c4 = param_8[5];
    iStack_1c0 = param_8[6];
    iStack_1bc = param_8[7];
    iStack_1b8 = param_2;
    iStack_1b4 = param_3;
    iStack_1b0 = iVar10;
    iStack_1ac = param_4;
    iStack_1a8 = param_5;
    iStack_1a4 = iVar11;
    FUN_10019dc8(param_1,&iStack_1d8,iVar4,iVar3,iVar13 == 0,0,param_8[8],param_8[9],
                 (char)param_8[10]);
  }
  else {
    uStack_110 = 0;
    uStack_108 = 0;
    fStack_168 = (float)*param_8;
    local_100 = 0;
    uStack_130 = 0;
    uStack_128 = 0;
    fStack_164 = (float)param_8[1];
    uStack_120 = 0;
    uStack_118 = 0;
    fStack_15c = (float)param_8[3];
    fStack_160 = (float)param_8[2];
    fStack_158 = (float)param_8[4];
    fStack_154 = (float)param_8[5];
    fStack_150 = (float)param_8[6];
    fStack_14c = (float)param_8[7];
    iStack_148 = param_2;
    iStack_144 = param_3;
    iStack_140 = iVar10;
    iStack_13c = param_4;
    iStack_138 = param_5;
    iStack_134 = iVar11;
    FUN_10019dc8(param_1,&fStack_168,iVar4,iVar3,iVar13 == 0,param_8,param_8[8],param_8[9],
                 (char)param_8[10]);
  }
LAB_1001eafc:
  (*pcVar6)();
  (*extraout_w11_14)(iVar3,param_4,param_5);
  (*pcVar6)();
  (*extraout_w11_15)(iVar4,param_2,param_3);
  return;
}

