/*
 * FUN_10050870 at 10050870
 * undefined FUN_10050870(void)
 * Address ranges: 10050870-10050fc3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool FUN_10050870(int param_1,uint *param_2,undefined8 *param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  uint *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  ulonglong *puVar5;
  int *piVar6;
  byte *pbVar7;
  uint uVar8;
  undefined4 uVar9;
  int iVar10;
  int iVar11;
  undefined8 uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  code *extraout_w11;
  ulonglong uVar17;
  ulonglong uVar18;
  int *piVar19;
  undefined4 *puVar20;
  uint uVar21;
  int *local_7c4;
  uint *local_7c0;
  int *local_7bc;
  undefined8 local_7b8;
  undefined4 local_7b0;
  undefined1 local_7ac;
  int local_7a8;
  undefined4 local_7a4;
  int local_7a0;
  undefined8 local_790;
  undefined8 uStack_788;
  ulonglong local_780;
  undefined8 uStack_778;
  undefined4 local_770;
  undefined8 *local_760;
  int local_75c;
  uint *puStack_758;
  int local_754;
  int local_750;
  undefined8 uStack_74c;
  undefined8 uStack_744;
  undefined8 uStack_73c;
  undefined8 uStack_734;
  undefined8 uStack_72c;
  undefined8 uStack_724;
  undefined8 uStack_71c;
  undefined8 uStack_714;
  undefined4 local_514;
  uint local_510;
  undefined8 uStack_50c;
  undefined8 uStack_504;
  undefined8 uStack_4fc;
  undefined8 uStack_4f4;
  undefined8 uStack_4ec;
  undefined8 uStack_4e4;
  undefined8 uStack_4dc;
  undefined8 uStack_4d4;
  undefined8 local_4c0;
  undefined8 uStack_4b8;
  ulonglong local_4b0;
  undefined8 local_4a8;
  undefined8 uStack_4a0;
  undefined8 uStack_498;
  undefined8 uStack_490;
  undefined8 uStack_488;
  undefined8 uStack_480;
  undefined8 local_478;
  undefined1 auStack_470 [22];
  undefined1 auStack_45a [66];
  undefined8 local_418;
  undefined4 local_410;
  undefined1 auStack_400 [504];
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  
  local_7a0 = param_1 + 0x88;
  local_7a4 = param_4;
  (*(code *)PTR_FUN_1016c074)(local_7a0);
  uVar21 = *(uint *)(param_1 + 0x78);
  if (uVar21 == 0) {
LAB_1005092c:
    puVar20 = (undefined4 *)0x0;
  }
  else {
    uVar15 = *param_2;
    uVar14 = 0;
    uVar13 = uVar21;
    do {
      uVar16 = uVar13 + uVar14 >> 1;
      uVar17 = *(ulonglong *)(*(int *)(param_1 + 0x74) + uVar16 * 0x2a0);
      uVar8 = uVar16;
      if (uVar17 <= uVar15) {
        if (uVar15 <= uVar17) break;
        uVar14 = uVar16 + 1;
        uVar16 = uVar14;
        uVar8 = uVar13;
      }
      uVar13 = uVar8;
    } while (uVar13 != uVar14);
    if ((uVar16 == uVar21) ||
       (puVar5 = (ulonglong *)(*(int *)(param_1 + 0x74) + uVar16 * 0x2a0),
       puVar20 = (undefined4 *)((int)puVar5 + 0xc), *puVar5 != (ulonglong)uVar15))
    goto LAB_1005092c;
  }
  if (puVar20 == (undefined4 *)0x0) {
    FUN_101325d0(&local_760,0,0x294);
    local_760 = (undefined8 *)FUN_101321c0(0x264);
    if (local_760 == (undefined8 *)0x0) {
      local_760 = (undefined8 *)0x0;
    }
    else {
      *local_760 = 0;
      local_760[1] = 0;
      FUN_101325a0(local_760 + 2,param_2,0x254);
    }
    puVar4 = local_760;
    if (local_760 == (undefined8 *)0x0) goto LAB_10050f8c;
    local_7b0 = 0x100;
    local_7ac = 1;
    uVar9 = FUN_101322b0(0x100);
    local_790 = CONCAT44(local_790._4_4_,param_2);
    uStack_788 = 0;
    local_7b8 = CONCAT44(uVar9,uVar9);
    local_780 = (ulonglong)*(uint *)(param_1 + 4);
    uStack_4b8 = 0;
    local_4c0 = local_790;
    local_4b0 = local_780;
    FUN_101325d0(auStack_470,0,0x430);
    FUN_101325d0(auStack_400,0,0x3c0);
    local_770 = 0;
    uStack_4a0 = 0;
    uStack_490 = 0;
    uStack_498 = 0;
    uStack_480 = 0;
    uStack_488 = 0;
    local_4a8 = 0x10040;
    local_478 = (ulonglong)CONCAT24(0x40,auStack_45a);
    local_418 = 0x41040000110400;
    local_410 = 0x20000d00;
    uStack_200 = 0x11080300210803;
    uStack_208 = 0x31080300410803;
    local_790 = 0x43425844;
    uStack_788 = 0;
    uStack_1f0 = 0x11080400210804;
    uStack_1f8 = 0x31080400410804;
    local_780 = 0x100000000;
    uStack_778 = 0x100000000;
    uVar12 = FUN_10122c50(&local_7b8,&local_790,0x24);
    *(int *)((int)local_7b8 + 0x20) = local_7b8._4_4_ - (int)local_7b8;
    FUN_1009f138(uVar12,&local_7b8,&local_4c0);
    FUN_10122e00(&local_7b8);
    uVar17 = local_7b8;
    iVar11 = (int)local_7b8;
    local_7c0 = (uint *)(local_7b8._4_4_ - (int)local_7b8);
    local_75c = (int)local_7b8;
    puVar1 = (undefined4 *)(*(int *)(param_1 + -0x14) + *(int *)(param_1 + -0x10) * 0x1510 + 0x510);
    puStack_758 = local_7c0;
    iVar10 = FUN_100500f0(param_2,param_3,local_7b8 & 0xffffffff,local_7c0,*puVar1);
    local_754 = iVar10;
    if (iVar10 == 0) {
LAB_10050d78:
      if (puVar4 != (undefined8 *)0x0) {
        FUN_101322d0(*(undefined4 *)puVar4);
        *puVar4 = 0;
        puVar4[1] = 0;
        FUN_10132260(puVar4,0x264);
      }
    }
    else {
      local_750 = FUN_100500f0(param_2 + 0x95,param_3,uVar17 & 0xffffffff,local_7c0,*puVar1);
      if (local_750 == 0) {
        (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
        (*extraout_w11)(iVar10);
        goto LAB_10050d78;
      }
      uVar17 = (ulonglong)*param_2;
      local_510 = param_2[0x12a];
      uStack_744 = param_3[1];
      uStack_74c = *param_3;
      uStack_734 = param_3[3];
      uStack_73c = param_3[2];
      local_7bc = (int *)(param_1 + 0x70);
      puVar2 = (uint *)(param_1 + 0x78);
      uVar21 = *puVar2;
      uStack_724 = param_3[5];
      uStack_72c = param_3[4];
      uStack_714 = param_3[7];
      uStack_71c = param_3[6];
      uVar14 = 0;
      uStack_504 = 0;
      uStack_50c = 0;
      uStack_4f4 = 0;
      uStack_4fc = 0;
      uStack_4e4 = 0;
      uStack_4ec = 0;
      uStack_4d4 = 0;
      uStack_4dc = 0;
      local_514 = 1;
      if (uVar21 != 0) {
        uVar15 = 0;
        uVar13 = uVar21;
        do {
          uVar14 = uVar13 + uVar15 >> 1;
          uVar18 = *(ulonglong *)(*(int *)(param_1 + 0x74) + uVar14 * 0x2a0);
          uVar16 = uVar14;
          if (uVar18 <= uVar17) {
            if (uVar17 <= uVar18) break;
            uVar15 = uVar14 + 1;
            uVar14 = uVar15;
            uVar16 = uVar13;
          }
          uVar13 = uVar16;
        } while (uVar13 != uVar15);
      }
      if ((uVar14 == uVar21) ||
         (puVar5 = (ulonglong *)(*(int *)(param_1 + 0x74) + uVar14 * 0x2a0), *puVar5 != uVar17)) {
        piVar19 = (int *)(param_1 + 0x74);
        local_7c0 = (uint *)(param_1 + 0x7c);
        uVar15 = *local_7c0;
        if (uVar15 == uVar21) {
          local_7c4 = (int *)&DAT_00000010;
          if (uVar15 != 0) {
            local_7c4 = (int *)(uVar15 << 1);
          }
          iVar11 = FUN_101322b0((int)local_7c4 * 0x2a0);
          local_7a8 = iVar11;
          if (iVar11 != 0) {
            if (*puVar2 != 0) {
              uVar21 = 0;
              local_7b8 = uVar17;
              do {
                FUN_101325a0(iVar11 + uVar21 * 0x2a0,*piVar19 + uVar21 * 0x2a0,0x2a0);
                uVar21 = uVar21 + 1;
                uVar17 = local_7b8;
              } while (uVar21 < *puVar2);
            }
            piVar6 = local_7bc;
            FUN_101322d0(*local_7bc);
            *piVar19 = local_7a8;
            *piVar6 = local_7a8;
            *local_7c0 = (uint)local_7c4;
          }
        }
        uVar21 = *puVar2;
        if (*local_7c0 != uVar21) {
          for (; uVar14 < uVar21; uVar21 = uVar21 - 1) {
            iVar11 = *piVar19 + uVar21 * 0x2a0;
            local_7b8 = uVar17;
            FUN_101325a0(iVar11,iVar11 + -0x2a0,0x2a0);
            uVar17 = local_7b8;
          }
          *puVar2 = *puVar2 + 1;
          *(int *)(*piVar19 + uVar14 * 0x2a0 + 8) = (int)uVar17;
          FUN_101325a0(*piVar19 + uVar14 * 0x2a0 + 0xc,&local_760,0x294);
          *(ulonglong *)(*piVar19 + uVar14 * 0x2a0) = uVar17;
        }
      }
      else {
        FUN_101325a0((int)puVar5 + 0xc,&local_760,0x294);
      }
      iVar11 = 0;
      puVar20 = (undefined4 *)(*(int *)(param_1 + 0x74) + uVar14 * 0x2a0 + 0xc);
    }
    FUN_101322d0(iVar11);
    if (puVar20 == (undefined4 *)0x0) goto LAB_10050f8c;
  }
  uVar14 = 0xffffffff;
  uVar21 = 0;
  do {
    iVar11 = puVar20[uVar21 * 0x12 + 3];
    if ((iVar11 == 0) ||
       (local_7c4 = (int *)puVar20[0x93],
       (*(byte *)((int)&local_7c4 + ((int)uVar21 >> 3)) >> (ulonglong)(uVar21 & 7) & 1) == 0)) {
      if (uVar14 == 0xffffffff) {
        uVar14 = uVar21;
      }
    }
    else {
      iVar10 = FUN_10132550(param_3,puVar20 + uVar21 * 0x12 + 5,0x40);
      if (iVar10 == 0) {
        *(int *)(param_1 + 0x68) = iVar11;
        *(undefined4 *)(param_1 + 0x6c) = puVar20[uVar21 * 0x12 + 4];
        goto LAB_10050f50;
      }
    }
    uVar21 = uVar21 + 1;
  } while ((int)uVar21 < 8);
  if (uVar21 == 8) {
    local_7c4 = (int *)(param_1 + 0x68);
    if (uVar14 == 0xffffffff) {
      uVar14 = 0;
    }
    piVar19 = (int *)(param_1 + -0x10);
    piVar6 = (int *)(param_1 + -0x14);
    iVar11 = puVar20[uVar14 * 0x12 + 3];
    if (iVar11 != 0) {
      FUN_10109ac8(*piVar6,*piVar19,iVar11);
      FUN_10109ac8(*piVar6,*piVar19,puVar20[uVar14 * 0x12 + 4]);
    }
    puVar1 = (undefined4 *)(*piVar6 + *piVar19 * 0x1510 + 0x510);
    iVar11 = FUN_100500f0(param_2,param_3,puVar20[1],puVar20[2],*puVar1);
    *local_7c4 = iVar11;
    puVar20[uVar14 * 0x12 + 3] = iVar11;
    uVar9 = FUN_100500f0(param_2 + 0x95,param_3,puVar20[1],puVar20[2],*puVar1);
    *(undefined4 *)(param_1 + 0x6c) = uVar9;
    puVar20[uVar14 * 0x12 + 4] = uVar9;
    pbVar7 = (byte *)((int)puVar20 + ((int)uVar14 >> 3) + 0x24c);
    *pbVar7 = *pbVar7 | (byte)(1 << (ulonglong)(uVar14 & 7));
  }
LAB_10050f50:
  puVar4 = (undefined8 *)(puVar20 + 0x95);
  *(undefined4 *)(param_1 + -0xc) = *puVar20;
  *(undefined4 *)(param_1 + 0x20) = local_7a4;
  puVar3 = (undefined8 *)(param_1 + 0x24);
  iVar11 = 8;
  do {
    uVar12 = *puVar4;
    iVar11 = iVar11 + -1;
    puVar4 = puVar4 + 1;
    *puVar3 = uVar12;
    puVar3 = puVar3 + 1;
  } while (iVar11 != 0);
LAB_10050f8c:
  (*(code *)PTR_FUN_1016c0c0)(local_7a0);
  return puVar20 != (undefined4 *)0x0;
}

