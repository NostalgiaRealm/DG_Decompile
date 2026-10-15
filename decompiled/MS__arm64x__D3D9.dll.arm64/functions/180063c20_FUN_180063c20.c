/*
 * FUN_180063c20 at 180063c20
 * undefined FUN_180063c20(void)
 * Address ranges: 180063c20-180063c93;180063f4c-180063f67;180064f54-180065617
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

ushort * FUN_180063c20(undefined8 param_1,longlong param_2,undefined8 param_3,ushort *param_4,
                      undefined8 param_5,undefined4 param_6)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  ushort uVar4;
  bool bVar5;
  byte bVar6;
  ushort *puVar7;
  undefined8 uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  uint *puVar11;
  uint *puVar12;
  int *piVar13;
  uint *puVar14;
  uint uVar15;
  longlong lVar16;
  longlong lVar17;
  uint extraout_w14;
  ulonglong extraout_x14;
  uint uVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float extraout_s16;
  undefined8 uVar23;
  float extraout_s17;
  undefined8 uVar24;
  undefined8 uVar25;
  ulonglong in_stack_fffffffffffffeb0;
  uint7 uVar26;
  undefined4 uStack_10c;
  uint3 uStack_10b;
  undefined4 local_e0;
  undefined1 local_dc;
  undefined8 local_d0;
  undefined8 uStack_c8;
  uint auStack_c0 [12];
  undefined8 local_90;
  longlong lStack_88;
  undefined8 local_80;
  
  uVar4 = *param_4;
  puVar7 = param_4 + 2;
  local_90 = param_1;
  lStack_88 = param_2;
  local_80 = param_3;
  if ((uVar4 & 0xffc0) != 0) {
    if (uVar4 < 0x5a) {
                    /* WARNING: Could not emulate address calculation at 0x000180063c84 */
                    /* WARNING: Treating indirect jump as call */
      puVar7 = (ushort *)
               (*(code *)(&UNK_180064a10 +
                         (longlong)*(int *)(&DAT_180065618 + (ulonglong)(uVar4 - 0x40) * 4) * 4))();
      return puVar7;
    }
    goto LAB_1800655b8;
  }
  uVar18 = (uint)uVar4;
  if (uVar4 - 2 < 2) {
    fVar20 = 1.0;
    if (uVar18 != 2) {
      fVar20 = -1.0;
    }
    lVar16 = (ulonglong)(*(uint *)(param_4 + 4) >> 0x18 & 0xf) * 8;
    fVar22 = *(float *)(&DAT_180234990 + lVar16);
    lVar17 = (ulonglong)(*(uint *)(param_4 + 6) >> 0x18 & 0xf) * 8;
    fVar21 = *(float *)(&DAT_180234990 + lVar17);
    fVar20 = *(float *)(&DAT_180234994 + lVar17) * fVar20 + *(float *)(&DAT_180234994 + lVar16);
    uVar8 = FUN_180062fa0(param_1,param_2,*(undefined4 *)(param_4 + 2),param_6);
    in_stack_fffffffffffffeb0 = in_stack_fffffffffffffeb0 & 0xffffffffffffff00;
    uVar8 = FUN_1800630b0(uVar8,param_2,param_3,0,*(undefined4 *)(param_4 + 4),
                          (ulonglong)uStack_10b << 0x28,0,0,in_stack_fffffffffffffeb0);
    FUN_1800630b0(uVar8,param_2,param_3,1,*(undefined4 *)(param_4 + 6),(ulonglong)uStack_10b << 0x28
                  ,0,0,in_stack_fffffffffffffeb0 & 0xffffffffffffff00);
    uVar15 = 0x80000000;
    if (uVar18 != 3) {
      uVar15 = 0;
    }
    puVar11 = (uint *)(param_2 + 0x380);
    *puVar11 = uVar15 ^ *puVar11;
    iVar1 = *(int *)(param_2 + 0x334);
    if (iVar1 != 0 || fVar20 != 0.0) {
      uVar18 = 0;
    }
    else {
      uVar18 = *(uint *)(param_2 + 0x330);
    }
    uVar10 = FUN_1800f5ea8(0xe4,*(undefined1 *)(param_2 + 0x344));
    if ((fVar22 == 1.0) && (fVar21 == 1.0)) {
      FUN_1800f58b8(param_2,param_3,uVar18,param_2 + 0x340,param_2 + 0x360);
    }
    else {
      uVar9 = func_0x0001802132c8(extraout_x14 & 0xffffffff);
      puVar12 = (uint *)(param_2 + 0x360);
      if (fVar22 == fVar21) {
        FUN_18005dd50(fVar22,uVar9,auStack_c0,param_2,uVar9 & 0xffffffff,puVar12);
        FUN_1800f58b8(param_2,param_3,0,param_2 + 0x340);
        puVar11 = (uint *)(uVar10 & 0xff | 0x100);
        uVar18 = uVar18 | 0x38;
        puVar12 = auStack_c0;
        puVar14 = (uint *)(param_2 + 0x340);
      }
      else {
        fVar19 = fVar21;
        if (fVar21 == 1.0) {
          fVar19 = fVar22;
        }
        FUN_18005dd50(fVar19,uVar9,auStack_c0,param_2,uVar9 & 0xffffffff,puVar12);
        uVar18 = uVar18 | 0x32;
        puVar14 = puVar11;
        if (fVar21 == 1.0) {
          puVar14 = puVar12;
          puVar12 = puVar11;
        }
        puVar11 = auStack_c0;
      }
      FUN_1800f58b8(param_2,param_3,uVar18,param_2 + 0x340,puVar11,puVar14,puVar12,0);
    }
    if (fVar20 != 0.0) {
      uVar9 = func_0x0001802132c8(*(undefined1 *)(param_2 + 0x344));
      FUN_18005dd50(fVar20,uVar9,auStack_c0,param_2,uVar9 & 0xffffffff);
      if (iVar1 == 0) {
        uVar18 = *(uint *)(param_2 + 0x330);
      }
      else {
        uVar18 = 0;
      }
      uVar10 = uVar10 & 0xff | 0x100;
      puVar11 = auStack_c0;
      lVar16 = param_2 + 0x340;
LAB_1800655a0:
      FUN_1800f58b8(param_2,param_3,uVar18,param_2 + 0x340,uVar10,lVar16,puVar11,0);
    }
  }
  else {
    if (1 < uVar18 - 8) {
      if (uVar18 == 4) {
        uVar8 = FUN_180062fa0(param_1,param_2,*(undefined4 *)(param_4 + 2),param_6);
        if (*(int *)(param_2 + 0x334) == 0) {
          uVar18 = *(uint *)(param_2 + 0x330);
        }
        else {
          uVar18 = 0;
        }
        FUN_1800636a8(uVar8,param_2,param_3,*(undefined4 *)(param_4 + 4),
                      *(undefined4 *)(param_4 + 6),*(undefined4 *)(param_4 + 8));
        FUN_1800f58b8(param_2,param_3,uVar18 | 0x32,param_2 + 0x340,param_2 + 0x360,param_2 + 0x380,
                      param_2 + 0x3a0,0);
      }
      else {
        if (uVar18 == 5) {
          fVar20 = *(float *)(&DAT_180234994 + (ulonglong)(*(uint *)(param_4 + 4) >> 0x18 & 0xf) * 8
                             );
          fVar21 = *(float *)(&DAT_180234994 + (ulonglong)(*(uint *)(param_4 + 6) >> 0x18 & 0xf) * 8
                             );
          uVar8 = FUN_180062fa0(param_1,param_2,*(undefined4 *)(param_4 + 2),param_6);
          if (*(int *)(param_2 + 0x334) == 0) {
            uVar18 = *(uint *)(param_2 + 0x330);
          }
          else {
            uVar18 = 0;
          }
          if ((extraout_s17 == 1.0) && (extraout_s16 == 1.0)) {
            uVar26 = (uint7)(in_stack_fffffffffffffeb0 >> 8);
            if ((fVar20 != 0.0) || (fVar21 != 0.0)) {
              if ((ABS(fVar20) == 1.0) && (fVar21 == 0.0)) {
                uVar10 = (ulonglong)uVar26 << 8;
                uVar8 = FUN_1800630b0(uVar8,param_2,param_3,0,*(undefined4 *)(param_4 + 4),
                                      (ulonglong)uStack_10b << 0x28,0,0,uVar10);
                FUN_1800630b0(uVar8,param_2,param_3,1,*(undefined4 *)(param_4 + 6),
                              (ulonglong)uStack_10b << 0x28,0,0,uVar10 & 0xffffffffffffff00);
                uVar25 = *(undefined8 *)(param_2 + 0x388);
                uVar24 = *(undefined8 *)(param_2 + 0x380);
                uVar23 = *(undefined8 *)(param_2 + 0x398);
                uVar8 = *(undefined8 *)(param_2 + 0x390);
                bVar5 = 0.0 <= fVar20;
              }
              else {
                if ((ABS(fVar21) != 1.0) || (fVar20 != 0.0)) goto LAB_1800652d4;
                uVar10 = (ulonglong)uVar26 << 8;
                uVar8 = FUN_1800630b0(uVar8,param_2,param_3,0,*(undefined4 *)(param_4 + 4),
                                      (ulonglong)uStack_10b << 0x28,0,0,uVar10);
                FUN_1800630b0(uVar8,param_2,param_3,1,*(undefined4 *)(param_4 + 6),
                              (ulonglong)uStack_10b << 0x28,0,0,uVar10 & 0xffffffffffffff00);
                uVar25 = *(undefined8 *)(param_2 + 0x368);
                uVar24 = *(undefined8 *)(param_2 + 0x360);
                uVar23 = *(undefined8 *)(param_2 + 0x378);
                uVar8 = *(undefined8 *)(param_2 + 0x370);
                bVar5 = true;
                if (!NAN(fVar21)) {
                  bVar5 = 0.0 <= fVar21;
                }
              }
              *(undefined8 *)(param_2 + 0x3a8) = uVar25;
              *(undefined8 *)(param_2 + 0x3a0) = uVar24;
              *(undefined8 *)(param_2 + 0x3b8) = uVar23;
              *(undefined8 *)(param_2 + 0x3b0) = uVar8;
              uVar15 = 0x80000000;
              if (bVar5) {
                uVar15 = 0;
              }
              puVar11 = (uint *)(param_2 + 0x3a0);
              lVar16 = param_2 + 0x380;
              uVar10 = param_2 + 0x360;
              *(uint *)(param_2 + 0x3a0) = uVar15 ^ *(uint *)(param_2 + 0x3a0);
              uVar18 = uVar18 | 0x32;
              goto LAB_1800655a0;
            }
            uVar10 = (ulonglong)uVar26 << 8;
            uVar8 = FUN_1800630b0(uVar8,param_2,param_3,0,*(undefined4 *)(param_4 + 4),
                                  (ulonglong)uStack_10b << 0x28,0,0,uVar10);
            FUN_1800630b0(uVar8,param_2,param_3,1,*(undefined4 *)(param_4 + 6),
                          (ulonglong)uStack_10b << 0x28,0,0,uVar10 & 0xffffffffffffff00);
          }
          else {
LAB_1800652d4:
            FUN_180063560(uVar8,param_2,param_3,*(undefined4 *)(param_4 + 4),
                          *(undefined4 *)(param_4 + 6));
          }
          uVar18 = uVar18 | 0x38;
          goto LAB_180063f4c;
        }
        if (uVar18 == 1) {
          uVar8 = FUN_180062fa0(param_1,param_2,*(undefined4 *)(param_4 + 2),param_6);
          FUN_1800630b0(uVar8,param_2,param_3,0,*(undefined4 *)(param_4 + 4),
                        *(undefined8 *)(param_2 + 0x340),*(uint *)(param_4 + 2) >> 7 & 0x2000,
                        *(uint *)(param_4 + 2) >> 0x18 & 0xf,1);
          *(undefined4 *)(param_2 + 0x334) = 0;
          puVar7 = param_4 + 6;
          goto LAB_1800655b8;
        }
        if (uVar18 != 0x12) goto LAB_1800655b8;
        uVar18 = *(uint *)(param_4 + 4);
        if ((uVar18 & 0xf000000) == 0x6000000) {
          uVar18 = uVar18 & 0xf0ffffff;
          lVar17 = 0x10;
          lVar16 = 0xc;
        }
        else {
          lVar17 = 0xc;
          lVar16 = 0x10;
        }
        uVar2 = *(undefined4 *)(lVar16 + (longlong)param_4);
        uVar3 = *(undefined4 *)(lVar17 + (longlong)param_4);
        uVar8 = FUN_180062fa0(param_1,param_2,*(undefined4 *)(param_4 + 2),param_6);
        FUN_1800636a8(uVar8,param_2,param_3,uVar18,uVar3,uVar2);
        local_dc = *(undefined1 *)(param_2 + 0x344);
        local_e0 = FUN_1800f42d0(param_2,4,0);
        uStack_c8 = 0xffffffffffffffff;
        local_d0 = 0xffffffffffffffff;
        *(uint *)(param_2 + 0x3a0) = *(uint *)(param_2 + 0x3a0) ^ 0x80000000;
        FUN_1800f58b8(param_2,param_3,0,&local_e0,param_2 + 0x380,param_2 + 0x3a0,0);
        *(uint *)(param_2 + 0x3a0) = *(uint *)(param_2 + 0x3a0) ^ 0x80000000;
        bVar6 = FUN_1800f5ea8(0xe4,local_dc);
        FUN_1800f58b8(param_2,param_3,extraout_w14 | 0x32,param_2 + 0x340,(ulonglong)bVar6 | 0x100,
                      &local_e0,param_2 + 0x360,param_2 + 0x3a0,0);
      }
      puVar7 = param_4 + 10;
      goto LAB_1800655b8;
    }
    uVar8 = FUN_180062fa0(param_1,param_2,*(undefined4 *)(param_4 + 2),param_6);
    FUN_180063560(uVar8,param_2,param_3,*(undefined4 *)(param_4 + 4),*(undefined4 *)(param_4 + 6));
    uVar15 = 0x10;
    if (uVar18 != 8) {
      uVar15 = 0x11;
    }
    if (*(int *)(param_2 + 0x334) == 0) {
      uVar18 = *(uint *)(param_2 + 0x330);
    }
    else {
      uVar18 = 0;
    }
    uVar18 = uVar18 | uVar15;
LAB_180063f4c:
    FUN_1800f58b8(param_2,param_3,uVar18,param_2 + 0x340,param_2 + 0x360,param_2 + 0x380,0);
  }
  puVar7 = param_4 + 8;
LAB_1800655b8:
  piVar13 = (int *)(param_2 + 0x3c0);
  iVar1 = *piVar13;
  uVar10 = 0;
  while ((iVar1 != 0 && ((uint)uVar10 < 4))) {
    param_2 = FUN_1800f4370(param_2,piVar13[uVar10]);
    piVar13[uVar10 & 0xffffffff] = 0;
    uVar10 = (ulonglong)((int)uVar10 + 1);
    iVar1 = piVar13[uVar10];
  }
  return puVar7;
}

