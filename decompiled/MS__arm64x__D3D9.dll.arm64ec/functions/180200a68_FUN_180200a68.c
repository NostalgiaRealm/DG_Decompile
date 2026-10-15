/*
 * FUN_180200a68 at 180200a68
 * undefined FUN_180200a68(void)
 * Address ranges: 180200a68-180200e3f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_180200a68(longlong *param_1,ulonglong *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int *piVar3;
  undefined4 *puVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  undefined1 auVar8 [16];
  uint uVar9;
  uint uVar10;
  longlong lVar11;
  ulonglong uVar12;
  code *extraout_x11;
  ulonglong uVar13;
  ulonglong uVar14;
  undefined8 uVar15;
  ulonglong uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 local_80 [2];
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  ulonglong local_50;
  ulonglong uStack_48;
  undefined4 local_40;
  
  uVar12 = param_2[1];
  uVar13 = *param_2;
  local_40 = (undefined4)param_2[6];
  uVar15 = 0;
  uVar14 = 0;
  local_70._0_4_ = (int)uVar13;
  local_70._4_4_ = (uint)(uVar13 >> 0x20);
  uStack_48 = param_2[5];
  local_50 = param_2[4];
  uStack_60._4_4_ = (int)(param_2[2] >> 0x20);
  uStack_58._0_4_ = (int)param_2[3];
  iVar5 = 0;
  if (((int)local_70 - 0x55U & 0xffffff7f) == 0) {
    iVar5 = uStack_60._4_4_;
  }
  if ((int)local_70 < 0x80) {
    uStack_58._0_4_ = 1;
  }
  uStack_60 = CONCAT44(iVar5,(int)param_2[2]);
  uStack_58._4_4_ = (undefined4)(param_2[3] >> 0x20);
  uStack_68._0_4_ = (uint)uVar12;
  uStack_68._4_4_ = (uint)(uVar12 >> 0x20);
  uVar6 = *(uint *)((longlong)param_1 + 0xc);
  uVar16 = ((ulonglong)
            (local_70._4_4_ |
            ((uint)uStack_68 |
            (uStack_68._4_4_ | (iVar5 - 1U | ((int)uStack_58 + -1) * 0x10) << 3) << 3) << 3) &
           0xffffff) << 8 | uVar13 & 0xffffffff;
  local_70 = uVar13;
  uStack_68 = uVar12;
  if (uVar6 != 0) {
    uVar10 = 0;
    uVar9 = uVar6;
    do {
      uVar7 = uVar9 + uVar10 >> 1;
      uVar14 = (ulonglong)uVar7;
      uVar13 = *(ulonglong *)(*param_1 + uVar14 * 0x48);
      if (uVar13 <= uVar16) {
        if (uVar16 <= uVar13) break;
        uVar10 = uVar7 + 1;
        uVar14 = (ulonglong)(uVar7 + 1);
        uVar7 = uVar9;
      }
      uVar9 = uVar7;
    } while (uVar9 != uVar10);
    if (((uint)uVar14 != uVar6) && (*(ulonglong *)(*param_1 + uVar14 * 0x48) == uVar16))
    goto LAB_180200c9c;
  }
  if (uVar6 == *(uint *)(param_1 + 1)) {
    uVar13 = CONCAT44(0,*(uint *)(param_1 + 1) << 1);
    lVar11 = uVar13 * 0x48;
    auVar8._8_8_ = 0;
    auVar8._0_8_ = uVar13;
    if (SUB168(auVar8 * ZEXT816(0x48),8) != 0) {
      lVar11 = -1;
    }
    lVar11 = FUN_1802229a8(lVar11);
    if (lVar11 != 0) {
      uVar13 = 0;
      if ((int)param_1[1] != 0) {
        do {
          uVar6 = (int)uVar13 + 1;
          puVar1 = (undefined8 *)(*param_1 + uVar13 * 0x48);
          puVar2 = (undefined8 *)(lVar11 + uVar13 * 0x48);
          uVar17 = *puVar1;
          uVar19 = puVar1[3];
          uVar18 = puVar1[2];
          puVar2[1] = puVar1[1];
          *puVar2 = uVar17;
          puVar2[3] = uVar19;
          puVar2[2] = uVar18;
          uVar17 = puVar1[4];
          uVar19 = puVar1[7];
          uVar18 = puVar1[6];
          puVar2[5] = puVar1[5];
          puVar2[4] = uVar17;
          puVar2[7] = uVar19;
          puVar2[6] = uVar18;
          puVar2[8] = puVar1[8];
          uVar13 = (ulonglong)uVar6;
        } while (uVar6 < *(uint *)(param_1 + 1));
      }
      FUN_1802229d8(*param_1);
      *param_1 = lVar11;
      *(int *)(param_1 + 1) = (int)param_1[1] << 1;
    }
  }
  uVar13 = (ulonglong)*(uint *)((longlong)param_1 + 0xc);
  while ((uint)uVar14 < (uint)uVar13) {
    uVar12 = (ulonglong)((uint)uVar13 - 1);
    puVar1 = (undefined8 *)(*param_1 + uVar13 * 0x48);
    puVar2 = (undefined8 *)(*param_1 + uVar12 * 0x48);
    uVar17 = *puVar2;
    uVar19 = puVar2[3];
    uVar18 = puVar2[2];
    puVar1[1] = puVar2[1];
    *puVar1 = uVar17;
    puVar1[3] = uVar19;
    puVar1[2] = uVar18;
    uVar17 = puVar2[4];
    uVar19 = puVar2[7];
    uVar18 = puVar2[6];
    puVar1[5] = puVar2[5];
    puVar1[4] = uVar17;
    puVar1[7] = uVar19;
    puVar1[6] = uVar18;
    puVar1[8] = puVar2[8];
    uVar13 = uVar12;
  }
  *(ulonglong *)(*param_1 + uVar14 * 0x48) = uVar16;
  lVar11 = *param_1 + uVar14 * 0x48;
  *(ulonglong *)(lVar11 + 0x10) = uStack_68;
  *(ulonglong *)(lVar11 + 8) = local_70;
  *(undefined8 *)(lVar11 + 0x20) = uStack_58;
  *(undefined8 *)(lVar11 + 0x18) = uStack_60;
  *(ulonglong *)(lVar11 + 0x30) = uStack_48;
  *(ulonglong *)(lVar11 + 0x28) = local_50;
  *(undefined4 *)(lVar11 + 0x38) = local_40;
  lVar11 = FUN_1802229a8(0x3c0);
  if (lVar11 != 0) {
    FUN_180222c50(lVar11,0,0x3c0);
  }
  *(longlong *)(*param_1 + uVar14 * 0x48 + 0x40) = lVar11;
  *(int *)((longlong)param_1 + 0xc) = *(int *)((longlong)param_1 + 0xc) + 1;
LAB_180200c9c:
  lVar11 = *(longlong *)(uVar14 * 0x48 + *param_1 + 0x40);
  if (lVar11 != 0) {
    uVar13 = 0xffffffff;
    uVar14 = 0;
    do {
      piVar3 = (int *)(lVar11 + uVar14 * 0x30);
      if (*(longlong *)(piVar3 + 8) == 0) {
        uVar6 = (uint)uVar13;
        if ((uint)uVar13 == 0xffffffff) {
          uVar6 = (uint)uVar14;
        }
        uVar13 = (ulonglong)uVar6;
      }
      else if (((((int)param_2[2] == *piVar3) && (*(int *)((longlong)param_2 + 0x1c) == piVar3[1]))
               && (*(int *)((longlong)param_2 + 0x24) == piVar3[3])) &&
              ((int)param_2[6] == piVar3[5])) break;
      uVar6 = (uint)uVar14 + 1;
      uVar14 = (ulonglong)uVar6;
    } while (uVar6 < 0x14);
    if ((int)uVar14 == 0x14) {
      if ((int)uVar13 == -1) {
        uVar13 = 0;
        do {
          if (*(char *)(lVar11 + 0x28 + uVar13 * 0x30) == '\0') goto LAB_180200d80;
          uVar6 = (int)uVar13 + 1;
          uVar13 = (ulonglong)uVar6;
        } while (uVar6 < 0x14);
      }
      else {
LAB_180200d80:
        puVar4 = (undefined4 *)(lVar11 + (longlong)(int)uVar13 * 0x30);
        *puVar4 = (int)param_2[2];
        puVar4[1] = *(undefined4 *)((longlong)param_2 + 0x1c);
        puVar4[2] = (int)param_2[4];
        puVar4[3] = *(undefined4 *)((longlong)param_2 + 0x24);
        puVar4[4] = (int)param_2[5];
        puVar4[5] = (int)param_2[6];
        puVar4[6] = *(undefined4 *)((longlong)param_2 + 0x2c);
        if (*(longlong *)(puVar4 + 8) != 0) {
          FUN_1801fea58(param_1[2],(int)param_1[3]);
        }
        local_80[0] = 0;
        uVar15 = (*(code *)__hybrid_os_arm64x_dispatch_icall)(0x180224000);
        (*extraout_x11)(uVar15,param_2,local_80);
        *(undefined1 *)(puVar4 + 10) = 1;
        *(undefined8 *)(puVar4 + 8) = local_80[0];
        uVar15 = local_80[0];
      }
    }
    else {
      lVar11 = lVar11 + uVar14 * 0x30;
      *(undefined1 *)(lVar11 + 0x28) = 1;
      uVar15 = *(undefined8 *)(lVar11 + 0x20);
    }
  }
  return uVar15;
}

