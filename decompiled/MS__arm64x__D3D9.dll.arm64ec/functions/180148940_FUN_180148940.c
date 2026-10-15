/*
 * FUN_180148940 at 180148940
 * undefined FUN_180148940(void)
 * Address ranges: 180148940-180149113
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_180148940(longlong param_1,byte param_2)

{
  int iVar1;
  longlong *plVar2;
  uint uVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  uint uVar7;
  bool bVar8;
  uint uVar9;
  undefined8 uVar10;
  ulonglong uVar11;
  uint uVar12;
  undefined4 uVar13;
  uint uVar14;
  uint uVar15;
  char cVar16;
  uint uVar17;
  ulonglong *puVar18;
  uint uVar19;
  code *extraout_x11;
  code *extraout_x11_00;
  code *extraout_x11_01;
  code *extraout_x11_02;
  longlong lVar20;
  uint uVar21;
  longlong lVar22;
  float fVar23;
  uint local_e0;
  uint local_dc;
  undefined4 local_d8;
  longlong local_d0;
  code *local_c8;
  longlong local_c0;
  longlong local_b8;
  longlong local_b0;
  longlong local_a8;
  longlong local_a0;
  longlong local_98;
  longlong local_90;
  longlong lStack_88;
  longlong local_80;
  longlong local_78;
  longlong local_70;
  longlong lStack_68;
  undefined4 local_60;
  longlong local_50;
  
  local_d8 = 1;
  lVar20 = param_1 + 0xc000;
  local_50 = param_1 + 0x10000;
  local_c0 = param_1 + 0x8000;
  uVar14 = (uint)param_2;
  local_e0 = (1 << (ulonglong)(*(uint *)(param_1 + 0x10168) & 0x1f)) - 1U &
             *(uint *)(param_1 + 0xf684);
  uVar21 = (local_e0 & 0xaaaaaaaa) >> 1 | (local_e0 & 0x55555555) << 1;
  uVar21 = (uVar21 & 0xcccccccc) >> 2 | (uVar21 & 0x33333333) << 2;
  uVar21 = (uVar21 & 0xf0f0f0f0) >> 4 | (uVar21 & 0xf0f0f0f) << 4;
  uVar21 = (uVar21 & 0xff00ff00) >> 8 | (uVar21 & 0xff00ff) << 8;
  lVar22 = LZCOUNT(uVar21 >> 0x10 | uVar21 << 0x10);
  uVar21 = (uint)lVar22;
  if ((1 - (uVar21 >> 5) & 0xff) == 0) {
    lVar22 = 0xffffffff;
  }
  else {
    *(byte *)((longlong)&local_e0 + (longlong)((int)uVar21 >> 3)) =
         *(byte *)((longlong)&local_e0 + (longlong)((int)uVar21 >> 3)) &
         ((byte)(1 << (ulonglong)(uVar21 & 7)) ^ 0xff);
  }
  local_b8 = param_1 + 0x10000;
  local_c8 = (code *)__hybrid_os_arm64x_dispatch_icall;
  if ((int)lVar22 == -1) {
    cVar16 = *(char *)(param_1 + 0x10190);
  }
  else {
    local_dc = (uint)param_2;
    local_b0 = param_1 + 0x7550;
    local_a8 = param_1 + 0xfb20;
    uVar21 = local_e0;
    local_a0 = param_1 + 0xf684;
    local_98 = lVar20;
    do {
      uVar14 = (uint)lVar22;
      lVar20 = param_1 + (longlong)(int)uVar14 * 8;
      if (*(uint *)(lVar20 + 0x734) < (uint)*(byte *)(lVar20 + 0x733)) {
        fVar23 = (float)*(byte *)(lVar20 + 0x733);
      }
      else {
        fVar23 = (float)*(uint *)(lVar20 + 0x734);
      }
      lVar22 = param_1 + (longlong)(int)uVar14 * 0x34;
      *(float *)(lVar22 + 0xdc) = fVar23;
      bVar4 = *(byte *)(lVar20 + 0x731);
      uVar12 = (uint)*(byte *)(lVar20 + 0x730);
      bVar8 = uVar12 == 2;
      if (bVar8) {
        uVar12 = 0;
      }
      if (!bVar8) {
        fVar23 = 3.4028235e+38;
      }
      uVar9 = (uint)*(byte *)(lVar20 + 0x732);
      *(float *)(lVar22 + 0xe0) = fVar23;
      *(float *)(lVar22 + 0x420) = fVar23;
      if (bVar4 == 2 || uVar9 == 2) {
        *(undefined4 *)(lVar22 + 0xb0) = 0x55;
        if (bVar4 != 2 && uVar9 != 2) goto LAB_180148ac0;
        uVar13 = 0xd5;
      }
      else {
        *(undefined4 *)(lVar22 + 0xb0) =
             *(undefined4 *)
              (&DAT_18022c130 +
              ((ulonglong)uVar12 | ((ulonglong)(uint)bVar4 | (ulonglong)uVar9 << 1) << 1) * 4);
LAB_180148ac0:
        uVar13 = *(undefined4 *)
                  (&DAT_18022c110 +
                  ((ulonglong)uVar12 | ((ulonglong)(uint)bVar4 | (ulonglong)uVar9 << 1) << 1) * 4);
      }
      *(undefined4 *)(lVar22 + 0x3f0) = uVar13;
      lVar20 = 0x3f0;
      if (1 < (*(int *)(local_b0 + (longlong)(int)uVar14 * 4) + 0xfbU & 0xff)) {
        lVar20 = 0xb0;
      }
      plVar2 = (longlong *)(lVar22 + lVar20);
      lStack_88 = plVar2[1];
      local_90 = *plVar2;
      local_78 = plVar2[3];
      local_80 = plVar2[2];
      lStack_68 = plVar2[5];
      local_70 = plVar2[4];
      local_60 = (undefined4)plVar2[6];
      uVar9 = FUN_180204a00(*(longlong *)(param_1 + 0xf6e0) + 0x1a30,&local_90);
      uVar12 = *(uint *)(param_1 + 0xfa18 + (longlong)(int)uVar14 * 4);
      if (uVar12 != uVar9) {
        if (uVar12 != 0xffffffff) {
          lVar20 = *(longlong *)(param_1 + 0xf6e0);
          uVar3 = *(uint *)(lVar20 + 0x1a40);
          if (uVar3 != 0) {
            uVar17 = 0;
            uVar15 = uVar3;
            do {
              uVar19 = uVar15 + uVar17 >> 1;
              uVar11 = *(ulonglong *)(*(longlong *)(lVar20 + 0x1a38) + (ulonglong)uVar19 * 0x18);
              uVar7 = uVar19;
              if (uVar11 <= uVar12) {
                if (uVar12 <= uVar11) break;
                uVar17 = uVar19 + 1;
                uVar19 = uVar19 + 1;
                uVar7 = uVar15;
              }
              uVar15 = uVar7;
            } while (uVar15 != uVar17);
            if (((uVar19 != uVar3) &&
                (puVar18 = (ulonglong *)(*(longlong *)(lVar20 + 0x1a38) + (ulonglong)uVar19 * 0x18),
                *puVar18 == (ulonglong)uVar12)) &&
               (puVar18 = puVar18 + 2, puVar18 != (ulonglong *)0x0)) {
              *(undefined1 *)(*puVar18 + 0x20) = 0;
            }
          }
        }
        *(uint *)(param_1 + 0xfa18 + (longlong)(int)uVar14 * 4) = uVar9;
      }
      lVar20 = *(longlong *)(*(longlong *)(param_1 + 0xf6e0) + 0x1948);
      uVar10 = (*local_c8)();
      (*extraout_x11)(uVar10,&local_d0);
      local_d0 = local_d0 + (ulonglong)(*(int *)(lVar20 + 0x20) * (uVar9 & 0xffff));
      *(longlong *)(local_a8 + (longlong)(int)uVar14 * 8) = local_d0;
      *(byte *)(local_a0 + ((int)uVar14 >> 3)) =
           *(byte *)(local_a0 + ((int)uVar14 >> 3)) & ((byte)(1 << (ulonglong)(uVar14 & 7)) ^ 0xff);
      *(undefined1 *)(local_b8 + 400) = 1;
      uVar14 = (uVar21 & 0xaaaaaaaa) >> 1 | (uVar21 & 0x55555555) << 1;
      uVar14 = (uVar14 & 0xcccccccc) >> 2 | (uVar14 & 0x33333333) << 2;
      uVar14 = (uVar14 & 0xf0f0f0f0) >> 4 | (uVar14 & 0xf0f0f0f) << 4;
      uVar14 = (uVar14 & 0xff00ff00) >> 8 | (uVar14 & 0xff00ff) << 8;
      lVar22 = LZCOUNT(uVar14 >> 0x10 | uVar14 << 0x10);
      uVar14 = (uint)lVar22;
      if ((1 - (uVar14 >> 5) & 0xff) == 0) {
        lVar22 = 0xffffffff;
      }
      else {
        *(byte *)((longlong)&local_e0 + (longlong)((int)uVar14 >> 3)) =
             *(byte *)((longlong)&local_e0 + (longlong)((int)uVar14 >> 3)) &
             ((byte)(1 << (ulonglong)(uVar14 & 7)) ^ 0xff);
        uVar21 = local_e0;
      }
    } while ((int)lVar22 != -1);
    cVar16 = '\x01';
    lVar20 = local_98;
    uVar14 = local_dc;
  }
  lVar22 = 0x10140;
  if (*(int *)(param_1 + 0x10118) != 0) {
    lVar22 = 0x10118;
  }
  uVar21 = *(uint *)(param_1 + lVar22);
  local_e0 = (1 << (ulonglong)(uVar21 & 0x1f)) - 1U & *(uint *)(lVar20 + 0x36bc);
  uVar12 = (local_e0 & 0xaaaaaaaa) >> 1 | (local_e0 & 0x55555555) << 1;
  uVar12 = (uVar12 & 0xcccccccc) >> 2 | (uVar12 & 0x33333333) << 2;
  uVar12 = (uVar12 & 0xf0f0f0f0) >> 4 | (uVar12 & 0xf0f0f0f) << 4;
  uVar12 = (uVar12 & 0xff00ff00) >> 8 | (uVar12 & 0xff00ff) << 8;
  lVar20 = LZCOUNT(uVar12 >> 0x10 | uVar12 << 0x10);
  uVar12 = (uint)lVar20;
  if ((1 - (uVar12 >> 5) & 0xff) == 0) {
    lVar20 = 0xffffffff;
  }
  else {
    *(byte *)((longlong)&local_e0 + (longlong)((int)uVar12 >> 3)) =
         *(byte *)((longlong)&local_e0 + (longlong)((int)uVar12 >> 3)) &
         ((byte)(1 << (ulonglong)(uVar12 & 7)) ^ 0xff);
  }
  if ((int)lVar20 == -1) {
    if ((cVar16 == '\0') && ((uVar14 & 1) == 0)) {
      return local_d8;
    }
  }
  else {
    local_a8 = param_1 + 0xfc00;
    local_98 = param_1 + 0x86c;
    local_a0 = param_1 + 0x840;
    uVar14 = local_e0;
    local_dc = uVar21;
    local_b0 = param_1 + 0xf6bc;
    do {
      uVar21 = (uint)lVar20;
      lVar20 = param_1 + (longlong)(int)uVar21 * 8;
      if (*(uint *)(lVar20 + 0x81c) < (uint)*(byte *)(lVar20 + 0x81b)) {
        fVar23 = (float)*(byte *)(lVar20 + 0x81b);
      }
      else {
        fVar23 = (float)*(uint *)(lVar20 + 0x81c);
      }
      lVar22 = (longlong)(int)uVar21 * 0x34;
      *(float *)(local_98 + lVar22) = fVar23;
      bVar4 = *(byte *)(lVar20 + 0x819);
      bVar5 = *(byte *)(lVar20 + 0x81a);
      bVar6 = *(byte *)(lVar20 + 0x818);
      *(undefined4 *)(param_1 + lVar22 + 0x870) = 0x7f7fffff;
      if (bVar4 == 2 || bVar5 == 2) {
        uVar13 = 0;
      }
      else {
        uVar13 = *(undefined4 *)
                  (&DAT_18022c130 +
                  ((ulonglong)bVar6 | ((ulonglong)(uint)bVar4 | (ulonglong)(uint)bVar5 << 1) << 1) *
                  4);
      }
      *(undefined4 *)(param_1 + lVar22 + 0x840) = uVar13;
      plVar2 = (longlong *)(lVar22 + local_a0);
      lStack_88 = plVar2[1];
      local_90 = *plVar2;
      local_78 = plVar2[3];
      local_80 = plVar2[2];
      lStack_68 = plVar2[5];
      local_70 = plVar2[4];
      local_60 = (undefined4)plVar2[6];
      uVar9 = FUN_180204a00(*(longlong *)(param_1 + 0xf6e0) + 0x1a30,&local_90);
      uVar12 = *(uint *)(param_1 + 0xfbc0 + (longlong)(int)uVar21 * 4);
      if (uVar12 != uVar9) {
        if (uVar12 != 0xffffffff) {
          lVar20 = *(longlong *)(param_1 + 0xf6e0);
          uVar3 = *(uint *)(lVar20 + 0x1a40);
          if (uVar3 != 0) {
            uVar17 = 0;
            uVar15 = uVar3;
            do {
              uVar19 = uVar15 + uVar17 >> 1;
              uVar11 = *(ulonglong *)(*(longlong *)(lVar20 + 0x1a38) + (ulonglong)uVar19 * 0x18);
              uVar7 = uVar19;
              if (uVar11 <= uVar12) {
                if (uVar12 <= uVar11) break;
                uVar17 = uVar19 + 1;
                uVar19 = uVar19 + 1;
                uVar7 = uVar15;
              }
              uVar15 = uVar7;
            } while (uVar15 != uVar17);
            if (((uVar19 != uVar3) &&
                (puVar18 = (ulonglong *)(*(longlong *)(lVar20 + 0x1a38) + (ulonglong)uVar19 * 0x18),
                *puVar18 == (ulonglong)uVar12)) &&
               (puVar18 = puVar18 + 2, puVar18 != (ulonglong *)0x0)) {
              *(undefined1 *)(*puVar18 + 0x20) = 0;
            }
          }
        }
        *(uint *)(param_1 + 0xfbc0 + (longlong)(int)uVar21 * 4) = uVar9;
      }
      lVar20 = *(longlong *)(*(longlong *)(param_1 + 0xf6e0) + 0x1948);
      uVar10 = (*local_c8)();
      (*extraout_x11_00)(uVar10,&local_d0);
      local_d0 = local_d0 + (ulonglong)(*(int *)(lVar20 + 0x20) * (uVar9 & 0xffff));
      *(longlong *)(local_a8 + (longlong)(int)uVar21 * 8) = local_d0;
      *(byte *)(local_b0 + ((int)uVar21 >> 3)) =
           *(byte *)(local_b0 + ((int)uVar21 >> 3)) & ((byte)(1 << (ulonglong)(uVar21 & 7)) ^ 0xff);
      *(undefined1 *)(local_b8 + 400) = 1;
      uVar21 = (uVar14 & 0xaaaaaaaa) >> 1 | (uVar14 & 0x55555555) << 1;
      uVar21 = (uVar21 & 0xcccccccc) >> 2 | (uVar21 & 0x33333333) << 2;
      uVar21 = (uVar21 & 0xf0f0f0f0) >> 4 | (uVar21 & 0xf0f0f0f) << 4;
      uVar21 = (uVar21 & 0xff00ff00) >> 8 | (uVar21 & 0xff00ff) << 8;
      lVar20 = LZCOUNT(uVar21 >> 0x10 | uVar21 << 0x10);
      uVar21 = (uint)lVar20;
      if ((1 - (uVar21 >> 5) & 0xff) == 0) {
        lVar20 = 0xffffffff;
      }
      else {
        *(byte *)((longlong)&local_e0 + (longlong)((int)uVar21 >> 3)) =
             *(byte *)((longlong)&local_e0 + (longlong)((int)uVar21 >> 3)) &
             ((byte)(1 << (ulonglong)(uVar21 & 7)) ^ 0xff);
        uVar14 = local_e0;
      }
      uVar21 = local_dc;
    } while ((int)lVar20 != -1);
  }
  lVar22 = local_50;
  lVar20 = local_c0;
  iVar1 = *(int *)(local_50 + 0x168) + uVar21;
  if (iVar1 != 0) {
    uVar11 = FUN_1802116e0(*(undefined8 *)(local_c0 + 0x7708),iVar1,
                           *(undefined8 *)
                            (*(longlong *)(*(longlong *)(param_1 + 0xf6e0) + 0x1500) + 0x18),
                           *(undefined8 *)
                            (*(longlong *)(*(longlong *)(param_1 + 0xf6e0) + 0x1508) + 0xb78),
                           &local_90);
    if ((uVar11 & 1) == 0) {
      local_d8 = 0;
    }
    else {
      local_dc = *(uint *)(lVar22 + 0x168);
      if (local_dc != 0) {
        uVar10 = (*local_c8)();
        (*extraout_x11_01)(uVar10,1,&lStack_88,&local_dc);
        *(longlong *)(lVar20 + 0x79d8) = local_90;
      }
      lVar20 = local_c0;
      if (uVar21 != 0) {
        uVar14 = *(int *)(local_50 + 0x168) * (int)local_78;
        local_90 = local_90 + (ulonglong)uVar14;
        lStack_88 = lStack_88 + (ulonglong)uVar14;
        local_dc = uVar21;
        uVar10 = (*local_c8)();
        (*extraout_x11_02)(uVar10,1,&lStack_88,&local_dc,uVar21,param_1 + 0xfc00,&DAT_18022b910,1);
        *(longlong *)(lVar20 + 0x79f0) = local_90;
      }
      lVar20 = *(longlong *)(local_c0 + 0x7f20);
      *(longlong *)(local_c0 + 0x7f20) = local_80;
      *(byte *)(param_1 + 0x10191) = local_80 != lVar20 | *(byte *)(param_1 + 0x10191);
      *(undefined1 *)(param_1 + 0x1018a) = 1;
    }
    *(undefined1 *)(param_1 + 0x10192) = 1;
  }
  *(undefined1 *)(local_b8 + 400) = 0;
  return local_d8;
}

