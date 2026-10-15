/*
 * FUN_18020e268 at 18020e268
 * undefined FUN_18020e268(void)
 * Address ranges: 18020e268-18020e6e7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4
FUN_18020e268(longlong *param_1,ulonglong *param_2,uint param_3,undefined4 param_4,ulonglong param_5
             ,ulonglong param_6,undefined4 param_7,ulonglong param_8)

{
  longlong *plVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  longlong lVar4;
  uint uVar5;
  uint uVar6;
  undefined *puVar7;
  undefined4 *puVar8;
  undefined8 uVar9;
  uint uVar10;
  uint uVar11;
  ulonglong uVar12;
  longlong lVar13;
  code *extraout_x11;
  code *extraout_x11_00;
  code *extraout_x11_01;
  code *extraout_x11_02;
  ulonglong uVar14;
  ulonglong *puVar15;
  ulonglong uVar16;
  undefined4 uVar17;
  ulonglong uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  code *local_88;
  longlong local_80;
  longlong *local_78;
  ulonglong *local_70 [4];
  uint local_50;
  undefined4 uStack_4c;
  ulonglong uStack_48;
  
  local_88 = (code *)CONCAT44(local_88._4_4_,param_3);
  local_80 = CONCAT44(local_80._4_4_,param_4);
  local_78 = param_1;
  local_70[0] = param_2;
  thunk_FUN_1802236f8(param_1 + 5);
  uVar17 = 0;
  if ((char)param_1[10] == '\0') {
    uVar5 = *(uint *)((longlong)param_1 + 0xc);
    if (uVar5 == 0) goto LAB_18020e6c0;
    uVar11 = 0;
    uVar10 = uVar5;
    do {
      uVar6 = uVar10 + uVar11 >> 1;
      uVar12 = (ulonglong)uVar6;
      puVar15 = *(ulonglong **)(*param_1 + uVar12 * 0x18);
      if (puVar15 <= param_2) {
        if (param_2 <= puVar15) break;
        uVar11 = uVar6 + 1;
        uVar12 = (ulonglong)(uVar6 + 1);
        uVar6 = uVar10;
      }
      uVar10 = uVar6;
    } while (uVar10 != uVar11);
    if (((uint)uVar12 == uVar5) || (*(ulonglong **)(*local_78 + uVar12 * 0x18) != param_2))
    goto LAB_18020e6c0;
  }
  puVar8 = (undefined4 *)FUN_18020ec30(local_78,local_70);
  if (puVar8 != (undefined4 *)0x0) {
    *puVar8 = (undefined4)local_80;
    puVar15 = (ulonglong *)FUN_18020ee08(puVar8 + 2,&local_88);
    puVar7 = __hybrid_os_arm64x_dispatch_icall;
    if (puVar15 == (ulonglong *)0x0) {
      local_88 = (code *)CONCAT44(local_88._4_4_,0xffffffff);
      puVar15 = (ulonglong *)FUN_18020ee08(puVar8 + 2,&local_88);
      local_70[0] = puVar15;
      if (puVar15 != (ulonglong *)0x0) {
        uVar17 = *(undefined4 *)((longlong)puVar15 + 0x14);
        local_88 = (code *)__hybrid_os_arm64x_dispatch_icall;
        (*(code *)__hybrid_os_arm64x_dispatch_icall)(0x180224000);
        uVar12 = (*extraout_x11_01)();
        if (uVar12 < puVar15[3]) {
          uVar12 = puVar15[1];
          if (param_5 == *puVar15) {
            if (param_6 == uVar12) {
              uVar17 = *(undefined4 *)((longlong)puVar15 + 0x14);
            }
            else if (uVar12 != 0xffffffffffffffff) {
              FUN_180207560(uVar12 + 8,0);
            }
          }
          else {
            if (uVar12 != 0xffffffffffffffff) {
              FUN_180207560(uVar12 + 8,0);
            }
            if (param_6 != 0xffffffffffffffff) {
              FUN_180207560(param_6 + 8,0);
            }
            puVar15 = local_70[0];
            uVar12 = *local_70[0];
            uVar9 = (*local_88)(0x180224000);
            (*extraout_x11_02)(uVar9,*(undefined8 *)(uVar12 + 0x18),puVar15[3]);
          }
        }
      }
      uVar12 = (ulonglong)param_3;
      uVar18 = 0;
      uVar5 = puVar8[6];
      local_50 = param_3;
      uStack_4c = param_7;
      uStack_48 = param_8;
      if (uVar5 != 0) {
        uVar11 = 0;
        uVar10 = uVar5;
        do {
          uVar6 = uVar10 + uVar11 >> 1;
          uVar18 = (ulonglong)uVar6;
          uVar14 = *(ulonglong *)(*(longlong *)(puVar8 + 4) + uVar18 * 0x30);
          if (uVar14 <= uVar12) {
            if (uVar12 <= uVar14) break;
            uVar11 = uVar6 + 1;
            uVar18 = (ulonglong)(uVar6 + 1);
            uVar6 = uVar10;
          }
          uVar10 = uVar6;
        } while (uVar10 != uVar11);
        if (((uint)uVar18 != uVar5) &&
           (puVar15 = (ulonglong *)(*(longlong *)(puVar8 + 4) + uVar18 * 0x30), *puVar15 == uVar12))
        {
          puVar15[3] = param_6;
          puVar15[2] = param_5;
          puVar15[5] = param_8;
          puVar15[4] = CONCAT44(param_7,param_3);
          goto LAB_18020e6c0;
        }
      }
      uVar11 = puVar8[7];
      plVar1 = (longlong *)(puVar8 + 4);
      if (uVar11 == uVar5) {
        uVar5 = 0x10;
        if (uVar11 != 0) {
          uVar5 = uVar11 << 1;
        }
        local_88 = (code *)CONCAT44(local_88._4_4_,uVar5);
        local_80 = FUN_1802229a8((ulonglong)uVar5 * 0x30);
        if (local_80 != 0) {
          uVar14 = 0;
          if (puVar8[6] != 0) {
            do {
              uVar5 = (int)uVar14 + 1;
              puVar2 = (undefined8 *)(*(longlong *)(puVar8 + 4) + uVar14 * 0x30);
              puVar3 = (undefined8 *)(local_80 + uVar14 * 0x30);
              uVar9 = *puVar2;
              uVar20 = puVar2[3];
              uVar19 = puVar2[2];
              puVar3[1] = puVar2[1];
              *puVar3 = uVar9;
              puVar3[3] = uVar20;
              puVar3[2] = uVar19;
              uVar9 = puVar2[4];
              puVar3[5] = puVar2[5];
              puVar3[4] = uVar9;
              uVar14 = (ulonglong)uVar5;
            } while (uVar5 < (uint)puVar8[6]);
          }
          FUN_1802229d8(*(undefined8 *)(puVar8 + 2));
          *(longlong *)(puVar8 + 2) = local_80;
          *(longlong *)(puVar8 + 4) = local_80;
          puVar8[7] = local_88._0_4_;
        }
      }
      uVar14 = (ulonglong)(uint)puVar8[6];
      if (puVar8[7] != puVar8[6]) {
        while ((uint)uVar18 < (uint)uVar14) {
          uVar16 = (ulonglong)((uint)uVar14 - 1);
          puVar2 = (undefined8 *)(*(longlong *)(puVar8 + 4) + uVar14 * 0x30);
          puVar3 = (undefined8 *)(*(longlong *)(puVar8 + 4) + uVar16 * 0x30);
          uVar9 = *puVar3;
          uVar20 = puVar3[3];
          uVar19 = puVar3[2];
          puVar2[1] = puVar3[1];
          *puVar2 = uVar9;
          puVar2[3] = uVar20;
          puVar2[2] = uVar19;
          uVar9 = puVar3[4];
          puVar2[5] = puVar3[5];
          puVar2[4] = uVar9;
          uVar14 = uVar16;
        }
        puVar8[6] = puVar8[6] + 1;
        lVar13 = uVar18 * 0x30;
        *(uint *)(lVar13 + *plVar1 + 8) = param_3;
        lVar4 = lVar13 + *plVar1;
        *(ulonglong *)(lVar4 + 0x18) = param_6;
        *(ulonglong *)(lVar4 + 0x10) = param_5;
        *(ulonglong *)(lVar4 + 0x28) = uStack_48;
        *(ulonglong *)(lVar4 + 0x20) = CONCAT44(uStack_4c,local_50);
        *(ulonglong *)(*plVar1 + lVar13) = uVar12;
      }
    }
    else {
      uVar17 = *(undefined4 *)((longlong)puVar15 + 0x14);
      (*(code *)__hybrid_os_arm64x_dispatch_icall)(0x180224000);
      uVar12 = (*extraout_x11)();
      if (uVar12 < puVar15[3]) {
        uVar12 = puVar15[1];
        if (param_5 == *puVar15) {
          if (param_6 == uVar12) {
            uVar17 = *(undefined4 *)((longlong)puVar15 + 0x14);
          }
          else if (uVar12 != 0xffffffffffffffff) {
            FUN_180207560(uVar12 + 8,0);
          }
        }
        else {
          if (uVar12 != 0xffffffffffffffff) {
            FUN_180207560(uVar12 + 8,0);
          }
          if (param_6 != 0xffffffffffffffff) {
            FUN_180207560(param_6 + 8,0);
          }
          uVar12 = *puVar15;
          uVar9 = (*(code *)puVar7)(0x180224000);
          (*extraout_x11_00)(uVar9,*(undefined8 *)(uVar12 + 0x18),puVar15[3]);
        }
      }
      *puVar15 = param_5;
      puVar15[1] = param_6;
      puVar15[3] = param_8;
      *(uint *)(puVar15 + 2) = param_3;
      *(undefined4 *)((longlong)puVar15 + 0x14) = param_7;
    }
  }
LAB_18020e6c0:
  thunk_FUN_18022370c(local_78 + 5);
  return uVar17;
}

