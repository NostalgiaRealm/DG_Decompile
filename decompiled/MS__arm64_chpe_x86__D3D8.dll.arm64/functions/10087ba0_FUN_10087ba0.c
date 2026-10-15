/*
 * FUN_10087ba0 at 10087ba0
 * undefined FUN_10087ba0(void)
 * Address ranges: 10087ba0-100887e7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

char FUN_10087ba0(int param_1,float *param_2,int param_3,int param_4,char param_5,
                 undefined8 *param_6,float *param_7,float *param_8,undefined1 param_9,
                 undefined4 param_10,char param_11,undefined4 param_12,char param_13,
                 undefined4 param_14,undefined1 param_15)

{
  float *pfVar1;
  float *pfVar2;
  int *piVar3;
  uint *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  bool bVar7;
  bool bVar8;
  float *pfVar9;
  uint uVar10;
  char cVar11;
  char cVar12;
  undefined4 uVar13;
  uint *puVar14;
  float fVar15;
  int iVar16;
  undefined8 uVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  ulonglong uVar23;
  int iVar24;
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
  code *pcVar25;
  ulonglong uVar26;
  ulonglong uVar27;
  uint uVar28;
  undefined4 *extraout_s0;
  float fVar29;
  undefined8 uVar30;
  float fVar31;
  undefined8 uVar32;
  float fVar33;
  float fVar34;
  undefined1 auVar35 [16];
  float local_1a0;
  float *local_19c;
  char local_198;
  int local_194;
  float *local_190;
  int local_18c;
  float *local_188;
  undefined4 *local_184;
  float *local_180;
  float *local_17c;
  float *local_178;
  int local_174;
  float *local_170;
  float *local_16c;
  int local_168;
  int local_164;
  uint local_160;
  uint uStack_15c;
  undefined4 local_158;
  uint local_150;
  uint local_14c;
  float *local_144;
  uint local_140;
  uint local_13c;
  int iStack_138;
  float local_130;
  undefined4 local_12c;
  float local_128;
  int *local_124;
  undefined8 local_120;
  undefined4 local_118;
  uint local_114;
  uint local_110;
  undefined4 uStack_10c;
  int local_108;
  int iStack_104;
  int local_100;
  int iStack_fc;
  undefined4 local_f8;
  undefined4 uStack_f4;
  uint local_f0;
  uint uStack_ec;
  undefined1 auStack_e8 [8];
  undefined8 local_e0;
  uint local_d8;
  uint uStack_d4;
  undefined8 local_d0;
  undefined8 uStack_c8;
  uint local_c0 [6];
  undefined1 auStack_a8 [16];
  int local_98;
  undefined1 auStack_78 [16];
  int local_68;
  
  local_124 = (int *)(param_1 + 0x1cf00);
  local_198 = param_5;
  local_194 = param_3;
  local_190 = param_2;
  local_18c = param_1;
  local_170 = param_8;
  local_16c = param_7;
  FUN_100dcf80(*local_124,param_2,param_1);
  pcVar25 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  if (param_6 == (undefined8 *)0x0) {
    iVar16 = (int)param_2[3];
    iVar24 = (int)param_2[2];
    if (param_2[2] - (float)iVar24 != 0.0) {
      iVar24 = iVar24 + 1;
    }
    if (param_2[3] - (float)iVar16 != 0.0) {
      iVar16 = iVar16 + 1;
    }
    local_d0 = CONCAT44((int)param_2[1],(int)*param_2);
    uStack_c8 = CONCAT44(iVar16,iVar24);
  }
  else {
    uStack_c8 = param_6[1];
    local_d0 = *param_6;
  }
  bVar7 = true;
  (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
  local_19c = (float *)(*extraout_w11)(param_4);
  (*pcVar25)();
  local_1a0 = (float)(*extraout_w11_00)(param_4);
  iVar16 = local_194;
  (*pcVar25)();
  local_178 = (float *)(*extraout_w11_01)(iVar16);
  (*pcVar25)();
  uVar17 = (*extraout_w11_02)(iVar16);
  iVar24 = param_4 + 0x48;
  local_188 = local_190 + 0xb;
  local_130 = *local_188;
  pfVar1 = local_190 + 10;
  local_17c = local_190 + 9;
  pfVar2 = local_190 + 8;
  local_12c = *(undefined4 *)(param_4 + 0x2c);
  local_128 = *pfVar1;
  local_164 = (int)*pfVar2 + *(int *)(iVar16 + 0x2c) * (int)*local_17c;
  local_168 = 0;
  local_174 = iVar16 + 0x48;
  local_184 = extraout_s0;
  local_180 = pfVar1;
  uVar18 = FUN_10086f10(uVar17,iVar16,param_4);
  if ((uVar18 & 1) == 0) {
    bVar8 = false;
LAB_10087e58:
    (*pcVar25)();
    (*extraout_w11_05)(param_4,*local_180,*local_188,1);
  }
  else {
    (*pcVar25)();
    cVar11 = (*extraout_w11_03)(param_4);
    if (cVar11 != '\0') {
      FUN_10090b70(param_4,*pfVar1,*local_188);
      iVar24 = param_4 + 0xe8;
      local_1a0 = 1.0;
      local_19c = (float *)&DAT_3f800000;
    }
    iVar16 = local_194;
    (*pcVar25)();
    cVar12 = (*extraout_w11_04)(iVar16);
    bVar7 = cVar12 == '\0';
    if (!bVar7) {
      local_168 = iVar16;
      FUN_10090b70(iVar16,*pfVar2,*local_17c);
      local_174 = iVar16 + 0xe8;
      local_184 = (undefined4 *)&DAT_3f800000;
      local_178 = (float *)&DAT_3f800000;
    }
    bVar8 = true;
    if (cVar11 == '\0') goto LAB_10087e58;
  }
  if (bVar7) {
    uVar13 = (*pcVar25)();
    (*extraout_w11_06)(uVar13,*pfVar2,*local_17c,0);
  }
  pfVar1 = local_190 + 4;
  *(ulonglong *)(local_190 + 6) =
       CONCAT44((float)((ulonglong)*(undefined8 *)(local_190 + 6) >> 0x20) * local_1a0,
                (float)*(undefined8 *)(local_190 + 6) * (float)local_19c);
  *(ulonglong *)pfVar1 =
       CONCAT44((float)((ulonglong)*(undefined8 *)pfVar1 >> 0x20) * local_1a0,
                (float)*(undefined8 *)pfVar1 * (float)local_19c);
  *(ulonglong *)(local_190 + 2) =
       CONCAT44((float)((ulonglong)*(undefined8 *)(local_190 + 2) >> 0x20) * (float)local_184,
                (float)*(undefined8 *)(local_190 + 2) * (float)local_178);
  *(ulonglong *)local_190 =
       CONCAT44((float)((ulonglong)*(undefined8 *)local_190 >> 0x20) * (float)local_184,
                (float)*(undefined8 *)local_190 * (float)local_178);
  fVar29 = *(float *)(iVar24 + 0x10);
  if (fVar29 == 0.0) {
    fVar29 = *(float *)(iVar24 + 0xc);
  }
  (*pcVar25)();
  (*extraout_w11_07)(fVar29,auStack_78);
  iVar16 = local_194;
  if (*(int *)(param_4 + 0x34) - 3U < 3) {
    cVar11 = FUN_10086d60(local_18c,local_190,local_194,param_4);
    if (cVar11 == '\0') goto LAB_100887a8;
    (*pcVar25)();
    iVar24 = local_164;
    pcVar25 = extraout_w11_17;
LAB_100887a0:
    (*pcVar25)(iVar16,iVar24,&local_d0);
  }
  else {
    local_19c = (float *)(local_174 + 0xc);
    uVar13 = (*pcVar25)();
    (*extraout_w11_08)(uVar13,auStack_a8);
    iVar16 = local_18c;
    local_184 = (undefined4 *)(param_4 + 0x1c);
    FUN_100ab7f8(local_18c,*local_184,local_16c,local_170,param_9,
                 *(undefined1 *)(local_18c + 0x1cef8),param_11,param_13,param_15);
    if (!bVar8) {
      if (local_68 == 0x3c) {
        FUN_1008a880(iVar16,1,*(undefined4 *)(param_4 + 8));
      }
      if ((local_198 == '\0') && (local_98 == 0x3c)) {
        FUN_1008a880(local_18c,2,*(undefined4 *)(local_194 + 8));
      }
    }
    (*pcVar25)();
    puVar14 = (uint *)(*extraout_w11_09)(param_4,auStack_e8);
    local_17c = (float *)(local_194 + 0x1c);
    FUN_100abb78(local_18c,&local_1a0,*local_184,*local_17c,local_68,local_98,*puVar14 >> 0x14 & 3,
                 param_11,param_13);
    uVar18 = (ulonglong)(uint)local_1a0;
    if ((local_1a0 == 1.12104e-44) &&
       (*(float *)(iVar24 + 0xc) != *local_19c && param_11 == param_13)) {
LAB_100880f0:
      local_1a0 = 5.60519e-45;
      if (*(int *)(param_4 + 0x24) != 1) {
        local_1a0 = 7.00649e-45;
      }
LAB_10088108:
      (*pcVar25)();
      fVar15 = (float)(*extraout_w11_10)(param_4,0);
      uVar18 = (ulonglong)(uint)local_1a0;
      local_190[0xf] = fVar29;
    }
    else {
      uVar19 = FUN_100a8168(local_1a0);
      if ((uVar19 & 1) != 0) {
        if ((int)uVar18 == 8) goto LAB_100880f0;
        goto LAB_10088108;
      }
      fVar15 = *(float *)(iVar24 + 0x14);
    }
    pfVar9 = local_180;
    pfVar2 = local_188;
    if (fVar15 != 0.0) {
      cVar11 = '\x01';
      if (*(float *)(iVar24 + 0xc) == *local_19c) {
        local_188 = (float *)0x0;
        local_178 = pfVar2;
        local_170 = local_180;
        (*pcVar25)();
        (*extraout_w11_11)(fVar15,&local_188);
        fVar29 = *pfVar1;
        fVar34 = local_190[7];
        fVar33 = local_190[6];
        fVar31 = local_190[5];
        local_108 = (int)fVar33;
        if (fVar29 <= fVar33) {
          local_108 = (int)fVar29;
        }
        iStack_104 = (int)fVar34;
        if (fVar31 <= fVar34) {
          iStack_104 = (int)fVar31;
        }
        local_100 = (int)fVar29;
        if (fVar29 <= fVar33) {
          local_100 = (int)fVar33;
        }
        iStack_fc = (int)fVar31;
        if (fVar31 <= fVar34) {
          iStack_fc = (int)fVar34;
        }
        (*(code *)PTR_FUN_10134204)(&local_108,2,2);
        fVar29 = *pfVar9;
        local_16c = local_188;
        uVar13 = (*pcVar25)();
        (*extraout_w11_12)(uVar13,&local_160);
        local_e0 = 0;
        local_160 = local_160 >> (ulonglong)((uint)fVar29 & 0x1f);
        if (local_160 == 0) {
          local_160 = 1;
        }
        uVar28 = uStack_15c >> (ulonglong)((uint)fVar29 & 0x1f);
        if (uVar28 == 0) {
          uVar28 = 1;
        }
        local_d8 = local_160;
        uStack_d4 = uVar28;
        (*(code *)PTR_FUN_10134208)(&local_f8,&local_108,&local_e0);
        local_120 = 0;
        uStack_10c = 1;
        local_118 = 0;
        local_114 = local_160;
        local_110 = uVar28;
        if ((local_140 >> 6 & 1) == 0) {
          uVar21 = local_160 - 1 | local_160 - 1 >> 1;
          uVar21 = uVar21 | uVar21 >> 2;
          uVar21 = uVar21 | uVar21 >> 4;
          local_160 = (uVar21 | uVar21 >> 8) + 1;
          uVar28 = uVar28 - 1 | uVar28 - 1 >> 1;
          uVar28 = uVar28 | uVar28 >> 2;
          uVar28 = uVar28 | uVar28 >> 4;
          uVar28 = (uVar28 | uVar28 >> 8) + 1;
          local_120 = CONCAT44(uStack_f4,local_f8);
          local_114 = local_f0;
          local_110 = uStack_ec;
        }
        local_158 = 1;
        uStack_15c = uVar28;
        (*pcVar25)();
        (*extraout_w11_13)(fVar15,local_c0);
        uVar28 = 0;
        uVar19 = (ulonglong)local_c0[0];
        piVar3 = (int *)(local_18c + 0x1d1e4);
        puVar14 = (uint *)(local_18c + 0x1d1ec);
        local_150 = local_c0[0];
        uVar18 = (ulonglong)local_160;
        uVar23 = (ulonglong)uStack_15c;
        uVar27 = ((ulonglong)
                  (local_14c |
                  ((uint)local_144 | (local_140 | (iStack_138 << 2 | local_13c >> 0x10) << 8) << 2)
                  << 4) & 0x1ffffff) << 7 | (uVar23 | uVar18 << 0x10) << 0x20 | uVar19;
        uVar21 = *puVar14;
        if (uVar21 == 0) {
LAB_100883f0:
          puVar4 = (uint *)(local_18c + 0x1d1e8);
          uVar20 = *puVar4;
          if (uVar21 == uVar20) {
            iVar24 = uVar20 << 7;
            if ((uVar20 & 0x7fffffff) >> 0x19 != 0) {
              iVar24 = -1;
            }
            iVar24 = FUN_100fece0(iVar24);
            if (iVar24 != 0) {
              uVar21 = 0;
              if (*puVar4 != 0) {
                do {
                  puVar5 = (undefined8 *)(*piVar3 + uVar21 * 0x40);
                  puVar6 = (undefined8 *)(iVar24 + uVar21 * 0x40);
                  uVar21 = uVar21 + 1;
                  uVar32 = *puVar5;
                  uVar30 = puVar5[3];
                  uVar17 = puVar5[2];
                  puVar6[1] = puVar5[1];
                  *puVar6 = uVar32;
                  puVar6[3] = uVar30;
                  puVar6[2] = uVar17;
                  uVar32 = puVar5[4];
                  uVar30 = puVar5[7];
                  uVar17 = puVar5[6];
                  puVar6[5] = puVar5[5];
                  puVar6[4] = uVar32;
                  puVar6[7] = uVar30;
                  puVar6[6] = uVar17;
                } while (uVar21 < *puVar4);
              }
              FUN_100fed00(*piVar3);
              *piVar3 = iVar24;
              *puVar4 = *puVar4 << 1;
            }
          }
          for (uVar21 = *puVar14; uVar28 < uVar21; uVar21 = uVar21 - 1) {
            puVar5 = (undefined8 *)(*piVar3 + uVar21 * 0x40);
            puVar5[1] = puVar5[-7];
            *puVar5 = puVar5[-8];
            puVar5[3] = puVar5[-5];
            puVar5[2] = puVar5[-6];
            puVar5[5] = puVar5[-3];
            puVar5[4] = puVar5[-4];
            puVar5[7] = puVar5[-1];
            puVar5[6] = puVar5[-2];
          }
          FUN_1008ae78(piVar3,uVar28,uVar27,&local_160);
          uVar19 = (ulonglong)local_150;
          *puVar14 = *puVar14 + 1;
          uVar18 = (ulonglong)local_160;
          uVar23 = (ulonglong)uStack_15c;
        }
        else {
          uVar22 = 0;
          local_180 = local_144;
          uVar20 = uVar21;
          do {
            uVar28 = uVar20 + uVar22 >> 1;
            uVar26 = *(ulonglong *)(*piVar3 + uVar28 * 0x40);
            uVar10 = uVar28;
            if (uVar26 <= uVar27) {
              if (uVar27 <= uVar26) break;
              uVar28 = uVar28 + 1;
              uVar22 = uVar28;
              uVar10 = uVar20;
            }
            uVar20 = uVar10;
          } while (uVar20 != uVar22);
          if ((uVar28 == uVar21) || (*(ulonglong *)(*piVar3 + uVar28 * 0x40) != uVar27))
          goto LAB_100883f0;
        }
        iVar24 = *piVar3;
        uVar17 = *(undefined8 *)(iVar24 + uVar28 * 0x40 + 0x34);
        fVar29 = (float)uVar17;
        if (fVar29 == 0.0) {
          uVar28 = *puVar14;
          if (uVar28 != 0) {
            uVar21 = 0;
            uVar19 = ((ulonglong)
                      (local_14c |
                      ((uint)local_144 |
                      (local_140 | (iStack_138 << 2 | local_13c >> 0x10) << 8) << 2) << 4) &
                     0x1ffffff) << 7 | (uVar23 | uVar18 << 0x10) << 0x20 | uVar19;
            uVar20 = uVar28;
            do {
              uVar22 = uVar21 + uVar20 >> 1;
              uVar18 = *(ulonglong *)(iVar24 + uVar22 * 0x40);
              uVar10 = uVar22;
              if (uVar18 <= uVar19) {
                if (uVar19 <= uVar18) break;
                uVar21 = uVar22 + 1;
                uVar22 = uVar21;
                uVar10 = uVar20;
              }
              uVar20 = uVar10;
            } while (uVar20 != uVar21);
            if ((uVar22 != uVar28) && (*(ulonglong *)(iVar24 + uVar22 * 0x40) == uVar19)) {
              uVar22 = uVar22 + 1;
              if (uVar22 < uVar28) {
                do {
                  puVar5 = (undefined8 *)(*piVar3 + uVar22 * 0x40);
                  uVar22 = uVar22 + 1;
                  puVar5[-7] = puVar5[1];
                  puVar5[-8] = *puVar5;
                  puVar5[-5] = puVar5[3];
                  puVar5[-6] = puVar5[2];
                  puVar5[-3] = puVar5[5];
                  puVar5[-4] = puVar5[4];
                  puVar5[-1] = puVar5[7];
                  puVar5[-2] = puVar5[6];
                } while (uVar22 < *puVar14);
              }
              *puVar14 = *puVar14 - 1;
            }
          }
          cVar11 = '\0';
        }
        else {
          if (local_190 + 0xf != (float *)0x0) {
            local_190[0xf] = fVar29;
          }
          fVar15 = (float)((ulonglong)uVar17 >> 0x20);
          auVar35 = (*pcVar25)();
          (*extraout_w11_14)(auVar35._0_8_ & 0xffffffff,auVar35._8_8_ & 0xffffffff,0,
                             local_120 & 0xffffffff,local_120._4_4_,0,local_16c);
          cVar11 = '\x01';
        }
        uVar13 = (*pcVar25)();
        (*extraout_w11_15)(uVar13);
        *local_170 = 0.0;
        *local_178 = 0.0;
        if (cVar11 == '\0') goto LAB_100887a8;
        uVar18 = (ulonglong)(uint)local_1a0;
      }
      iVar24 = local_164;
      if (*(int *)(*(int *)(local_174 + 0x18) + local_164 * 0x1c) != 0) {
        local_190[0xc] = *local_19c;
        local_190[0xd] = *(float *)(*(int *)(local_174 + 0x18) + local_164 * 0x1c);
        local_190[0x10] = fVar15;
        FUN_100865a8(local_18c,local_190,*local_17c,*local_184,uVar18 & 0xffffffff,param_11,0);
        if (local_168 != 0) {
          FUN_10090d30(local_168,iVar24,&local_d0);
          goto LAB_100887a8;
        }
        iVar16 = (*pcVar25)();
        pcVar25 = extraout_w11_16;
        goto LAB_100887a0;
      }
    }
    cVar11 = '\0';
  }
LAB_100887a8:
  (*(code *)PTR_FUN_101340bc)(*local_124 + 0x4a0);
  return cVar11;
}

