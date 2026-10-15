/*
 * FUN_180175360 at 180175360
 * undefined FUN_180175360(void)
 * Address ranges: 180175360-1801753cf;180176918-18017712f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

ushort * FUN_180175360(undefined8 param_1,longlong param_2,undefined8 param_3,ushort *param_4,
                      undefined8 param_5,undefined4 param_6)

{
  uint *puVar1;
  int iVar2;
  undefined4 uVar3;
  ushort uVar4;
  byte bVar5;
  ushort *puVar6;
  undefined8 uVar7;
  undefined4 uVar8;
  ulonglong uVar9;
  int *piVar10;
  ulonglong uVar11;
  uint *puVar12;
  uint uVar13;
  longlong lVar14;
  longlong lVar15;
  uint *extraout_x9;
  uint uVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  uint *local_180;
  uint *puStack_178;
  uint *local_170;
  uint *puStack_168;
  undefined8 local_160;
  undefined4 uStack_11c;
  uint3 uStack_11b;
  uint local_d0;
  undefined1 local_cc;
  undefined8 local_c0;
  undefined8 uStack_b8;
  uint auStack_a0 [8];
  undefined8 local_80;
  longlong lStack_78;
  undefined8 local_70;
  
  uVar4 = *param_4;
  puVar6 = param_4 + 2;
  local_80 = param_1;
  lStack_78 = param_2;
  local_70 = param_3;
  if ((uVar4 & 0xffc0) != 0) {
    if (uVar4 < 0x5a) {
                    /* WARNING: Could not emulate address calculation at 0x0001801753c0 */
                    /* WARNING: Treating indirect jump as call */
      puVar6 = (ushort *)
               (*(code *)(&UNK_1801762f0 +
                         (longlong)*(int *)(&DAT_180177130 + (ulonglong)(uVar4 - 0x40) * 4) * 4))();
      return puVar6;
    }
    goto LAB_1801770d4;
  }
  uVar16 = (uint)uVar4;
  if (uVar4 - 2 < 2) {
    fVar17 = 1.0;
    if (uVar16 != 2) {
      fVar17 = -1.0;
    }
    lVar14 = (ulonglong)(*(uint *)(param_4 + 4) >> 0x18 & 0xf) * 8;
    fVar19 = *(float *)(&DAT_18022c390 + lVar14);
    lVar15 = (ulonglong)(*(uint *)(param_4 + 6) >> 0x18 & 0xf) * 8;
    fVar18 = *(float *)(&DAT_18022c390 + lVar15);
    fVar17 = *(float *)(&DAT_18022c394 + lVar15) * fVar17 + *(float *)(&DAT_18022c394 + lVar14);
    uVar7 = FUN_1801744d0(param_1,param_2,*(undefined4 *)(param_4 + 2),param_6);
    local_180 = (uint *)((ulonglong)local_180 & 0xffffffffffffff00);
    uVar7 = FUN_1801745f0(uVar7,param_2,param_3,0,*(undefined4 *)(param_4 + 4),
                          (ulonglong)uStack_11b << 0x28,0,0);
    local_180 = (uint *)((ulonglong)local_180 & 0xffffffffffffff00);
    FUN_1801745f0(uVar7,param_2,param_3,1,*(undefined4 *)(param_4 + 6),(ulonglong)uStack_11b << 0x28
                  ,0,0);
    uVar13 = 0x80000000;
    if (uVar16 != 3) {
      uVar13 = 0;
    }
    puVar12 = (uint *)(param_2 + 0x380);
    *puVar12 = uVar13 ^ *puVar12;
    iVar2 = *(int *)(param_2 + 0x334);
    if (iVar2 != 0 || fVar17 != 0.0) {
      uVar16 = 0;
    }
    else {
      uVar16 = *(uint *)(param_2 + 0x330);
    }
    uVar11 = (ulonglong)*(byte *)(param_2 + 0x344);
    puVar1 = (uint *)(param_2 + 0x340);
    uVar9 = FUN_180213268(0xe4,uVar11);
    if ((fVar19 == 1.0) && (fVar18 == 1.0)) {
      local_180 = (uint *)(param_2 + 0x360);
      local_170 = (uint *)0x0;
      puStack_178 = puVar12;
      FUN_180214e10(param_2,param_3,uVar16,puVar1,&local_180,0x18);
    }
    else {
      uVar11 = FUN_1802132c8(uVar11 & 0xffffffff);
      if (fVar19 == fVar18) {
        FUN_18016e700(fVar19,uVar11,auStack_a0,param_2,uVar11 & 0xffffffff);
        local_170 = (uint *)0x0;
        puStack_178 = puVar12;
        FUN_180214e10(param_2,param_3,0,puVar1,&local_180,0x18);
        local_180 = (uint *)(uVar9 & 0xff | 0x100);
        local_170 = auStack_a0;
        puStack_168 = (uint *)0x0;
        puStack_178 = puVar1;
        FUN_180214e10(param_2,param_3,uVar16 | 0x38,puVar1,&local_180,0x20);
      }
      else {
        fVar20 = fVar18;
        if (fVar18 == 1.0) {
          fVar20 = fVar19;
        }
        FUN_18016e700(fVar20,uVar11,auStack_a0,param_2,uVar11 & 0xffffffff);
        local_180 = auStack_a0;
        local_170 = extraout_x9;
        if (fVar18 == 1.0) {
          local_170 = puVar12;
        }
        puStack_168 = (uint *)0x0;
        if (fVar18 == 1.0) {
          puVar12 = extraout_x9;
        }
        puStack_178 = puVar12;
        FUN_180214e10(param_2,param_3,uVar16 | 0x32,puVar1,&local_180,0x20);
      }
    }
    if (fVar17 != 0.0) {
      uVar11 = FUN_1802132c8(*(undefined1 *)(param_2 + 0x344));
      FUN_18016e700(fVar17,uVar11,auStack_a0,param_2,uVar11 & 0xffffffff);
      if (iVar2 == 0) {
        uVar8 = *(undefined4 *)(param_2 + 0x330);
      }
      else {
        uVar8 = 0;
      }
      local_180 = (uint *)(uVar9 & 0xff | 0x100);
      local_170 = auStack_a0;
      puStack_168 = (uint *)0x0;
      puStack_178 = puVar1;
      FUN_180214e10(param_2,param_3,uVar8,puVar1,&local_180,0x20);
    }
  }
  else {
    if (1 < uVar16 - 8) {
      if (uVar16 == 4) {
        uVar7 = FUN_1801744d0(param_1,param_2,*(undefined4 *)(param_4 + 2),param_6);
        if (*(int *)(param_2 + 0x334) == 0) {
          uVar16 = *(uint *)(param_2 + 0x330);
        }
        else {
          uVar16 = 0;
        }
        FUN_180174d50(uVar7,param_2,param_3,*(undefined4 *)(param_4 + 4),
                      *(undefined4 *)(param_4 + 6),*(undefined4 *)(param_4 + 8));
        local_170 = (uint *)(param_2 + 0x3a0);
        puStack_178 = (uint *)(param_2 + 0x380);
        puStack_168 = (uint *)0x0;
        local_180 = (uint *)(param_2 + 0x360);
        FUN_180214e10(param_2,param_3,uVar16 | 0x32,param_2 + 0x340,&local_180,0x20);
      }
      else {
        if (uVar16 == 5) {
          lVar14 = (ulonglong)(*(uint *)(param_4 + 4) >> 0x18 & 0xf) * 8;
          fVar17 = *(float *)(&DAT_18022c390 + lVar14);
          lVar15 = (ulonglong)(*(uint *)(param_4 + 6) >> 0x18 & 0xf) * 8;
          fVar18 = *(float *)(&DAT_18022c390 + lVar15);
          fVar19 = *(float *)(&DAT_18022c394 + lVar14);
          fVar20 = *(float *)(&DAT_18022c394 + lVar15);
          uVar7 = FUN_1801744d0(param_1,param_2,*(undefined4 *)(param_4 + 2),param_6);
          if (*(int *)(param_2 + 0x334) == 0) {
            uVar16 = *(uint *)(param_2 + 0x330);
          }
          else {
            uVar16 = 0;
          }
          if ((fVar17 == 1.0) && (fVar18 == 1.0)) {
            if ((fVar19 == 0.0) && (fVar20 == 0.0)) {
              local_180 = (uint *)((ulonglong)local_180._1_7_ << 8);
              uVar7 = FUN_1801745f0(uVar7,param_2,param_3,0,*(undefined4 *)(param_4 + 4),
                                    (ulonglong)uStack_11b << 0x28,0,0);
              local_180 = (uint *)((ulonglong)local_180 & 0xffffffffffffff00);
              FUN_1801745f0(uVar7,param_2,param_3,1,*(undefined4 *)(param_4 + 6),
                            (ulonglong)uStack_11b << 0x28,0,0);
              puStack_178 = (uint *)(param_2 + 0x380);
              local_170 = (uint *)0x0;
              local_180 = (uint *)(param_2 + 0x360);
              FUN_180214e10(param_2,param_3,uVar16 | 0x38,param_2 + 0x340,&local_180,0x18);
            }
            else if ((ABS(fVar19) == 1.0) && (fVar20 == 0.0)) {
              local_180 = (uint *)((ulonglong)local_180._1_7_ << 8);
              uVar7 = FUN_1801745f0(uVar7,param_2,param_3,0,*(undefined4 *)(param_4 + 4),
                                    (ulonglong)uStack_11b << 0x28,0,0);
              local_180 = (uint *)((ulonglong)local_180 & 0xffffffffffffff00);
              FUN_1801745f0(uVar7,param_2,param_3,1,*(undefined4 *)(param_4 + 6),
                            (ulonglong)uStack_11b << 0x28,0,0);
              puStack_178 = (uint *)(param_2 + 0x380);
              local_170 = (uint *)(param_2 + 0x3a0);
              puStack_168 = (uint *)0x0;
              uVar13 = 0x80000000;
              if (0.0 <= fVar19) {
                uVar13 = 0;
              }
              *(undefined8 *)(param_2 + 0x3a8) = *(undefined8 *)(param_2 + 0x388);
              *(undefined8 *)local_170 = *(undefined8 *)puStack_178;
              *(undefined8 *)(param_2 + 0x3b8) = *(undefined8 *)(param_2 + 0x398);
              *(undefined8 *)(param_2 + 0x3b0) = *(undefined8 *)(param_2 + 0x390);
              *local_170 = uVar13 ^ *local_170;
              local_180 = (uint *)(param_2 + 0x360);
              FUN_180214e10(param_2,param_3,uVar16 | 0x32,param_2 + 0x340,&local_180,0x20);
            }
            else {
              if ((ABS(fVar20) != 1.0) || (fVar19 != 0.0)) goto LAB_180176d48;
              local_180 = (uint *)((ulonglong)local_180._1_7_ << 8);
              uVar7 = FUN_1801745f0(uVar7,param_2,param_3,0,*(undefined4 *)(param_4 + 4),
                                    (ulonglong)uStack_11b << 0x28,0,0);
              local_180 = (uint *)((ulonglong)local_180 & 0xffffffffffffff00);
              FUN_1801745f0(uVar7,param_2,param_3,1,*(undefined4 *)(param_4 + 6),
                            (ulonglong)uStack_11b << 0x28,0,0);
              local_180 = (uint *)(param_2 + 0x360);
              local_170 = (uint *)(param_2 + 0x3a0);
              puStack_168 = (uint *)0x0;
              uVar13 = 0x80000000;
              if (0.0 <= fVar20) {
                uVar13 = 0;
              }
              *(undefined8 *)(param_2 + 0x3a8) = *(undefined8 *)(param_2 + 0x368);
              *(undefined8 *)local_170 = *(undefined8 *)local_180;
              *(undefined8 *)(param_2 + 0x3b8) = *(undefined8 *)(param_2 + 0x378);
              *(undefined8 *)(param_2 + 0x3b0) = *(undefined8 *)(param_2 + 0x370);
              *local_170 = uVar13 ^ *local_170;
              puStack_178 = (uint *)(param_2 + 0x380);
              FUN_180214e10(param_2,param_3,uVar16 | 0x32,param_2 + 0x340,&local_180,0x20);
            }
          }
          else {
LAB_180176d48:
            FUN_180174c00(uVar7,param_2,param_3,*(undefined4 *)(param_4 + 4),
                          *(undefined4 *)(param_4 + 6));
            puStack_178 = (uint *)(param_2 + 0x380);
            local_170 = (uint *)0x0;
            local_180 = (uint *)(param_2 + 0x360);
            FUN_180214e10(param_2,param_3,uVar16 | 0x38,param_2 + 0x340,&local_180,0x18);
          }
          goto LAB_1801770d0;
        }
        if (uVar16 == 1) {
          uVar7 = FUN_1801744d0(param_1,param_2,*(undefined4 *)(param_4 + 2),param_6);
          local_180 = (uint *)CONCAT71(local_180._1_7_,1);
          FUN_1801745f0(uVar7,param_2,param_3,0,*(undefined4 *)(param_4 + 4),
                        *(undefined8 *)(param_2 + 0x340),*(uint *)(param_4 + 2) >> 7 & 0x2000,
                        *(uint *)(param_4 + 2) >> 0x18 & 0xf);
          *(undefined4 *)(param_2 + 0x334) = 0;
          puVar6 = param_4 + 6;
          goto LAB_1801770d4;
        }
        if (uVar16 != 0x12) goto LAB_1801770d4;
        uVar16 = *(uint *)(param_4 + 4);
        if ((uVar16 & 0xf000000) == 0x6000000) {
          uVar16 = uVar16 & 0xf0ffffff;
          lVar15 = 0x10;
          lVar14 = 0xc;
        }
        else {
          lVar15 = 0xc;
          lVar14 = 0x10;
        }
        uVar8 = *(undefined4 *)(lVar14 + (longlong)param_4);
        uVar3 = *(undefined4 *)(lVar15 + (longlong)param_4);
        uVar7 = FUN_1801744d0(param_1,param_2,*(undefined4 *)(param_4 + 2),param_6);
        FUN_180174d50(uVar7,param_2,param_3,uVar16,uVar3,uVar8);
        iVar2 = *(int *)(param_2 + 0x334);
        local_cc = *(undefined1 *)(param_2 + 0x344);
        local_d0 = FUN_180213760(param_2,4,0);
        puVar12 = (uint *)(param_2 + 0x3a0);
        uStack_b8 = 0xffffffffffffffff;
        local_c0 = 0xffffffffffffffff;
        local_170 = (uint *)0x0;
        *puVar12 = *puVar12 ^ 0x80000000;
        local_180 = (uint *)(param_2 + 0x380);
        puStack_178 = puVar12;
        FUN_180214e10(param_2,param_3,0,&local_d0,&local_180,0x18);
        *puVar12 = *puVar12 ^ 0x80000000;
        if (iVar2 == 0) {
          uVar16 = *(uint *)(param_2 + 0x330);
        }
        else {
          uVar16 = 0;
        }
        bVar5 = FUN_180213268(0xe4,local_cc);
        local_160 = 0;
        local_180 = (uint *)((ulonglong)bVar5 | 0x100);
        puStack_178 = &local_d0;
        local_170 = (uint *)(param_2 + 0x360);
        puStack_168 = puVar12;
        FUN_180214e10(param_2,param_3,uVar16 | 0x32,param_2 + 0x340,&local_180,0x28);
      }
      puVar6 = param_4 + 10;
      goto LAB_1801770d4;
    }
    uVar7 = FUN_1801744d0(param_1,param_2,*(undefined4 *)(param_4 + 2),param_6);
    FUN_180174c00(uVar7,param_2,param_3,*(undefined4 *)(param_4 + 4),*(undefined4 *)(param_4 + 6));
    uVar13 = 0x10;
    if (uVar16 != 8) {
      uVar13 = 0x11;
    }
    if (*(int *)(param_2 + 0x334) == 0) {
      uVar16 = *(uint *)(param_2 + 0x330);
    }
    else {
      uVar16 = 0;
    }
    puStack_178 = (uint *)(param_2 + 0x380);
    local_170 = (uint *)0x0;
    local_180 = (uint *)(param_2 + 0x360);
    FUN_180214e10(param_2,param_3,uVar16 | uVar13,param_2 + 0x340,&local_180,0x18);
  }
LAB_1801770d0:
  puVar6 = param_4 + 8;
LAB_1801770d4:
  piVar10 = (int *)(param_2 + 0x3c0);
  iVar2 = *piVar10;
  uVar9 = 0;
  while ((iVar2 != 0 && ((uint)uVar9 < 4))) {
    param_2 = FUN_180213800(param_2,piVar10[uVar9]);
    piVar10[uVar9 & 0xffffffff] = 0;
    uVar9 = (ulonglong)((int)uVar9 + 1);
    iVar2 = piVar10[uVar9];
  }
  return puVar6;
}

