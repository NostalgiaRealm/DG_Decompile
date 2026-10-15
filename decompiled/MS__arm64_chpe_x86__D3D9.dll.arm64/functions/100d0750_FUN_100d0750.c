/*
 * FUN_100d0750 at 100d0750
 * undefined FUN_100d0750(void)
 * Address ranges: 100d0750-100d0b4f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_100d0750(int param_1,uint param_2,undefined4 param_3,undefined4 param_4,uint param_5,
                int param_6,int param_7,undefined4 param_8,byte param_9)

{
  int *piVar1;
  uint *puVar2;
  undefined8 *puVar3;
  undefined4 uVar4;
  undefined *puVar5;
  byte *pbVar6;
  char cVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  ulonglong uVar12;
  uint uVar13;
  uint *puVar14;
  uint uVar15;
  int iVar16;
  uint uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  int iStack_bc;
  undefined4 local_b8;
  byte local_b4;
  undefined1 local_b3;
  undefined1 local_b2;
  undefined1 local_b1;
  uint local_b0;
  uint local_ac;
  int local_a8;
  undefined4 local_a4;
  undefined8 local_a0;
  undefined4 local_98;
  uint local_90;
  undefined4 local_8c;
  undefined1 local_88;
  undefined1 local_87;
  undefined1 local_86;
  byte local_85;
  undefined1 local_84;
  undefined4 local_80;
  undefined1 auStack_7c [56];
  undefined4 local_44;
  
  uVar4 = 0xf16;
  if (param_9 != 0) {
    uVar4 = 0x1000ef16;
  }
  local_b8 = param_3;
  local_b0 = param_2;
  local_a8 = param_7;
  local_a4 = param_8;
  iVar8 = FUN_10006eb0(param_1,param_2,param_3,param_4,param_5,param_6,param_8,uVar4);
  if (iVar8 < 0) {
    return iVar8;
  }
  piVar1 = (int *)(param_1 + 0x48);
  iStack_bc = param_2 * 4;
  puVar14 = (uint *)(*(int *)(param_1 + 0x54) + param_2 * 0x10);
  if ((param_5 >> 9 & 1) == 0) {
    uVar11 = 1;
    uVar13 = *(uint *)(iStack_bc + *piVar1);
  }
  else {
    puVar2 = (uint *)(*(int *)(param_1 + 0x54) + param_2 * 0x10);
    uVar11 = puVar14[2];
    uVar13 = *puVar2;
    puVar14 = puVar2;
  }
  uVar17 = puVar14[3];
  local_a0 = 0;
  local_98 = 0;
  uVar15 = 0;
  local_ac = uVar17;
  while (iVar8 = iStack_bc, uVar15 < uVar11) {
    local_44 = 0;
    local_80 = *(undefined4 *)(*piVar1 + uVar13 * 4);
    iVar9 = FUN_10006f80(param_1,param_6,auStack_7c,param_4,uVar15);
    if (-1 < iVar9) {
      cVar7 = FUN_1000fcc0(&local_a0,&local_80);
      if (cVar7 == '\0') {
        iVar9 = -0x7fffbffb;
      }
    }
    uVar13 = (uVar17 & 0xaaaaaaaa) >> 1 | (uVar17 & 0x55555555) << 1;
    uVar13 = (uVar13 & 0xcccccccc) >> 2 | (uVar13 & 0x33333333) << 2;
    uVar13 = (uVar13 & 0xf0f0f0f0) >> 4 | (uVar13 & 0xf0f0f0f) << 4;
    uVar13 = (uVar13 & 0xff00ff00) >> 8 | (uVar13 & 0xff00ff) << 8;
    uVar13 = (uint)LZCOUNT(uVar13 >> 0x10 | uVar13 << 0x10);
    if ((1 - (uVar13 >> 5) & 0xff) == 0) {
      uVar13 = 0xffffffff;
    }
    else {
      pbVar6 = (byte *)((int)&local_ac + ((int)uVar13 >> 3));
      *pbVar6 = *pbVar6 & ((byte)(1 << (ulonglong)(uVar13 & 7)) ^ 0xff);
      uVar17 = local_ac;
    }
    uVar15 = uVar15 + 1;
    if (iVar9 < 0) goto code_r0x100d08fc;
  }
  iVar9 = (*(code *)PTR_FUN_1016c120)(DAT_10175b54);
  if (iVar9 == 0) {
    FUN_100071d0(0);
  }
  FUN_10157b40(&iStack_bc);
  uVar4 = local_b8;
  iVar10 = FUN_10004ff0(param_1,local_b8);
  local_90 = param_5;
  local_8c = FUN_10003a00(param_1,uVar4);
  uVar12 = local_a0;
  local_88 = *(undefined1 *)(iVar10 + 0x159);
  local_84 = 0;
  local_87 = *(undefined1 *)(iVar10 + 0x15a);
  iVar9 = -0x7ff8fff2;
  local_86 = *(undefined1 *)(iVar10 + 0x15b);
  local_85 = param_9 ^ 1;
  local_b4 = param_9;
  local_b3 = *(undefined1 *)(iVar10 + 0x15d);
  local_b2 = *(undefined1 *)(iVar10 + 0x15e);
  local_b8 = *(undefined4 *)(&DAT_1016d470 + *(int *)(param_1 + 8) * 400);
  iVar16 = (int)local_a0;
  local_b1 = *(undefined1 *)(iVar10 + 0x15c);
  uVar11 = FUN_100cf4d0(param_1,local_b0,uVar4,param_4,*(undefined4 *)((int)local_a0 + 4),
                        *(undefined4 *)((int)local_a0 + 8),*(undefined1 *)(iVar10 + 0x158),&local_90
                        ,&local_b8);
  local_b0 = uVar11;
  if (uVar11 == 0) goto LAB_100d0afc;
  uVar13 = local_a0._4_4_;
  iVar9 = FUN_100d2e60(uVar11,*(undefined4 *)(*piVar1 + iVar8),local_a0._4_4_,uVar12 & 0xffffffff);
  if (-1 < iVar9) {
    puVar5 = &DAT_1015e540;
    if (local_a8 == 0) {
      puVar5 = &DAT_1015e450;
    }
    iVar9 = FUN_100d14a0(uVar11 + 0x66b8,puVar5,local_a4,0);
    if (-1 < iVar9) {
      uVar12 = FUN_10007100(param_1 + 0xb4,&local_b0);
      if ((uVar12 & 1) != 0) {
        uVar11 = 0;
        if (uVar13 != 0) {
          do {
            iVar8 = iVar16 + uVar11 * 0x40;
            uVar20 = *(undefined8 *)(iVar8 + 4);
            uVar19 = *(undefined8 *)(iVar8 + 0x1c);
            uVar18 = *(undefined8 *)(iVar8 + 0x14);
            puVar3 = (undefined8 *)(param_6 + uVar11 * 0x38);
            uVar11 = uVar11 + 1;
            puVar3[1] = *(undefined8 *)(iVar8 + 0xc);
            *puVar3 = uVar20;
            puVar3[3] = uVar19;
            puVar3[2] = uVar18;
            uVar18 = *(undefined8 *)(iVar8 + 0x24);
            puVar3[5] = *(undefined8 *)(iVar8 + 0x2c);
            puVar3[4] = uVar18;
            puVar3[6] = *(undefined8 *)(iVar8 + 0x34);
          } while (uVar11 < uVar13);
        }
        goto LAB_100d0afc;
      }
      iVar9 = -0x7ff8fff2;
    }
    FUN_100d30b0(uVar11);
  }
  FUN_100d2850(uVar11);
  FUN_10132440(*(undefined4 *)(uVar11 - 4));
LAB_100d0afc:
  FUN_10157a90(&iStack_bc);
  (*(code *)PTR_FUN_1016c0c0)(DAT_10175b54);
LAB_100d0b18:
  FUN_101322d0(iVar16);
  if ((-1 < iVar9) && ((param_5 >> 1 & 1) == 0)) {
    FUN_10157df0();
  }
  return iVar9;
code_r0x100d08fc:
  iVar16 = (int)local_a0;
  goto LAB_100d0b18;
}

