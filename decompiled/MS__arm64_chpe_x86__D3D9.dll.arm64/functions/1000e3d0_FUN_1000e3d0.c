/*
 * FUN_1000e3d0 at 1000e3d0
 * undefined FUN_1000e3d0(void)
 * Address ranges: 1000e3d0-1000e98b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_1000e3d0(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  uint *puVar1;
  bool bVar2;
  byte bVar3;
  undefined1 uVar4;
  int iVar5;
  int iVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  byte bVar15;
  uint uVar16;
  undefined4 uVar17;
  uint uVar18;
  int *local_10c;
  undefined4 local_fc;
  int local_f8;
  int local_f4;
  uint *local_f0;
  int local_ec;
  int local_e8;
  undefined8 local_e0;
  ulonglong uStack_d8;
  uint *local_d0;
  int local_cc;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 local_c0;
  int iStack_bc;
  int local_b8;
  undefined1 auStack_b0 [12];
  int local_a4;
  int local_9c;
  undefined1 auStack_98 [12];
  int local_8c;
  int local_84;
  undefined4 local_80;
  uint uStack_7c;
  int local_78;
  undefined8 local_74;
  undefined8 local_6c;
  undefined8 local_64;
  undefined8 local_5c;
  uint local_50;
  uint local_4c;
  
  if (((*(uint *)(param_1 + 0xdd0) >> 2 & 1) == 0) && (*(int *)(DAT_10175b54 + 0x20) == 0)) {
    bVar2 = false;
    *(undefined4 *)(DAT_10175b54 + 0x1c) = 1;
  }
  else {
    bVar2 = true;
    iVar5 = (*(code *)PTR_FUN_1016c120)(DAT_10175b54);
    if (iVar5 == 0) {
      FUN_100071d0(0);
    }
  }
  if (param_4 == 0) {
    uVar14 = 0;
    if (*(uint *)(param_1 + 0xd98) != 0) {
      do {
        FUN_1001fd00(*(undefined4 *)(*(int *)(param_1 + 0xd94) + uVar14 * 4),0,0,0,0,0,0,0);
        FUN_1001fd70(**(undefined4 **)(param_1 + 0xd94),0);
        uVar14 = uVar14 + 1;
      } while (uVar14 < *(uint *)(param_1 + 0xd98));
    }
    FUN_1000b4e0(param_1);
    uVar17 = 0;
    goto LAB_1000e93c;
  }
  uStack_d8 = *(ulonglong *)(param_4 + 0x40);
  local_e0 = *(ulonglong *)(param_4 + 0x38);
  iVar5 = *(int *)(param_4 + 0x28);
  FUN_10004f50(*(undefined4 *)(param_1 + 0xd90),*(undefined4 *)(param_1 + 0xdf0),&local_50);
  uVar8 = uStack_d8;
  uVar17 = 0x8876086c;
  uVar14 = (uint)uStack_d8;
  uVar7 = FUN_1003b850(uStack_d8 & 0xffffffff);
  if ((uVar7 & 1) == 0) goto LAB_1000e93c;
  uVar18 = (uint)(uStack_d8 >> 0x20);
  uVar7 = FUN_1003b850(uVar18);
  if (((((uVar7 & 1) == 0) || (iVar5 != 0x15)) || (local_50 <= uVar14)) || (local_4c <= uVar18))
  goto LAB_1000e93c;
  local_6c = 0;
  local_80 = 0x28;
  local_78 = -uVar18;
  local_74 = 0x200001;
  local_64 = 0;
  local_5c = 0;
  local_fc = 0;
  uStack_7c = uVar14;
  iVar5 = (*(code *)PTR_FUN_1016c00c)(0,&local_80,0,&local_fc,0,0);
  local_e8 = iVar5;
  if (iVar5 == 0) goto LAB_1000e93c;
  iVar6 = (*(code *)PTR_FUN_1016c00c)(0,&local_80,0,&local_fc,0,0);
  local_ec = iVar6;
  if (iVar6 != 0) {
    iVar5 = (*(code *)PTR_FUN_1016c024)(iVar5,0x18,auStack_b0);
    if (((iVar5 != 0) && (iVar5 = (*(code *)PTR_FUN_1016c024)(iVar6,0x18,auStack_98), iVar5 != 0))
       && (iVar5 = FUN_1001e800(param_4,&local_e0,0,0x10,0), -1 < iVar5)) {
      puVar1 = (uint *)(param_1 + 0xd98);
      iVar5 = local_e0._4_4_;
      bVar15 = 1;
      local_f8 = local_9c;
      local_f4 = local_84;
      local_f0 = puVar1;
      iVar6 = param_1;
      if (*puVar1 == 0) {
LAB_1000e728:
        uVar16 = 0;
        if (uVar18 != 0) {
          iVar9 = local_f4;
          iVar10 = local_f8;
          do {
            uVar13 = 0;
            if (uVar14 != 0) {
              iVar12 = 0;
              do {
                if (*(byte *)(iVar5 + 3 + uVar13 * 4) < 0x80) {
                  *(undefined4 *)(iVar12 + iVar10) = 0xffffff;
                  uVar17 = 0;
                  iVar11 = iVar12;
                }
                else {
                  *(undefined4 *)(iVar12 + iVar10) = 0;
                  uVar17 = *(undefined4 *)(iVar12 + iVar5);
                  iVar11 = uVar13 << 2;
                }
                uVar13 = uVar13 + 1;
                *(undefined4 *)(iVar11 + iVar9) = uVar17;
                iVar12 = iVar12 + 4;
              } while (uVar13 < uVar14);
            }
            uVar16 = uVar16 + 1;
            iVar5 = (int)local_e0 + iVar5;
            iVar10 = local_a4 + iVar10;
            iVar9 = local_8c + iVar9;
          } while (uVar16 < uVar18);
        }
      }
      else {
        uVar16 = 0;
        do {
          bVar3 = FUN_1001fc50(*(undefined4 *)(*(int *)(param_1 + 0xd94) + uVar16 * 4));
          uVar7 = local_e0;
          uVar16 = uVar16 + 1;
          bVar15 = bVar3 & bVar15;
        } while (uVar16 < *puVar1);
        if (bVar15 != 0) goto LAB_1000e728;
        if (*puVar1 != 0) {
          local_e0 = local_e0 & 0xffffffffffffff00;
          local_d0 = local_f0;
          uVar16 = 0;
          local_cc = param_1;
          do {
            FUN_1001fd00(*(undefined4 *)(*(int *)(param_1 + 0xd94) + uVar16 * 4),param_4,
                         uVar8 & 0xffffffff,uVar18,param_2,param_3,iVar5,uVar7 & 0xffffffff);
            uVar16 = uVar16 + 1;
          } while (uVar16 < *local_d0);
          iVar6 = local_cc;
          bVar15 = (byte)local_e0;
        }
        uVar16 = 0;
        iVar5 = local_f8;
        iVar10 = local_f4;
        if (uVar18 != 0) {
          do {
            uVar13 = 0;
            if (uVar14 != 0) {
              do {
                *(undefined4 *)(iVar5 + uVar13 * 4) = 0xffffff;
                iVar9 = uVar13 * 4;
                uVar13 = uVar13 + 1;
                *(undefined4 *)(iVar10 + iVar9) = 0;
              } while (uVar13 < uVar14);
            }
            uVar16 = uVar16 + 1;
            iVar5 = local_a4 + iVar5;
            iVar10 = local_8c + iVar10;
          } while (uVar16 < uVar18);
        }
      }
      local_10c = (int *)(param_1 + 0xd94);
      uVar17 = 0x8876086c;
      FUN_1001e900(param_4);
      local_c8 = 0;
      iStack_bc = local_e8;
      local_b8 = local_ec;
      uStack_c4 = param_2;
      local_c0 = param_3;
      iVar5 = (*(code *)PTR_FUN_1016c184)(&local_c8);
      if (iVar5 != 0) {
        if ((bVar15 != 0) && (uVar8 = FUN_1003e140(*(undefined4 *)*local_10c), (uVar8 & 1) != 0)) {
          FUN_1003e250(*(undefined4 *)*local_10c,iVar5);
        }
        iVar10 = *(int *)(iVar6 + 0xde4);
        if (iVar10 == 0) {
          if (bVar15 == 0) {
            uVar4 = FUN_1003e140(*(undefined4 *)*local_10c);
            puVar1 = local_f0;
            uVar14 = 0;
            if (*local_f0 != 0) {
              do {
                FUN_1001fd70(*(undefined4 *)(*local_10c + uVar14 * 4),uVar4);
                uVar14 = uVar14 + 1;
              } while (uVar14 < *puVar1);
            }
          }
        }
        else {
          (*(code *)PTR_FUN_1016c194)(iVar10);
        }
        *(int *)(iVar6 + 0xde4) = iVar5;
        uVar17 = 0;
      }
    }
    (*(code *)PTR_FUN_1016c018)(local_ec);
  }
  (*(code *)PTR_FUN_1016c018)(local_e8);
LAB_1000e93c:
  if (bVar2) {
    (*(code *)PTR_FUN_1016c0c0)(DAT_10175b54);
  }
  else {
    *(undefined4 *)(DAT_10175b54 + 0x1c) = 0;
  }
  return uVar17;
}

