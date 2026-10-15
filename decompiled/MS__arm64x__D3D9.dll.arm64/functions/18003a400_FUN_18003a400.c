/*
 * FUN_18003a400 at 18003a400
 * undefined FUN_18003a400(void)
 * Address ranges: 18003a400-18003ab5f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_18003a400(longlong param_1,byte param_2)

{
  int iVar1;
  uint uVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  uint uVar6;
  bool bVar7;
  uint uVar8;
  longlong *plVar9;
  uint uVar10;
  undefined4 uVar11;
  uint uVar12;
  uint uVar13;
  char cVar14;
  uint uVar15;
  ulonglong *puVar16;
  uint uVar17;
  longlong lVar18;
  ulonglong uVar19;
  uint uVar20;
  longlong lVar21;
  float fVar22;
  uint local_e0;
  uint local_dc;
  undefined4 uStack_d8;
  longlong local_d0;
  longlong local_c8;
  longlong local_c0;
  longlong local_b8;
  longlong local_b0;
  longlong lStack_a8;
  longlong local_a0;
  longlong local_98;
  longlong local_90;
  longlong lStack_88;
  undefined4 local_80;
  longlong local_70;
  
  lVar18 = param_1 + 0xc000;
  local_70 = param_1 + 0x10000;
  uVar11 = 1;
  local_c8 = param_1 + 0x8000;
  uVar12 = (uint)param_2;
  local_e0 = (1 << (ulonglong)(*(uint *)(param_1 + 0x10168) & 0x1f)) - 1U &
             *(uint *)(param_1 + 0xf684);
  uVar20 = (local_e0 & 0xaaaaaaaa) >> 1 | (local_e0 & 0x55555555) << 1;
  uVar20 = (uVar20 & 0xcccccccc) >> 2 | (uVar20 & 0x33333333) << 2;
  uVar20 = (uVar20 & 0xf0f0f0f0) >> 4 | (uVar20 & 0xf0f0f0f) << 4;
  uVar20 = (uVar20 & 0xff00ff00) >> 8 | (uVar20 & 0xff00ff) << 8;
  lVar21 = LZCOUNT(uVar20 >> 0x10 | uVar20 << 0x10);
  uVar20 = (uint)lVar21;
  if ((1 - (uVar20 >> 5) & 0xff) == 0) {
    lVar21 = 0xffffffff;
  }
  else {
    *(byte *)((longlong)&local_e0 + (longlong)((int)uVar20 >> 3)) =
         *(byte *)((longlong)&local_e0 + (longlong)((int)uVar20 >> 3)) &
         ((byte)(1 << (ulonglong)(uVar20 & 7)) ^ 0xff);
  }
  if ((int)lVar21 == -1) {
    cVar14 = *(char *)(param_1 + 0x10190);
  }
  else {
    local_dc = (uint)param_2;
    uStack_d8 = 1;
    local_c0 = param_1 + 0x7550;
    uVar20 = local_e0;
    local_b8 = lVar18;
    do {
      uVar12 = (uint)lVar21;
      lVar18 = param_1 + (longlong)(int)uVar12 * 8;
      if (*(uint *)(lVar18 + 0x734) < (uint)*(byte *)(lVar18 + 0x733)) {
        fVar22 = (float)*(byte *)(lVar18 + 0x733);
      }
      else {
        fVar22 = (float)*(uint *)(lVar18 + 0x734);
      }
      lVar21 = param_1 + (longlong)(int)uVar12 * 0x34;
      *(float *)(lVar21 + 0xdc) = fVar22;
      bVar3 = *(byte *)(lVar18 + 0x731);
      uVar10 = (uint)*(byte *)(lVar18 + 0x730);
      bVar7 = uVar10 == 2;
      if (bVar7) {
        uVar10 = 0;
      }
      if (!bVar7) {
        fVar22 = 3.4028235e+38;
      }
      uVar8 = (uint)*(byte *)(lVar18 + 0x732);
      *(float *)(lVar21 + 0xe0) = fVar22;
      *(float *)(lVar21 + 0x420) = fVar22;
      if (bVar3 == 2 || uVar8 == 2) {
        *(undefined4 *)(lVar21 + 0xb0) = 0x55;
        if (bVar3 != 2 && uVar8 != 2) goto LAB_18003a56c;
        uVar11 = 0xd5;
      }
      else {
        *(undefined4 *)(lVar21 + 0xb0) =
             *(undefined4 *)
              (&DAT_1802310b0 +
              ((ulonglong)uVar10 | ((ulonglong)(uint)bVar3 | (ulonglong)uVar8 << 1) << 1) * 4);
LAB_18003a56c:
        uVar11 = *(undefined4 *)
                  (&DAT_1802310d0 +
                  ((ulonglong)uVar10 | ((ulonglong)(uint)bVar3 | (ulonglong)uVar8 << 1) << 1) * 4);
      }
      *(undefined4 *)(lVar21 + 0x3f0) = uVar11;
      lVar18 = 0x3f0;
      if (1 < (*(int *)(local_c0 + (longlong)(int)uVar12 * 4) + 0xfbU & 0xff)) {
        lVar18 = 0xb0;
      }
      plVar9 = (longlong *)(lVar21 + lVar18);
      lStack_a8 = plVar9[1];
      local_b0 = *plVar9;
      local_98 = plVar9[3];
      local_a0 = plVar9[2];
      lStack_88 = plVar9[5];
      local_90 = plVar9[4];
      local_80 = (undefined4)plVar9[6];
      uVar8 = FUN_1800ed798(*(longlong *)(param_1 + 0xf6e0) + 0x1a30,&local_b0);
      uVar10 = *(uint *)(param_1 + 0xfa18 + (longlong)(int)uVar12 * 4);
      if (uVar10 != uVar8) {
        if (uVar10 != 0xffffffff) {
          lVar18 = *(longlong *)(param_1 + 0xf6e0);
          uVar2 = *(uint *)(lVar18 + 0x1a40);
          if (uVar2 != 0) {
            uVar15 = 0;
            uVar13 = uVar2;
            do {
              uVar17 = uVar13 + uVar15 >> 1;
              uVar19 = *(ulonglong *)(*(longlong *)(lVar18 + 0x1a38) + (ulonglong)uVar17 * 0x18);
              uVar6 = uVar17;
              if (uVar19 <= uVar10) {
                if (uVar10 <= uVar19) break;
                uVar15 = uVar17 + 1;
                uVar17 = uVar17 + 1;
                uVar6 = uVar13;
              }
              uVar13 = uVar6;
            } while (uVar13 != uVar15);
            if (((uVar17 != uVar2) &&
                (puVar16 = (ulonglong *)(*(longlong *)(lVar18 + 0x1a38) + (ulonglong)uVar17 * 0x18),
                *puVar16 == (ulonglong)uVar10)) &&
               (puVar16 = puVar16 + 2, puVar16 != (ulonglong *)0x0)) {
              *(undefined1 *)(*puVar16 + 0x20) = 0;
            }
          }
        }
        *(uint *)(param_1 + 0xfa18 + (longlong)(int)uVar12 * 4) = uVar8;
      }
      lVar18 = *(longlong *)(*(longlong *)(param_1 + 0xf6e0) + 0x1948);
      plVar9 = *(longlong **)(*(longlong *)(lVar18 + 0x50) + (ulonglong)(uVar8 >> 0x10) * 0x10);
      (**(code **)(*plVar9 + 0x48))(plVar9,&local_d0);
      local_d0 = local_d0 + (ulonglong)(*(int *)(lVar18 + 0x20) * (uVar8 & 0xffff));
      *(longlong *)(param_1 + 0xfb20 + (longlong)(int)uVar12 * 8) = local_d0;
      *(byte *)(param_1 + 0xf684 + (longlong)((int)uVar12 >> 3)) =
           *(byte *)(param_1 + 0xf684 + (longlong)((int)uVar12 >> 3)) &
           ((byte)(1 << (ulonglong)(uVar12 & 7)) ^ 0xff);
      uVar12 = (uVar20 & 0xaaaaaaaa) >> 1 | (uVar20 & 0x55555555) << 1;
      uVar12 = (uVar12 & 0xcccccccc) >> 2 | (uVar12 & 0x33333333) << 2;
      uVar12 = (uVar12 & 0xf0f0f0f0) >> 4 | (uVar12 & 0xf0f0f0f) << 4;
      uVar12 = (uVar12 & 0xff00ff00) >> 8 | (uVar12 & 0xff00ff) << 8;
      lVar21 = LZCOUNT(uVar12 >> 0x10 | uVar12 << 0x10);
      *(undefined1 *)(param_1 + 0x10190) = 1;
      uVar12 = (uint)lVar21;
      if ((1 - (uVar12 >> 5) & 0xff) == 0) {
        lVar21 = 0xffffffff;
      }
      else {
        *(byte *)((longlong)&local_e0 + (longlong)((int)uVar12 >> 3)) =
             *(byte *)((longlong)&local_e0 + (longlong)((int)uVar12 >> 3)) &
             ((byte)(1 << (ulonglong)(uVar12 & 7)) ^ 0xff);
        uVar20 = local_e0;
      }
    } while ((int)lVar21 != -1);
    cVar14 = '\x01';
    lVar18 = local_b8;
    uVar12 = local_dc;
    uVar11 = uStack_d8;
  }
  lVar21 = 0x10140;
  if (*(int *)(param_1 + 0x10118) != 0) {
    lVar21 = 0x10118;
  }
  uVar20 = *(uint *)(param_1 + lVar21);
  local_e0 = (1 << (ulonglong)(uVar20 & 0x1f)) - 1U & *(uint *)(lVar18 + 0x36bc);
  uVar10 = (local_e0 & 0xaaaaaaaa) >> 1 | (local_e0 & 0x55555555) << 1;
  uVar10 = (uVar10 & 0xcccccccc) >> 2 | (uVar10 & 0x33333333) << 2;
  uVar10 = (uVar10 & 0xf0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f) << 4;
  uVar10 = (uVar10 & 0xff00ff00) >> 8 | (uVar10 & 0xff00ff) << 8;
  lVar18 = LZCOUNT(uVar10 >> 0x10 | uVar10 << 0x10);
  uVar10 = (uint)lVar18;
  if ((1 - (uVar10 >> 5) & 0xff) == 0) {
    lVar18 = 0xffffffff;
  }
  else {
    *(byte *)((longlong)&local_e0 + (longlong)((int)uVar10 >> 3)) =
         *(byte *)((longlong)&local_e0 + (longlong)((int)uVar10 >> 3)) &
         ((byte)(1 << (ulonglong)(uVar10 & 7)) ^ 0xff);
  }
  if ((int)lVar18 == -1) {
    if ((cVar14 == '\0') && ((uVar12 & 1) == 0)) {
      return uVar11;
    }
  }
  else {
    local_b8 = param_1 + 0x86c;
    local_c0 = param_1 + 0x840;
    uVar12 = local_e0;
    local_dc = uVar20;
    uStack_d8 = uVar11;
    do {
      uVar20 = (uint)lVar18;
      lVar18 = param_1 + (longlong)(int)uVar20 * 8;
      if (*(uint *)(lVar18 + 0x81c) < (uint)*(byte *)(lVar18 + 0x81b)) {
        fVar22 = (float)*(byte *)(lVar18 + 0x81b);
      }
      else {
        fVar22 = (float)*(uint *)(lVar18 + 0x81c);
      }
      lVar21 = (longlong)(int)uVar20 * 0x34;
      *(float *)(local_b8 + lVar21) = fVar22;
      bVar3 = *(byte *)(lVar18 + 0x819);
      bVar4 = *(byte *)(lVar18 + 0x81a);
      bVar5 = *(byte *)(lVar18 + 0x818);
      *(undefined4 *)(param_1 + lVar21 + 0x870) = 0x7f7fffff;
      if (bVar3 == 2 || bVar4 == 2) {
        uVar11 = 0;
      }
      else {
        uVar11 = *(undefined4 *)
                  (&DAT_1802310b0 +
                  ((ulonglong)bVar5 | ((ulonglong)(uint)bVar3 | (ulonglong)(uint)bVar4 << 1) << 1) *
                  4);
      }
      *(undefined4 *)(param_1 + lVar21 + 0x840) = uVar11;
      plVar9 = (longlong *)(lVar21 + local_c0);
      lStack_a8 = plVar9[1];
      local_b0 = *plVar9;
      local_98 = plVar9[3];
      local_a0 = plVar9[2];
      lStack_88 = plVar9[5];
      local_90 = plVar9[4];
      local_80 = (undefined4)plVar9[6];
      uVar8 = FUN_1800ed798(*(longlong *)(param_1 + 0xf6e0) + 0x1a30,&local_b0);
      uVar10 = *(uint *)(param_1 + 0xfbc0 + (longlong)(int)uVar20 * 4);
      if (uVar10 != uVar8) {
        if (uVar10 != 0xffffffff) {
          lVar18 = *(longlong *)(param_1 + 0xf6e0);
          uVar2 = *(uint *)(lVar18 + 0x1a40);
          if (uVar2 != 0) {
            uVar15 = 0;
            uVar13 = uVar2;
            do {
              uVar17 = uVar13 + uVar15 >> 1;
              uVar19 = *(ulonglong *)(*(longlong *)(lVar18 + 0x1a38) + (ulonglong)uVar17 * 0x18);
              uVar6 = uVar17;
              if (uVar19 <= uVar10) {
                if (uVar10 <= uVar19) break;
                uVar15 = uVar17 + 1;
                uVar17 = uVar17 + 1;
                uVar6 = uVar13;
              }
              uVar13 = uVar6;
            } while (uVar13 != uVar15);
            if (((uVar17 != uVar2) &&
                (puVar16 = (ulonglong *)(*(longlong *)(lVar18 + 0x1a38) + (ulonglong)uVar17 * 0x18),
                *puVar16 == (ulonglong)uVar10)) &&
               (puVar16 = puVar16 + 2, puVar16 != (ulonglong *)0x0)) {
              *(undefined1 *)(*puVar16 + 0x20) = 0;
            }
          }
        }
        *(uint *)(param_1 + 0xfbc0 + (longlong)(int)uVar20 * 4) = uVar8;
      }
      lVar18 = *(longlong *)(*(longlong *)(param_1 + 0xf6e0) + 0x1948);
      plVar9 = *(longlong **)(*(longlong *)(lVar18 + 0x50) + (ulonglong)(uVar8 >> 0x10) * 0x10);
      (**(code **)(*plVar9 + 0x48))(plVar9,&local_d0);
      local_d0 = local_d0 + (ulonglong)(*(int *)(lVar18 + 0x20) * (uVar8 & 0xffff));
      *(longlong *)(param_1 + 0xfc00 + (longlong)(int)uVar20 * 8) = local_d0;
      *(byte *)(param_1 + 0xf6bc + (longlong)((int)uVar20 >> 3)) =
           *(byte *)(param_1 + 0xf6bc + (longlong)((int)uVar20 >> 3)) &
           ((byte)(1 << (ulonglong)(uVar20 & 7)) ^ 0xff);
      uVar20 = (uVar12 & 0xaaaaaaaa) >> 1 | (uVar12 & 0x55555555) << 1;
      uVar20 = (uVar20 & 0xcccccccc) >> 2 | (uVar20 & 0x33333333) << 2;
      uVar20 = (uVar20 & 0xf0f0f0f0) >> 4 | (uVar20 & 0xf0f0f0f) << 4;
      uVar20 = (uVar20 & 0xff00ff00) >> 8 | (uVar20 & 0xff00ff) << 8;
      lVar18 = LZCOUNT(uVar20 >> 0x10 | uVar20 << 0x10);
      *(undefined1 *)(param_1 + 0x10190) = 1;
      uVar20 = (uint)lVar18;
      if ((1 - (uVar20 >> 5) & 0xff) == 0) {
        lVar18 = 0xffffffff;
      }
      else {
        *(byte *)((longlong)&local_e0 + (longlong)((int)uVar20 >> 3)) =
             *(byte *)((longlong)&local_e0 + (longlong)((int)uVar20 >> 3)) &
             ((byte)(1 << (ulonglong)(uVar20 & 7)) ^ 0xff);
        uVar12 = local_e0;
      }
      uVar11 = uStack_d8;
      uVar20 = local_dc;
    } while ((int)lVar18 != -1);
  }
  lVar21 = local_70;
  lVar18 = local_c8;
  iVar1 = *(int *)(local_70 + 0x168) + uVar20;
  if (iVar1 != 0) {
    uVar19 = FUN_1800f2c40(*(undefined8 *)(local_c8 + 0x7708),iVar1,
                           *(undefined8 *)
                            (*(longlong *)(*(longlong *)(param_1 + 0xf6e0) + 0x1500) + 0x18),
                           *(undefined8 *)
                            (*(longlong *)(*(longlong *)(param_1 + 0xf6e0) + 0x1508) + 0xb78),
                           &local_b0);
    if ((uVar19 & 1) == 0) {
      uVar11 = 0;
    }
    else {
      local_dc = *(uint *)(lVar21 + 0x168);
      if (local_dc != 0) {
        plVar9 = (longlong *)**(undefined8 **)(lVar18 + 0x76e8);
        (**(code **)(*plVar9 + 0xb8))
                  (plVar9,1,&lStack_a8,&local_dc,local_dc,param_1 + 0xfb20,&DAT_1802342b0,1);
        *(longlong *)(lVar18 + 0x79d8) = local_b0;
      }
      lVar18 = local_c8;
      if (uVar20 != 0) {
        uVar12 = *(int *)(local_70 + 0x168) * (int)local_98;
        local_b0 = local_b0 + (ulonglong)uVar12;
        lStack_a8 = lStack_a8 + (ulonglong)uVar12;
        local_dc = uVar20;
        (**(code **)(*(longlong *)**(undefined8 **)(local_c8 + 0x76e8) + 0xb8))
                  ((longlong *)**(undefined8 **)(local_c8 + 0x76e8),1,&lStack_a8,&local_dc,uVar20,
                   param_1 + 0xfc00,&DAT_1802342b0,1);
        *(longlong *)(lVar18 + 0x79f0) = local_b0;
      }
      lVar18 = *(longlong *)(local_c8 + 0x7f20);
      *(longlong *)(local_c8 + 0x7f20) = local_a0;
      *(byte *)(param_1 + 0x10191) = local_a0 != lVar18 | *(byte *)(param_1 + 0x10191);
      *(undefined1 *)(param_1 + 0x1018a) = 1;
    }
    *(undefined1 *)(param_1 + 0x10192) = 1;
  }
  *(undefined1 *)(param_1 + 0x10190) = 0;
  return uVar11;
}

