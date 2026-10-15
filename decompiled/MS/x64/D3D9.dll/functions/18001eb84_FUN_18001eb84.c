/*
 * FUN_18001eb84 at 18001eb84
 * undefined __fastcall FUN_18001eb84(longlong param_1, longlong * param_2, longlong param_3, longlong param_4, uint param_5, int param_6, uint param_7, int param_8, char param_9)
 * Address ranges: 18001eb84-18001f53e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18001eb84(longlong param_1,longlong *param_2,longlong param_3,longlong param_4,uint param_5
                  ,int param_6,uint param_7,int param_8,char param_9)

{
  longlong lVar1;
  longlong lVar2;
  char cVar3;
  int iVar4;
  short sVar5;
  short sVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  bool bVar14;
  bool bVar15;
  bool bVar16;
  byte bVar17;
  byte bVar18;
  byte bVar19;
  uint uVar20;
  undefined8 uVar21;
  undefined1 (*pauVar22) [16];
  uint uVar23;
  uint uVar24;
  ulonglong uVar25;
  ulonglong uVar26;
  longlong *plVar27;
  uint *puVar28;
  uint uVar29;
  undefined1 (*pauVar30) [16];
  longlong lVar31;
  undefined1 (*pauVar32) [16];
  longlong lVar33;
  bool bVar34;
  int iVar35;
  int iVar36;
  int iVar37;
  int iVar38;
  undefined1 auVar39 [16];
  byte local_218;
  byte local_217;
  byte local_215;
  uint local_214;
  undefined1 local_210 [4];
  undefined4 local_20c;
  uint local_208;
  uint local_204;
  uint local_200;
  uint local_1fc;
  uint local_1f8;
  uint *local_1f0;
  uint *local_1e8;
  undefined1 local_1e0 [4];
  undefined1 local_1dc [4];
  undefined1 local_1d8 [8];
  undefined1 (*local_1d0) [16];
  undefined1 (*local_1c8) [16];
  undefined1 (*local_1c0) [16];
  uint *local_1b8;
  longlong local_1a8;
  undefined *local_1a0;
  longlong local_198;
  undefined *local_190;
  undefined *local_188;
  undefined *local_180;
  int local_178;
  uint local_174;
  int local_170;
  int local_16c;
  int local_168;
  int local_164;
  uint local_160;
  undefined1 local_15c;
  undefined1 local_15b;
  undefined1 local_15a;
  undefined1 local_159;
  undefined1 local_158;
  undefined1 local_157;
  undefined2 local_156;
  byte local_154;
  undefined1 local_152;
  longlong local_140;
  undefined8 local_138;
  longlong local_130;
  int local_128;
  
  local_208 = (uint)*(char *)(param_4 + 0x3c);
  uVar26 = 0;
  cVar3 = *(char *)(param_4 + 0x44);
  if (((local_208 == 0xffffffff) && (cVar3 == -1)) || (bVar15 = true, (param_5 & 4) == 0)) {
    bVar15 = false;
  }
  if ((2 < *(int *)(param_1 + 0x6a8) - 1U) || (bVar16 = true, *(int *)(param_1 + 0x4e8) == 0)) {
    bVar16 = false;
  }
  uVar25 = uVar26;
  if ((cVar3 == -1) || (bVar34 = true, !bVar16)) {
    bVar34 = false;
  }
  do {
    if ((*(int *)(param_1 + 0x7c4 + uVar25 * 0x84) != 1) &&
       ((*(uint *)(param_1 + 0x7ec + uVar25 * 0x84) & 0x30000) != 0)) {
      bVar14 = true;
      goto LAB_18001ec49;
    }
    uVar23 = (int)uVar25 + 1;
    uVar25 = (ulonglong)uVar23;
  } while (uVar23 < 8);
  bVar14 = false;
LAB_18001ec49:
  if (bVar34 || bVar14) {
LAB_18001ec8c:
    bVar15 = true;
    if (*(uint *)(param_1 + 0xde0) < param_7) {
      FUN_1800fbcf0(*(LPVOID *)(param_1 + 0xdd0));
      *(undefined8 *)(param_1 + 0xdd0) = 0;
      *(undefined8 *)(param_1 + 0xdc8) = 0;
      *(undefined4 *)(param_1 + 0xde0) = 0;
      auVar39 = ZEXT816(0x10) * ZEXT416(param_7 * 2 | 1);
      uVar21 = auVar39._0_8_;
      if (auVar39._8_8_ != 0) {
        uVar21 = 0xffffffffffffffff;
      }
      lVar33 = thunk_FUN_1800fbccc(uVar21);
      *(longlong *)(param_1 + 0xdd0) = lVar33;
      if (lVar33 != 0) {
        *(uint *)(param_1 + 0xde0) = param_7;
        *(ulonglong *)(param_1 + 0xdc8) = lVar33 + 0xfU & 0xfffffffffffffff0;
      }
    }
  }
  else {
    if ((bVar15) && (*(uint *)(param_1 + 0x360) != 0)) {
      do {
        if (*(int *)(*(longlong *)(param_1 + 0x358) + uVar26 * 4) != -1) goto LAB_18001ec8c;
        uVar23 = (int)uVar26 + 1;
        uVar26 = (ulonglong)uVar23;
      } while (uVar23 < *(uint *)(param_1 + 0x360));
    }
    bVar15 = false;
  }
  iVar4 = *(int *)(param_4 + 0xc);
  FUN_1800fbea0((undefined1 *)&local_1a8,0,0x88);
  if (*(char *)(param_4 + 0x14) != -1) {
    local_130 = (ulonglong)(uint)(iVar4 * param_6) + param_3 +
                (ulonglong)*(byte *)(param_4 + 0x17) * 4;
  }
  local_178 = (int)param_2[1];
  local_1a0 = &DAT_1801012c0;
  local_15b = 2;
  local_1a8 = (ulonglong)(uint)(local_178 * param_8) + *param_2;
  local_15c = *(undefined1 *)((longlong)param_2 + 0xc);
  if (param_2[6] != 0) {
    local_174 = *(uint *)(param_2 + 7);
    local_15b = *(undefined1 *)((longlong)param_2 + 0x3c);
    local_1a0 = (undefined *)((ulonglong)(local_174 * param_8) + param_2[6]);
  }
  local_190 = &DAT_1801012c0;
  local_159 = 2;
  if (param_2[0x1e] != 0) {
    local_170 = (int)param_2[0x1f];
    local_159 = *(undefined1 *)((longlong)param_2 + 0xfc);
    local_190 = (undefined *)((ulonglong)(uint)(local_170 * param_8) + param_2[0x1e]);
  }
  local_188 = &DAT_1801012c0;
  local_158 = 2;
  if (param_2[0x20] != 0) {
    local_16c = (int)param_2[0x21];
    local_188 = (undefined *)((ulonglong)(uint)(local_16c * param_8) + param_2[0x20]);
    local_158 = *(undefined1 *)((longlong)param_2 + 0x10c);
  }
  local_168 = 0;
  local_180 = &DAT_1801012bc;
  local_157 = 5;
  if (param_2[2] != 0) {
    local_164 = (int)param_2[3];
    local_198 = (ulonglong)(uint)(local_164 * param_8) + param_2[2];
    local_160 = (uint)*(byte *)((longlong)param_2 + 0x1d);
    local_15a = *(undefined1 *)((longlong)param_2 + 0x1c);
    if ((param_2[4] != 0) && (*(int *)(param_1 + 0x714) != 0)) {
      local_168 = (int)param_2[5];
      local_180 = (undefined *)((ulonglong)(uint)(local_168 * param_8) + param_2[4]);
      local_157 = *(undefined1 *)((longlong)param_2 + 0x2c);
    }
  }
  if (bVar15) {
    local_138 = *(undefined8 *)(param_1 + 0xdc8);
  }
  else {
    local_138 = 0;
  }
  local_140 = param_1 + 0x3d4;
  local_156 = 0x101;
  local_154 = (byte)(param_5 >> 3) & 1;
  local_152 = *(int *)(param_4 + 4) == 3;
  local_128 = iVar4;
  FUN_18002832c(param_1,&local_1a8,0,param_7);
  local_1f0 = (uint *)0x0;
  if (cVar3 != -1) {
    local_1f0 = (uint *)(param_3 + (ulonglong)(uint)(iVar4 * param_6) +
                        (ulonglong)*(byte *)(param_4 + 0x47) * 4);
  }
  if ((DAT_1801176b0 & 1) == 0) {
    DAT_1801176b0 = DAT_1801176b0 | 1;
    _DAT_1801176b4 = *(uint *)(param_1 + 0xe1c) | 0xff000000;
  }
  uVar26 = 0;
  local_1e8 = (uint *)&DAT_1801176b4;
  local_1fc = 0;
  if (param_2[0xc] != 0) {
    local_1fc = *(uint *)(param_2 + 0xd);
    uVar26 = (ulonglong)local_1fc;
    local_1e8 = (uint *)((ulonglong)(local_1fc * param_8) + param_2[0xc]);
  }
  if (bVar34) {
    FUN_18001f668(param_1,*(longlong *)(param_1 + 0xdc8),local_1e8,uVar26,param_7,local_1f0,
                  *(uint *)(param_4 + 0xc));
  }
  if ((local_208 == 0xffffffff) && (cVar3 == -1)) goto LAB_18001f43e;
  pauVar32 = (undefined1 (*) [16])0x0;
  local_208 = 0;
  bVar19 = 4;
  if (param_2[10] == 0) {
    pauVar30 = (undefined1 (*) [16])0x0;
    local_215 = 4;
    local_1f8 = 0;
  }
  else {
    local_1f8 = *(uint *)(param_2 + 0xb);
    local_215 = *(byte *)((longlong)param_2 + 0x5c);
    pauVar30 = (undefined1 (*) [16])((ulonglong)(local_1f8 * param_8) + param_2[10]);
  }
  if (param_2[0xc] != 0) {
    local_208 = *(uint *)(param_2 + 0xd);
    bVar19 = *(byte *)((longlong)param_2 + 0x6c);
    pauVar32 = (undefined1 (*) [16])((ulonglong)(local_208 * param_8) + param_2[0xc]);
  }
  local_1b8 = (uint *)0x0;
  iVar35 = (int)(*(float *)(param_1 + 0x2ec) * 255.0);
  iVar36 = (int)(*(float *)(param_1 + 0x2e8) * 255.0);
  iVar37 = (int)(*(float *)(param_1 + 0x2e4) * 255.0);
  iVar38 = (int)(*(float *)(param_1 + 0x2f0) * 255.0);
  auVar39._4_4_ = iVar36;
  auVar39._0_4_ = iVar35;
  auVar39._8_4_ = iVar37;
  auVar39._12_4_ = iVar38;
  auVar7._4_4_ = iVar36;
  auVar7._0_4_ = iVar35;
  auVar7._8_4_ = iVar37;
  auVar7._12_4_ = iVar38;
  auVar39 = packssdw(auVar39,auVar7);
  sVar5 = auVar39._0_2_;
  sVar6 = auVar39._2_2_;
  local_1d8[1] = (0 < sVar6) * (sVar6 < 0x100) * auVar39[2] - (0xff < sVar6);
  local_1d8[0] = (0 < sVar5) * (sVar5 < 0x100) * auVar39[0] - (0xff < sVar5);
  sVar5 = auVar39._4_2_;
  local_1d8[2] = (0 < sVar5) * (sVar5 < 0x100) * auVar39[4] - (0xff < sVar5);
  sVar5 = auVar39._6_2_;
  local_1d8[3] = (0 < sVar5) * (sVar5 < 0x100) * auVar39[6] - (0xff < sVar5);
  iVar35 = (int)(*(float *)(param_1 + 0x30c) * 255.0);
  iVar36 = (int)(*(float *)(param_1 + 0x308) * 255.0);
  iVar37 = (int)(*(float *)(param_1 + 0x304) * 255.0);
  iVar38 = (int)(*(float *)(param_1 + 0x310) * 255.0);
  auVar8._4_4_ = iVar36;
  auVar8._0_4_ = iVar35;
  auVar8._8_4_ = iVar37;
  auVar8._12_4_ = iVar38;
  auVar9._4_4_ = iVar36;
  auVar9._0_4_ = iVar35;
  auVar9._8_4_ = iVar37;
  auVar9._12_4_ = iVar38;
  auVar39 = packssdw(auVar8,auVar9);
  sVar5 = auVar39._0_2_;
  sVar6 = auVar39._2_2_;
  local_210[1] = (0 < sVar6) * (sVar6 < 0x100) * auVar39[2] - (0xff < sVar6);
  local_210[0] = (0 < sVar5) * (sVar5 < 0x100) * auVar39[0] - (0xff < sVar5);
  sVar5 = auVar39._4_2_;
  local_210[2] = (0 < sVar5) * (sVar5 < 0x100) * auVar39[4] - (0xff < sVar5);
  sVar5 = auVar39._6_2_;
  local_210[3] = (0 < sVar5) * (sVar5 < 0x100) * auVar39[6] - (0xff < sVar5);
  iVar35 = (int)(*(float *)(param_1 + 0x2dc) * 255.0);
  iVar36 = (int)(*(float *)(param_1 + 0x2d8) * 255.0);
  iVar37 = (int)(*(float *)(param_1 + 0x2d4) * 255.0);
  iVar38 = (int)(*(float *)(param_1 + 0x2e0) * 255.0);
  auVar10._4_4_ = iVar36;
  auVar10._0_4_ = iVar35;
  auVar10._8_4_ = iVar37;
  auVar10._12_4_ = iVar38;
  auVar11._4_4_ = iVar36;
  auVar11._0_4_ = iVar35;
  auVar11._8_4_ = iVar37;
  auVar11._12_4_ = iVar38;
  auVar39 = packssdw(auVar10,auVar11);
  sVar5 = auVar39._0_2_;
  sVar6 = auVar39._2_2_;
  local_1e0[1] = (0 < sVar6) * (sVar6 < 0x100) * auVar39[2] - (0xff < sVar6);
  local_1e0[0] = (0 < sVar5) * (sVar5 < 0x100) * auVar39[0] - (0xff < sVar5);
  sVar5 = auVar39._4_2_;
  local_1e0[2] = (0 < sVar5) * (sVar5 < 0x100) * auVar39[4] - (0xff < sVar5);
  sVar5 = auVar39._6_2_;
  local_1e0[3] = (0 < sVar5) * (sVar5 < 0x100) * auVar39[6] - (0xff < sVar5);
  iVar35 = (int)(*(float *)(param_1 + 0x2fc) * 255.0);
  iVar36 = (int)(*(float *)(param_1 + 0x2f8) * 255.0);
  iVar37 = (int)(*(float *)(param_1 + 0x2f4) * 255.0);
  iVar38 = (int)(*(float *)(param_1 + 0x300) * 255.0);
  auVar12._4_4_ = iVar36;
  auVar12._0_4_ = iVar35;
  auVar12._8_4_ = iVar37;
  auVar12._12_4_ = iVar38;
  auVar13._4_4_ = iVar36;
  auVar13._0_4_ = iVar35;
  auVar13._8_4_ = iVar37;
  auVar13._12_4_ = iVar38;
  auVar39 = packssdw(auVar12,auVar13);
  sVar5 = auVar39._0_2_;
  sVar6 = auVar39._2_2_;
  local_1dc[1] = (0 < sVar6) * (sVar6 < 0x100) * auVar39[2] - (0xff < sVar6);
  local_1dc[0] = (0 < sVar5) * (sVar5 < 0x100) * auVar39[0] - (0xff < sVar5);
  sVar5 = auVar39._4_2_;
  local_1dc[2] = (0 < sVar5) * (sVar5 < 0x100) * auVar39[4] - (0xff < sVar5);
  sVar5 = auVar39._6_2_;
  local_1dc[3] = (0 < sVar5) * (sVar5 < 0x100) * auVar39[6] - (0xff < sVar5);
  if (*(char *)(param_4 + 0x3c) != -1) {
    local_1b8 = (uint *)((ulonglong)(uint)(iVar4 * param_6) + param_3 +
                        (ulonglong)*(byte *)(param_4 + 0x3f) * 4);
  }
  if ((param_5 & 4) == 0) {
    bVar15 = true;
    bVar34 = true;
  }
  else {
    local_1c8 = (undefined1 (*) [16])local_1e0;
    bVar17 = 4;
    local_1d0 = (undefined1 (*) [16])local_1dc;
    local_1c0 = (undefined1 (*) [16])local_1d8;
    local_200 = 0;
    local_204 = 0;
    local_214 = 0;
    local_20c = 0;
    param_5._0_1_ = 4;
    bVar18 = (byte)param_5;
    param_5._0_1_ = 4;
    local_217 = 4;
    local_218 = 4;
    if (*(int *)(param_1 + 0x6ac) == 0) {
LAB_18001f22c:
      uVar23 = 0;
      pauVar22 = (undefined1 (*) [16])local_210;
      bVar18 = local_218;
    }
    else {
      if (*(int *)(param_1 + 0x6bc) == 1) {
        if (pauVar30 != (undefined1 (*) [16])0x0) {
          local_200 = local_1f8;
          local_1c8 = pauVar30;
          bVar17 = local_215;
        }
      }
      else if ((*(int *)(param_1 + 0x6bc) == 2) && (pauVar32 != (undefined1 (*) [16])0x0)) {
        local_200 = local_208;
        local_1c8 = pauVar32;
        bVar17 = bVar19;
      }
      param_5._0_1_ = bVar18;
      if (*(int *)(param_1 + 0x6c0) == 1) {
        if (pauVar30 != (undefined1 (*) [16])0x0) {
          param_5._0_1_ = local_215;
          local_204 = local_1f8;
          local_1d0 = pauVar30;
        }
      }
      else if ((*(int *)(param_1 + 0x6c0) == 2) && (pauVar32 != (undefined1 (*) [16])0x0)) {
        local_204 = local_208;
        local_1d0 = pauVar32;
        param_5._0_1_ = bVar19;
      }
      if (*(int *)(param_1 + 0x6c4) == 1) {
        if (pauVar30 != (undefined1 (*) [16])0x0) {
          local_217 = local_215;
          local_214 = local_1f8;
          local_1c0 = pauVar30;
        }
      }
      else if ((*(int *)(param_1 + 0x6c4) == 2) && (pauVar32 != (undefined1 (*) [16])0x0)) {
        local_217 = bVar19;
        local_214 = local_208;
        local_1c0 = pauVar32;
      }
      pauVar22 = pauVar30;
      bVar18 = local_215;
      uVar23 = local_1f8;
      if (((*(int *)(param_1 + 0x6c8) != 1) &&
          (pauVar22 = pauVar32, bVar18 = bVar19, uVar23 = local_208, *(int *)(param_1 + 0x6c8) != 2)
          ) || (pauVar22 == (undefined1 (*) [16])0x0)) goto LAB_18001f22c;
    }
    local_218 = bVar18;
    puVar28 = local_1e8;
    uVar24 = local_1fc;
    if (bVar16) {
      puVar28 = local_1f0;
      uVar24 = *(uint *)(param_4 + 0xc);
    }
    FUN_1800207c4(param_1,*(longlong *)(param_1 + 0xdc8),0,(ulonglong)local_174,(uint *)local_1c0,
                  (uint *)pauVar22,local_1c8,(uint *)local_1d0,puVar28,local_214,uVar23,local_200,
                  local_204,uVar24,local_217,local_218,bVar17,(byte)param_5,local_1b8,local_1f0,
                  *(uint *)(param_4 + 0xc),*(uint *)(param_4 + 0xc),param_7);
    bVar15 = false;
    bVar34 = *(int *)(param_1 + 0x4ec) == 0;
  }
  uVar23 = 4;
  if (param_9 == '\0') {
    if ((local_1b8 != (uint *)0x0) && (bVar15)) {
      pauVar22 = (undefined1 (*) [16])(param_1 + 0xe18);
      if (pauVar30 != (undefined1 (*) [16])0x0) {
        pauVar22 = pauVar30;
      }
      uVar24 = -(uint)(pauVar30 != (undefined1 (*) [16])0x0) & local_1f8;
      if (pauVar30 != (undefined1 (*) [16])0x0) {
        uVar23 = (uint)local_215;
      }
      if (param_7 != 0) {
        puVar28 = local_1b8;
        uVar29 = param_7;
        do {
          uVar20 = FUN_18002c360(pauVar22,uVar23);
          *puVar28 = uVar20;
          pauVar22 = (undefined1 (*) [16])(*pauVar22 + uVar24);
          puVar28 = (uint *)((longlong)puVar28 + (ulonglong)*(uint *)(param_4 + 0xc));
          uVar29 = uVar29 - 1;
        } while (uVar29 != 0);
      }
    }
    if (((local_1f0 != (uint *)0x0) && (!bVar16)) && (bVar34)) {
      pauVar30 = (undefined1 (*) [16])(param_1 + 0xe1c);
      if (pauVar32 != (undefined1 (*) [16])0x0) {
        pauVar30 = pauVar32;
      }
      uVar24 = -(uint)(pauVar32 != (undefined1 (*) [16])0x0) & local_208;
      uVar23 = 4;
      if (pauVar32 != (undefined1 (*) [16])0x0) {
        uVar23 = (uint)bVar19;
      }
      if (param_7 != 0) {
        puVar28 = local_1f0;
        uVar29 = param_7;
        do {
          uVar20 = FUN_18002c360(pauVar30,uVar23);
          *puVar28 = uVar20;
          pauVar30 = (undefined1 (*) [16])(*pauVar30 + uVar24);
          puVar28 = (uint *)((longlong)puVar28 + (ulonglong)*(uint *)(param_4 + 0xc));
          uVar29 = uVar29 - 1;
        } while (uVar29 != 0);
      }
    }
  }
LAB_18001f43e:
  uVar23 = *(uint *)(param_4 + 0xc);
  lVar33 = (ulonglong)(uVar23 * param_6) + param_3;
  uVar26 = 0;
  while( true ) {
    if (((*(uint *)(param_1 + 0x7ec + uVar26 * 0x84) & 0x70000) != 0) ||
       (*(char *)(param_1 + 0x820 + uVar26 * 0x84) != '\0')) break;
    uVar24 = (int)uVar26 + 1;
    uVar26 = (ulonglong)uVar24;
    if (7 < uVar24) {
      if (param_9 == '\0') {
        lVar31 = 7;
        do {
          if ((*(char *)(param_4 + 0x14 + lVar31 * 8) != -1) &&
             (plVar27 = param_2 + lVar31 * 2, *plVar27 != 0)) {
            lVar2 = param_4 + lVar31 * 8;
            lVar1 = lVar2 + 0x14;
            if (*(char *)((longlong)plVar27 + 0xc) == *(char *)(param_4 + 0x18 + lVar31 * 8)) {
              FUN_180021290(param_1,plVar27,lVar1,lVar33,uVar23,param_7,param_8);
            }
            else {
              FUN_180021430(lVar2,plVar27,lVar1,lVar33,uVar23,param_7,param_8);
            }
          }
          lVar31 = lVar31 + 1;
        } while (lVar31 != 0xf);
      }
      return;
    }
  }
  FUN_180021530(param_1,(longlong)param_2,param_4,*(longlong *)(param_1 + 0xdc8),lVar33,uVar23,
                param_7,param_8,param_9);
  return;
}

