/*
 * FUN_10058080 at 10058080
 * undefined FUN_10058080(void)
 * Address ranges: 10058080-10058a4f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined1 FUN_10058080(int param_1,char param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  ulonglong *puVar3;
  uint uVar4;
  int iVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  byte *pbVar9;
  code *pcVar10;
  uint uVar11;
  uint uVar12;
  undefined4 uVar13;
  char cVar14;
  int iVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  code *extraout_w11;
  code *extraout_w11_00;
  code *extraout_w11_01;
  code *extraout_w11_02;
  uint uVar19;
  ulonglong uVar20;
  uint uVar21;
  undefined1 *puVar22;
  longlong lVar23;
  uint uVar24;
  float fVar25;
  float fVar26;
  undefined1 local_100;
  uint local_fc;
  char local_f8;
  undefined1 *local_f4;
  int local_f0;
  int local_ec;
  int local_e8;
  undefined1 *local_e4;
  int local_e0;
  int *local_dc;
  int *local_d8;
  int local_d4;
  int *local_d0;
  int *local_cc;
  int local_c8;
  int *local_c4;
  int *local_c0;
  int local_bc;
  int local_b8;
  int local_b4;
  int local_b0;
  int local_ac;
  int iStack_a8;
  int local_a4;
  longlong local_a0;
  int local_98;
  int local_94;
  int local_90;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined4 local_50;
  
  local_b0 = param_1 + 0xf000;
  iVar15 = param_1 + 0xc000;
  local_b4 = param_1 + 0x8000;
  local_100 = 1;
  uVar24 = (1 << (ulonglong)(*(uint *)(param_1 + 0xfd78) & 0x1f)) - 1U & *(uint *)(param_1 + 0xf664)
  ;
  uVar19 = (uVar24 & 0xaaaaaaaa) >> 1 | (uVar24 & 0x55555555) << 1;
  uVar19 = (uVar19 & 0xcccccccc) >> 2 | (uVar19 & 0x33333333) << 2;
  uVar19 = (uVar19 & 0xf0f0f0f0) >> 4 | (uVar19 & 0xf0f0f0f) << 4;
  uVar19 = (uVar19 & 0xff00ff00) >> 8 | (uVar19 & 0xff00ff) << 8;
  lVar23 = LZCOUNT(uVar19 >> 0x10 | uVar19 << 0x10);
  uVar19 = (uint)lVar23;
  if ((1 - (uVar19 >> 5) & 0xff) == 0) {
    lVar23 = 0xffffffff;
  }
  else {
    pbVar9 = (byte *)((int)&local_fc + ((int)uVar19 >> 3));
    *pbVar9 = *pbVar9 & ((byte)(1 << (ulonglong)(uVar19 & 7)) ^ 0xff);
  }
  pcVar10 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  if ((int)lVar23 == -1) {
    cVar14 = *(char *)(param_1 + 0xfda0);
  }
  else {
    local_cc = (int *)(param_1 + 0xf6b8);
    local_c8 = param_1 + 0xf900;
    local_bc = param_1 + 0xf9a4;
    local_f4 = (undefined1 *)(param_1 + 0xfda0);
    local_ac = param_1 + 0x713;
    iStack_a8 = param_1 + 0x714;
    local_a4 = param_1 + 0xbc;
    local_e4 = (undefined1 *)(param_1 + 0x710);
    local_e0 = param_1 + 0x711;
    local_dc = (int *)(param_1 + 0x712);
    local_d8 = (int *)(param_1 + 0xc0);
    local_d4 = param_1 + 0x3d0;
    local_d0 = (int *)(param_1 + 30000);
    local_fc = uVar24;
    local_f8 = param_2;
    local_e8 = iVar15;
    local_c4 = local_cc;
    local_c0 = local_cc;
    local_b8 = param_1 + 0xf664;
    do {
      uVar21 = (uint)lVar23;
      bVar6 = *(byte *)(local_ac + uVar21 * 8);
      uVar19 = *(uint *)(iStack_a8 + uVar21 * 8);
      if (uVar19 < bVar6) {
        fVar26 = (float)bVar6;
      }
      else {
        fVar26 = (float)uVar19;
      }
      fVar25 = 3.4028235e+38;
      *(float *)(local_a4 + uVar21 * 0x34) = fVar26;
      bVar6 = *(byte *)(local_e0 + uVar21 * 8);
      uVar19 = (uint)(byte)local_e4[uVar21 * 8];
      if (uVar19 == 2) {
        uVar19 = 0;
        fVar25 = fVar26;
      }
      uVar12 = (uint)*(byte *)(local_dc + uVar21 * 2);
      local_d8[uVar21 * 0xd] = (int)fVar25;
      if (bVar6 == 2 || uVar12 == 2) {
        *(undefined4 *)(param_1 + 0x90 + uVar21 * 0x34) = 0x55;
        *(float *)(param_1 + 0x400 + uVar21 * 0x34) = fVar25;
        if (bVar6 != 2 && uVar12 != 2) goto LAB_100582a4;
        uVar13 = 0xd5;
      }
      else {
        uVar13 = *(undefined4 *)(&DAT_10161e40 + (uVar19 | ((uint)bVar6 | uVar12 << 1) << 1) * 4);
        *(float *)(param_1 + 0x400 + uVar21 * 0x34) = fVar25;
        *(undefined4 *)(param_1 + 0x90 + uVar21 * 0x34) = uVar13;
LAB_100582a4:
        uVar13 = *(undefined4 *)(&DAT_10161e20 + (uVar19 | ((uint)bVar6 | uVar12 << 1) << 1) * 4);
      }
      *(undefined4 *)(local_d4 + uVar21 * 0x34) = uVar13;
      iVar15 = 0x3d0;
      if (1 < (local_d0[uVar21] + 0xfbU & 0xff)) {
        iVar15 = 0x90;
      }
      puVar2 = (undefined8 *)(iVar15 + param_1 + uVar21 * 0x34);
      uStack_78 = puVar2[1];
      local_80 = *puVar2;
      uStack_68 = puVar2[3];
      uStack_70 = puVar2[2];
      uStack_58 = puVar2[5];
      local_60 = puVar2[4];
      local_50 = *(undefined4 *)(puVar2 + 6);
      uVar12 = FUN_10119c20(*local_cc + 0x1674,&local_80);
      uVar19 = *(uint *)(local_c8 + uVar21 * 4);
      if (uVar19 != uVar12) {
        if (uVar19 != 0xffffffff) {
          iVar15 = *local_c4;
          uVar4 = *(uint *)(iVar15 + 0x167c);
          if (uVar4 != 0) {
            uVar17 = 0;
            uVar16 = uVar4;
            do {
              uVar18 = uVar16 + uVar17 >> 1;
              uVar20 = *(ulonglong *)(*(int *)(iVar15 + 0x1678) + uVar18 * 0x10);
              uVar11 = uVar18;
              if (uVar20 <= uVar19) {
                if (uVar19 <= uVar20) break;
                uVar17 = uVar18 + 1;
                uVar18 = uVar17;
                uVar11 = uVar16;
              }
              uVar16 = uVar11;
            } while (uVar16 != uVar17);
            local_f0 = iVar15;
            if (((uVar18 != uVar4) &&
                (puVar3 = (ulonglong *)(*(int *)(iVar15 + 0x1678) + uVar18 * 0x10),
                *puVar3 == (ulonglong)uVar19)) &&
               (piVar1 = (int *)((int)puVar3 + 0xc), piVar1 != (int *)0x0)) {
              *(undefined1 *)(*piVar1 + 0x20) = 0;
            }
          }
        }
        *(uint *)(param_1 + uVar21 * 4 + 0xf900) = uVar12;
      }
      iVar15 = *(int *)(*local_c0 + 0x15e4);
      uVar13 = (*pcVar10)();
      (*extraout_w11)(uVar13,&local_ec);
      local_ec = local_ec + *(int *)(iVar15 + 0x18) * (uVar12 & 0xffff);
      *(int *)(local_bc + uVar21 * 4) = local_ec;
      pbVar9 = (byte *)(((int)uVar21 >> 3) + local_b8);
      *pbVar9 = *pbVar9 & ((byte)(1 << (ulonglong)(uVar21 & 7)) ^ 0xff);
      *local_f4 = 1;
      uVar19 = (uVar24 & 0xaaaaaaaa) >> 1 | (uVar24 & 0x55555555) << 1;
      uVar19 = (uVar19 & 0xcccccccc) >> 2 | (uVar19 & 0x33333333) << 2;
      uVar19 = (uVar19 & 0xf0f0f0f0) >> 4 | (uVar19 & 0xf0f0f0f) << 4;
      uVar19 = (uVar19 & 0xff00ff00) >> 8 | (uVar19 & 0xff00ff) << 8;
      lVar23 = LZCOUNT(uVar19 >> 0x10 | uVar19 << 0x10);
      uVar19 = (uint)lVar23;
      if ((1 - (uVar19 >> 5) & 0xff) == 0) {
        lVar23 = 0xffffffff;
      }
      else {
        pbVar9 = (byte *)((int)&local_fc + ((int)uVar19 >> 3));
        *pbVar9 = *pbVar9 & ((byte)(1 << (ulonglong)(uVar19 & 7)) ^ 0xff);
        uVar24 = local_fc;
      }
    } while ((int)lVar23 != -1);
    cVar14 = '\x01';
    param_2 = local_f8;
    iVar15 = local_e8;
  }
  puVar22 = *(undefined1 **)(iVar15 + 0x3d28);
  if (puVar22 == (undefined1 *)0x0) {
    puVar22 = *(undefined1 **)(iVar15 + 0x3d50);
  }
  uVar24 = (1 << (ulonglong)((uint)puVar22 & 0x1f)) - 1U & *(uint *)(iVar15 + 0x369c);
  uVar19 = (uVar24 & 0xaaaaaaaa) >> 1 | (uVar24 & 0x55555555) << 1;
  uVar19 = (uVar19 & 0xcccccccc) >> 2 | (uVar19 & 0x33333333) << 2;
  uVar19 = (uVar19 & 0xf0f0f0f0) >> 4 | (uVar19 & 0xf0f0f0f) << 4;
  uVar19 = (uVar19 & 0xff00ff00) >> 8 | (uVar19 & 0xff00ff) << 8;
  lVar23 = LZCOUNT(uVar19 >> 0x10 | uVar19 << 0x10);
  uVar19 = (uint)lVar23;
  if ((1 - (uVar19 >> 5) & 0xff) == 0) {
    lVar23 = 0xffffffff;
  }
  else {
    pbVar9 = (byte *)((int)&local_fc + ((int)uVar19 >> 3));
    *pbVar9 = *pbVar9 & ((byte)(1 << (ulonglong)(uVar19 & 7)) ^ 0xff);
  }
  local_fc = uVar24;
  if ((int)lVar23 == -1) {
    if ((cVar14 == '\0') && (param_2 == '\0')) {
      return 1;
    }
  }
  else {
    local_dc = (int *)(param_1 + 0xf6b8);
    local_e0 = param_1 + 0xfa1c;
    local_f4 = (undefined1 *)(param_1 + 0x7fb);
    local_b8 = param_1 + 0x7fc;
    local_bc = param_1 + 0x84c;
    local_c0 = (int *)(param_1 + 0x7f8);
    local_c4 = (int *)(param_1 + 0x7f9);
    local_c8 = param_1 + 0x7fa;
    local_cc = (int *)(param_1 + 0x850);
    local_d4 = param_1 + 0xf9f4;
    local_e8 = iVar15;
    local_e4 = puVar22;
    local_d8 = local_dc;
    local_d0 = local_dc;
    do {
      uVar21 = (uint)lVar23;
      uVar19 = *(uint *)(local_b8 + uVar21 * 8);
      if (uVar19 < (byte)local_f4[uVar21 * 8]) {
        fVar26 = (float)(byte)local_f4[uVar21 * 8];
      }
      else {
        fVar26 = (float)uVar19;
      }
      *(float *)(local_bc + uVar21 * 0x34) = fVar26;
      bVar6 = *(byte *)(local_c8 + uVar21 * 8);
      bVar7 = *(byte *)(local_c4 + uVar21 * 2);
      bVar8 = *(byte *)(local_c0 + uVar21 * 2);
      local_cc[uVar21 * 0xd] = 0x7f7fffff;
      uVar19 = (uint)bVar6;
      if (bVar7 == 2 || uVar19 == 2) {
        uVar13 = 0;
      }
      else {
        uVar13 = *(undefined4 *)
                  (&DAT_10161e40 + ((uint)bVar8 | ((uint)bVar7 | uVar19 << 1) << 1) * 4);
      }
      puVar2 = (undefined8 *)(param_1 + (uVar21 + 0x28) * 0x34);
      *(undefined4 *)puVar2 = uVar13;
      uStack_78 = puVar2[1];
      local_80 = *puVar2;
      uStack_68 = puVar2[3];
      uStack_70 = puVar2[2];
      uStack_58 = puVar2[5];
      local_60 = puVar2[4];
      local_50 = *(undefined4 *)(puVar2 + 6);
      uVar12 = FUN_10119c20(*local_d0 + 0x1674,&local_80);
      uVar19 = *(uint *)(local_d4 + uVar21 * 4);
      if (uVar19 != uVar12) {
        if (uVar19 != 0xffffffff) {
          iVar15 = *local_d8;
          uVar4 = *(uint *)(iVar15 + 0x167c);
          if (uVar4 != 0) {
            uVar17 = 0;
            uVar16 = uVar4;
            do {
              uVar18 = uVar16 + uVar17 >> 1;
              uVar20 = *(ulonglong *)(*(int *)(iVar15 + 0x1678) + uVar18 * 0x10);
              uVar11 = uVar18;
              if (uVar20 <= uVar19) {
                if (uVar19 <= uVar20) break;
                uVar17 = uVar18 + 1;
                uVar18 = uVar17;
                uVar11 = uVar16;
              }
              uVar16 = uVar11;
            } while (uVar16 != uVar17);
            local_ec = iVar15;
            if (((uVar18 != uVar4) &&
                (puVar3 = (ulonglong *)(*(int *)(iVar15 + 0x1678) + uVar18 * 0x10),
                *puVar3 == (ulonglong)uVar19)) &&
               (piVar1 = (int *)((int)puVar3 + 0xc), piVar1 != (int *)0x0)) {
              *(undefined1 *)(*piVar1 + 0x20) = 0;
            }
          }
        }
        *(uint *)(param_1 + uVar21 * 4 + 0xf9f4) = uVar12;
      }
      iVar15 = *(int *)(*local_dc + 0x15e4);
      uVar13 = (*pcVar10)();
      (*extraout_w11_00)(uVar13,&local_f0);
      local_f0 = local_f0 + *(int *)(iVar15 + 0x18) * (uVar12 & 0xffff);
      *(int *)(local_e0 + uVar21 * 4) = local_f0;
      pbVar9 = (byte *)(((int)uVar21 >> 3) + param_1 + 0xf69c);
      *pbVar9 = *pbVar9 & ((byte)(1 << (ulonglong)(uVar21 & 7)) ^ 0xff);
      uVar19 = (uVar24 & 0xaaaaaaaa) >> 1 | (uVar24 & 0x55555555) << 1;
      uVar19 = (uVar19 & 0xcccccccc) >> 2 | (uVar19 & 0x33333333) << 2;
      uVar19 = (uVar19 & 0xf0f0f0f0) >> 4 | (uVar19 & 0xf0f0f0f) << 4;
      uVar19 = (uVar19 & 0xff00ff00) >> 8 | (uVar19 & 0xff00ff) << 8;
      lVar23 = LZCOUNT(uVar19 >> 0x10 | uVar19 << 0x10);
      *(undefined1 *)(param_1 + 0xfda0) = 1;
      uVar19 = (uint)lVar23;
      if ((1 - (uVar19 >> 5) & 0xff) == 0) {
        lVar23 = 0xffffffff;
      }
      else {
        pbVar9 = (byte *)((int)&local_fc + ((int)uVar19 >> 3));
        *pbVar9 = *pbVar9 & ((byte)(1 << (ulonglong)(uVar19 & 7)) ^ 0xff);
        uVar24 = local_fc;
      }
      puVar22 = local_e4;
      iVar15 = local_e8;
    } while ((int)lVar23 != -1);
  }
  if (puVar22 + *(int *)(iVar15 + 0x3d78) != (undefined1 *)0x0) {
    uVar20 = FUN_1011fe80(*(undefined4 *)(iVar15 + 0x36cc),puVar22 + *(int *)(iVar15 + 0x3d78),
                          *(undefined4 *)(*(int *)(*(int *)(param_1 + 0xf6b8) + 0x1300) + 0xc),
                          *(undefined8 *)(*(int *)(*(int *)(param_1 + 0xf6b8) + 0x1304) + 0x938),
                          &local_a0);
    if ((uVar20 & 1) == 0) {
      local_100 = 0;
    }
    else {
      local_f4 = *(undefined1 **)(iVar15 + 0x3d78);
      uVar20 = ZEXT48(local_f4);
      if (local_f4 != (undefined1 *)0x0) {
        uVar13 = (*pcVar10)();
        (*extraout_w11_01)(uVar13,1,&local_98,&local_f4,uVar20 & 0xffffffff);
        *(longlong *)(local_b4 + 0x78c8) = local_a0;
      }
      if (puVar22 != (undefined1 *)0x0) {
        uVar24 = *(int *)(iVar15 + 0x3d78) * local_90;
        local_a0 = local_a0 + (ulonglong)uVar24;
        local_98 = uVar24 + local_98;
        local_f4 = puVar22;
        uVar13 = (*pcVar10)();
        (*extraout_w11_02)(uVar13,1,&local_98,&local_f4,puVar22);
        *(longlong *)(local_b4 + 0x78e0) = local_a0;
      }
      iVar5 = *(int *)(iVar15 + 0x3bc4);
      *(int *)(iVar15 + 0x3bc4) = local_94;
      *(byte *)(local_b0 + 0xda1) = local_94 != iVar5 | *(byte *)(local_b0 + 0xda1);
      *(undefined1 *)(local_b0 + 0xd9a) = 1;
    }
    *(undefined1 *)(local_b0 + 0xda2) = 1;
  }
  *(undefined1 *)(param_1 + 0xfda0) = 0;
  return local_100;
}

