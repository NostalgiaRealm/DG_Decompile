/*
 * FUN_10042d20 at 10042d20
 * undefined FUN_10042d20(void)
 * Address ranges: 10042d20-10047bc7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined1 FUN_10042d20(int param_1)

{
  undefined8 *puVar1;
  byte *pbVar2;
  ulonglong *puVar3;
  undefined8 *puVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined1 uVar8;
  byte bVar9;
  code cVar10;
  byte *pbVar11;
  ulonglong uVar12;
  code *pcVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  code *pcVar18;
  uint uVar19;
  bool bVar20;
  char cVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  int iVar24;
  uint uVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  uint uVar28;
  uint uVar29;
  ulonglong uVar30;
  uint *extraout_w1;
  ulonglong *extraout_w1_00;
  uint *puVar31;
  code *pcVar32;
  int *piVar33;
  int iVar34;
  int iVar35;
  code *pcVar36;
  int iVar37;
  undefined4 *puVar38;
  ulonglong uVar39;
  code *pcVar40;
  int extraout_w10;
  int iVar41;
  uint uVar42;
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
  code *extraout_w11_18;
  code *extraout_w11_19;
  code *extraout_w11_20;
  code *extraout_w11_21;
  code *extraout_w11_22;
  code *extraout_w11_23;
  code *extraout_w11_24;
  code *extraout_w11_25;
  code *extraout_w11_26;
  code *extraout_w11_27;
  code *extraout_w11_28;
  code *extraout_w11_29;
  code *extraout_w11_30;
  code *extraout_w11_31;
  code *extraout_w11_32;
  code *extraout_w11_33;
  code *extraout_w11_34;
  code *extraout_w11_35;
  code *extraout_w11_36;
  code *extraout_w11_37;
  code *extraout_w11_38;
  code *extraout_w11_39;
  code *extraout_w11_40;
  code *extraout_w11_41;
  code *extraout_w11_42;
  code *extraout_w11_43;
  code *extraout_w11_44;
  code *extraout_w11_45;
  code *extraout_w11_46;
  code *extraout_w11_47;
  code *extraout_w11_48;
  code *extraout_w11_49;
  code *extraout_w11_50;
  int extraout_w13;
  ulonglong uVar43;
  longlong lVar44;
  int iVar45;
  undefined8 uVar46;
  undefined8 uVar47;
  undefined8 uVar48;
  float fVar49;
  undefined1 auVar50 [16];
  float local_204;
  uint *local_1fc;
  int local_1f8;
  int *local_1f4;
  uint *local_1f0;
  int *local_1ec;
  undefined1 local_1e8;
  int local_1e4;
  code *local_1e0;
  int local_1dc;
  ulonglong local_1d8;
  int local_1d0;
  undefined4 uStack_1cc;
  undefined8 local_1c8;
  uint local_1c0;
  uint local_1bc;
  ulonglong local_1b8;
  ulonglong local_1b0;
  int local_1a8;
  int local_1a4;
  int local_1a0;
  int local_19c;
  undefined4 local_198;
  undefined4 uStack_194;
  undefined4 local_190;
  undefined8 local_188;
  undefined8 local_180;
  undefined4 local_178;
  undefined4 uStack_174;
  undefined4 local_170;
  ulonglong local_160 [8];
  undefined8 local_120;
  uint local_118;
  uint local_114;
  undefined4 local_110 [4];
  undefined4 local_100 [4];
  undefined4 local_f0 [4];
  undefined4 local_e0 [4];
  undefined4 local_d0 [4];
  undefined8 *local_c0 [4];
  undefined1 auStack_b0 [56];
  undefined1 auStack_78 [56];
  
  pcVar13 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  local_1f8 = param_1 + 0xf000;
  local_1e4 = param_1 + 0x7000;
  local_1dc = param_1 + 0x4000;
  local_1e8 = 1;
  uVar29 = (*(uint *)(param_1 + 0xf50) & 0xaaaaaaaa) >> 1 |
           (*(uint *)(param_1 + 0xf50) & 0x55555555) << 1;
  uVar29 = (uVar29 & 0xcccccccc) >> 2 | (uVar29 & 0x33333333) << 2;
  uVar29 = (uVar29 & 0xf0f0f0f0) >> 4 | (uVar29 & 0xf0f0f0f) << 4;
  uVar29 = (uVar29 & 0xff00ff00) >> 8 | (uVar29 & 0xff00ff) << 8;
  local_1f0 = (uint *)LZCOUNT(uVar29 >> 0x10 | uVar29 << 0x10);
  if (*(char *)(param_1 + 0x7642) == '\0') {
    if (*(char *)(param_1 + 0xf6a2) != '\0') {
      iVar35 = *(int *)(param_1 + 0xf72c);
      if (iVar35 == 0) {
        uVar23 = 0;
        uVar26 = 0;
      }
      else {
        uVar23 = *(undefined4 *)(iVar35 + 0x40);
        uVar26 = *(undefined4 *)(iVar35 + 4);
      }
      iVar35 = 0;
      if (*(int *)(param_1 + 0xf740) != 0) {
        iVar35 = *(int *)(param_1 + 0xf740) + 0x18;
      }
      FUN_1007f838(param_1,iVar35,uVar26,uVar23);
      *(undefined1 *)(local_1f8 + 0x6a2) = 0;
    }
    local_1fc = *(uint **)(param_1 + 0xf698);
    uVar29 = ((uint)local_1fc & 0xaaaaaaaa) >> 1 | ((uint)local_1fc & 0x55555555) << 1;
    uVar29 = (uVar29 & 0xcccccccc) >> 2 | (uVar29 & 0x33333333) << 2;
    uVar29 = (uVar29 & 0xf0f0f0f0) >> 4 | (uVar29 & 0xf0f0f0f) << 4;
    uVar29 = (uVar29 & 0xff00ff00) >> 8 | (uVar29 & 0xff00ff) << 8;
    lVar44 = LZCOUNT(uVar29 >> 0x10 | uVar29 << 0x10);
    uVar29 = (uint)lVar44;
    if ((1 - (uVar29 >> 5) & 0xff) != 0) {
      pbVar11 = (byte *)((int)&local_1fc + ((int)uVar29 >> 3));
      local_1ec = (int *)(param_1 + 0xe78);
      *pbVar11 = *pbVar11 & ((byte)(1 << (ulonglong)(uVar29 & 7)) ^ 0xff);
      local_1e0 = (code *)(param_1 + 0xf93c);
      do {
        uVar29 = (uint)lVar44;
        iVar35 = *(int *)(param_1 + 0xf6b8);
        uVar23 = *(undefined4 *)(iVar35 + 0x13c);
        uVar26 = *(undefined4 *)(iVar35 + 0x140);
        uVar27 = *(undefined4 *)(iVar35 + 0x144);
        local_1f4 = (int *)*local_1ec;
        bVar20 = (*(byte *)((int)&local_1f4 + ((int)uVar29 >> 3)) >> (ulonglong)(uVar29 & 7) & 1) !=
                 0;
        iVar35 = *(int *)(param_1 + 0xf978 + uVar29 * 4);
        if (iVar35 == 0) {
          iVar35 = *(int *)(param_1 + uVar29 * 4 + 0xf98c);
          if (iVar35 != 0) {
            uVar27 = FUN_100b2920(iVar35,bVar20);
          }
        }
        else {
          if ((((iVar35 == *(int *)(param_1 + 0xf830)) || (iVar35 == *(int *)(param_1 + 0xf834))) ||
              (iVar35 == *(int *)(param_1 + 0xf838))) ||
             ((iVar35 == *(int *)(param_1 + 0xf83c) || (iVar35 == *(int *)(param_1 + 0xf840))))) {
            uVar22 = (*pcVar13)();
            cVar21 = (*extraout_w11)(uVar22);
            if (cVar21 == '\0') goto LAB_10043008;
          }
          iVar35 = *(int *)(*(int *)(param_1 + uVar29 * 4 + 0xf978) + 0x34);
          if (iVar35 == 2 || iVar35 == 5) {
            uVar26 = (*pcVar13)();
            uVar26 = (*extraout_w11_01)(uVar26,bVar20);
          }
          else {
            uVar23 = (*pcVar13)();
            uVar23 = (*extraout_w11_00)(uVar23,bVar20);
          }
        }
LAB_10043008:
        *(undefined4 *)(local_1e0 + uVar29 * 4) = uVar23;
        *(undefined4 *)(param_1 + 0xf950 + uVar29 * 4) = uVar26;
        *(undefined4 *)(param_1 + 0xf964 + uVar29 * 4) = uVar27;
        uVar29 = ((uint)local_1fc & 0xaaaaaaaa) >> 1 | ((uint)local_1fc & 0x55555555) << 1;
        uVar29 = (uVar29 & 0xcccccccc) >> 2 | (uVar29 & 0x33333333) << 2;
        uVar29 = (uVar29 & 0xf0f0f0f0) >> 4 | (uVar29 & 0xf0f0f0f) << 4;
        uVar29 = (uVar29 & 0xff00ff00) >> 8 | (uVar29 & 0xff00ff) << 8;
        lVar44 = LZCOUNT(uVar29 >> 0x10 | uVar29 << 0x10);
        uVar29 = (uint)lVar44;
        if ((1 - (uVar29 >> 5) & 0xff) == 0) break;
        pbVar11 = (byte *)((int)&local_1fc + ((int)uVar29 >> 3));
        *pbVar11 = *pbVar11 & ((byte)(1 << (ulonglong)(uVar29 & 7)) ^ 0xff);
      } while( true );
    }
    *(undefined4 *)(param_1 + 0xf698) = 0;
    local_1fc = *(uint **)(param_1 + 0xf660);
    uVar29 = ((uint)local_1fc & 0xaaaaaaaa) >> 1 | ((uint)local_1fc & 0x55555555) << 1;
    uVar29 = (uVar29 & 0xcccccccc) >> 2 | (uVar29 & 0x33333333) << 2;
    uVar29 = (uVar29 & 0xf0f0f0f0) >> 4 | (uVar29 & 0xf0f0f0f) << 4;
    uVar29 = (uVar29 & 0xff00ff00) >> 8 | (uVar29 & 0xff00ff) << 8;
    lVar44 = LZCOUNT(uVar29 >> 0x10 | uVar29 << 0x10);
    uVar29 = (uint)lVar44;
    if ((1 - (uVar29 >> 5) & 0xff) != 0) {
      pbVar11 = (byte *)((int)&local_1fc + ((int)uVar29 >> 3));
      *pbVar11 = *pbVar11 & ((byte)(1 << (ulonglong)(uVar29 & 7)) ^ 0xff);
      local_1e0 = (code *)(param_1 + 0xf6b8);
      local_1f4 = (int *)(param_1 + 0xf86c);
      do {
        uVar29 = (uint)lVar44;
        iVar35 = *(int *)local_1e0;
        uVar23 = *(undefined4 *)(iVar35 + 0x13c);
        uVar26 = *(undefined4 *)(iVar35 + 0x140);
        uVar27 = *(undefined4 *)(iVar35 + 0x144);
        local_1ec = *(int **)(param_1 + 0xe74);
        bVar20 = (*(byte *)((int)&local_1ec + ((int)uVar29 >> 3)) >> (ulonglong)(uVar29 & 7) & 1) !=
                 0;
        iVar35 = local_1f4[uVar29];
        if (iVar35 == 0) {
          iVar35 = *(int *)(param_1 + uVar29 * 4 + 0xf8ac);
          if (iVar35 != 0) {
            uVar27 = FUN_100b2920(iVar35,bVar20);
          }
        }
        else {
          if (((iVar35 == *(int *)(param_1 + 0xf830)) || (iVar35 == *(int *)(param_1 + 0xf834))) ||
             ((iVar35 == *(int *)(param_1 + 0xf838) ||
              ((iVar35 == *(int *)(param_1 + 0xf83c) || (iVar35 == *(int *)(param_1 + 0xf840)))))))
          {
            uVar22 = (*pcVar13)();
            cVar21 = (*extraout_w11_02)(uVar22);
            if (cVar21 == '\0') goto LAB_10043280;
          }
          iVar35 = *(int *)(*(int *)(param_1 + uVar29 * 4 + 0xf86c) + 0x34);
          if (iVar35 == 2 || iVar35 == 5) {
            uVar26 = (*pcVar13)();
            uVar26 = (*extraout_w11_04)(uVar26,bVar20);
          }
          else {
            uVar23 = (*pcVar13)();
            uVar23 = (*extraout_w11_03)(uVar23,bVar20);
          }
        }
LAB_10043280:
        if (uVar29 < 8) {
          *(undefined4 *)(param_1 + uVar29 * 4 + 0xf74c) = 0;
        }
        *(undefined4 *)(param_1 + 0xf76c + uVar29 * 4) = uVar23;
        *(undefined4 *)(param_1 + 0xf7ac + uVar29 * 4) = uVar26;
        *(undefined4 *)(param_1 + 0xf7ec + uVar29 * 4) = uVar27;
        uVar29 = ((uint)local_1fc & 0xaaaaaaaa) >> 1 | ((uint)local_1fc & 0x55555555) << 1;
        uVar29 = (uVar29 & 0xcccccccc) >> 2 | (uVar29 & 0x33333333) << 2;
        uVar29 = (uVar29 & 0xf0f0f0f0) >> 4 | (uVar29 & 0xf0f0f0f) << 4;
        uVar29 = (uVar29 & 0xff00ff00) >> 8 | (uVar29 & 0xff00ff) << 8;
        lVar44 = LZCOUNT(uVar29 >> 0x10 | uVar29 << 0x10);
        uVar29 = (uint)lVar44;
        if ((1 - (uVar29 >> 5) & 0xff) == 0) goto LAB_100432f8;
        pbVar11 = (byte *)((int)&local_1fc + ((int)uVar29 >> 3));
        *pbVar11 = *pbVar11 & ((byte)(1 << (ulonglong)(uVar29 & 7)) ^ 0xff);
      } while( true );
    }
    *(undefined4 *)(param_1 + 0xf660) = 0;
  }
LAB_10043334:
  iVar35 = *(int *)(param_1 + 0xf6b0);
  (*(code *)PTR_FUN_1016c074)(iVar35 + 0x4a0);
  piVar33 = (int *)(iVar35 + 0x49c);
  iVar35 = *piVar33;
  *piVar33 = param_1;
  if (*(char *)(param_1 + 0xf668) != '\0' || iVar35 != param_1) {
    if (*(char *)(param_1 + 0x7642) == '\0') {
      iVar24 = *(int *)(param_1 + 0xf72c);
      if (iVar24 == 0) {
        if ((*(int *)(local_1dc + 0x3630) == 0) || (*(int *)(param_1 + 0xfa30) != 0)) {
          bVar20 = false;
        }
        else {
          bVar20 = true;
        }
        uVar29 = (1 << (ulonglong)((uint)local_1f0 & 0x1f)) - 1;
        uVar39 = *(ulonglong *)(param_1 + 0xfc0);
        if ((*(uint *)(local_1dc + 0x3570) & uVar29) == 0) {
          uVar39 = *(ulonglong *)(param_1 + 0xfc0) & 0xdfffffffffffffff;
        }
        if ((*(uint *)(local_1dc + 0x3574) & uVar29) == 0) {
          uVar39 = uVar39 & 0xbfffffffffffffff;
        }
        local_1b8 = uVar39 & 0x70000000000000;
        if (*(char *)(local_1e4 + 0x63e) == '\0') {
          local_1b8 = 0x70000000000000;
        }
        uVar43 = uVar39 & 0xff8fffffffffffff;
        if (!bVar20) {
          uVar43 = uVar39 & 0xfe8fffffffffffff;
        }
        if (*(char *)(local_1e4 + 0x64e) == '\0') {
          uVar43 = uVar43 & 0xefffffffffffffff;
        }
        if ((uVar43 & 0x200000000000000) == 0) {
          uVar43 = uVar43 & 0xf3ffffffffffffff;
        }
        local_1b8 = local_1b8 | uVar43;
        if ((*(int *)(param_1 + 0xf9cc) == *(int *)(*(int *)(param_1 + 0xf6b8) + 0xe8)) ||
           (*(int *)(param_1 + 0xf9cc) == *(int *)(*(int *)(param_1 + 0xf6b8) + 0x108))) {
          local_1fc = local_1f0;
          goto LAB_10043d70;
        }
        local_1f4 = (int *)(param_1 + 0xef8);
        local_1ec = (int *)(param_1 + 0xf6dc);
        FUN_1004fd48(local_1f4,local_1f0,local_160);
        uVar17 = local_160[6];
        uVar16 = local_160[5];
        uVar15 = local_160[4];
        uVar14 = local_160[3];
        uVar12 = local_160[2];
        uVar43 = local_160[1];
        uVar39 = local_160[0];
        local_1d8 = CONCAT44(local_1d8._4_4_,(undefined4 *)(extraout_w13 + 0x10));
        local_1e0 = *(code **)(extraout_w13 + 0x10);
        local_1fc = extraout_w1;
        if (local_1e0 == (code *)0x0) {
LAB_10043790:
          uVar8 = *(undefined1 *)(param_1 + 0x83);
          local_1f0 = (uint *)FUN_101321c0(0x78);
          if (local_1f0 == (uint *)0x0) goto LAB_10043d70;
          puVar31 = (uint *)local_1d8;
          uVar30 = 0xffff000000000000;
          uVar29 = *(uint *)(param_1 + 0xf6dc);
          uVar25 = local_1ec[1];
          local_1f0[2] = 0;
          local_1f0[3] = 0;
          *local_1f0 = (uint)&PTR_D3DPERF_GetStatus_native_1015eb3c;
          local_1f0[6] = 0;
          local_1f0[7] = 0;
          local_1f0[8] = uVar29;
          local_1f0[9] = uVar25;
          local_1f0[0xb] = 0;
          *(undefined1 *)(local_1f0 + 0xd) = 0;
          local_1f0[4] = 0;
          local_1f0[5] = 0;
          local_1f0[0xc] = *(uint *)(uVar29 + uVar25 * 0x28 + 0x38);
          uVar48 = *(undefined8 *)local_1f4;
          uVar47 = *(undefined8 *)(local_1f4 + 6);
          uVar46 = *(undefined8 *)(local_1f4 + 4);
          *(undefined8 *)(local_1f0 + 0x10) = *(undefined8 *)(local_1f4 + 2);
          *(undefined8 *)(local_1f0 + 0xe) = uVar48;
          *(undefined8 *)(local_1f0 + 0x14) = uVar47;
          *(undefined8 *)(local_1f0 + 0x12) = uVar46;
          uVar46 = *(undefined8 *)(local_1f4 + 8);
          *(undefined8 *)(local_1f0 + 0x18) = *(undefined8 *)(local_1f4 + 10);
          *(undefined8 *)(local_1f0 + 0x16) = uVar46;
          *(undefined8 *)(local_1f0 + 0x1a) = *(undefined8 *)(local_1f4 + 0xc);
          *(undefined1 *)(local_1f0 + 0x1c) = uVar8;
          *local_1f0 = (uint)&PTR_FUN_1015eb44;
          uVar25 = FUN_1007fe48(local_1f0 + 0xe);
          uVar29 = (uVar25 & 0xaaaa) >> 1 | (uVar25 & 0x5555) << 1;
          uVar29 = (uVar29 & 0xcccccccc) >> 2 | (uVar29 & 0x33333333) << 2;
          uVar29 = (uVar29 & 0xf0f0f0f0) >> 4 | (uVar29 & 0xf0f0f0f) << 4;
          lVar44 = LZCOUNT((uVar29 >> 8 | (uVar29 & 0xff00ff) << 8) << 0x10);
          uVar29 = (uint)lVar44;
          if ((1 - (uVar29 >> 5) & 0xff) != 0) {
            local_1d8 = uVar16;
            local_1b0 = uVar17;
            pbVar11 = (byte *)((int)&local_1f4 + ((int)uVar29 >> 3));
            *pbVar11 = *pbVar11 & ((byte)(1 << (ulonglong)(uVar29 & 7)) ^ 0xff);
            while( true ) {
              uVar30 = 7L << ((ulonglong)(uint)((int)lVar44 * 3) & 0x3f) | uVar30;
              uVar29 = (uVar25 & 0xaaaa) >> 1 | (uVar25 & 0x5555) << 1;
              uVar29 = (uVar29 & 0xcccccccc) >> 2 | (uVar29 & 0x33333333) << 2;
              uVar29 = (uVar29 & 0xf0f0f0f0) >> 4 | (uVar29 & 0xf0f0f0f) << 4;
              lVar44 = LZCOUNT((uVar29 >> 8 | (uVar29 & 0xff00ff) << 8) << 0x10);
              uVar29 = (uint)lVar44;
              if ((1 - (uVar29 >> 5) & 0xff) == 0) break;
              pbVar11 = (byte *)((int)&local_1f4 + ((int)uVar29 >> 3));
              *pbVar11 = *pbVar11 & ((byte)(1 << (ulonglong)(uVar29 & 7)) ^ 0xff);
            }
          }
          *extraout_w1_00 = uVar30;
          uVar29 = *puVar31;
          uVar25 = 0;
          local_1f4 = (int *)(extraout_w13 + 8);
          if (uVar29 != 0) {
            uVar28 = 0;
            uVar42 = uVar29;
            do {
              uVar25 = uVar42 + uVar28 >> 1;
              puVar3 = (ulonglong *)(*(int *)(extraout_w13 + 0xc) + uVar25 * 0x40);
              iVar24 = 0;
              if ((((*puVar3 == uVar39) && (iVar24 = 1, puVar3[1] == uVar43)) &&
                  (((iVar24 = 2, puVar3[2] == uVar12 &&
                    (((iVar24 = 3, puVar3[3] == uVar14 && (iVar24 = 4, puVar3[4] == uVar15)) &&
                     (iVar24 = 5, puVar3[5] == uVar16)))) && (iVar24 = 6, puVar3[6] == uVar17)))) ||
                 (uVar19 = uVar25, puVar3[iVar24] <= local_160[iVar24])) {
                iVar24 = 0;
                if (((((*puVar3 == uVar39) && (iVar24 = 1, puVar3[1] == uVar43)) &&
                     ((iVar24 = 2, puVar3[2] == uVar12 &&
                      ((iVar24 = 3, puVar3[3] == uVar14 && (iVar24 = 4, puVar3[4] == uVar15)))))) &&
                    ((iVar24 = 5, puVar3[5] == uVar16 && (iVar24 = 6, puVar3[6] == uVar17)))) ||
                   (local_160[iVar24] <= puVar3[iVar24])) break;
                uVar28 = uVar25 + 1;
                uVar25 = uVar28;
                uVar19 = uVar42;
              }
              uVar42 = uVar19;
            } while (uVar42 != uVar28);
          }
          if (uVar25 == uVar29) {
LAB_10043b30:
            uVar28 = *(uint *)(extraout_w13 + 0x14);
            if (uVar28 == uVar29) {
              iVar24 = 0x10;
              if (uVar28 != 0) {
                iVar24 = uVar28 << 1;
              }
              iVar34 = FUN_101322b0(iVar24 << 6);
              piVar33 = local_1f4;
              if (iVar34 != 0) {
                uVar29 = 0;
                if (*(int *)(extraout_w13 + 0x10) != 0) {
                  do {
                    puVar1 = (undefined8 *)(local_1ec[3] + uVar29 * 0x40);
                    puVar4 = (undefined8 *)(iVar34 + uVar29 * 0x40);
                    uVar29 = uVar29 + 1;
                    uVar48 = *puVar1;
                    uVar47 = puVar1[3];
                    uVar46 = puVar1[2];
                    puVar4[1] = puVar1[1];
                    *puVar4 = uVar48;
                    puVar4[3] = uVar47;
                    puVar4[2] = uVar46;
                    uVar48 = puVar1[4];
                    uVar47 = puVar1[7];
                    uVar46 = puVar1[6];
                    puVar4[5] = puVar1[5];
                    puVar4[4] = uVar48;
                    puVar4[7] = uVar47;
                    puVar4[6] = uVar46;
                  } while (uVar29 < (uint)local_1ec[4]);
                }
                FUN_101322d0(*local_1f4);
                *piVar33 = iVar34;
                piVar33[1] = iVar34;
                piVar33[3] = iVar24;
              }
            }
            uVar29 = local_1f4[2];
            puVar31 = local_1f0;
            if (local_1f4[3] == uVar29) goto LAB_10043d34;
            if (uVar25 < uVar29) {
              if (3 < uVar29 - uVar25) {
                piVar33 = local_1ec + 3;
                do {
                  puVar1 = (undefined8 *)(*piVar33 + uVar29 * 0x40);
                  puVar1[1] = puVar1[-7];
                  *puVar1 = puVar1[-8];
                  puVar1[3] = puVar1[-5];
                  puVar1[2] = puVar1[-6];
                  puVar1[5] = puVar1[-3];
                  puVar1[4] = puVar1[-4];
                  puVar1[7] = puVar1[-1];
                  puVar1[6] = puVar1[-2];
                  puVar1 = (undefined8 *)(*piVar33 + (uVar29 - 2) * 0x40);
                  iVar24 = *piVar33 + uVar29 * 0x40;
                  uVar48 = *puVar1;
                  uVar47 = puVar1[3];
                  uVar46 = puVar1[2];
                  *(undefined8 *)(iVar24 + -0x38) = puVar1[1];
                  *(undefined8 *)(iVar24 + -0x40) = uVar48;
                  *(undefined8 *)(iVar24 + -0x28) = uVar47;
                  *(undefined8 *)(iVar24 + -0x30) = uVar46;
                  uVar48 = puVar1[4];
                  uVar47 = puVar1[7];
                  uVar46 = puVar1[6];
                  *(undefined8 *)(iVar24 + -0x18) = puVar1[5];
                  *(undefined8 *)(iVar24 + -0x20) = uVar48;
                  *(undefined8 *)(iVar24 + -8) = uVar47;
                  *(undefined8 *)(iVar24 + -0x10) = uVar46;
                  iVar24 = uVar29 - 3;
                  puVar1 = (undefined8 *)(*piVar33 + iVar24 * 0x40);
                  puVar4 = (undefined8 *)(*piVar33 + (uVar29 - 2) * 0x40);
                  uVar48 = *puVar1;
                  uVar47 = puVar1[3];
                  uVar46 = puVar1[2];
                  puVar4[1] = puVar1[1];
                  *puVar4 = uVar48;
                  puVar4[3] = uVar47;
                  puVar4[2] = uVar46;
                  uVar48 = puVar1[4];
                  uVar47 = puVar1[7];
                  uVar46 = puVar1[6];
                  iVar34 = uVar29 - 4;
                  uVar29 = uVar29 - 4;
                  puVar4[5] = puVar1[5];
                  puVar4[4] = uVar48;
                  puVar4[7] = uVar47;
                  puVar4[6] = uVar46;
                  puVar1 = (undefined8 *)(*piVar33 + iVar34 * 0x40);
                  puVar4 = (undefined8 *)(*piVar33 + iVar24 * 0x40);
                  uVar48 = *puVar1;
                  uVar47 = puVar1[3];
                  uVar46 = puVar1[2];
                  puVar4[1] = puVar1[1];
                  *puVar4 = uVar48;
                  puVar4[3] = uVar47;
                  puVar4[2] = uVar46;
                  uVar48 = puVar1[4];
                  uVar47 = puVar1[7];
                  uVar46 = puVar1[6];
                  puVar4[5] = puVar1[5];
                  puVar4[4] = uVar48;
                  puVar4[7] = uVar47;
                  puVar4[6] = uVar46;
                } while (uVar25 + 3 < uVar29);
                if (uVar29 <= uVar25) goto LAB_10043ce0;
              }
              do {
                puVar1 = (undefined8 *)(local_1ec[3] + uVar29 * 0x40);
                uVar29 = uVar29 - 1;
                puVar1[1] = puVar1[-7];
                *puVar1 = puVar1[-8];
                puVar1[3] = puVar1[-5];
                puVar1[2] = puVar1[-6];
                puVar1[5] = puVar1[-3];
                puVar1[4] = puVar1[-4];
                puVar1[7] = puVar1[-1];
                puVar1[6] = puVar1[-2];
              } while (uVar25 < uVar29);
            }
LAB_10043ce0:
            local_1f4[2] = local_1f4[2] + 1;
            puVar3 = (ulonglong *)(local_1f4[1] + uVar25 * 0x40);
            puVar3[1] = local_160[1];
            *puVar3 = local_160[0];
            puVar3[3] = local_160[3];
            puVar3[2] = local_160[2];
            puVar3[5] = local_160[5];
            puVar3[4] = local_160[4];
            puVar3[6] = local_160[6];
            iVar24 = local_1f4[1] + uVar25 * 0x40;
          }
          else {
            puVar3 = (ulonglong *)(*(int *)(extraout_w13 + 0xc) + uVar25 * 0x40);
            if ((((*puVar3 != uVar39) || (puVar3[1] != uVar43)) || (puVar3[2] != uVar12)) ||
               (((puVar3[3] != uVar14 || (puVar3[4] != uVar15)) ||
                ((puVar3[5] != uVar16 || (puVar3[6] != uVar17)))))) goto LAB_10043b30;
            iVar24 = *(int *)(extraout_w13 + 0xc) + uVar25 * 0x40;
          }
          *(uint **)(iVar24 + 0x38) = local_1f0;
          puVar31 = local_1f0;
        }
        else {
          pcVar36 = (code *)0x0;
          pcVar32 = local_1e0;
          do {
            pcVar40 = (code *)((uint)(pcVar32 + (int)pcVar36) >> 1);
            puVar3 = (ulonglong *)(*(int *)(extraout_w13 + 0xc) + (int)pcVar40 * 0x40);
            iVar24 = 0;
            if (((((*puVar3 == local_160[0]) && (iVar24 = 1, puVar3[1] == local_160[1])) &&
                 (iVar24 = 2, puVar3[2] == local_160[2])) &&
                (((iVar24 = 3, puVar3[3] == local_160[3] && (iVar24 = 4, puVar3[4] == local_160[4]))
                 && ((iVar24 = 5, puVar3[5] == local_160[5] &&
                     (iVar24 = 6, puVar3[6] == local_160[6])))))) ||
               (pcVar18 = pcVar40, puVar3[iVar24] <= local_160[iVar24])) {
              iVar24 = 0;
              if ((((*puVar3 == local_160[0]) && (iVar24 = 1, puVar3[1] == local_160[1])) &&
                  ((iVar24 = 2, puVar3[2] == local_160[2] &&
                   ((((iVar24 = 3, puVar3[3] == local_160[3] &&
                      (iVar24 = 4, puVar3[4] == local_160[4])) &&
                     (iVar24 = 5, puVar3[5] == local_160[5])) &&
                    (iVar24 = 6, puVar3[6] == local_160[6])))))) ||
                 (local_160[iVar24] <= puVar3[iVar24])) break;
              pcVar36 = pcVar40 + 1;
              pcVar40 = pcVar36;
              pcVar18 = pcVar32;
            }
            pcVar32 = pcVar18;
          } while (pcVar32 != pcVar36);
          if (((pcVar40 == local_1e0) ||
              (uVar30 = FUN_1004fc90(*(int *)(extraout_w13 + 0xc) + (int)pcVar40 * 0x40,local_160),
              (uVar30 & 1) == 0)) || ((undefined4 *)(extraout_w10 + 0x38) == (undefined4 *)0x0))
          goto LAB_10043790;
          puVar31 = *(uint **)(extraout_w10 + 0x38);
        }
LAB_10043d34:
        iVar24 = FUN_1004f928(puVar31,local_1b8,0);
        if (iVar24 == 0) goto LAB_10043d70;
      }
      else {
        if ((*(int *)(local_1dc + 0x3630) == 0) || (*(int *)(param_1 + 0xfa30) != 0)) {
          bVar20 = false;
        }
        else {
          bVar20 = true;
        }
        uVar29 = *(uint *)(*(int *)(iVar24 + 4) + 0x1214);
        uVar39 = *(ulonglong *)(param_1 + 0xfc0);
        if ((*(uint *)(local_1dc + 0x3570) & uVar29) == 0) {
          uVar39 = *(ulonglong *)(param_1 + 0xfc0) & 0xdfffffffffffffff;
        }
        if ((*(uint *)(local_1dc + 0x3574) & uVar29) == 0) {
          uVar39 = uVar39 & 0xbfffffffffffffff;
        }
        uVar43 = uVar39 & 0x70000000000000;
        if (*(char *)(local_1e4 + 0x63e) == '\0') {
          uVar43 = 0x70000000000000;
        }
        uVar12 = uVar39 & 0xff8fffffffffffff;
        if (!bVar20) {
          uVar12 = uVar39 & 0xfe8fffffffffffff;
        }
        uVar39 = uVar12 >> 0x39;
        if (*(char *)(*(int *)(iVar24 + 4) + 0x126d) == '\x03') {
          uVar39 = 0;
        }
        uVar43 = ((uVar43 | uVar12) ^ uVar39 << 0x39) & 0xfdffffffffffffff ^ uVar39 << 0x39;
        if (*(char *)(local_1e4 + 0x64e) == '\0') {
          uVar43 = uVar43 & 0xefffffffffffffff;
        }
        if ((uVar39 & 1) == 0) {
          uVar43 = uVar43 & 0xf3ffffffffffffff;
        }
        iVar24 = FUN_1004f928(iVar24 + 8,uVar43,*(undefined8 *)(param_1 + 0xe80));
        local_1e8 = iVar24 != 0;
      }
    }
    else {
      local_1fc = local_1f0;
LAB_10043d70:
      if (*(char *)(param_1 + 0x7642) == '\0') {
        puVar31 = (uint *)&DAT_00000004;
        if (local_1fc < &DAT_00000005) {
          puVar31 = local_1fc;
        }
        iVar24 = *(int *)(param_1 + 0xf6b8);
        if ((*(int *)(param_1 + 0xf9cc) == *(int *)(iVar24 + 0xe8)) ||
           (bVar20 = false, *(int *)(param_1 + 0xf9cc) == *(int *)(iVar24 + 0x108))) {
          bVar20 = true;
        }
        iVar34 = 10;
        if (!bVar20) {
          iVar34 = 0;
        }
        iVar37 = 5;
        if (*(char *)(local_1e4 + 0x640) == '\0') {
          iVar37 = iVar34;
        }
        piVar33 = (int *)(iVar24 + (iVar37 + *(int *)(&DAT_10161450 + (int)puVar31 * 4)) * 4 + 0x8c)
        ;
      }
      else if (((*(int *)(param_1 + 0xf834) == 0) && (*(int *)(param_1 + 0xf838) == 0)) &&
              (*(int *)(param_1 + 0xf83c) == 0)) {
        piVar33 = (int *)(*(int *)(param_1 + 0xf6b8) + 200);
      }
      else {
        piVar33 = (int *)(*(int *)(param_1 + 0xf6b8) + 0xd0);
      }
      iVar24 = *piVar33;
    }
    *(undefined1 *)(param_1 + 0xf668) = 0;
    if (*(int *)(param_1 + 0xf9d0) != iVar24) {
      *(int *)(param_1 + 0xf9d0) = iVar24;
      *(undefined1 *)(param_1 + 0x10230) = 1;
    }
  }
  if ((*(uint *)(param_1 + 0xf674) & 1) != 0) {
    FUN_100392f0(param_1 + 0x7650,(undefined8 *)(param_1 + 0xb650),1);
    *(undefined8 *)(param_1 + 0x6a40) = *(undefined8 *)(param_1 + 0xb650);
    *(undefined8 *)(param_1 + 0x6a48) = *(undefined8 *)(param_1 + 0xb658);
    *(undefined8 *)(param_1 + 0x6a50) = *(undefined8 *)(param_1 + 0xb660);
    *(undefined8 *)(param_1 + 0x6a58) = *(undefined8 *)(param_1 + 0xb668);
    *(undefined8 *)(param_1 + 0x6a60) = *(undefined8 *)(param_1 + 0xb670);
    *(undefined8 *)(param_1 + 0x6a68) = *(undefined8 *)(param_1 + 0xb678);
    *(undefined8 *)(param_1 + 0x6a70) = *(undefined8 *)(param_1 + 0xb680);
    *(undefined8 *)(param_1 + 0x6a78) = *(undefined8 *)(param_1 + 0xb688);
    *(uint *)(param_1 + 0xf674) = *(uint *)(param_1 + 0xf674) & 0xfffffffe;
  }
  if (*(char *)(local_1f8 + 0x671) != '\0') {
    uVar23 = *(undefined4 *)(param_1 + 0xf6c4);
    uVar26 = (*pcVar13)();
    iVar24 = (*extraout_w11_05)(uVar26,uVar23,0,4,0,local_110);
    if (-1 < iVar24) {
      FUN_101325a0(local_110[0],param_1 + 0x6910,0xc20);
      uVar26 = (*pcVar13)();
      (*extraout_w11_06)(uVar26,uVar23,0);
    }
    *(undefined1 *)(local_1f8 + 0x671) = 0;
  }
  if (((*(uint *)(local_1dc + 0x2920) & 0xf800) != 0) && (*(char *)(param_1 + 0xf672) != '\0')) {
    uVar29 = 0;
    do {
      puVar31 = (uint *)(param_1 + (uVar29 + 0x3d9d) * 4);
      while (uVar25 = *puVar31, uVar25 = (uVar25 & 0xaaaaaaaa) >> 1 | (uVar25 & 0x55555555) << 1,
            uVar25 = (uVar25 & 0xcccccccc) >> 2 | (uVar25 & 0x33333333) << 2,
            uVar25 = (uVar25 & 0xf0f0f0f0) >> 4 | (uVar25 & 0xf0f0f0f) << 4,
            uVar25 = (uVar25 & 0xff00ff00) >> 8 | (uVar25 & 0xff00ff) << 8,
            uVar25 = (uint)LZCOUNT(uVar25 >> 0x10 | uVar25 << 0x10), (1 - (uVar25 >> 5) & 0xff) != 0
            ) {
        pbVar11 = (byte *)(((int)uVar25 >> 3) + (int)puVar31);
        iVar24 = uVar25 + uVar29 * 0x20;
        *pbVar11 = *pbVar11 & ((byte)(1 << (ulonglong)(uVar25 & 7)) ^ 0xff);
        if (0xff < iVar24) break;
        iVar24 = param_1 + iVar24 * 0x40;
        FUN_100392f0(iVar24 + 0x7650,iVar24 + 0xb650,1);
      }
      uVar29 = uVar29 + 1;
    } while (uVar29 < 8);
    puVar38 = (undefined4 *)(param_1 + 0xf6cc);
    uVar23 = (*pcVar13)();
    (*extraout_w11_07)(uVar23,*puVar38,0,0);
    *(undefined1 *)(param_1 + 0xf672) = 0;
  }
  if (*(char *)(local_1f8 + 0x6a3) != '\0') {
    uVar23 = *(undefined4 *)(param_1 + 0xf744);
    uVar26 = (*pcVar13)();
    iVar24 = (*extraout_w11_08)(uVar26,uVar23,0,4,0,local_100);
    if (-1 < iVar24) {
      FUN_101325a0(local_100[0],param_1 + 0x6440,0x4d0);
      uVar26 = (*pcVar13)();
      (*extraout_w11_09)(uVar26,uVar23,0);
    }
    *(undefined1 *)(local_1f8 + 0x6a3) = 0;
  }
  if (*(char *)(local_1f8 + 0x696) != '\0') {
    uVar23 = *(undefined4 *)(param_1 + 0xf738);
    uVar26 = (*pcVar13)();
    iVar24 = (*extraout_w11_10)(uVar26,uVar23,0,4,0,local_f0);
    if (-1 < iVar24) {
      FUN_101325a0(local_f0[0],param_1 + 0x5480,0xec0);
      uVar26 = (*pcVar13)();
      (*extraout_w11_11)(uVar26,uVar23,0);
    }
    *(undefined1 *)(local_1f8 + 0x696) = 0;
  }
  if (*(char *)(local_1f8 + 0x694) != '\0') {
    uVar23 = *(undefined4 *)(param_1 + 0xf730);
    uVar26 = (*pcVar13)();
    iVar24 = (*extraout_w11_12)(uVar26,uVar23,0,4,0,local_e0);
    if (iVar24 < 0) {
      *(undefined1 *)(local_1f8 + 0x694) = 0;
    }
    else {
      FUN_101325a0(local_e0[0],param_1 + 0x5190,0x2f0);
      uVar26 = (*pcVar13)();
      (*extraout_w11_13)(uVar26,uVar23,0);
      *(undefined1 *)(local_1f8 + 0x694) = 0;
    }
  }
  if (*(char *)(local_1f8 + 0x695) != '\0') {
    uVar23 = *(undefined4 *)(param_1 + 0x7c);
    uVar26 = *(undefined4 *)(param_1 + 0xf734);
    uVar27 = (*pcVar13)();
    iVar24 = (*extraout_w11_14)(uVar27,uVar26,0,4,0,local_d0);
    if (-1 < iVar24) {
      FUN_101325a0(local_d0[0],param_1 + 0x1050,uVar23);
      uVar23 = (*pcVar13)();
      (*extraout_w11_15)(uVar23,uVar26,0);
    }
    *(undefined1 *)(local_1f8 + 0x695) = 0;
  }
  if (iVar35 != param_1) {
    local_1d0 = *(int *)(param_1 + 0xf730);
    uStack_1cc = *(undefined4 *)(param_1 + 0xf734);
    local_178 = *(undefined4 *)(param_1 + 0xf744);
    uStack_174 = *(undefined4 *)(param_1 + 0xf738);
    local_170 = *(undefined4 *)(param_1 + 0xf73c);
    uVar23 = (*pcVar13)();
    (*extraout_w11_16)(uVar23,3,2,&local_1d0);
    uVar23 = (*pcVar13)();
    (*extraout_w11_17)(uVar23,3,3,&local_178);
    uVar23 = (*pcVar13)();
    (*extraout_w11_18)(uVar23,3,2,&local_1d0);
  }
  if (*(char *)(local_1f8 + 0x697) != '\0') {
    uVar23 = *(undefined4 *)(param_1 + 0xf73c);
    uVar26 = (*pcVar13)();
    iVar24 = (*extraout_w11_19)(uVar26,uVar23,0,4,0,local_c0);
    if (-1 < iVar24) {
      uVar48 = *(undefined8 *)(param_1 + 0x6340);
      uVar47 = *(undefined8 *)(param_1 + 0x6358);
      uVar46 = *(undefined8 *)(param_1 + 0x6350);
      local_c0[0][1] = *(undefined8 *)(param_1 + 0x6348);
      *local_c0[0] = uVar48;
      local_c0[0][3] = uVar47;
      local_c0[0][2] = uVar46;
      uVar48 = *(undefined8 *)(param_1 + 0x6360);
      uVar47 = *(undefined8 *)(param_1 + 0x6378);
      uVar46 = *(undefined8 *)(param_1 + 0x6370);
      local_c0[0][5] = *(undefined8 *)(param_1 + 0x6368);
      local_c0[0][4] = uVar48;
      local_c0[0][7] = uVar47;
      local_c0[0][6] = uVar46;
      uVar48 = *(undefined8 *)(param_1 + 0x6380);
      uVar47 = *(undefined8 *)(param_1 + 0x6398);
      uVar46 = *(undefined8 *)(param_1 + 0x6390);
      local_c0[0][9] = *(undefined8 *)(param_1 + 0x6388);
      local_c0[0][8] = uVar48;
      local_c0[0][0xb] = uVar47;
      local_c0[0][10] = uVar46;
      uVar48 = *(undefined8 *)(param_1 + 0x63a0);
      uVar47 = *(undefined8 *)(param_1 + 0x63b8);
      uVar46 = *(undefined8 *)(param_1 + 0x63b0);
      local_c0[0][0xd] = *(undefined8 *)(param_1 + 0x63a8);
      local_c0[0][0xc] = uVar48;
      local_c0[0][0xf] = uVar47;
      local_c0[0][0xe] = uVar46;
      uVar48 = *(undefined8 *)(param_1 + 0x63c0);
      uVar47 = *(undefined8 *)(param_1 + 0x63d8);
      uVar46 = *(undefined8 *)(param_1 + 0x63d0);
      local_c0[0][0x11] = *(undefined8 *)(param_1 + 0x63c8);
      local_c0[0][0x10] = uVar48;
      local_c0[0][0x13] = uVar47;
      local_c0[0][0x12] = uVar46;
      uVar48 = *(undefined8 *)(param_1 + 0x63e0);
      uVar47 = *(undefined8 *)(param_1 + 0x63f8);
      uVar46 = *(undefined8 *)(param_1 + 0x63f0);
      local_c0[0][0x15] = *(undefined8 *)(param_1 + 0x63e8);
      local_c0[0][0x14] = uVar48;
      local_c0[0][0x17] = uVar47;
      local_c0[0][0x16] = uVar46;
      uVar48 = *(undefined8 *)(param_1 + 0x6400);
      uVar47 = *(undefined8 *)(param_1 + 0x6418);
      uVar46 = *(undefined8 *)(param_1 + 0x6410);
      local_c0[0][0x19] = *(undefined8 *)(param_1 + 0x6408);
      local_c0[0][0x18] = uVar48;
      local_c0[0][0x1b] = uVar47;
      local_c0[0][0x1a] = uVar46;
      uVar48 = *(undefined8 *)(param_1 + 0x6420);
      uVar47 = *(undefined8 *)(param_1 + 0x6438);
      uVar46 = *(undefined8 *)(param_1 + 0x6430);
      local_c0[0][0x1d] = *(undefined8 *)(param_1 + 0x6428);
      local_c0[0][0x1c] = uVar48;
      local_c0[0][0x1f] = uVar47;
      local_c0[0][0x1e] = uVar46;
      uVar26 = (*pcVar13)();
      (*extraout_w11_20)(uVar26,uVar23,0);
    }
    *(undefined1 *)(local_1f8 + 0x697) = 0;
  }
  if (*(char *)(param_1 + 0xf6a1) != '\0' || iVar35 != param_1) {
    iVar24 = *(int *)(param_1 + 0xf830);
    if ((iVar24 == 0) && (iVar24 = *(int *)(param_1 + 0xf840), iVar24 == 0)) {
      fVar49 = 1.0;
      local_204 = 1.0;
    }
    else {
      uVar29 = *(uint *)(iVar24 + 0x14);
      (*pcVar13)();
      uVar28 = (*extraout_w11_21)(iVar24,0);
      uVar25 = *(uint *)(iVar24 + 0x18);
      local_204 = (float)uVar28 / (float)uVar29;
      (*pcVar13)();
      uVar29 = (*extraout_w11_22)(iVar24,0);
      fVar49 = (float)uVar29 / (float)uVar25;
    }
    piVar33 = (int *)(param_1 + 0xe50);
    uVar39 = ZEXT48(piVar33);
    iVar41 = (int)((float)*(int *)(param_1 + 0xe44) * fVar49);
    iVar37 = (int)((float)*(int *)(param_1 + 0xe48) * local_204);
    iVar34 = (int)((float)*(int *)(param_1 + 0xe4c) * fVar49);
    *piVar33 = (int)((float)*(int *)(param_1 + 0xe40) * local_204);
    *(int *)(param_1 + 0xe54) = iVar41;
    *(int *)(param_1 + 0xe58) = iVar37;
    *(int *)(param_1 + 0xe5c) = iVar34;
    iVar24 = *(int *)(param_1 + 0xf6b0) + *(int *)(param_1 + 0x10) * 0x1510;
    if ((((*piVar33 != *(int *)(iVar24 + 0x810)) || (iVar41 != *(int *)(iVar24 + 0x814))) ||
        (iVar37 != *(int *)(iVar24 + 0x818))) || (iVar34 != *(int *)(iVar24 + 0x81c))) {
      uVar23 = (*pcVar13)();
      (*extraout_w11_23)(uVar23,1,uVar39 & 0xffffffff);
      uVar46 = *(undefined8 *)piVar33;
      *(undefined8 *)(iVar24 + 0x818) = *(undefined8 *)(param_1 + 0xe58);
      *(undefined8 *)(iVar24 + 0x810) = uVar46;
    }
    *(undefined1 *)(param_1 + 0xf6a1) = 0;
    if (iVar35 != param_1) {
      local_198 = *(undefined4 *)(param_1 + 0xf6c4);
      uStack_194 = *(undefined4 *)(param_1 + 0xf6c8);
      local_190 = *(undefined4 *)(param_1 + 0xf6cc);
      uVar23 = (*pcVar13)();
      (*extraout_w11_24)(uVar23,0,3,&local_198);
      uVar23 = (*pcVar13)();
      (*extraout_w11_25)(uVar23,0,2,&local_198);
      uVar23 = (*pcVar13)();
      (*extraout_w11_26)(uVar23,0,3,&local_198);
    }
  }
  if (*(char *)(param_1 + 0xf66a) != '\0' || iVar35 != param_1) {
    local_188 = 0;
    local_180 = 0;
    iVar24 = *(int *)(param_1 + 0xf6b0) + *(int *)(param_1 + 0x10) * 0x1510;
    cVar21 = *(int *)(iVar24 + 0x7fc) != 0;
    if ((bool)cVar21) {
      *(int *)(iVar24 + 0x7fc) = 0;
    }
    if (*(int *)(iVar24 + 0x800) != 0) {
      *(int *)(iVar24 + 0x800) = 0;
      cVar21 = cVar21 + '\x01';
    }
    if (*(int *)(iVar24 + 0x804) != 0) {
      *(int *)(iVar24 + 0x804) = 0;
      cVar21 = cVar21 + '\x01';
    }
    if (*(int *)(iVar24 + 0x808) != 0) {
      *(int *)(iVar24 + 0x808) = 0;
      cVar21 = cVar21 + '\x01';
    }
    if ((cVar21 != '\0') || (*(int *)(iVar24 + 0x80c) != 0)) {
      uVar23 = (*pcVar13)();
      (*extraout_w11_27)(uVar23,4,&local_188,0);
      *(undefined4 *)(iVar24 + 0x80c) = 0;
    }
  }
  if (*(char *)(param_1 + 0xf669) != '\0' || iVar35 != param_1) {
    iVar24 = *(int *)(param_1 + 0xf6b0) + *(int *)(param_1 + 0x10) * 0x1510;
    if (*(char *)(param_1 + 0x7642) == '\0') {
      piVar33 = (int *)(iVar24 + 0x6c4);
      uVar39 = ZEXT48(piVar33);
      if (*piVar33 != *(int *)(param_1 + 0xf74c)) {
        *piVar33 = *(int *)(param_1 + 0xf74c);
        uVar23 = (*pcVar13)();
        (*extraout_w11_28)(uVar23,0x30,1,uVar39 & 0xffffffff);
      }
      iVar34 = 0;
      iVar24 = *(int *)(param_1 + 0xf6b0) + *(int *)(param_1 + 0x10) * 0x1510;
      bVar20 = *(int *)(iVar24 + 0x604) != *(int *)(param_1 + 0xf76c);
      if (bVar20) {
        *(int *)(iVar24 + 0x604) = *(int *)(param_1 + 0xf76c);
      }
      uVar39 = (ulonglong)bVar20;
      if (*(int *)(iVar24 + 0x608) != *(int *)(param_1 + 0xf770)) {
        *(int *)(iVar24 + 0x608) = *(int *)(param_1 + 0xf770);
        if (bVar20) {
          uVar39 = 2;
        }
        else {
          iVar34 = 1;
          uVar39 = 1;
        }
      }
      if (*(int *)(iVar24 + 0x60c) != *(int *)(param_1 + 0xf774)) {
        *(int *)(iVar24 + 0x60c) = *(int *)(param_1 + 0xf774);
        if ((int)uVar39 == 0) {
          iVar34 = 2;
          uVar39 = 1;
        }
        else {
          uVar39 = (ulonglong)(3 - iVar34);
        }
      }
      if (*(int *)(iVar24 + 0x610) != *(int *)(param_1 + 0xf778)) {
        *(int *)(iVar24 + 0x610) = *(int *)(param_1 + 0xf778);
        if ((int)uVar39 == 0) {
          iVar34 = 3;
          uVar39 = 1;
        }
        else {
          uVar39 = (ulonglong)(4 - iVar34);
        }
      }
      if (*(int *)(iVar24 + 0x614) != *(int *)(param_1 + 0xf77c)) {
        *(int *)(iVar24 + 0x614) = *(int *)(param_1 + 0xf77c);
        if ((int)uVar39 == 0) {
          iVar34 = 4;
          uVar39 = 1;
        }
        else {
          uVar39 = (ulonglong)(5 - iVar34);
        }
      }
      if (*(int *)(iVar24 + 0x618) != *(int *)(param_1 + 0xf780)) {
        *(int *)(iVar24 + 0x618) = *(int *)(param_1 + 0xf780);
        if ((int)uVar39 == 0) {
          iVar34 = 5;
          uVar39 = 1;
        }
        else {
          uVar39 = (ulonglong)(6 - iVar34);
        }
      }
      if (*(int *)(iVar24 + 0x61c) != *(int *)(param_1 + 0xf784)) {
        *(int *)(iVar24 + 0x61c) = *(int *)(param_1 + 0xf784);
        if ((int)uVar39 == 0) {
          iVar34 = 6;
          uVar39 = 1;
        }
        else {
          uVar39 = (ulonglong)(7 - iVar34);
        }
      }
      if (*(int *)(iVar24 + 0x620) != *(int *)(param_1 + 0xf788)) {
        *(int *)(iVar24 + 0x620) = *(int *)(param_1 + 0xf788);
        if ((int)uVar39 == 0) {
          iVar34 = 7;
          uVar39 = 1;
        }
        else {
          uVar39 = (ulonglong)(8 - iVar34);
        }
      }
      if (*(int *)(iVar24 + 0x624) != *(int *)(param_1 + 0xf78c)) {
        *(int *)(iVar24 + 0x624) = *(int *)(param_1 + 0xf78c);
        if ((int)uVar39 == 0) {
          iVar34 = 8;
          uVar39 = 1;
        }
        else {
          uVar39 = (ulonglong)(9 - iVar34);
        }
      }
      if (*(int *)(iVar24 + 0x628) != *(int *)(param_1 + 0xf790)) {
        *(int *)(iVar24 + 0x628) = *(int *)(param_1 + 0xf790);
        if ((int)uVar39 == 0) {
          iVar34 = 9;
          uVar39 = 1;
        }
        else {
          uVar39 = (ulonglong)(10 - iVar34);
        }
      }
      if (*(int *)(iVar24 + 0x62c) != *(int *)(param_1 + 0xf794)) {
        *(int *)(iVar24 + 0x62c) = *(int *)(param_1 + 0xf794);
        if ((int)uVar39 == 0) {
          iVar34 = 10;
          uVar39 = 1;
        }
        else {
          uVar39 = (ulonglong)(0xb - iVar34);
        }
      }
      if (*(int *)(iVar24 + 0x630) != *(int *)(param_1 + 0xf798)) {
        *(int *)(iVar24 + 0x630) = *(int *)(param_1 + 0xf798);
        if ((int)uVar39 == 0) {
          iVar34 = 0xb;
          uVar39 = 1;
        }
        else {
          uVar39 = (ulonglong)(0xc - iVar34);
        }
      }
      if (*(int *)(iVar24 + 0x634) != *(int *)(param_1 + 0xf79c)) {
        *(int *)(iVar24 + 0x634) = *(int *)(param_1 + 0xf79c);
        if ((int)uVar39 == 0) {
          iVar34 = 0xc;
          uVar39 = 1;
        }
        else {
          uVar39 = (ulonglong)(0xd - iVar34);
        }
      }
      if (*(int *)(iVar24 + 0x638) != *(int *)(param_1 + 0xf7a0)) {
        *(int *)(iVar24 + 0x638) = *(int *)(param_1 + 0xf7a0);
        if ((int)uVar39 == 0) {
          iVar34 = 0xd;
          uVar39 = 1;
        }
        else {
          uVar39 = (ulonglong)(0xe - iVar34);
        }
      }
      if (*(int *)(iVar24 + 0x63c) != *(int *)(param_1 + 0xf7a4)) {
        *(int *)(iVar24 + 0x63c) = *(int *)(param_1 + 0xf7a4);
        if ((int)uVar39 == 0) {
          iVar34 = 0xe;
          uVar39 = 1;
        }
        else {
          uVar39 = (ulonglong)(0xf - iVar34);
        }
      }
      if (*(int *)(iVar24 + 0x640) == *(int *)(param_1 + 0xf7a8)) {
LAB_10044e5c:
        if ((int)uVar39 != 0) goto LAB_10044e60;
      }
      else {
        *(int *)(iVar24 + 0x640) = *(int *)(param_1 + 0xf7a8);
        if ((int)uVar39 != 0) {
          uVar39 = (ulonglong)(0x10 - iVar34);
          goto LAB_10044e5c;
        }
        iVar34 = 0xf;
        uVar39 = 1;
LAB_10044e60:
        auVar50 = (*pcVar13)(*(undefined4 *)(iVar24 + 0x514),iVar34,uVar39,
                             iVar24 + (iVar34 + 0x181) * 4);
        (*extraout_w11_29)(auVar50._0_8_ & 0xffffffff,auVar50._8_8_ & 0xffffffff,uVar39 & 0xffffffff
                          );
      }
      iVar34 = 0x10;
      iVar24 = *(int *)(param_1 + 0xf6b0) + *(int *)(param_1 + 0x10) * 0x1510;
      bVar20 = *(int *)(iVar24 + 0x644) != *(int *)(param_1 + 0xf7ac);
      if (bVar20) {
        *(int *)(iVar24 + 0x644) = *(int *)(param_1 + 0xf7ac);
      }
      uVar39 = (ulonglong)bVar20;
      if (*(int *)(iVar24 + 0x648) != *(int *)(param_1 + 0xf7b0)) {
        *(int *)(iVar24 + 0x648) = *(int *)(param_1 + 0xf7b0);
        if (bVar20) {
          uVar39 = 2;
        }
        else {
          iVar34 = 0x11;
          uVar39 = 1;
        }
      }
      if (*(int *)(iVar24 + 0x64c) != *(int *)(param_1 + 0xf7b4)) {
        *(int *)(iVar24 + 0x64c) = *(int *)(param_1 + 0xf7b4);
        if ((int)uVar39 == 0) {
          iVar34 = 0x12;
          uVar39 = 1;
        }
        else {
          uVar39 = (ulonglong)(0x13 - iVar34);
        }
      }
      if (*(int *)(iVar24 + 0x650) != *(int *)(param_1 + 0xf7b8)) {
        *(int *)(iVar24 + 0x650) = *(int *)(param_1 + 0xf7b8);
        if ((int)uVar39 == 0) {
          iVar34 = 0x13;
          uVar39 = 1;
        }
        else {
          uVar39 = (ulonglong)(0x14 - iVar34);
        }
      }
      if (*(int *)(iVar24 + 0x654) != *(int *)(param_1 + 0xf7bc)) {
        *(int *)(iVar24 + 0x654) = *(int *)(param_1 + 0xf7bc);
        if ((int)uVar39 == 0) {
          iVar34 = 0x14;
          uVar39 = 1;
        }
        else {
          uVar39 = (ulonglong)(0x15 - iVar34);
        }
      }
      if (*(int *)(iVar24 + 0x658) != *(int *)(param_1 + 0xf7c0)) {
        *(int *)(iVar24 + 0x658) = *(int *)(param_1 + 0xf7c0);
        if ((int)uVar39 == 0) {
          iVar34 = 0x15;
          uVar39 = 1;
        }
        else {
          uVar39 = (ulonglong)(0x16 - iVar34);
        }
      }
      if (*(int *)(iVar24 + 0x65c) != *(int *)(param_1 + 0xf7c4)) {
        *(int *)(iVar24 + 0x65c) = *(int *)(param_1 + 0xf7c4);
        if ((int)uVar39 == 0) {
          iVar34 = 0x16;
          uVar39 = 1;
        }
        else {
          uVar39 = (ulonglong)(0x17 - iVar34);
        }
      }
      if (*(int *)(iVar24 + 0x660) != *(int *)(param_1 + 0xf7c8)) {
        *(int *)(iVar24 + 0x660) = *(int *)(param_1 + 0xf7c8);
        if ((int)uVar39 == 0) {
          iVar34 = 0x17;
          uVar39 = 1;
        }
        else {
          uVar39 = (ulonglong)(0x18 - iVar34);
        }
      }
      if (*(int *)(iVar24 + 0x664) != *(int *)(param_1 + 0xf7cc)) {
        *(int *)(iVar24 + 0x664) = *(int *)(param_1 + 0xf7cc);
        if ((int)uVar39 == 0) {
          iVar34 = 0x18;
          uVar39 = 1;
        }
        else {
          uVar39 = (ulonglong)(0x19 - iVar34);
        }
      }
      if (*(int *)(iVar24 + 0x668) != *(int *)(param_1 + 0xf7d0)) {
        *(int *)(iVar24 + 0x668) = *(int *)(param_1 + 0xf7d0);
        if ((int)uVar39 == 0) {
          iVar34 = 0x19;
          uVar39 = 1;
        }
        else {
          uVar39 = (ulonglong)(0x1a - iVar34);
        }
      }
      if (*(int *)(iVar24 + 0x66c) != *(int *)(param_1 + 0xf7d4)) {
        *(int *)(iVar24 + 0x66c) = *(int *)(param_1 + 0xf7d4);
        if ((int)uVar39 == 0) {
          iVar34 = 0x1a;
          uVar39 = 1;
        }
        else {
          uVar39 = (ulonglong)(0x1b - iVar34);
        }
      }
      if (*(int *)(iVar24 + 0x670) != *(int *)(param_1 + 0xf7d8)) {
        *(int *)(iVar24 + 0x670) = *(int *)(param_1 + 0xf7d8);
        if ((int)uVar39 == 0) {
          iVar34 = 0x1b;
          uVar39 = 1;
        }
        else {
          uVar39 = (ulonglong)(0x1c - iVar34);
        }
      }
      if (*(int *)(iVar24 + 0x674) != *(int *)(param_1 + 0xf7dc)) {
        *(int *)(iVar24 + 0x674) = *(int *)(param_1 + 0xf7dc);
        if ((int)uVar39 == 0) {
          iVar34 = 0x1c;
          uVar39 = 1;
        }
        else {
          uVar39 = (ulonglong)(0x1d - iVar34);
        }
      }
      if (*(int *)(iVar24 + 0x678) != *(int *)(param_1 + 0xf7e0)) {
        *(int *)(iVar24 + 0x678) = *(int *)(param_1 + 0xf7e0);
        if ((int)uVar39 == 0) {
          iVar34 = 0x1d;
          uVar39 = 1;
        }
        else {
          uVar39 = (ulonglong)(0x1e - iVar34);
        }
      }
      if (*(int *)(iVar24 + 0x67c) != *(int *)(param_1 + 0xf7e4)) {
        *(int *)(iVar24 + 0x67c) = *(int *)(param_1 + 0xf7e4);
        if ((int)uVar39 == 0) {
          iVar34 = 0x1e;
          uVar39 = 1;
        }
        else {
          uVar39 = (ulonglong)(0x1f - iVar34);
        }
      }
      if (*(int *)(iVar24 + 0x680) == *(int *)(param_1 + 0xf7e8)) {
LAB_100451f4:
        if ((int)uVar39 != 0) goto LAB_100451f8;
      }
      else {
        *(int *)(iVar24 + 0x680) = *(int *)(param_1 + 0xf7e8);
        if ((int)uVar39 != 0) {
          uVar39 = (ulonglong)(0x20 - iVar34);
          goto LAB_100451f4;
        }
        iVar34 = 0x1f;
        uVar39 = 1;
LAB_100451f8:
        auVar50 = (*pcVar13)(*(undefined4 *)(iVar24 + 0x514),iVar34,uVar39,
                             iVar24 + (iVar34 + 0x181) * 4);
        (*extraout_w11_30)(auVar50._0_8_ & 0xffffffff,auVar50._8_8_ & 0xffffffff,uVar39 & 0xffffffff
                          );
      }
      iVar34 = 0x20;
      iVar24 = *(int *)(param_1 + 0xf6b0) + *(int *)(param_1 + 0x10) * 0x1510;
      bVar20 = *(int *)(iVar24 + 0x684) != *(int *)(param_1 + 0xf7ec);
      if (bVar20) {
        *(int *)(iVar24 + 0x684) = *(int *)(param_1 + 0xf7ec);
      }
      uVar39 = (ulonglong)bVar20;
      if (*(int *)(iVar24 + 0x688) != *(int *)(param_1 + 0xf7f0)) {
        *(int *)(iVar24 + 0x688) = *(int *)(param_1 + 0xf7f0);
        if (bVar20) {
          uVar39 = 2;
        }
        else {
          iVar34 = 0x21;
          uVar39 = 1;
        }
      }
      if (*(int *)(iVar24 + 0x68c) != *(int *)(param_1 + 0xf7f4)) {
        *(int *)(iVar24 + 0x68c) = *(int *)(param_1 + 0xf7f4);
        if ((int)uVar39 == 0) {
          iVar34 = 0x22;
          uVar39 = 1;
        }
        else {
          uVar39 = (ulonglong)(0x23 - iVar34);
        }
      }
      if (*(int *)(iVar24 + 0x690) != *(int *)(param_1 + 0xf7f8)) {
        *(int *)(iVar24 + 0x690) = *(int *)(param_1 + 0xf7f8);
        if ((int)uVar39 == 0) {
          iVar34 = 0x23;
          uVar39 = 1;
        }
        else {
          uVar39 = (ulonglong)(0x24 - iVar34);
        }
      }
      if (*(int *)(iVar24 + 0x694) != *(int *)(param_1 + 0xf7fc)) {
        *(int *)(iVar24 + 0x694) = *(int *)(param_1 + 0xf7fc);
        if ((int)uVar39 == 0) {
          iVar34 = 0x24;
          uVar39 = 1;
        }
        else {
          uVar39 = (ulonglong)(0x25 - iVar34);
        }
      }
      if (*(int *)(iVar24 + 0x698) != *(int *)(param_1 + 0xf800)) {
        *(int *)(iVar24 + 0x698) = *(int *)(param_1 + 0xf800);
        if ((int)uVar39 == 0) {
          iVar34 = 0x25;
          uVar39 = 1;
        }
        else {
          uVar39 = (ulonglong)(0x26 - iVar34);
        }
      }
      if (*(int *)(iVar24 + 0x69c) != *(int *)(param_1 + 0xf804)) {
        *(int *)(iVar24 + 0x69c) = *(int *)(param_1 + 0xf804);
        if ((int)uVar39 == 0) {
          iVar34 = 0x26;
          uVar39 = 1;
        }
        else {
          uVar39 = (ulonglong)(0x27 - iVar34);
        }
      }
      if (*(int *)(iVar24 + 0x6a0) != *(int *)(param_1 + 0xf808)) {
        *(int *)(iVar24 + 0x6a0) = *(int *)(param_1 + 0xf808);
        if ((int)uVar39 == 0) {
          iVar34 = 0x27;
          uVar39 = 1;
        }
        else {
          uVar39 = (ulonglong)(0x28 - iVar34);
        }
      }
      if (*(int *)(iVar24 + 0x6a4) != *(int *)(param_1 + 0xf80c)) {
        *(int *)(iVar24 + 0x6a4) = *(int *)(param_1 + 0xf80c);
        if ((int)uVar39 == 0) {
          iVar34 = 0x28;
          uVar39 = 1;
        }
        else {
          uVar39 = (ulonglong)(0x29 - iVar34);
        }
      }
      if (*(int *)(iVar24 + 0x6a8) != *(int *)(param_1 + 0xf810)) {
        *(int *)(iVar24 + 0x6a8) = *(int *)(param_1 + 0xf810);
        if ((int)uVar39 == 0) {
          iVar34 = 0x29;
          uVar39 = 1;
        }
        else {
          uVar39 = (ulonglong)(0x2a - iVar34);
        }
      }
      if (*(int *)(iVar24 + 0x6ac) != *(int *)(param_1 + 0xf814)) {
        *(int *)(iVar24 + 0x6ac) = *(int *)(param_1 + 0xf814);
        if ((int)uVar39 == 0) {
          iVar34 = 0x2a;
          uVar39 = 1;
        }
        else {
          uVar39 = (ulonglong)(0x2b - iVar34);
        }
      }
      if (*(int *)(iVar24 + 0x6b0) != *(int *)(param_1 + 0xf818)) {
        *(int *)(iVar24 + 0x6b0) = *(int *)(param_1 + 0xf818);
        if ((int)uVar39 == 0) {
          iVar34 = 0x2b;
          uVar39 = 1;
        }
        else {
          uVar39 = (ulonglong)(0x2c - iVar34);
        }
      }
      if (*(int *)(iVar24 + 0x6b4) != *(int *)(param_1 + 0xf81c)) {
        *(int *)(iVar24 + 0x6b4) = *(int *)(param_1 + 0xf81c);
        if ((int)uVar39 == 0) {
          iVar34 = 0x2c;
          uVar39 = 1;
        }
        else {
          uVar39 = (ulonglong)(0x2d - iVar34);
        }
      }
      if (*(int *)(iVar24 + 0x6b8) != *(int *)(param_1 + 0xf820)) {
        *(int *)(iVar24 + 0x6b8) = *(int *)(param_1 + 0xf820);
        if ((int)uVar39 == 0) {
          iVar34 = 0x2d;
          uVar39 = 1;
        }
        else {
          uVar39 = (ulonglong)(0x2e - iVar34);
        }
      }
      if (*(int *)(iVar24 + 0x6bc) != *(int *)(param_1 + 0xf824)) {
        *(int *)(iVar24 + 0x6bc) = *(int *)(param_1 + 0xf824);
        if ((int)uVar39 == 0) {
          iVar34 = 0x2e;
          uVar39 = 1;
        }
        else {
          uVar39 = (ulonglong)(0x2f - iVar34);
        }
      }
      if (*(int *)(iVar24 + 0x6c0) == *(int *)(param_1 + 0xf828)) {
LAB_1004558c:
        if ((int)uVar39 == 0) goto LAB_10045b44;
      }
      else {
        *(int *)(iVar24 + 0x6c0) = *(int *)(param_1 + 0xf828);
        if ((int)uVar39 != 0) {
          uVar39 = (ulonglong)(0x30 - iVar34);
          goto LAB_1004558c;
        }
        iVar34 = 0x2f;
        uVar39 = 1;
      }
      uVar23 = *(undefined4 *)(iVar24 + 0x514);
      iVar24 = iVar24 + (iVar34 + 0x181) * 4;
LAB_10045b20:
      auVar50 = (*pcVar13)(uVar23,iVar34,uVar39,iVar24);
      (*extraout_w11_32)(auVar50._0_8_ & 0xffffffff,auVar50._8_8_ & 0xffffffff,uVar39 & 0xffffffff);
    }
    else {
      iVar34 = 0x10;
      bVar20 = *(int *)(iVar24 + 0x644) != 0;
      if (bVar20) {
        *(int *)(iVar24 + 0x644) = 0;
      }
      uVar39 = (ulonglong)bVar20;
      if (*(int *)(iVar24 + 0x648) != 0) {
        *(int *)(iVar24 + 0x648) = 0;
        if (bVar20) {
          uVar39 = 2;
        }
        else {
          iVar34 = 0x11;
          uVar39 = 1;
        }
      }
      if (*(int *)(iVar24 + 0x64c) != 0) {
        *(int *)(iVar24 + 0x64c) = 0;
        if ((int)uVar39 == 0) {
          iVar34 = 0x12;
          uVar39 = 1;
        }
        else {
          uVar39 = (ulonglong)(0x13 - iVar34);
        }
      }
      if (*(int *)(iVar24 + 0x650) != 0) {
        *(int *)(iVar24 + 0x650) = 0;
        if ((int)uVar39 == 0) {
          iVar34 = 0x13;
          uVar39 = 1;
        }
        else {
          uVar39 = (ulonglong)(0x14 - iVar34);
        }
      }
      if (*(int *)(iVar24 + 0x654) != 0) {
        *(int *)(iVar24 + 0x654) = 0;
        if ((int)uVar39 == 0) {
          iVar34 = 0x14;
          uVar39 = 1;
        }
        else {
          uVar39 = (ulonglong)(0x15 - iVar34);
        }
      }
      if (*(int *)(iVar24 + 0x658) != 0) {
        *(int *)(iVar24 + 0x658) = 0;
        if ((int)uVar39 == 0) {
          iVar34 = 0x15;
          uVar39 = 1;
        }
        else {
          uVar39 = (ulonglong)(0x16 - iVar34);
        }
      }
      if (*(int *)(iVar24 + 0x65c) != 0) {
        *(int *)(iVar24 + 0x65c) = 0;
        if ((int)uVar39 == 0) {
          iVar34 = 0x16;
          uVar39 = 1;
        }
        else {
          uVar39 = (ulonglong)(0x17 - iVar34);
        }
      }
      if (*(int *)(iVar24 + 0x660) != 0) {
        *(int *)(iVar24 + 0x660) = 0;
        if ((int)uVar39 == 0) {
          iVar34 = 0x17;
          uVar39 = 1;
        }
        else {
          uVar39 = (ulonglong)(0x18 - iVar34);
        }
      }
      if (*(int *)(iVar24 + 0x664) != 0) {
        *(int *)(iVar24 + 0x664) = 0;
        if ((int)uVar39 == 0) {
          iVar34 = 0x18;
          uVar39 = 1;
        }
        else {
          uVar39 = (ulonglong)(0x19 - iVar34);
        }
      }
      if (*(int *)(iVar24 + 0x668) != 0) {
        *(int *)(iVar24 + 0x668) = 0;
        if ((int)uVar39 == 0) {
          iVar34 = 0x19;
          uVar39 = 1;
        }
        else {
          uVar39 = (ulonglong)(0x1a - iVar34);
        }
      }
      if (*(int *)(iVar24 + 0x66c) != 0) {
        *(int *)(iVar24 + 0x66c) = 0;
        if ((int)uVar39 == 0) {
          iVar34 = 0x1a;
          uVar39 = 1;
        }
        else {
          uVar39 = (ulonglong)(0x1b - iVar34);
        }
      }
      if (*(int *)(iVar24 + 0x670) != 0) {
        *(int *)(iVar24 + 0x670) = 0;
        if ((int)uVar39 == 0) {
          iVar34 = 0x1b;
          uVar39 = 1;
        }
        else {
          uVar39 = (ulonglong)(0x1c - iVar34);
        }
      }
      if (*(int *)(iVar24 + 0x674) != 0) {
        *(int *)(iVar24 + 0x674) = 0;
        if ((int)uVar39 == 0) {
          iVar34 = 0x1c;
          uVar39 = 1;
        }
        else {
          uVar39 = (ulonglong)(0x1d - iVar34);
        }
      }
      if (*(int *)(iVar24 + 0x678) != 0) {
        *(int *)(iVar24 + 0x678) = 0;
        if ((int)uVar39 == 0) {
          iVar34 = 0x1d;
          uVar39 = 1;
        }
        else {
          uVar39 = (ulonglong)(0x1e - iVar34);
        }
      }
      if (*(int *)(iVar24 + 0x67c) != 0) {
        *(int *)(iVar24 + 0x67c) = 0;
        if ((int)uVar39 == 0) {
          iVar34 = 0x1e;
          uVar39 = 1;
        }
        else {
          uVar39 = (ulonglong)(0x1f - iVar34);
        }
      }
      if (*(int *)(iVar24 + 0x680) == 0) {
LAB_10045820:
        if ((int)uVar39 != 0) goto LAB_10045824;
      }
      else {
        *(int *)(iVar24 + 0x680) = 0;
        if ((int)uVar39 != 0) {
          uVar39 = (ulonglong)(0x20 - iVar34);
          goto LAB_10045820;
        }
        iVar34 = 0x1f;
        uVar39 = 1;
LAB_10045824:
        auVar50 = (*pcVar13)(*(undefined4 *)(iVar24 + 0x514),iVar34,uVar39,
                             iVar24 + (iVar34 + 0x181) * 4);
        (*extraout_w11_31)(auVar50._0_8_ & 0xffffffff,auVar50._8_8_ & 0xffffffff,uVar39 & 0xffffffff
                          );
      }
      iVar34 = 0;
      iVar24 = *(int *)(param_1 + 0xf6b0) + *(int *)(param_1 + 0x10) * 0x1510;
      bVar20 = *(int *)(iVar24 + 0x604) != *(int *)(param_1 + 0xf82c);
      if (bVar20) {
        *(int *)(iVar24 + 0x604) = *(int *)(param_1 + 0xf82c);
      }
      uVar39 = (ulonglong)bVar20;
      if (*(int *)(iVar24 + 0x608) != 0) {
        *(int *)(iVar24 + 0x608) = 0;
        if (bVar20) {
          uVar39 = 2;
        }
        else {
          iVar34 = 1;
          uVar39 = 1;
        }
      }
      if (*(int *)(iVar24 + 0x60c) != 0) {
        *(int *)(iVar24 + 0x60c) = 0;
        if ((int)uVar39 == 0) {
          iVar34 = 2;
          uVar39 = 1;
        }
        else {
          uVar39 = (ulonglong)(3 - iVar34);
        }
      }
      if (*(int *)(iVar24 + 0x610) != 0) {
        *(int *)(iVar24 + 0x610) = 0;
        if ((int)uVar39 == 0) {
          iVar34 = 3;
          uVar39 = 1;
        }
        else {
          uVar39 = (ulonglong)(4 - iVar34);
        }
      }
      if (*(int *)(iVar24 + 0x614) != 0) {
        *(int *)(iVar24 + 0x614) = 0;
        if ((int)uVar39 == 0) {
          iVar34 = 4;
          uVar39 = 1;
        }
        else {
          uVar39 = (ulonglong)(5 - iVar34);
        }
      }
      if (*(int *)(iVar24 + 0x618) != 0) {
        *(int *)(iVar24 + 0x618) = 0;
        if ((int)uVar39 == 0) {
          iVar34 = 5;
          uVar39 = 1;
        }
        else {
          uVar39 = (ulonglong)(6 - iVar34);
        }
      }
      if (*(int *)(iVar24 + 0x61c) != 0) {
        *(int *)(iVar24 + 0x61c) = 0;
        if ((int)uVar39 == 0) {
          iVar34 = 6;
          uVar39 = 1;
        }
        else {
          uVar39 = (ulonglong)(7 - iVar34);
        }
      }
      if (*(int *)(iVar24 + 0x620) != 0) {
        *(int *)(iVar24 + 0x620) = 0;
        if ((int)uVar39 == 0) {
          iVar34 = 7;
          uVar39 = 1;
        }
        else {
          uVar39 = (ulonglong)(8 - iVar34);
        }
      }
      if (*(int *)(iVar24 + 0x624) != 0) {
        *(int *)(iVar24 + 0x624) = 0;
        if ((int)uVar39 == 0) {
          iVar34 = 8;
          uVar39 = 1;
        }
        else {
          uVar39 = (ulonglong)(9 - iVar34);
        }
      }
      if (*(int *)(iVar24 + 0x628) != 0) {
        *(int *)(iVar24 + 0x628) = 0;
        if ((int)uVar39 == 0) {
          iVar34 = 9;
          uVar39 = 1;
        }
        else {
          uVar39 = (ulonglong)(10 - iVar34);
        }
      }
      if (*(int *)(iVar24 + 0x62c) != 0) {
        *(int *)(iVar24 + 0x62c) = 0;
        if ((int)uVar39 == 0) {
          iVar34 = 10;
          uVar39 = 1;
        }
        else {
          uVar39 = (ulonglong)(0xb - iVar34);
        }
      }
      if (*(int *)(iVar24 + 0x630) != 0) {
        *(int *)(iVar24 + 0x630) = 0;
        if ((int)uVar39 == 0) {
          iVar34 = 0xb;
          uVar39 = 1;
        }
        else {
          uVar39 = (ulonglong)(0xc - iVar34);
        }
      }
      if (*(int *)(iVar24 + 0x634) != 0) {
        *(int *)(iVar24 + 0x634) = 0;
        if ((int)uVar39 == 0) {
          iVar34 = 0xc;
          uVar39 = 1;
        }
        else {
          uVar39 = (ulonglong)(0xd - iVar34);
        }
      }
      if (*(int *)(iVar24 + 0x638) != 0) {
        *(int *)(iVar24 + 0x638) = 0;
        if ((int)uVar39 == 0) {
          iVar34 = 0xd;
          uVar39 = 1;
        }
        else {
          uVar39 = (ulonglong)(0xe - iVar34);
        }
      }
      if (*(int *)(iVar24 + 0x63c) != 0) {
        *(int *)(iVar24 + 0x63c) = 0;
        if ((int)uVar39 == 0) {
          iVar34 = 0xe;
          uVar39 = 1;
        }
        else {
          uVar39 = (ulonglong)(0xf - iVar34);
        }
      }
      if (*(int *)(iVar24 + 0x640) != 0) {
        *(int *)(iVar24 + 0x640) = 0;
        if ((int)uVar39 != 0) {
          uVar39 = (ulonglong)(0x10 - iVar34);
          goto LAB_10045b04;
        }
        iVar34 = 0xf;
        uVar39 = 1;
LAB_10045b08:
        uVar23 = *(undefined4 *)(iVar24 + 0x514);
        iVar24 = iVar24 + (iVar34 + 0x181) * 4;
        goto LAB_10045b20;
      }
LAB_10045b04:
      if ((int)uVar39 != 0) goto LAB_10045b08;
    }
LAB_10045b44:
    *(undefined1 *)(param_1 + 0xf669) = 0;
  }
  if ((*(char *)(param_1 + 0xf6a0) != '\0' || iVar35 != param_1) &&
     (*(char *)(param_1 + 0x7642) == '\0')) {
    iVar34 = 0;
    iVar24 = *(int *)(param_1 + 0xf6b0) + *(int *)(param_1 + 0x10) * 0x1510;
    bVar20 = *(int *)(iVar24 + 0x5d4) != *(int *)(param_1 + 0xf93c);
    if (bVar20) {
      *(int *)(iVar24 + 0x5d4) = *(int *)(param_1 + 0xf93c);
    }
    uVar39 = (ulonglong)bVar20;
    if (*(int *)(iVar24 + 0x5d8) != *(int *)(param_1 + 0xf940)) {
      *(int *)(iVar24 + 0x5d8) = *(int *)(param_1 + 0xf940);
      if (bVar20) {
        uVar39 = 2;
      }
      else {
        iVar34 = 1;
        uVar39 = 1;
      }
    }
    if (*(int *)(iVar24 + 0x5dc) != *(int *)(param_1 + 0xf944)) {
      *(int *)(iVar24 + 0x5dc) = *(int *)(param_1 + 0xf944);
      if ((int)uVar39 == 0) {
        iVar34 = 2;
        uVar39 = 1;
      }
      else {
        uVar39 = (ulonglong)(3 - iVar34);
      }
    }
    if (*(int *)(iVar24 + 0x5e0) == *(int *)(param_1 + 0xf948)) {
LAB_10045c64:
      if ((int)uVar39 != 0) goto LAB_10045c68;
    }
    else {
      *(int *)(iVar24 + 0x5e0) = *(int *)(param_1 + 0xf948);
      if ((int)uVar39 != 0) {
        uVar39 = (ulonglong)(4 - iVar34);
        goto LAB_10045c64;
      }
      iVar34 = 3;
      uVar39 = 1;
LAB_10045c68:
      auVar50 = (*pcVar13)(*(undefined4 *)(iVar24 + 0x514),iVar34,uVar39,
                           iVar24 + (iVar34 + 0x175) * 4);
      (*extraout_w11_33)(auVar50._0_8_ & 0xffffffff,auVar50._8_8_ & 0xffffffff,uVar39 & 0xffffffff);
    }
    iVar34 = 5;
    iVar24 = *(int *)(param_1 + 0xf6b0) + *(int *)(param_1 + 0x10) * 0x1510;
    bVar20 = *(int *)(iVar24 + 0x5e8) != *(int *)(param_1 + 0xf950);
    if (bVar20) {
      *(int *)(iVar24 + 0x5e8) = *(int *)(param_1 + 0xf950);
    }
    uVar39 = (ulonglong)bVar20;
    if (*(int *)(iVar24 + 0x5ec) != *(int *)(param_1 + 0xf954)) {
      *(int *)(iVar24 + 0x5ec) = *(int *)(param_1 + 0xf954);
      if (bVar20) {
        uVar39 = 2;
      }
      else {
        iVar34 = 6;
        uVar39 = 1;
      }
    }
    if (*(int *)(iVar24 + 0x5f0) != *(int *)(param_1 + 0xf958)) {
      *(int *)(iVar24 + 0x5f0) = *(int *)(param_1 + 0xf958);
      if ((int)uVar39 == 0) {
        iVar34 = 7;
        uVar39 = 1;
      }
      else {
        uVar39 = (ulonglong)(8 - iVar34);
      }
    }
    if (*(int *)(iVar24 + 0x5f4) == *(int *)(param_1 + 0xf95c)) {
LAB_10045d8c:
      if ((int)uVar39 != 0) goto LAB_10045d90;
    }
    else {
      *(int *)(iVar24 + 0x5f4) = *(int *)(param_1 + 0xf95c);
      if ((int)uVar39 != 0) {
        uVar39 = (ulonglong)(9 - iVar34);
        goto LAB_10045d8c;
      }
      iVar34 = 8;
      uVar39 = 1;
LAB_10045d90:
      auVar50 = (*pcVar13)(*(undefined4 *)(iVar24 + 0x514),iVar34,uVar39,
                           iVar24 + (iVar34 + 0x175) * 4);
      (*extraout_w11_34)(auVar50._0_8_ & 0xffffffff,auVar50._8_8_ & 0xffffffff,uVar39 & 0xffffffff);
    }
    iVar34 = 10;
    iVar24 = *(int *)(param_1 + 0xf6b0) + *(int *)(param_1 + 0x10) * 0x1510;
    bVar20 = *(int *)(iVar24 + 0x5fc) != *(int *)(param_1 + 0xf964);
    if (bVar20) {
      *(int *)(iVar24 + 0x5fc) = *(int *)(param_1 + 0xf964);
    }
    uVar39 = (ulonglong)bVar20;
    if (*(int *)(iVar24 + 0x600) != *(int *)(param_1 + 0xf968)) {
      *(int *)(iVar24 + 0x600) = *(int *)(param_1 + 0xf968);
      if (bVar20) {
        uVar39 = 2;
      }
      else {
        iVar34 = 0xb;
        uVar39 = 1;
      }
    }
    if (*(int *)(iVar24 + 0x604) != *(int *)(param_1 + 0xf96c)) {
      *(int *)(iVar24 + 0x604) = *(int *)(param_1 + 0xf96c);
      if ((int)uVar39 == 0) {
        iVar34 = 0xc;
        uVar39 = 1;
      }
      else {
        uVar39 = (ulonglong)(0xd - iVar34);
      }
    }
    if (*(int *)(iVar24 + 0x608) == *(int *)(param_1 + 0xf970)) {
LAB_10045eb4:
      if ((int)uVar39 != 0) goto LAB_10045eb8;
    }
    else {
      *(int *)(iVar24 + 0x608) = *(int *)(param_1 + 0xf970);
      if ((int)uVar39 != 0) {
        uVar39 = (ulonglong)(0xe - iVar34);
        goto LAB_10045eb4;
      }
      iVar34 = 0xd;
      uVar39 = 1;
LAB_10045eb8:
      auVar50 = (*pcVar13)(*(undefined4 *)(iVar24 + 0x514),iVar34,uVar39,
                           iVar24 + (iVar34 + 0x175) * 4);
      (*extraout_w11_35)(auVar50._0_8_ & 0xffffffff,auVar50._8_8_ & 0xffffffff,uVar39 & 0xffffffff);
    }
    *(undefined1 *)(param_1 + 0xf6a0) = 0;
  }
  if (*(char *)(param_1 + 0xf66a) != '\0' || iVar35 != param_1) {
    iVar24 = 0xf9a0;
    if (*(char *)(local_1e4 + 0x63d) == '\0') {
      iVar24 = 0xf8ec;
    }
    piVar33 = (int *)(iVar24 + param_1);
    local_1a8 = *piVar33;
    local_1a4 = piVar33[1];
    local_1a0 = piVar33[2];
    local_19c = piVar33[3];
    iVar24 = *(int *)(param_1 + 0xf9c4);
    iVar34 = *(int *)(param_1 + 0xf6b0) + *(int *)(param_1 + 0x10) * 0x1510;
    cVar21 = *(int *)(iVar34 + 0x7fc) != local_1a8;
    if ((bool)cVar21) {
      *(int *)(iVar34 + 0x7fc) = local_1a8;
    }
    if (*(int *)(iVar34 + 0x800) != local_1a4) {
      *(int *)(iVar34 + 0x800) = local_1a4;
      cVar21 = cVar21 + '\x01';
    }
    if (*(int *)(iVar34 + 0x804) != local_1a0) {
      *(int *)(iVar34 + 0x804) = local_1a0;
      cVar21 = cVar21 + '\x01';
    }
    if (*(int *)(iVar34 + 0x808) != local_19c) {
      *(int *)(iVar34 + 0x808) = local_19c;
      cVar21 = cVar21 + '\x01';
    }
    if ((cVar21 != '\0') || (iVar24 != *(int *)(iVar34 + 0x80c))) {
      uVar23 = (*pcVar13)();
      (*extraout_w11_36)(uVar23,4,&local_1a8,iVar24);
      *(int *)(iVar34 + 0x80c) = iVar24;
    }
    *(undefined1 *)(param_1 + 0xf66a) = 0;
  }
  if (*(char *)(local_1f8 + 0x66b) != '\0' || iVar35 != param_1) {
    puVar1 = (undefined8 *)(param_1 + 0x100cc);
    pbVar11 = (byte *)(param_1 + 0x100dc);
    pbVar2 = (byte *)(param_1 + 0x100dd);
    if (*(char *)(param_1 + 0x7642) == '\0') {
      if (*(char *)(local_1e4 + 0x64a) == '\0') {
        iVar24 = 0x790;
      }
      else {
        iVar24 = 0xb60;
      }
      puVar4 = (undefined8 *)(param_1 + iVar24);
      uVar48 = *puVar4;
      uVar47 = puVar4[3];
      uVar46 = puVar4[2];
      *(undefined8 *)(param_1 + 0x100d4) = puVar4[1];
      *puVar1 = uVar48;
      *(undefined8 *)(param_1 + 0x100e4) = uVar47;
      *(undefined8 *)(param_1 + 0x100dc) = uVar46;
      uVar46 = puVar4[4];
      *(undefined8 *)(param_1 + 0x100f4) = puVar4[5];
      *(undefined8 *)(param_1 + 0x100ec) = uVar46;
      *(undefined4 *)(param_1 + 0x100fc) = *(undefined4 *)(puVar4 + 6);
      *pbVar11 = *pbVar11 & *(byte *)(local_1e4 + 0x582);
      *pbVar2 = *(byte *)(local_1e4 + 0x582) & *pbVar2;
      uVar8 = *(undefined1 *)(local_1e4 + 0x580);
    }
    else {
      *(undefined8 *)(param_1 + 0x100d4) = *(undefined8 *)(param_1 + 0xb9c);
      *puVar1 = *(undefined8 *)(param_1 + 0xb94);
      *(undefined8 *)(param_1 + 0x100e4) = *(undefined8 *)(param_1 + 0xbac);
      *(undefined8 *)(param_1 + 0x100dc) = *(undefined8 *)(param_1 + 0xba4);
      *(undefined8 *)(param_1 + 0x100f4) = *(undefined8 *)(param_1 + 0xbbc);
      *(undefined8 *)(param_1 + 0x100ec) = *(undefined8 *)(param_1 + 0xbb4);
      *(undefined4 *)(param_1 + 0x100fc) = *(undefined4 *)(param_1 + 0xbc4);
      *pbVar11 = *pbVar11 & *(byte *)(local_1e4 + 0x582);
      *pbVar2 = *(byte *)(local_1e4 + 0x582) & *pbVar2;
      uVar8 = *(undefined1 *)(local_1e4 + 0x581);
    }
    FUN_1010a4c8(*(undefined4 *)(param_1 + 0xf6b0),*(undefined4 *)(param_1 + 0x10),puVar1,uVar8);
    *(undefined1 *)(local_1f8 + 0x66b) = 0;
  }
  iVar24 = local_1e4;
  if (*(char *)(param_1 + 0xf66c) != '\0' || iVar35 != param_1) {
    if (*(uint *)(param_1 + 0xe3c) < 2) {
      local_1f0 = (uint *)0xffffffff;
    }
    else {
      local_1f0 = *(uint **)(param_1 + 0xe38);
    }
    uVar29 = 0;
    local_1ec = (int *)(param_1 + 0xe60);
    local_1fc = (uint *)(param_1 + 0x10100);
    local_1d8 = CONCAT44(local_1d8._4_4_,param_1 + 0xdc8);
    *local_1fc = (uint)(*(int *)(param_1 + 0xe7c) == 1);
    local_1e0 = FUN_10156498;
    do {
      if (*(int *)(param_1 + 0xf830 + uVar29 * 4) != 0) {
        if (*(char *)(iVar24 + 0x649) == '\0') {
          puVar38 = (undefined4 *)(param_1 + 0xdc8);
          if (*(char *)(param_1 + 0x7642) == '\0') {
            uVar23 = (*pcVar13)();
            cVar21 = (*extraout_w11_38)(uVar23);
            iVar34 = 0xbc8;
            iVar37 = 0xc48;
            goto LAB_10046294;
          }
        }
        else if (*(char *)(param_1 + 0x7642) == '\0') {
          uVar23 = (*pcVar13)();
          cVar21 = (*extraout_w11_37)(uVar23);
          iVar34 = 0xcc8;
          iVar37 = 0xd48;
LAB_10046294:
          if (cVar21 == '\0') {
            iVar34 = iVar37;
          }
          puVar38 = (undefined4 *)(iVar34 + uVar29 * 0x20 + param_1);
        }
        else {
          puVar38 = (undefined4 *)local_1d8;
        }
        iVar34 = param_1 + uVar29 * 0x20;
        *(undefined4 *)(iVar34 + 0x10108) = *puVar38;
        *(undefined4 *)(iVar34 + 0x1010c) = puVar38[1];
        *(undefined4 *)(iVar34 + 0x10110) = puVar38[2];
        *(undefined4 *)(iVar34 + 0x10114) = puVar38[3];
        *(undefined4 *)(iVar34 + 0x10118) = puVar38[4];
        *(undefined4 *)(iVar34 + 0x1011c) = puVar38[5];
        *(undefined4 *)(iVar34 + 0x10120) = puVar38[6];
        *(undefined1 *)(iVar34 + 0x10124) = *(undefined1 *)(puVar38 + 7);
      }
      uVar29 = uVar29 + 1;
    } while (uVar29 < 4);
    FUN_10109c20(*(undefined4 *)(param_1 + 0xf6b0),*(undefined4 *)(param_1 + 0x10),local_1fc,
                 local_1ec,local_1f0,1);
    *(undefined1 *)(param_1 + 0xf66c) = 0;
  }
  if (*(char *)(param_1 + 0xf66d) != '\0' || iVar35 != param_1) {
    *(int *)(param_1 + 0xe1c) = 0;
    *(int *)(param_1 + 0xdf4) = 0;
    if (*(int *)(param_1 + 0xf840) != 0) {
      if (*(uint *)(&DAT_10162c20 + *(int *)(*(int *)(param_1 + 0xf840) + 0x1c) * 4) == 0x20) {
        iVar24 = 0;
      }
      else {
        iVar24 = (int)((float)((1 << (ulonglong)
                                     (*(uint *)(&DAT_10162c20 +
                                               *(int *)(*(int *)(param_1 + 0xf840) + 0x1c) * 4) &
                                     0x1f)) + -1) * *(float *)(param_1 + 0xe70));
      }
      *(int *)(param_1 + 0xe1c) = iVar24;
      *(int *)(param_1 + 0xdf4) = iVar24;
    }
    if (*(char *)(param_1 + 0x7642) == '\0') {
      iVar24 = 0xe10;
      if (*(char *)(local_1e4 + 0x648) == '\0') {
        iVar24 = 0xde8;
      }
      puVar38 = (undefined4 *)(iVar24 + param_1);
    }
    else {
      puVar38 = &DAT_1016e378;
    }
    *(undefined4 *)(param_1 + 0x10208) = *puVar38;
    *(undefined4 *)(param_1 + 0x1020c) = puVar38[1];
    *(undefined4 *)(param_1 + 0x10210) = puVar38[2];
    *(undefined4 *)(param_1 + 0x10214) = puVar38[3];
    *(undefined4 *)(param_1 + 0x10218) = puVar38[4];
    *(undefined4 *)(param_1 + 0x1021c) = puVar38[5];
    *(undefined4 *)(param_1 + 0x10220) = puVar38[6];
    *(undefined4 *)(param_1 + 0x10224) = puVar38[7];
    *(undefined4 *)(param_1 + 0x10228) = puVar38[8];
    *(undefined4 *)(param_1 + 0x1022c) = puVar38[9];
    FUN_1010a7a0(*(undefined4 *)(param_1 + 0xf6b0),*(undefined4 *)(param_1 + 0x10),
                 (undefined4 *)(param_1 + 0x10208));
    *(undefined1 *)(param_1 + 0xf66d) = 0;
  }
  if (*(char *)(param_1 + 0xf66e) != '\0' || iVar35 != param_1) {
    iVar24 = *(int *)(local_1dc + 0x361c);
    if ((*(char *)(param_1 + 0x7642) == '\0') &&
       ((iVar24 != 0 || ((*(uint *)(local_1dc + 0x3634) & 1) != 0)))) {
      iVar34 = 0xec0;
    }
    else {
      iVar34 = 0xed8;
    }
    puVar1 = (undefined8 *)(iVar34 + param_1);
    uVar46 = *puVar1;
    *(undefined8 *)(param_1 + 0xfa3c) = puVar1[1];
    *(undefined8 *)(param_1 + 0xfa34) = uVar46;
    *(undefined8 *)(param_1 + 0xfa44) = puVar1[2];
    if (0xafff < *(int *)(param_1 + 0xf748)) {
      *(float *)(param_1 + 0xfa34) = *(float *)(param_1 + 0xef0) + *(float *)(param_1 + 0xfa34);
      *(float *)(param_1 + 0xfa38) = *(float *)(param_1 + 0xef4) + *(float *)(param_1 + 0xfa38);
    }
    if (iVar24 == 0) {
      *(undefined4 *)(param_1 + 0xfa44) = 0;
      *(undefined4 *)(param_1 + 0xfa48) = 0x3f800000;
    }
    FUN_1010ab10(*(undefined4 *)(param_1 + 0xf6b0),*(undefined4 *)(param_1 + 0x10),
                 (undefined8 *)(param_1 + 0xfa34));
    *(undefined1 *)(param_1 + 0xf66e) = 0;
  }
  if (*(char *)(param_1 + 0x10230) != '\0' || iVar35 != param_1) {
    FUN_1010b010(*(undefined4 *)(param_1 + 0xf6b0),*(undefined4 *)(param_1 + 0x10),
                 *(undefined4 *)(param_1 + 0xfa2c),*(undefined4 *)(param_1 + 0xf9c8),
                 *(undefined4 *)(param_1 + 0xf9cc),*(undefined4 *)(param_1 + 0xf9d0),
                 *(undefined4 *)(param_1 + 0xf9d4));
    *(char *)(param_1 + 0x10230) = '\0';
  }
  pbVar11 = (byte *)(param_1 + 0xf664);
  puVar31 = *(uint **)(param_1 + 0xf664);
  if ((puVar31 != (uint *)0x0) || (iVar35 != param_1)) {
    if (*(char *)(param_1 + 0x7642) == '\0') {
      uVar29 = ((uint)puVar31 & 0xaaaaaaaa) >> 1 | ((uint)puVar31 & 0x55555555) << 1;
      uVar29 = (uVar29 & 0xcccccccc) >> 2 | (uVar29 & 0x33333333) << 2;
      uVar29 = (uVar29 & 0xf0f0f0f0) >> 4 | (uVar29 & 0xf0f0f0f) << 4;
      uVar29 = (uVar29 & 0xff00ff00) >> 8 | (uVar29 & 0xff00ff) << 8;
      lVar44 = LZCOUNT(uVar29 >> 0x10 | uVar29 << 0x10);
      uVar29 = (uint)lVar44;
      local_1f0 = puVar31;
      if ((1 - (uVar29 >> 5) & 0xff) != 0) {
        pbVar2 = (byte *)((int)&local_1f0 + ((int)uVar29 >> 3));
        local_1b0 = CONCAT44(local_1b0._4_4_,param_1 + 0xfa4c);
        local_1d0 = param_1 + 0xf8fc;
        local_1e0 = (code *)(param_1 + 0x714);
        *pbVar2 = *pbVar2 & ((byte)(1 << (ulonglong)(uVar29 & 7)) ^ 0xff);
        local_1f8 = param_1 + 30000;
        local_1fc = (uint *)(param_1 + 0xbc);
        local_1ec = (int *)(param_1 + 0x710);
        local_1f4 = (int *)(param_1 + 0x711);
        local_1dc = param_1 + 0x712;
        local_1e4 = param_1 + 0x3d0;
        local_1d8 = CONCAT44(local_1d8._4_4_,param_1 + 0x713);
        local_1b8 = CONCAT44(local_1b8._4_4_,param_1 + 0xf6b4);
        do {
          uVar29 = (uint)lVar44;
          bVar9 = *(byte *)((int)(undefined4 *)local_1d8 + uVar29 * 8);
          if (*(uint *)(local_1e0 + uVar29 * 8) < (uint)bVar9) {
            fVar49 = (float)bVar9;
          }
          else {
            fVar49 = (float)*(uint *)(local_1e0 + uVar29 * 8);
          }
          local_1fc[uVar29 * 0xd] = (uint)fVar49;
          uVar25 = (uint)*(byte *)(local_1ec + uVar29 * 2);
          bVar20 = uVar25 == 2;
          if (bVar20) {
            uVar25 = 0;
          }
          if (!bVar20) {
            fVar49 = 3.4028235e+38;
          }
          uVar28 = (uint)*(byte *)(local_1f4 + uVar29 * 2);
          uVar42 = (uint)*(byte *)(local_1dc + uVar29 * 8);
          *(float *)(param_1 + uVar29 * 0x34 + 0xc0) = fVar49;
          if (uVar28 == 2 || uVar42 == 2) {
            *(undefined4 *)(param_1 + 0x90 + uVar29 * 0x34) = 0x55;
            *(undefined4 *)(param_1 + 0x400 + uVar29 * 0x34) =
                 *(undefined4 *)(param_1 + 0xc0 + uVar29 * 0x34);
            if (uVar28 != 2 && uVar42 != 2) goto LAB_10046860;
            uVar23 = 0xd5;
          }
          else {
            *(undefined4 *)(param_1 + 0x90 + uVar29 * 0x34) =
                 *(undefined4 *)(&DAT_10161e40 + (uVar25 | (uVar28 | uVar42 << 1) << 1) * 4);
            *(undefined4 *)(param_1 + 0x400 + uVar29 * 0x34) =
                 *(undefined4 *)(param_1 + 0xc0 + uVar29 * 0x34);
LAB_10046860:
            uVar23 = *(undefined4 *)(&DAT_10161e20 + (uVar25 | (uVar28 | uVar42 << 1) << 1) * 4);
          }
          *(undefined4 *)(local_1e4 + uVar29 * 0x34) = uVar23;
          puVar1 = (undefined8 *)((int)local_1b0 + uVar29 * 0x34);
          iVar24 = 0x3d0;
          if (1 < (*(int *)(local_1f8 + uVar29 * 4) + 0xfbU & 0xff)) {
            iVar24 = 0x90;
          }
          puVar4 = (undefined8 *)(iVar24 + uVar29 * 0x34 + param_1);
          uVar48 = *puVar4;
          uVar47 = puVar4[3];
          uVar46 = puVar4[2];
          puVar1[1] = puVar4[1];
          *puVar1 = uVar48;
          puVar1[3] = uVar47;
          puVar1[2] = uVar46;
          uVar46 = puVar4[4];
          puVar1[5] = puVar4[5];
          puVar1[4] = uVar46;
          *(undefined4 *)(puVar1 + 6) = *(undefined4 *)(puVar4 + 6);
          iVar34 = FUN_1010c5e0(*(int *)local_1b8 + 0x39c,puVar1);
          iVar24 = *(int *)(local_1d0 + uVar29 * 4);
          if (iVar34 != iVar24) {
            if (iVar24 != 0) {
              iVar37 = *(int *)(param_1 + 0xf6b4);
              (*pcVar13)();
              (*extraout_w11_39)(iVar24,auStack_b0);
              iVar37 = FUN_1010c898(iVar37 + 0x39c,auStack_b0);
              if (iVar37 != 0) {
                uVar25 = 0;
                do {
                  if (*(int *)(iVar37 + 0x1c + uVar25 * 0x24) == iVar24) {
                    *(undefined1 *)(iVar37 + uVar25 * 0x24 + 0x20) = 0;
                    break;
                  }
                  uVar25 = uVar25 + 1;
                } while (uVar25 < 0x14);
              }
            }
            *(int *)(param_1 + uVar29 * 4 + 0xf8fc) = iVar34;
          }
          pbVar11[(int)uVar29 >> 3] =
               pbVar11[(int)uVar29 >> 3] & ((byte)(1 << (ulonglong)(uVar29 & 7)) ^ 0xff);
          uVar29 = ((uint)local_1f0 & 0xaaaaaaaa) >> 1 | ((uint)local_1f0 & 0x55555555) << 1;
          uVar29 = (uVar29 & 0xcccccccc) >> 2 | (uVar29 & 0x33333333) << 2;
          uVar29 = (uVar29 & 0xf0f0f0f0) >> 4 | (uVar29 & 0xf0f0f0f) << 4;
          uVar29 = (uVar29 & 0xff00ff00) >> 8 | (uVar29 & 0xff00ff) << 8;
          lVar44 = LZCOUNT(uVar29 >> 0x10 | uVar29 << 0x10);
          uVar29 = (uint)lVar44;
          if ((1 - (uVar29 >> 5) & 0xff) == 0) break;
          pbVar2 = (byte *)((int)&local_1f0 + ((int)uVar29 >> 3));
          *pbVar2 = *pbVar2 & ((byte)(1 << (ulonglong)(uVar29 & 7)) ^ 0xff);
        } while( true );
      }
      iVar34 = 0;
      iVar24 = *(int *)(param_1 + 0xf6b0) + *(int *)(param_1 + 0x10) * 0x1510;
      bVar20 = *(int *)(iVar24 + 0x594) != *(int *)(param_1 + 0xf8fc);
      if (bVar20) {
        *(int *)(iVar24 + 0x594) = *(int *)(param_1 + 0xf8fc);
      }
      uVar39 = (ulonglong)bVar20;
      if (*(int *)(iVar24 + 0x598) != *(int *)(param_1 + 0xf900)) {
        *(int *)(iVar24 + 0x598) = *(int *)(param_1 + 0xf900);
        if (bVar20) {
          uVar39 = 2;
        }
        else {
          iVar34 = 1;
          uVar39 = 1;
        }
      }
      if (*(int *)(iVar24 + 0x59c) != *(int *)(param_1 + 0xf904)) {
        *(int *)(iVar24 + 0x59c) = *(int *)(param_1 + 0xf904);
        if ((int)uVar39 == 0) {
          iVar34 = 2;
          uVar39 = 1;
        }
        else {
          uVar39 = (ulonglong)(3 - iVar34);
        }
      }
      if (*(int *)(iVar24 + 0x5a0) != *(int *)(param_1 + 0xf908)) {
        *(int *)(iVar24 + 0x5a0) = *(int *)(param_1 + 0xf908);
        if ((int)uVar39 == 0) {
          iVar34 = 3;
          uVar39 = 1;
        }
        else {
          uVar39 = (ulonglong)(4 - iVar34);
        }
      }
      if (*(int *)(iVar24 + 0x5a4) != *(int *)(param_1 + 0xf90c)) {
        *(int *)(iVar24 + 0x5a4) = *(int *)(param_1 + 0xf90c);
        if ((int)uVar39 == 0) {
          iVar34 = 4;
          uVar39 = 1;
        }
        else {
          uVar39 = (ulonglong)(5 - iVar34);
        }
      }
      if (*(int *)(iVar24 + 0x5a8) != *(int *)(param_1 + 0xf910)) {
        *(int *)(iVar24 + 0x5a8) = *(int *)(param_1 + 0xf910);
        if ((int)uVar39 == 0) {
          iVar34 = 5;
          uVar39 = 1;
        }
        else {
          uVar39 = (ulonglong)(6 - iVar34);
        }
      }
      if (*(int *)(iVar24 + 0x5ac) != *(int *)(param_1 + 0xf914)) {
        *(int *)(iVar24 + 0x5ac) = *(int *)(param_1 + 0xf914);
        if ((int)uVar39 == 0) {
          iVar34 = 6;
          uVar39 = 1;
        }
        else {
          uVar39 = (ulonglong)(7 - iVar34);
        }
      }
      if (*(int *)(iVar24 + 0x5b0) != *(int *)(param_1 + 0xf918)) {
        *(int *)(iVar24 + 0x5b0) = *(int *)(param_1 + 0xf918);
        if ((int)uVar39 == 0) {
          iVar34 = 7;
          uVar39 = 1;
        }
        else {
          uVar39 = (ulonglong)(8 - iVar34);
        }
      }
      if (*(int *)(iVar24 + 0x5b4) != *(int *)(param_1 + 0xf91c)) {
        *(int *)(iVar24 + 0x5b4) = *(int *)(param_1 + 0xf91c);
        if ((int)uVar39 == 0) {
          iVar34 = 8;
          uVar39 = 1;
        }
        else {
          uVar39 = (ulonglong)(9 - iVar34);
        }
      }
      if (*(int *)(iVar24 + 0x5b8) != *(int *)(param_1 + 0xf920)) {
        *(int *)(iVar24 + 0x5b8) = *(int *)(param_1 + 0xf920);
        if ((int)uVar39 == 0) {
          iVar34 = 9;
          uVar39 = 1;
        }
        else {
          uVar39 = (ulonglong)(10 - iVar34);
        }
      }
      if (*(int *)(iVar24 + 0x5bc) != *(int *)(param_1 + 0xf924)) {
        *(int *)(iVar24 + 0x5bc) = *(int *)(param_1 + 0xf924);
        if ((int)uVar39 == 0) {
          iVar34 = 10;
          uVar39 = 1;
        }
        else {
          uVar39 = (ulonglong)(0xb - iVar34);
        }
      }
      if (*(int *)(iVar24 + 0x5c0) != *(int *)(param_1 + 0xf928)) {
        *(int *)(iVar24 + 0x5c0) = *(int *)(param_1 + 0xf928);
        if ((int)uVar39 == 0) {
          iVar34 = 0xb;
          uVar39 = 1;
        }
        else {
          uVar39 = (ulonglong)(0xc - iVar34);
        }
      }
      if (*(int *)(iVar24 + 0x5c4) != *(int *)(param_1 + 0xf92c)) {
        *(int *)(iVar24 + 0x5c4) = *(int *)(param_1 + 0xf92c);
        if ((int)uVar39 == 0) {
          iVar34 = 0xc;
          uVar39 = 1;
        }
        else {
          uVar39 = (ulonglong)(0xd - iVar34);
        }
      }
      if (*(int *)(iVar24 + 0x5c8) != *(int *)(param_1 + 0xf930)) {
        *(int *)(iVar24 + 0x5c8) = *(int *)(param_1 + 0xf930);
        if ((int)uVar39 == 0) {
          iVar34 = 0xd;
          uVar39 = 1;
        }
        else {
          uVar39 = (ulonglong)(0xe - iVar34);
        }
      }
      if (*(int *)(iVar24 + 0x5cc) != *(int *)(param_1 + 0xf934)) {
        *(int *)(iVar24 + 0x5cc) = *(int *)(param_1 + 0xf934);
        if ((int)uVar39 == 0) {
          iVar34 = 0xe;
          uVar39 = 1;
        }
        else {
          uVar39 = (ulonglong)(0xf - iVar34);
        }
      }
      if (*(int *)(iVar24 + 0x5d0) == *(int *)(param_1 + 0xf938)) {
LAB_10046d68:
        if ((int)uVar39 == 0) goto LAB_10046e3c;
      }
      else {
        *(int *)(iVar24 + 0x5d0) = *(int *)(param_1 + 0xf938);
        if ((int)uVar39 != 0) {
          uVar39 = (ulonglong)(0x10 - iVar34);
          goto LAB_10046d68;
        }
        iVar34 = 0xf;
        uVar39 = 1;
      }
      auVar50 = (*pcVar13)(*(undefined4 *)(iVar24 + 0x514),iVar34,uVar39,
                           iVar24 + (iVar34 + 0x165) * 4);
      (*extraout_w11_40)(auVar50._0_8_ & 0xffffffff,auVar50._8_8_ & 0xffffffff,uVar39 & 0xffffffff);
    }
    else if (*(int *)(param_1 + 0xf82c) != 0) {
      piVar33 = (int *)(*(int *)(param_1 + 0xf6b0) + *(int *)(param_1 + 0x10) * 0x1510 + 0x594);
      uVar39 = ZEXT48(piVar33);
      if (*piVar33 != *(int *)(param_1 + 0xf6d8)) {
        *piVar33 = *(int *)(param_1 + 0xf6d8);
        uVar23 = (*pcVar13)();
        (*extraout_w11_41)(uVar23,0,1,uVar39 & 0xffffffff);
      }
      *pbVar11 = *pbVar11 & 0xfe;
    }
  }
LAB_10046e3c:
  uVar29 = *(uint *)(param_1 + 0xf69c);
  if (uVar29 == 0 && iVar35 == param_1) goto LAB_100471fc;
  local_1f0 = (uint *)(uVar29 & 0xf);
  uVar29 = (uVar29 & 10) >> 1 | (uVar29 & 5) << 1;
  lVar44 = LZCOUNT((uVar29 >> 2 | (uVar29 & 0x33333333) << 2) << 0x1c);
  uVar29 = (uint)lVar44;
  if ((1 - (uVar29 >> 5) & 0xff) != 0) {
    pbVar11 = (byte *)((int)&local_1f0 + ((int)uVar29 >> 3));
    local_1e0 = (code *)(param_1 + 0x7f9);
    local_1d0 = param_1 + 0x7fb;
    *pbVar11 = *pbVar11 & ((byte)(1 << (ulonglong)(uVar29 & 7)) ^ 0xff);
    local_1b8 = CONCAT44(local_1b8._4_4_,param_1 + 0x7fc);
    local_1b0 = CONCAT44(local_1b0._4_4_,param_1 + 0x84c);
    local_1d8 = CONCAT44(local_1d8._4_4_,param_1 + 0x7f8);
    do {
      iVar24 = (int)lVar44;
      bVar9 = *(byte *)(local_1d0 + iVar24 * 8);
      uVar29 = *(uint *)((int)(int *)local_1b8 + iVar24 * 8);
      if (uVar29 < bVar9) {
        fVar49 = (float)bVar9;
      }
      else {
        fVar49 = (float)uVar29;
      }
      *(float *)((int)local_1b0 + iVar24 * 0x34) = fVar49;
      cVar10 = local_1e0[iVar24 * 8];
      bVar9 = *(byte *)((int)(undefined4 *)local_1d8 + iVar24 * 8);
      uVar29 = (uint)*(byte *)(param_1 + 0x7fa + iVar24 * 8);
      *(undefined4 *)(param_1 + 0x850 + iVar24 * 0x34) = 0x7f7fffff;
      if ((byte)cVar10 == 2 || uVar29 == 2) {
        uVar23 = 0;
      }
      else {
        uVar23 = *(undefined4 *)
                  (&DAT_10161e40 + ((uint)bVar9 | ((uint)(byte)cVar10 | uVar29 << 1) << 1) * 4);
      }
      puVar1 = (undefined8 *)(param_1 + 0xfd8c + iVar24 * 0x34);
      puVar4 = (undefined8 *)(param_1 + (iVar24 + 0x28) * 0x34);
      *(undefined4 *)puVar4 = uVar23;
      uVar48 = *puVar4;
      uVar47 = puVar4[3];
      uVar46 = puVar4[2];
      puVar1[1] = puVar4[1];
      *puVar1 = uVar48;
      puVar1[3] = uVar47;
      puVar1[2] = uVar46;
      uVar46 = puVar4[4];
      uVar23 = *(undefined4 *)(puVar4 + 6);
      puVar1[5] = puVar4[5];
      puVar1[4] = uVar46;
      *(undefined4 *)(puVar1 + 6) = uVar23;
      iVar37 = FUN_1010c5e0(*(int *)(param_1 + 0xf6b4) + 0x39c,puVar1);
      iVar34 = *(int *)(param_1 + 0xf9b0 + iVar24 * 4);
      if (iVar37 != iVar34) {
        if (iVar34 != 0) {
          local_1fc = (uint *)(*(int *)(param_1 + 0xf6b4) + 0x39c);
          (*pcVar13)();
          (*extraout_w11_42)(iVar34,auStack_78);
          iVar41 = FUN_1010c898(local_1fc,auStack_78);
          if (iVar41 != 0) {
            uVar29 = 0;
            do {
              if (*(int *)(iVar41 + 0x1c + uVar29 * 0x24) == iVar34) {
                *(undefined1 *)(iVar41 + uVar29 * 0x24 + 0x20) = 0;
                break;
              }
              uVar29 = uVar29 + 1;
            } while (uVar29 < 0x14);
          }
        }
        *(int *)(param_1 + iVar24 * 4 + 0xf9b0) = iVar37;
      }
      uVar29 = ((uint)local_1f0 & 0xaaaaaaaa) >> 1 | ((uint)local_1f0 & 0x55555555) << 1;
      uVar29 = (uVar29 & 0xcccccccc) >> 2 | (uVar29 & 0x33333333) << 2;
      uVar29 = (uVar29 & 0xf0f0f0f0) >> 4 | (uVar29 & 0xf0f0f0f) << 4;
      uVar29 = (uVar29 & 0xff00ff00) >> 8 | (uVar29 & 0xff00ff) << 8;
      lVar44 = LZCOUNT(uVar29 >> 0x10 | uVar29 << 0x10);
      uVar29 = (uint)lVar44;
      if ((1 - (uVar29 >> 5) & 0xff) == 0) break;
      pbVar11 = (byte *)((int)&local_1f0 + ((int)uVar29 >> 3));
      *pbVar11 = *pbVar11 & ((byte)(1 << (ulonglong)(uVar29 & 7)) ^ 0xff);
    } while( true );
  }
  iVar34 = 0;
  iVar24 = *(int *)(param_1 + 0xf6b0) + *(int *)(param_1 + 0x10) * 0x1510;
  bVar20 = *(int *)(iVar24 + 0x554) != *(int *)(param_1 + 0xf9b0);
  if (bVar20) {
    *(int *)(iVar24 + 0x554) = *(int *)(param_1 + 0xf9b0);
  }
  uVar39 = (ulonglong)bVar20;
  if (*(int *)(iVar24 + 0x558) != *(int *)(param_1 + 0xf9b4)) {
    *(int *)(iVar24 + 0x558) = *(int *)(param_1 + 0xf9b4);
    if (bVar20) {
      uVar39 = 2;
    }
    else {
      iVar34 = 1;
      uVar39 = 1;
    }
  }
  if (*(int *)(iVar24 + 0x55c) != *(int *)(param_1 + 0xf9b8)) {
    *(int *)(iVar24 + 0x55c) = *(int *)(param_1 + 0xf9b8);
    if ((int)uVar39 == 0) {
      iVar34 = 2;
      uVar39 = 1;
    }
    else {
      uVar39 = (ulonglong)(3 - iVar34);
    }
  }
  if (*(int *)(iVar24 + 0x560) == *(int *)(param_1 + 0xf9bc)) {
LAB_100471ac:
    if ((int)uVar39 != 0) goto LAB_100471b0;
  }
  else {
    *(int *)(iVar24 + 0x560) = *(int *)(param_1 + 0xf9bc);
    if ((int)uVar39 != 0) {
      uVar39 = (ulonglong)(4 - iVar34);
      goto LAB_100471ac;
    }
    iVar34 = 3;
    uVar39 = 1;
LAB_100471b0:
    auVar50 = (*pcVar13)(*(undefined4 *)(iVar24 + 0x514),iVar34,uVar39,iVar24 + (iVar34 + 0x155) * 4
                        );
    (*extraout_w11_43)(auVar50._0_8_ & 0xffffffff,auVar50._8_8_ & 0xffffffff,uVar39 & 0xffffffff);
  }
  *(undefined4 *)(param_1 + 0xf69c) = 0;
LAB_100471fc:
  if (*(char *)(param_1 + 0xf66f) != '\0' || iVar35 != param_1) {
    iVar5 = param_1 + 0x100c;
    iVar24 = param_1 + 0xfc8;
    uVar25 = 0;
    uVar39 = 0;
    iVar37 = *(int *)(param_1 + 0xf6b0) + *(int *)(param_1 + 0x10) * 0x1510;
    uVar29 = 0;
    iVar34 = iVar37 + 0x510;
    iVar37 = iVar37 + 0x704;
    iVar41 = 0;
    do {
      iVar7 = *(int *)(param_1 + 0xf9d8 + uVar29 * 4);
      if (((*(int *)(iVar37 + uVar29 * 4) != iVar7) ||
          (iVar45 = iVar34 + uVar29 * 4, *(int *)(iVar45 + 0x234) != *(int *)(iVar24 + uVar29 * 4)))
         || (*(int *)(iVar45 + 0x274) != *(int *)(iVar5 + uVar29 * 4))) {
        iVar45 = iVar34 + uVar29 * 4;
        *(int *)(iVar45 + 500) = iVar7;
        *(undefined4 *)(iVar45 + 0x234) = *(undefined4 *)(iVar24 + uVar29 * 4);
        *(undefined4 *)(iVar45 + 0x274) = *(undefined4 *)(iVar5 + uVar29 * 4);
        if ((int)uVar39 == 0) {
          uVar39 = 1;
          uVar25 = uVar29;
        }
        else {
          uVar39 = (ulonglong)((uVar29 - uVar25) + 1);
        }
      }
      uVar28 = uVar29 + 1;
      iVar7 = *(int *)(iVar41 + param_1 + 0xf9dc);
      if (((*(int *)(iVar37 + uVar28 * 4) != iVar7) ||
          (iVar45 = iVar34 + uVar28 * 4, *(int *)(iVar45 + 0x234) != *(int *)(iVar41 + iVar24 + 4)))
         || (*(int *)(iVar45 + 0x274) != *(int *)(iVar41 + iVar5 + 4))) {
        iVar45 = iVar34 + uVar28 * 4;
        *(int *)(iVar45 + 500) = iVar7;
        *(undefined4 *)(iVar45 + 0x234) = *(undefined4 *)(iVar41 + iVar24 + 4);
        *(undefined4 *)(iVar45 + 0x274) = *(undefined4 *)(iVar41 + iVar5 + 4);
        if ((int)uVar39 == 0) {
          uVar39 = 1;
          uVar25 = uVar28;
        }
        else {
          uVar39 = (ulonglong)((uVar28 - uVar25) + 1);
        }
      }
      iVar45 = iVar41 + iVar24;
      uVar28 = uVar29 + 2;
      iVar7 = *(int *)(iVar41 + param_1 + 0xf9e0);
      if (((*(int *)(iVar37 + uVar28 * 4) != iVar7) ||
          (iVar6 = iVar34 + uVar28 * 4, *(int *)(iVar6 + 0x234) != *(int *)(iVar45 + 8))) ||
         (*(int *)(iVar6 + 0x274) != *(int *)(iVar41 + iVar5 + 8))) {
        iVar6 = iVar34 + uVar28 * 4;
        *(int *)(iVar6 + 500) = iVar7;
        *(undefined4 *)(iVar6 + 0x234) = *(undefined4 *)(iVar45 + 8);
        *(undefined4 *)(iVar6 + 0x274) = *(undefined4 *)(iVar41 + iVar5 + 8);
        if ((int)uVar39 == 0) {
          uVar39 = 1;
          uVar25 = uVar28;
        }
        else {
          uVar39 = (ulonglong)((uVar28 - uVar25) + 1);
        }
      }
      uVar28 = uVar29 + 3;
      iVar7 = *(int *)(iVar41 + param_1 + 0xf9e4);
      if (((*(int *)(iVar37 + uVar28 * 4) != iVar7) ||
          (iVar6 = iVar34 + uVar28 * 4, *(int *)(iVar6 + 0x234) != *(int *)(iVar45 + 0xc))) ||
         (*(int *)(iVar6 + 0x274) != *(int *)(iVar41 + iVar5 + 0xc))) {
        iVar45 = iVar34 + uVar28 * 4;
        *(int *)(iVar45 + 500) = iVar7;
        *(undefined4 *)(iVar45 + 0x234) = *(undefined4 *)(iVar41 + iVar24 + 0xc);
        *(undefined4 *)(iVar45 + 0x274) = *(undefined4 *)(iVar41 + iVar5 + 0xc);
        if ((int)uVar39 == 0) {
          uVar39 = 1;
          uVar25 = uVar28;
        }
        else {
          uVar39 = (ulonglong)((uVar28 - uVar25) + 1);
        }
      }
      uVar28 = uVar29 + 4;
      iVar7 = *(int *)(iVar41 + param_1 + 0xf9e8);
      if (((*(int *)(iVar37 + uVar28 * 4) != iVar7) ||
          (iVar45 = iVar34 + uVar28 * 4,
          *(int *)(iVar45 + 0x234) != *(int *)(iVar41 + iVar24 + 0x10))) ||
         (*(int *)(iVar45 + 0x274) != *(int *)(iVar41 + iVar5 + 0x10))) {
        iVar45 = iVar34 + uVar28 * 4;
        *(int *)(iVar45 + 500) = iVar7;
        *(undefined4 *)(iVar45 + 0x234) = *(undefined4 *)(iVar41 + iVar24 + 0x10);
        *(undefined4 *)(iVar45 + 0x274) = *(undefined4 *)(iVar41 + iVar5 + 0x10);
        if ((int)uVar39 == 0) {
          uVar39 = 1;
          uVar25 = uVar28;
        }
        else {
          uVar39 = (ulonglong)((uVar28 - uVar25) + 1);
        }
      }
      iVar45 = iVar41 + iVar24;
      uVar28 = uVar29 + 5;
      iVar7 = *(int *)(iVar41 + param_1 + 0xf9ec);
      if (((*(int *)(iVar37 + uVar28 * 4) != iVar7) ||
          (iVar6 = iVar34 + uVar28 * 4, *(int *)(iVar6 + 0x234) != *(int *)(iVar45 + 0x14))) ||
         (*(int *)(iVar6 + 0x274) != *(int *)(iVar41 + iVar5 + 0x14))) {
        iVar6 = iVar34 + uVar28 * 4;
        *(int *)(iVar6 + 500) = iVar7;
        *(undefined4 *)(iVar6 + 0x234) = *(undefined4 *)(iVar45 + 0x14);
        *(undefined4 *)(iVar6 + 0x274) = *(undefined4 *)(iVar41 + iVar5 + 0x14);
        if ((int)uVar39 == 0) {
          uVar39 = 1;
          uVar25 = uVar28;
        }
        else {
          uVar39 = (ulonglong)((uVar28 - uVar25) + 1);
        }
      }
      uVar28 = uVar29 + 6;
      iVar7 = *(int *)(iVar41 + param_1 + 0xf9f0);
      if (((*(int *)(iVar37 + uVar28 * 4) != iVar7) ||
          (iVar6 = iVar34 + uVar28 * 4, *(int *)(iVar6 + 0x234) != *(int *)(iVar45 + 0x18))) ||
         (*(int *)(iVar6 + 0x274) != *(int *)(iVar41 + iVar5 + 0x18))) {
        iVar45 = iVar34 + uVar28 * 4;
        *(int *)(iVar45 + 500) = iVar7;
        *(undefined4 *)(iVar45 + 0x234) = *(undefined4 *)(iVar41 + iVar24 + 0x18);
        *(undefined4 *)(iVar45 + 0x274) = *(undefined4 *)(iVar41 + iVar5 + 0x18);
        if ((int)uVar39 == 0) {
          uVar39 = 1;
          uVar25 = uVar28;
        }
        else {
          uVar39 = (ulonglong)((uVar28 - uVar25) + 1);
        }
      }
      uVar28 = uVar29 + 7;
      iVar7 = *(int *)(iVar41 + param_1 + 0xf9f4);
      if (((*(int *)(iVar37 + uVar28 * 4) != iVar7) ||
          (iVar45 = iVar34 + uVar28 * 4,
          *(int *)(iVar45 + 0x234) != *(int *)(iVar41 + iVar24 + 0x1c))) ||
         (*(int *)(iVar45 + 0x274) != *(int *)(iVar41 + iVar5 + 0x1c))) {
        iVar45 = iVar34 + uVar28 * 4;
        *(int *)(iVar45 + 500) = iVar7;
        *(undefined4 *)(iVar45 + 0x234) = *(undefined4 *)(iVar41 + iVar24 + 0x1c);
        *(undefined4 *)(iVar45 + 0x274) = *(undefined4 *)(iVar41 + iVar5 + 0x1c);
        if ((int)uVar39 == 0) {
          uVar39 = 1;
          uVar25 = uVar28;
        }
        else {
          uVar39 = (ulonglong)((uVar28 - uVar25) + 1);
        }
      }
      uVar29 = uVar29 + 8;
      iVar41 = iVar41 + 0x20;
    } while (uVar29 < 0x10);
    if ((int)uVar39 != 0) {
      auVar50 = (*pcVar13)();
      (*extraout_w11_44)(auVar50._0_8_ & 0xffffffff,auVar50._8_8_ & 0xffffffff,uVar39 & 0xffffffff);
    }
    *(undefined1 *)(param_1 + 0xf66f) = 0;
  }
  if (*(char *)(param_1 + 0xf670) != '\0' || iVar35 != param_1) {
    iVar35 = *(int *)(param_1 + 0xfa18);
    if (iVar35 == *(int *)(param_1 + 0xf6d0)) {
      uVar39 = 0x2a;
    }
    else {
      uVar39 = (ulonglong)*(uint *)(param_1 + 0xfa24);
    }
    iVar24 = *(int *)(param_1 + 0xf6b0) + *(int *)(param_1 + 0x10) * 0x1510;
    if (((iVar35 != *(int *)(iVar24 + 0x7c4)) || ((int)uVar39 != *(int *)(iVar24 + 0x7c8))) ||
       (*(int *)(iVar24 + 0x7cc) != 0)) {
      *(int *)(iVar24 + 0x7c4) = iVar35;
      *(int *)(iVar24 + 0x7c8) = (int)uVar39;
      *(undefined4 *)(iVar24 + 0x7cc) = 0;
      auVar50 = (*pcVar13)();
      (*extraout_w11_45)(auVar50._0_8_ & 0xffffffff,auVar50._8_8_ & 0xffffffff,uVar39 & 0xffffffff,0
                        );
    }
    *(undefined1 *)(param_1 + 0xf670) = 0;
  }
  iVar35 = *(int *)(param_1 + 0xf830);
  if (iVar35 != 0) {
    local_1c8 = 0;
    uVar29 = *(uint *)(param_1 + 0xf844);
    local_1c0 = *(uint *)(iVar35 + 0x14) >> (ulonglong)(uVar29 & 0x1f);
    if (local_1c0 == 0) {
      local_1c0 = 1;
    }
    local_1bc = *(uint *)(iVar35 + 0x18) >> (ulonglong)(uVar29 & 0x1f);
    if (local_1bc == 0) {
      local_1bc = 1;
    }
    auVar50 = (*pcVar13)(iVar35,uVar29 + *(int *)(param_1 + 0xf854) * *(int *)(iVar35 + 0x2c));
    (*extraout_w11_46)(auVar50._0_8_ & 0xffffffff,auVar50._8_8_,&local_1c8);
  }
  iVar35 = *(int *)(param_1 + 0xf834);
  if (iVar35 != 0) {
    local_1c8 = 0;
    uVar29 = *(uint *)(param_1 + 0xf848);
    local_1c0 = *(uint *)(iVar35 + 0x14) >> (ulonglong)(uVar29 & 0x1f);
    if (local_1c0 == 0) {
      local_1c0 = 1;
    }
    local_1bc = *(uint *)(iVar35 + 0x18) >> (ulonglong)(uVar29 & 0x1f);
    if (local_1bc == 0) {
      local_1bc = 1;
    }
    auVar50 = (*pcVar13)(iVar35,uVar29 + *(int *)(param_1 + 0xf858) * *(int *)(iVar35 + 0x2c));
    (*extraout_w11_47)(auVar50._0_8_ & 0xffffffff,auVar50._8_8_,&local_1c8);
  }
  iVar35 = *(int *)(param_1 + 0xf838);
  if (iVar35 != 0) {
    local_1c8 = 0;
    uVar29 = *(uint *)(param_1 + 0xf84c);
    local_1c0 = *(uint *)(iVar35 + 0x14) >> (ulonglong)(uVar29 & 0x1f);
    if (local_1c0 == 0) {
      local_1c0 = 1;
    }
    local_1bc = *(uint *)(iVar35 + 0x18) >> (ulonglong)(uVar29 & 0x1f);
    if (local_1bc == 0) {
      local_1bc = 1;
    }
    auVar50 = (*pcVar13)(iVar35,uVar29 + *(int *)(param_1 + 0xf85c) * *(int *)(iVar35 + 0x2c));
    (*extraout_w11_48)(auVar50._0_8_ & 0xffffffff,auVar50._8_8_,&local_1c8);
  }
  iVar35 = *(int *)(param_1 + 0xf83c);
  if (iVar35 != 0) {
    local_1c8 = 0;
    uVar29 = *(uint *)(param_1 + 0xf850);
    local_1c0 = *(uint *)(iVar35 + 0x14) >> (ulonglong)(uVar29 & 0x1f);
    if (local_1c0 == 0) {
      local_1c0 = 1;
    }
    local_1bc = *(uint *)(iVar35 + 0x18) >> (ulonglong)(uVar29 & 0x1f);
    if (local_1bc == 0) {
      local_1bc = 1;
    }
    auVar50 = (*pcVar13)(iVar35,uVar29 + *(int *)(param_1 + 0xf860) * *(int *)(iVar35 + 0x2c));
    (*extraout_w11_49)(auVar50._0_8_ & 0xffffffff,auVar50._8_8_,&local_1c8);
  }
  iVar35 = 0xb94;
  if (*(char *)(param_1 + 0x7642) == '\0') {
    iVar35 = 0x790;
  }
  iVar24 = *(int *)(param_1 + 0xf840);
  if (((iVar24 != 0) && (*(int *)(iVar35 + param_1) != 0)) && (((int *)(iVar35 + param_1))[1] != 0))
  {
    uVar29 = *(uint *)(param_1 + 0xf864);
    local_120 = 0;
    local_118 = *(uint *)(iVar24 + 0x14) >> (ulonglong)(uVar29 & 0x1f);
    if (local_118 == 0) {
      local_118 = 1;
    }
    local_114 = *(uint *)(iVar24 + 0x18) >> (ulonglong)(uVar29 & 0x1f);
    if (local_114 == 0) {
      local_114 = 1;
    }
    auVar50 = (*pcVar13)(iVar24,uVar29 + *(int *)(param_1 + 0xf868) * *(int *)(iVar24 + 0x2c));
    (*extraout_w11_50)(auVar50._0_8_ & 0xffffffff,auVar50._8_8_,&local_120);
  }
  return local_1e8;
LAB_100432f8:
  *(undefined4 *)(param_1 + 0xf660) = 0;
  goto LAB_10043334;
}

