/*
 * FUN_10021680 at 10021680
 * undefined FUN_10021680(void)
 * Address ranges: 10021680-10021bd3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4
FUN_10021680(int param_1,int param_2,int *param_3,int param_4,int param_5,uint param_6,uint param_7,
            int param_8,int param_9,undefined4 param_10,uint param_11,undefined4 param_12,
            uint param_13,undefined4 param_14,undefined4 param_15,undefined4 param_16,
            undefined4 param_17,undefined4 param_18,undefined4 param_19)

{
  uint *puVar1;
  int *piVar2;
  int *piVar3;
  uint *puVar4;
  int iVar5;
  uint uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  byte *pbVar9;
  int iVar10;
  uint uVar11;
  int *piVar12;
  ulonglong uVar13;
  code *extraout_w11;
  uint uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined1 auVar18 [16];
  int local_d0;
  int local_cc;
  int *piStack_c8;
  int local_c4;
  int local_c0;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 local_50;
  int local_48;
  undefined1 local_44;
  undefined1 local_43;
  
  if (param_3 == (int *)0x0) {
    return param_15;
  }
  if (2 < param_2 - 1U) {
    return param_15;
  }
  if (*(char *)(param_1 + 0x220) != '\0') {
    return param_17;
  }
  local_c0 = FUN_10020b40(param_1);
  if (local_c0 == -1) {
    return param_19;
  }
  if (param_2 != 3) {
    param_6 = param_7;
    param_4 = param_5;
  }
  iVar10 = *(int *)(*(int *)(param_1 + 0x210) + local_c0 * 4);
  if (param_2 != 3) {
    param_11 = param_13;
    param_8 = param_9;
  }
  uVar13 = 0;
  if (param_2 == 1) {
    do {
      uVar11 = (uint)uVar13;
      if (*(char *)(*(int *)(param_1 + 4) + uVar11 * 8) != '\0') {
        *(undefined4 *)(iVar10 + uVar11 * 4 + 8) = *(undefined4 *)(param_1 + uVar11 * 4 + 0x28c);
        pbVar9 = (byte *)(((uint)(uVar13 >> 3) & 3) + iVar10 + ((uVar11 >> 5) + 0x24cd) * 4);
        *pbVar9 = *pbVar9 | (byte)(1 << (ulonglong)(uVar11 & 7));
      }
      uVar13 = (ulonglong)(uVar11 + 1);
    } while (uVar11 + 1 < 0xae);
    uVar11 = 0;
    do {
      uVar14 = 0;
      do {
        if (*(char *)(*(int *)(param_1 + 8) + uVar11 * 0xc) != '\0') {
          iVar5 = uVar14 * 0x1d + uVar11;
          *(undefined4 *)(iVar10 + iVar5 * 4 + 0x2c0) = *(undefined4 *)(param_1 + iVar5 * 4 + 0x544)
          ;
          uVar6 = uVar14 * 0x1d + uVar11;
          pbVar9 = (byte *)((uVar6 >> 3 & 3) + iVar10 + ((uVar6 >> 5) + 0x24d3) * 4);
          *pbVar9 = *pbVar9 | (byte)(1 << (ulonglong)(uVar6 & 7));
        }
        uVar14 = uVar14 + 1;
      } while (uVar14 < 8);
      uVar11 = uVar11 + 1;
    } while (uVar11 < 0x1d);
    uVar17 = *(undefined8 *)(param_1 + 0x104);
    uVar16 = *(undefined8 *)(param_1 + 0x11c);
    uVar15 = *(undefined8 *)(param_1 + 0x114);
    *(undefined8 *)(iVar10 + 0x48e8) = *(undefined8 *)(param_1 + 0x10c);
    *(undefined8 *)(iVar10 + 0x48e0) = uVar17;
    *(undefined8 *)(iVar10 + 0x48f8) = uVar16;
    *(undefined8 *)(iVar10 + 0x48f0) = uVar15;
    uVar17 = *(undefined8 *)(param_1 + 0x124);
    uVar16 = *(undefined8 *)(param_1 + 0x13c);
    uVar15 = *(undefined8 *)(param_1 + 0x134);
    *(undefined8 *)(iVar10 + 0x4908) = *(undefined8 *)(param_1 + 300);
    *(undefined8 *)(iVar10 + 0x4900) = uVar17;
    *(undefined8 *)(iVar10 + 0x4918) = uVar16;
    *(undefined8 *)(iVar10 + 0x4910) = uVar15;
    *(undefined4 *)(iVar10 + 0x4920) = *(undefined4 *)(param_1 + 0x144);
    *(undefined1 *)(iVar10 + 0x9399) = 1;
  }
  else {
    if (param_6 != 0) {
      do {
        puVar1 = (uint *)(param_4 + (int)uVar13 * 4);
        uVar11 = (int)uVar13 + 1;
        uVar13 = (ulonglong)uVar11;
        uVar14 = *puVar1;
        *(undefined4 *)(iVar10 + 8 + uVar14 * 4) = *(undefined4 *)(param_1 + 0x28c + uVar14 * 4);
        uVar14 = *puVar1;
        pbVar9 = (byte *)((uVar14 >> 3 & 3) + iVar10 + ((uVar14 >> 5) + 0x24cd) * 4);
        *pbVar9 = *pbVar9 | (byte)(1 << (ulonglong)(uVar14 & 7));
      } while (uVar11 < param_6);
    }
    uVar11 = 0;
    do {
      uVar14 = 0;
      if (param_11 != 0) {
        do {
          piVar2 = (int *)(param_8 + uVar14 * 4);
          uVar14 = uVar14 + 1;
          iVar5 = *piVar2;
          *(undefined4 *)(iVar10 + uVar11 * 0x74 + 0x2c0 + iVar5 * 4) =
               *(undefined4 *)(param_1 + uVar11 * 0x74 + 0x544 + iVar5 * 4);
          uVar6 = *piVar2 + uVar11 * 0x1d;
          pbVar9 = (byte *)((uVar6 >> 3 & 3) + iVar10 + ((uVar6 >> 5) + 0x24d3) * 4);
          *pbVar9 = *pbVar9 | (byte)(1 << (ulonglong)(uVar6 & 7));
        } while (uVar14 < param_11);
      }
      uVar11 = uVar11 + 1;
    } while (uVar11 < 8);
    if (param_2 != 3) goto LAB_10021b4c;
  }
  puVar1 = (uint *)(param_1 + 0x150);
  uVar14 = *puVar1;
  uVar11 = 0;
  if (uVar14 != 0) {
    piVar2 = (int *)(param_1 + 0x174);
    piVar3 = (int *)(param_1 + 0x14c);
    puVar4 = (uint *)(param_1 + 0x178);
    iVar5 = iVar10 + 0x499c;
    local_cc = param_1;
    piStack_c8 = param_3;
    local_c4 = iVar10;
    if (uVar14 == 0) {
      piVar12 = (int *)0x0;
      goto LAB_100219ac;
    }
    do {
      piVar12 = (int *)(*piVar3 + uVar11 * 0x78 + 8);
LAB_100219ac:
      if (piVar12 != (int *)0x0) {
        local_d0 = *piVar12;
        uStack_a8 = *(undefined8 *)(piVar12 + 3);
        local_b0 = *(undefined8 *)(piVar12 + 1);
        uStack_98 = *(undefined8 *)(piVar12 + 7);
        uStack_a0 = *(undefined8 *)(piVar12 + 5);
        local_43 = 1;
        local_50 = *(undefined8 *)(piVar12 + 0x19);
        uStack_88 = *(undefined8 *)(piVar12 + 0xb);
        local_90 = *(undefined8 *)(piVar12 + 9);
        uStack_78 = *(undefined8 *)(piVar12 + 0xf);
        uStack_80 = *(undefined8 *)(piVar12 + 0xd);
        local_48 = piVar12[0x1b];
        uStack_68 = *(undefined8 *)(piVar12 + 0x13);
        local_70 = *(undefined8 *)(piVar12 + 0x11);
        uStack_58 = *(undefined8 *)(piVar12 + 0x17);
        uStack_60 = *(undefined8 *)(piVar12 + 0x15);
        if (*puVar4 != 0) {
          uVar14 = 0;
          do {
            if (*(int *)(*piVar2 + uVar14 * 4) == local_d0) goto LAB_10021a18;
            uVar14 = uVar14 + 1;
          } while (uVar14 < *puVar4);
        }
        uVar14 = 0xffffffff;
LAB_10021a18:
        local_44 = uVar14 != 0xffffffff;
        FUN_10023f38(iVar5,&local_d0,&local_b0);
      }
      uVar11 = uVar11 + 1;
      param_1 = local_cc;
      param_3 = piStack_c8;
      iVar10 = local_c4;
    } while (uVar11 < *puVar1);
  }
  uVar13 = 0;
  do {
    uVar11 = (uint)uVar13;
    puVar7 = (undefined8 *)(*(int *)(param_1 + 0xabc) + uVar11 * 0x40);
    puVar8 = (undefined8 *)(iVar10 + 0x660 + uVar11 * 0x40);
    uVar17 = *puVar7;
    uVar16 = puVar7[3];
    uVar15 = puVar7[2];
    puVar8[1] = puVar7[1];
    *puVar8 = uVar17;
    puVar8[3] = uVar16;
    puVar8[2] = uVar15;
    uVar17 = puVar7[4];
    uVar16 = puVar7[7];
    uVar15 = puVar7[6];
    puVar8[5] = puVar7[5];
    puVar8[4] = uVar17;
    puVar8[7] = uVar16;
    puVar8[6] = uVar15;
    pbVar9 = (byte *)(((uint)(uVar13 >> 3) & 3) + iVar10 + ((uVar11 >> 5) + 0x24db) * 4);
    uVar13 = (ulonglong)(uVar11 + 1);
    *pbVar9 = *pbVar9 | (byte)(1 << (ulonglong)(uVar11 & 7));
  } while (uVar11 + 1 < 0x10a);
  uVar13 = 0;
  do {
    uVar11 = (uint)uVar13;
    *(undefined4 *)(iVar10 + 0x493c + uVar11 * 0x10) =
         *(undefined4 *)(param_1 + 0x22c + uVar11 * 0x10);
    *(undefined4 *)(iVar10 + (uVar11 + 0x494) * 0x10) =
         *(undefined4 *)(param_1 + (uVar11 + 0x23) * 0x10);
    *(undefined4 *)(iVar10 + 0x4944 + uVar11 * 0x10) =
         *(undefined4 *)(param_1 + 0x234 + uVar11 * 0x10);
    *(undefined4 *)(iVar10 + 0x4948 + uVar11 * 0x10) =
         *(undefined4 *)(param_1 + 0x238 + uVar11 * 0x10);
    pbVar9 = (byte *)(((uint)(uVar13 >> 3) & 3) + iVar10 + ((uVar11 >> 5) + 0x24e5) * 4);
    uVar13 = (ulonglong)(uVar11 + 1);
    *pbVar9 = *pbVar9 | (byte)(1 << (ulonglong)(uVar11 & 7));
  } while (uVar11 + 1 < 6);
LAB_10021b4c:
  *(undefined4 *)(iVar10 + 4) = 0;
  auVar18 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
  (*extraout_w11)(auVar18._0_8_ & 0xffffffff,auVar18._8_8_ & 0xffffffff,0);
  *param_3 = local_c0 + 1;
  return 0;
}

