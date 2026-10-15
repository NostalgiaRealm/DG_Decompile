/*
 * FUN_1000beb8 at 1000beb8
 * undefined FUN_1000beb8(void)
 * Address ranges: 1000beb8-1000c34f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8
FUN_1000beb8(int param_1,undefined4 param_2,int param_3,int *param_4,undefined4 *param_5,
            uint param_6,undefined4 param_7,undefined4 param_8)

{
  uint *puVar1;
  uint *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  code *pcVar5;
  uint uVar6;
  int iVar7;
  undefined8 uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  uint uVar12;
  ulonglong uVar13;
  int iVar14;
  uint uVar15;
  ulonglong uVar16;
  code *extraout_w11;
  code *extraout_w11_00;
  code *extraout_w11_01;
  uint uVar17;
  uint uVar18;
  ulonglong uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined1 auVar22 [16];
  undefined8 local_d8;
  undefined4 local_d0;
  uint local_cc;
  uint local_c8;
  undefined4 uStack_c4;
  uint local_c0;
  uint uStack_bc;
  undefined4 local_b8;
  uint local_b0;
  uint local_ac;
  uint local_a4;
  uint local_a0;
  uint local_9c;
  int iStack_98;
  int *local_90;
  undefined4 *local_8c;
  undefined4 local_88;
  uint local_80;
  uint uStack_7c;
  uint local_78;
  uint uStack_74;
  undefined8 local_70;
  uint local_68;
  uint uStack_64;
  uint local_60 [8];
  
  pcVar5 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  local_90 = param_4;
  local_8c = param_5;
  local_88 = param_7;
  (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
  (*extraout_w11)(param_2,&local_c0);
  local_70 = 0;
  local_c0 = local_c0 >> (ulonglong)(param_6 & 0x1f);
  if (local_c0 == 0) {
    local_c0 = 1;
  }
  uVar18 = uStack_bc >> (ulonglong)(param_6 & 0x1f);
  if (uVar18 == 0) {
    uVar18 = 1;
  }
  local_68 = local_c0;
  uStack_64 = uVar18;
  (*(code *)PTR_FUN_100ba244)(&local_80,param_8,&local_70);
  uStack_c4 = 1;
  local_d8 = 0;
  local_d0 = 0;
  if ((local_a0 >> 6 & 1) == 0) {
    uVar18 = uVar18 - 1 | uVar18 - 1 >> 1;
    uVar12 = local_c0 - 1 | local_c0 - 1 >> 1;
    uVar18 = uVar18 | uVar18 >> 2;
    uVar12 = uVar12 | uVar12 >> 2;
    local_d8 = CONCAT44(uStack_7c,local_80);
    uVar18 = uVar18 | uVar18 >> 4;
    uVar12 = uVar12 | uVar12 >> 4;
    uVar18 = (uVar18 | uVar18 >> 8) + 1;
    local_c0 = (uVar12 | uVar12 >> 8) + 1;
    local_cc = local_78;
    local_c8 = uStack_74;
  }
  else {
    local_d8._0_4_ = 0;
    local_d8._4_4_ = 0;
    local_80 = (uint)local_d8;
    uStack_7c = local_d8._4_4_;
    local_cc = local_c0;
    local_c8 = uVar18;
  }
  uVar10 = (ulonglong)local_80;
  local_b8 = 1;
  uStack_bc = uVar18;
  if (param_3 != 0) {
    (*pcVar5)();
    (*extraout_w11_00)(param_3,local_60);
    uVar10 = local_d8 & 0xffffffff;
    local_b0 = local_60[0];
    uStack_7c = local_d8._4_4_;
  }
  uVar19 = (ulonglong)uStack_bc;
  uVar13 = (ulonglong)local_c0;
  uVar16 = (ulonglong)local_b0;
  puVar1 = (uint *)(param_1 + 0xd1ec);
  uVar12 = *puVar1;
  uVar18 = 0;
  uVar11 = ((ulonglong)
            (local_ac | (local_a4 | (local_a0 | (iStack_98 << 2 | local_9c >> 0x10) << 8) << 2) << 4
            ) & 0x1ffffff) << 7 | (uVar19 | uVar13 << 0x10) << 0x20 | uVar16;
  if (uVar12 != 0) {
    uVar15 = 0;
    uVar17 = uVar12;
    do {
      uVar18 = uVar17 + uVar15 >> 1;
      uVar9 = *(ulonglong *)(*(int *)(param_1 + 0xd1e4) + uVar18 * 0x40);
      uVar6 = uVar18;
      if (uVar9 <= uVar11) {
        if (uVar11 <= uVar9) break;
        uVar18 = uVar18 + 1;
        uVar15 = uVar18;
        uVar6 = uVar17;
      }
      uVar17 = uVar6;
    } while (uVar17 != uVar15);
    if ((uVar18 != uVar12) && (*(ulonglong *)(*(int *)(param_1 + 0xd1e4) + uVar18 * 0x40) == uVar11)
       ) goto LAB_1000c1cc;
  }
  puVar2 = (uint *)(param_1 + 0xd1e8);
  uVar17 = *puVar2;
  if (uVar12 == uVar17) {
    iVar14 = uVar17 << 7;
    if ((uVar17 & 0x7fffffff) >> 0x19 != 0) {
      iVar14 = -1;
    }
    iVar14 = FUN_100914b0(iVar14);
    if (iVar14 != 0) {
      uVar12 = 0;
      if (*puVar2 != 0) {
        do {
          puVar3 = (undefined8 *)(*(int *)(param_1 + 0xd1e4) + uVar12 * 0x40);
          puVar4 = (undefined8 *)(iVar14 + uVar12 * 0x40);
          uVar12 = uVar12 + 1;
          uVar21 = *puVar3;
          uVar20 = puVar3[3];
          uVar8 = puVar3[2];
          puVar4[1] = puVar3[1];
          *puVar4 = uVar21;
          puVar4[3] = uVar20;
          puVar4[2] = uVar8;
          uVar21 = puVar3[4];
          uVar20 = puVar3[7];
          uVar8 = puVar3[6];
          puVar4[5] = puVar3[5];
          puVar4[4] = uVar21;
          puVar4[7] = uVar20;
          puVar4[6] = uVar8;
        } while (uVar12 < *puVar2);
      }
      FUN_100914d0(*(undefined4 *)(param_1 + 0xd1e4));
      *(int *)(param_1 + 0xd1e4) = iVar14;
      *puVar2 = *puVar2 << 1;
    }
  }
  for (uVar12 = *puVar1; uVar18 < uVar12; uVar12 = uVar12 - 1) {
    puVar3 = (undefined8 *)(*(int *)(param_1 + 0xd1e4) + uVar12 * 0x40);
    puVar3[1] = puVar3[-7];
    *puVar3 = puVar3[-8];
    puVar3[3] = puVar3[-5];
    puVar3[2] = puVar3[-6];
    puVar3[5] = puVar3[-3];
    puVar3[4] = puVar3[-4];
    puVar3[7] = puVar3[-1];
    puVar3[6] = puVar3[-2];
  }
  FUN_100105c8(param_1 + 0xd1e4,uVar18,uVar11,&local_c0);
  uVar16 = (ulonglong)local_b0;
  uVar10 = local_d8 & 0xffffffff;
  *puVar1 = *puVar1 + 1;
  uVar13 = (ulonglong)local_c0;
  uVar19 = (ulonglong)uStack_bc;
  uStack_7c = local_d8._4_4_;
LAB_1000c1cc:
  uVar11 = (ulonglong)uStack_7c;
  iVar14 = *(int *)(param_1 + 0xd1e4);
  uVar8 = *(undefined8 *)(iVar14 + uVar18 * 0x40 + 0x34);
  iVar7 = (int)uVar8;
  if (iVar7 == 0) {
    uVar18 = *puVar1;
    if (uVar18 != 0) {
      uVar16 = ((ulonglong)
                (local_ac |
                (local_a4 | (local_a0 | (iStack_98 << 2 | local_9c >> 0x10) << 8) << 2) << 4) &
               0x1ffffff) << 7 | (uVar19 | uVar13 << 0x10) << 0x20 | uVar16;
      uVar12 = 0;
      uVar17 = uVar18;
      do {
        uVar15 = uVar12 + uVar17 >> 1;
        uVar10 = *(ulonglong *)(iVar14 + uVar15 * 0x40);
        uVar6 = uVar15;
        if (uVar10 <= uVar16) {
          if (uVar16 <= uVar10) break;
          uVar12 = uVar15 + 1;
          uVar15 = uVar12;
          uVar6 = uVar17;
        }
        uVar17 = uVar6;
      } while (uVar17 != uVar12);
      if ((uVar15 != uVar18) && (*(ulonglong *)(iVar14 + uVar15 * 0x40) == uVar16)) {
        uVar15 = uVar15 + 1;
        if (uVar15 < uVar18) {
          do {
            puVar3 = (undefined8 *)(*(int *)(param_1 + 0xd1e4) + uVar15 * 0x40);
            uVar15 = uVar15 + 1;
            puVar3[-7] = puVar3[1];
            puVar3[-8] = *puVar3;
            puVar3[-5] = puVar3[3];
            puVar3[-6] = puVar3[2];
            puVar3[-3] = puVar3[5];
            puVar3[-4] = puVar3[4];
            puVar3[-1] = puVar3[7];
            puVar3[-2] = puVar3[6];
          } while (uVar15 < *puVar1);
        }
        *puVar1 = *puVar1 - 1;
      }
    }
    uVar8 = 0;
  }
  else {
    if (local_90 != (int *)0x0) {
      *local_90 = iVar7;
    }
    if (local_8c != (undefined4 *)0x0) {
      *local_8c = (int)((ulonglong)uVar8 >> 0x20);
    }
    auVar22 = (*pcVar5)();
    (*extraout_w11_01)(auVar22._0_8_ & 0xffffffff,auVar22._8_8_ & 0xffffffff,0,uVar10 & 0xffffffff,
                       uVar11 & 0xffffffff,0,param_2,local_88,&local_d8);
    uVar8 = 1;
  }
  return uVar8;
}

