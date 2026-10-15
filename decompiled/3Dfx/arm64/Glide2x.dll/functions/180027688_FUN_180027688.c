/*
 * FUN_180027688 at 180027688
 * undefined __cdecl FUN_180027688(longlong param_1, ulonglong param_2, uint param_3, uint param_4, undefined4 param_5, uint param_6, uint param_7, undefined4 param_8, longlong param_9, int param_10, byte param_11)
 * Address ranges: 180027688-180027e6b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180027688(longlong param_1,ulonglong param_2,uint param_3,uint param_4,undefined4 param_5,
                  uint param_6,uint param_7,undefined4 param_8,longlong param_9,int param_10,
                  byte param_11)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  char cVar6;
  char cVar7;
  uint uVar8;
  bool bVar9;
  int iVar10;
  longlong lVar11;
  undefined8 uVar12;
  ulonglong uVar13;
  longlong *plVar14;
  uint uVar15;
  ulonglong *puVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  float fVar20;
  longlong lVar21;
  undefined8 *puVar22;
  uint uVar23;
  longlong lVar24;
  undefined8 *puVar26;
  float fVar27;
  uint uVar28;
  undefined1 auVar29 [16];
  undefined8 local_128;
  float local_120;
  float local_11c;
  uint local_118;
  undefined4 uStack_114;
  uint local_110;
  ulonglong local_108;
  undefined8 local_100;
  float local_f8;
  float fStack_f4;
  uint local_f0;
  undefined4 local_ec;
  ulonglong local_e8;
  ulonglong local_e0;
  ulonglong local_d8 [2];
  undefined8 local_c8;
  float local_c0;
  float fStack_bc;
  undefined8 local_b0;
  undefined4 local_a8;
  undefined8 local_a0;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 local_90;
  undefined4 uStack_8c;
  ulonglong local_88;
  ulonglong local_80;
  undefined4 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  ulonglong uVar25;
  
  lVar11 = *(longlong *)(param_1 + 0x140);
  local_108 = CONCAT44(local_108._4_4_,param_5);
  local_d8[0] = CONCAT44(local_d8[0]._4_4_,param_8);
  lVar24 = *(longlong *)(lVar11 + 0x31c0);
  cVar6 = *(char *)(*(longlong *)(lVar11 + 0x31b0) + (ulonglong)*(uint *)(lVar11 + 0x31b8) * 0x20 +
                   0x6e8);
  lVar21 = param_1 + (param_2 & 0xffffffff) * 0x170;
  local_110 = param_7;
  bVar9 = FUN_1800195f0(lVar11);
  *(bool *)(*(longlong *)(param_1 + 0x140) + 0x32d8) = bVar9;
  cVar7 = *(char *)(lVar21 + 0x1dc);
  lVar11 = 0x150;
  if (cVar7 != '\0') {
    lVar11 = 0x154;
  }
  *(undefined4 *)(*(longlong *)(param_1 + 0x140) + 0x2c94) = *(undefined4 *)(lVar11 + lVar21);
  local_100 = 0;
  local_f0 = 0;
  fStack_f4 = (float)*(uint *)(lVar21 + 0x16c);
  local_f8 = (float)*(uint *)(lVar21 + 0x168);
  local_ec = 0x3f800000;
  FUN_18004c070(*(longlong *)(lVar24 + 0x1508),1,(longlong)&local_100);
  local_e0 = *(undefined8 *)(lVar21 + 0x168);
  local_e8 = 0;
  FUN_18004bfa0(*(longlong *)(lVar24 + 0x1508),1,(longlong)&local_e8);
  *(float *)(*(longlong *)(param_1 + 0x140) + 0x2bf0) = (float)*(uint *)(lVar21 + 0x168);
  *(float *)(*(longlong *)(param_1 + 0x140) + 0x2bf4) = (float)*(uint *)(lVar21 + 0x16c);
  uVar12 = FUN_18001b588((longlong *)(lVar24 + 0x1978),(int *)&DAT_180061c10);
  *(undefined8 *)(*(longlong *)(param_1 + 0x140) + 0x3260) = uVar12;
  uVar12 = FUN_18001b810((longlong *)(lVar24 + 0x1960),(int *)&DAT_180061b70);
  *(undefined8 *)(*(longlong *)(param_1 + 0x140) + 0x3278) = uVar12;
  uVar12 = FUN_18001b350((longlong *)(lVar24 + 0x19a8),(uint *)&DAT_180061ba8);
  *(undefined8 *)(*(longlong *)(param_1 + 0x140) + 0x3270) = uVar12;
  *(undefined1 *)(*(longlong *)(param_1 + 0x140) + 0x32da) = 1;
  if (*(ulonglong *)(lVar21 + 0x220) != *(ulonglong *)(lVar21 + 0x228)) {
    FUN_18004b098(*(ulonglong *)(lVar24 + 0x1508),*(ulonglong *)(lVar21 + 0x228),0,0,0x1000);
    FUN_18004b098(*(ulonglong *)(lVar24 + 0x1508),*(ulonglong *)(lVar21 + 0x220),0,0,0x2000);
    FUN_18004c168(*(longlong *)(lVar24 + 0x1508),*(undefined8 *)(lVar21 + 0x228),0,
                  *(undefined8 *)(lVar21 + 0x220),0,*(undefined4 *)(lVar21 + 0x14c));
  }
  uVar17 = *(uint *)(lVar21 + 0x16c);
  local_c0 = (float)(local_108 & 0xffffffff);
  local_120 = (float)*(uint *)(lVar21 + 0x170) / (float)*(uint *)(lVar21 + 0x168);
  bVar9 = *(int *)(lVar21 + 0x1b8) == 1;
  uVar15 = param_4;
  if (bVar9) {
    uVar15 = uVar17 - param_4;
  }
  local_11c = (float)*(uint *)(lVar21 + 0x174) / (float)uVar17;
  local_c8 = CONCAT44((float)param_4,(float)param_3);
  fStack_bc = (float)param_6;
  if (bVar9) {
    param_6 = uVar17 - param_6;
  }
  local_128 = CONCAT44((float)uVar15 * local_11c,(float)param_3 * local_120);
  bVar9 = cVar7 == '\0';
  lVar11 = 0x2a4;
  if (bVar9) {
    lVar11 = 0x274;
  }
  local_120 = local_c0 * local_120;
  lVar2 = 0x2ac;
  if (bVar9) {
    lVar2 = 0x27c;
  }
  lVar3 = 0x288;
  if (bVar9) {
    lVar3 = 600;
  }
  lVar4 = 0x290;
  if (bVar9) {
    lVar4 = 0x260;
  }
  local_11c = (float)param_6 * local_11c;
  lVar5 = 0x598;
  if (*(char *)(lVar21 + 400) != '\0') {
    lVar5 = 0x5a0;
  }
  FUN_180025640(param_1,(float *)&local_c8,(float *)&local_128,*(undefined8 *)(param_1 + lVar5),
                *(ulonglong *)(lVar21 + 0x228),0,*(ulonglong *)(lVar21 + lVar3),
                *(ulonglong *)(lVar21 + lVar4),0,*(undefined4 *)(lVar21 + lVar2),
                *(undefined4 *)(lVar21 + lVar2),*(undefined4 *)(lVar21 + 0x250),1,
                *(uint *)(lVar21 + 0x230),*(uint *)(lVar21 + 0x248),*(uint *)(lVar21 + lVar11),
                *(uint *)(lVar21 + lVar11) + 1,0xffffffff,1,0,0);
  if (cVar6 != '\0' && param_9 != 0) {
    FUN_18004b098(*(ulonglong *)(lVar24 + 0x1508),*(ulonglong *)(lVar21 + lVar3),0,0,0);
    lVar11 = FUN_18004b168(*(longlong *)
                            (*(longlong *)(*(longlong *)(param_1 + 0x140) + 0x31c0) + 0x1508));
    *(longlong *)(lVar21 + 0x218) = lVar11;
  }
  FUN_18001a168(*(longlong *)(param_1 + 0x140));
  *(undefined1 *)(*(longlong *)(param_1 + 0x140) + 0x2be1) = 1;
  *(undefined1 *)(*(longlong *)(param_1 + 0x140) + 0x2be0) = 1;
  *(undefined1 *)(*(longlong *)(param_1 + 0x140) + 0x2be2) = 1;
  *(undefined1 *)(*(longlong *)(param_1 + 0x140) + 0x2be3) = 1;
  *(undefined1 *)(*(longlong *)(param_1 + 0x140) + 0x3171) = 1;
  uVar15 = *(uint *)(lVar21 + 0x168);
  uVar17 = *(uint *)(lVar21 + 0x16c);
  uVar18 = local_110;
  uVar19 = (uint)local_d8[0];
  auVar29 = FUN_180029b58(local_110,(uint)local_d8[0],uVar15,uVar17,param_10,(uint)param_11);
  local_108 = auVar29._0_8_;
  local_f8 = 0.0;
  local_100 = 0;
  local_ec = 1;
  uVar25 = local_108 >> 0x20;
  uVar23 = auVar29._4_4_;
  uVar28 = auVar29._12_4_;
  *(uint *)(lVar21 + 0x18c) = *(int *)(lVar21 + 0x18c) + (uVar28 - uVar23 >> 4);
  iVar1 = (uint)param_11 * 2 + 2;
  uVar8 = iVar1 * param_10;
  fVar27 = auVar29._8_4_;
  local_f0 = uVar17;
  if ((uVar18 < uVar19) && (local_100 = (ulonglong)uVar23 << 0x20, local_f0 = uVar28, fVar27 != 0.0)
     ) {
    local_f0 = uVar28 + 1;
  }
  lVar11 = 0x288;
  if (param_11 == 0) {
    lVar11 = 600;
  }
  lVar24 = *(longlong *)(*(longlong *)(param_1 + 0x140) + 0x31b0);
  fStack_f4 = (float)uVar15;
  if (((*(char *)(lVar24 + (ulonglong)*(uint *)(*(longlong *)(param_1 + 0x140) + 0x31b8) * 0x20 +
                 0x6e8) == '\0') || (param_9 == 0)) ||
     (uVar13 = FUN_180046768(*(longlong **)(lVar24 + 0x1b500),*(ulonglong *)(lVar11 + lVar21)),
     (uVar13 & 1) == 0)) {
    local_a8 = 1;
    local_80 = *(ulonglong *)(lVar11 + lVar21);
    local_78 = 0;
    bVar9 = param_11 == 0;
    local_128 = 0x298;
    if (bVar9) {
      local_128 = 0x268;
    }
    local_a0 = 0;
    local_b0 = *(undefined8 *)(lVar21 + local_128);
    uStack_68 = 0;
    uStack_58 = 0;
    uStack_60 = 0;
    lVar11 = 0x2ac;
    if (bVar9) {
      lVar11 = 0x27c;
    }
    local_70 = 0;
    _local_90 = CONCAT44(1,*(undefined4 *)(lVar21 + 0x16c));
    _uStack_98 = CONCAT44(*(undefined4 *)(lVar21 + 0x168),*(undefined4 *)(lVar21 + lVar11));
    lVar11 = 0x2b0;
    if (bVar9) {
      lVar11 = 0x280;
    }
    local_88 = (ulonglong)*(uint *)(lVar21 + lVar11);
    local_d8[0] = local_128;
    FUN_18004b098(*(ulonglong *)(*(longlong *)(*(longlong *)(param_1 + 0x140) + 0x31c0) + 0x1508),
                  local_80,0,0,0x800);
    FUN_18004b098(*(ulonglong *)(*(longlong *)(*(longlong *)(param_1 + 0x140) + 0x31c0) + 0x1508),
                  *(ulonglong *)(lVar21 + local_d8[0]),0,1,0x400);
    FUN_18004c2b0(*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x140) + 0x31c0) + 0x1508),
                  &local_b0,0,local_100._4_4_,0,&local_80,&local_100);
    FUN_18004b098(*(ulonglong *)(*(longlong *)(*(longlong *)(param_1 + 0x140) + 0x31c0) + 0x1508),
                  *(ulonglong *)(lVar21 + local_d8[0]),0,1,0);
    lVar24 = FUN_18004b168(*(longlong *)
                            (*(longlong *)(*(longlong *)(param_1 + 0x140) + 0x31c0) + 0x1508));
    *(longlong *)(lVar21 + 0x218) = lVar24;
    FUN_180026480(param_1,lVar21 + 0x148,param_11);
    if (param_9 == 0) {
      return;
    }
    local_c8 = 0;
    local_e8 = (ulonglong)(uint)(*(int *)(lVar21 + lVar11) * local_100._4_4_);
    local_e0 = (ulonglong)(*(int *)(lVar21 + lVar11) * local_f0);
    iVar10 = (**(code **)(**(longlong **)(lVar21 + local_d8[0]) + 0x40))
                       (*(longlong **)(lVar21 + local_d8[0]),0,&local_e8,&local_c8);
    if (iVar10 < 0) {
      return;
    }
    puVar22 = (undefined8 *)(local_c8 + (ulonglong)(*(int *)(lVar21 + lVar11) * uVar23));
    if ((int)local_108 != 0) {
      thunk_FUN_180001218((undefined8 *)(param_9 + (ulonglong)local_110),
                          (undefined8 *)
                          ((longlong)puVar22 + (ulonglong)(uint)((int)local_108 * iVar1)),
                          (ulonglong)(uint)((*(int *)(lVar21 + 0x168) - (int)local_108) * iVar1));
      uVar25 = (ulonglong)(uVar23 + 1);
      puVar22 = (undefined8 *)((longlong)puVar22 + (ulonglong)*(uint *)(lVar21 + lVar11));
    }
    puVar26 = (undefined8 *)(param_9 + (ulonglong)((uint)uVar25 * uVar8));
    if ((uint)uVar25 <= uVar28) {
      lVar11 = 0x2b0;
      if (param_11 == 0) {
        lVar11 = 0x280;
      }
      do {
        fVar20 = fVar27;
        if ((uint)uVar25 != uVar28) {
          fVar20 = *(float *)(lVar21 + 0x168);
        }
        thunk_FUN_180001218(puVar26,puVar22,(ulonglong)(uint)(iVar1 * (int)fVar20));
        uVar15 = (uint)uVar25 + 1;
        uVar25 = (ulonglong)uVar15;
        puVar26 = (undefined8 *)((longlong)puVar26 + (ulonglong)uVar8);
        puVar22 = (undefined8 *)((longlong)puVar22 + (ulonglong)*(uint *)(lVar11 + lVar21));
      } while (uVar15 <= uVar28);
    }
    local_d8[0] = 0;
    local_d8[1] = 0;
    puVar16 = local_d8;
    plVar14 = *(longlong **)(lVar21 + local_128);
  }
  else {
    FUN_180026480(param_1,lVar21 + 0x148,param_11);
    iVar10 = (**(code **)(**(longlong **)(lVar11 + lVar21) + 0x40))
                       (*(longlong **)(lVar11 + lVar21),0,0,0);
    if (iVar10 < 0) {
      return;
    }
    uVar15 = uVar23;
    if ((int)local_108 != 0) {
      local_128 = CONCAT44(uVar23,(int)local_108);
      local_120 = 0.0;
      local_11c = fVar27;
      if (uVar28 != uVar23) {
        local_11c = *(float *)(lVar21 + 0x168);
      }
      uVar15 = uVar23 + 1;
      uStack_114 = 1;
      local_118 = uVar15;
      (**(code **)(**(longlong **)(lVar11 + lVar21) + 0x68))
                (*(longlong **)(lVar11 + lVar21),
                 (ulonglong)(uVar23 * uVar8) + (ulonglong)(uint)((int)local_108 * iVar1) + param_9,
                 uVar8,0,0,&local_128);
    }
    if (uVar15 <= uVar28) {
      local_11c = *(float *)(lVar21 + 0x168);
      local_128 = (ulonglong)uVar15 << 0x20;
      local_120 = 0.0;
      local_118 = uVar28;
      if (fVar27 == local_11c) {
        local_118 = uVar28 + 1;
      }
      uStack_114 = 1;
      (**(code **)(**(longlong **)(lVar11 + lVar21) + 0x68))
                (*(longlong **)(lVar11 + lVar21),param_9 + (ulonglong)(uVar15 * uVar8),uVar8,0,0,
                 &local_128);
      uVar15 = uVar28;
      if (((fVar27 != *(float *)(lVar21 + 0x168)) || (uVar15 = uVar28 + 1, uVar28 == uVar15)) &&
         (fVar27 != 0.0)) {
        local_118 = uVar28 + 1;
        uStack_114 = 1;
        local_128 = (ulonglong)uVar15 << 0x20;
        local_120 = 0.0;
        local_11c = fVar27;
        (**(code **)(**(longlong **)(lVar11 + lVar21) + 0x68))
                  (*(longlong **)(lVar11 + lVar21),param_9 + (ulonglong)(uVar15 * uVar8),uVar8,0,0,
                   &local_128);
      }
    }
    plVar14 = *(longlong **)(lVar11 + lVar21);
    local_e8 = 0;
    local_e0 = 0;
    puVar16 = &local_e8;
  }
  (**(code **)(*plVar14 + 0x48))(plVar14,0,puVar16);
  return;
}

