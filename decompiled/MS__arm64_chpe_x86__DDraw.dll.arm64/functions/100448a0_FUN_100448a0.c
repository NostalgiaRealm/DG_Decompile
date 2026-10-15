/*
 * FUN_100448a0 at 100448a0
 * undefined FUN_100448a0(void)
 * Address ranges: 100448a0-10044f67
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_100448a0(int param_1,int param_2,int param_3)

{
  uint *puVar1;
  uint *puVar2;
  int *piVar3;
  undefined8 *puVar4;
  uint *puVar5;
  int iVar6;
  uint *puVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  bool bVar12;
  int iVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  ulonglong uVar16;
  int iVar17;
  uint *puVar18;
  uint uVar19;
  code *extraout_w11;
  code *extraout_w11_00;
  code *extraout_w11_01;
  ulonglong extraout_x11;
  ulonglong extraout_x11_00;
  int extraout_w12;
  int extraout_w13;
  int extraout_w14;
  uint uVar20;
  char local_c0;
  code *local_a4;
  byte local_a0;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  byte local_84;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  
  uVar15 = 0x80070057;
  uVar14 = 0x80070057;
  if ((param_2 != 0) && (param_3 == 0)) {
    puVar1 = (uint *)(param_1 + 0x1b8);
    uVar19 = *puVar1;
    uVar14 = 0x88760250;
    if ((uVar19 & 0x24034) == 0) {
      puVar2 = (uint *)(param_2 + 4);
      uVar8 = *puVar2;
      if (((((uVar8 & 1) == 0) || (uVar14 = 0x88760064, *(int *)(param_2 + 0x68) == 0)) &&
          (uVar14 = 0x80070057, (uVar8 & 0xffffe7f0) == 0)) &&
         ((uVar8 != 0 && ((uVar8 & 0xc) == 0xc || (uVar8 & 0xc) == 0)))) {
        piVar3 = (int *)(param_1 + 4);
        uVar14 = 0x887601ae;
        if (*(int *)(*piVar3 + 0xb0) == 0) {
          puVar4 = (undefined8 *)(param_1 + 0x198);
          puVar5 = (uint *)(param_1 + 0x158);
          uStack_58 = *(undefined8 *)(param_1 + 0x1a0);
          local_60 = *puVar4;
          uStack_68 = *(undefined8 *)(param_1 + 0x1b0);
          uStack_70 = *(undefined8 *)(param_1 + 0x1a8);
          uVar20 = *puVar5;
          uVar11 = uVar19 >> 0xc & 1;
          iVar13 = *(int *)(param_1 + 0x1cc);
          bVar12 = true;
          if ((uVar8 >> 2 & 1) == 0) {
            iVar17 = *(int *)(param_1 + 0x160);
            uVar9 = *(uint *)(param_1 + 0x15c);
          }
          else {
            uVar9 = *(uint *)(param_2 + 0xc);
            if ((0x3fff < uVar9 - 1) || ((uVar11 != 0 && uVar9 != 1 && ((uVar9 - 1 & uVar9) != 0))))
            {
              bVar12 = false;
            }
            iVar17 = *(int *)(param_2 + 0x10);
            if (iVar17 == 0) {
              bVar12 = false;
            }
          }
          puVar18 = (uint *)(param_1 + 0x15c);
          local_c0 = (char)uVar11;
          if (((uVar8 >> 1 & 1) != 0) &&
             ((uVar20 = *(uint *)(param_2 + 8), 0x3fff < uVar20 - 1 ||
              ((local_c0 != '\0' && uVar20 != 1 && ((uVar20 - 1 & uVar20) != 0)))))) {
            bVar12 = false;
          }
          if (((uVar8 >> 0xb & 1) != 0) && (*(int *)(param_2 + 0x24) == 0)) {
            bVar12 = false;
          }
          local_80 = local_60;
          uStack_78 = uStack_58;
          local_50 = uStack_70;
          uStack_48 = uStack_68;
          if ((uVar8 >> 0xc & 1) != 0) {
            uStack_78 = *(undefined8 *)(param_2 + 0x50);
            local_80 = *(undefined8 *)(param_2 + 0x48);
            uStack_68 = *(undefined8 *)(param_2 + 0x60);
            uStack_70 = *(undefined8 *)(param_2 + 0x58);
            local_50 = uStack_70;
            uStack_48 = uStack_68;
            if ((uVar19 >> 0xc & 1) == 0) {
              iVar13 = FUN_1004cd40(*(undefined4 *)(param_1 + 0xfc),param_2);
            }
            else {
              iVar13 = FUN_1004cef0();
            }
            if (iVar13 == -1) {
              uVar15 = 0x88760091;
            }
            if (iVar13 == -1) {
              bVar12 = false;
            }
            uVar14 = 0x20;
            if (local_c0 != '\0') {
              uVar14 = (undefined4)local_80;
            }
            local_80 = CONCAT44(local_80._4_4_,uVar14);
          }
          uVar14 = uVar15;
          if (bVar12) {
            local_60 = local_80;
            uStack_58 = uStack_78;
            if (((uVar9 != *puVar18) || (uVar20 != *puVar5)) ||
               (uVar16 = FUN_1004cb90(&local_80,puVar4,0), (uVar16 & 1) == 0)) {
              if (*(int *)(param_1 + 0x10c) != 0) {
                return 0x80004001;
              }
              if (*(int *)(param_1 + 0x110) != 0) {
                return 0x80004001;
              }
              if (*(int *)(param_1 + 0x118) != 0) {
                return 0x80004001;
              }
              if (*(int *)(param_1 + 0x120) != 0) {
                return 0x80004001;
              }
              if (*(int *)(param_1 + 0x124) != 0) {
                return 0x80004001;
              }
              if (*(int *)(param_1 + 0x128) != 0) {
                return 0x80004001;
              }
              if (*(int *)(param_1 + 300) != 0) {
                return 0x80004001;
              }
              if (*(int *)(param_1 + 0x130) != 0) {
                return 0x80004001;
              }
              iVar6 = param_1 + 0x150;
              uVar15 = *(undefined4 *)(*piVar3 + 0x4c);
              if ((*puVar1 & 0x2001) == 0) {
                local_a0 = 0;
                FUN_1004d7d0(iVar6);
                local_a4 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
                (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
                iVar13 = (*extraout_w11_00)(uVar15,uVar9,uVar20,iVar13,1);
              }
              else {
                FUN_100395c8(*(undefined4 *)(param_1 + 0xfc),&local_80);
                uVar14 = FUN_1004d7d0(iVar6);
                FUN_1004c7e0(param_1,&local_90,uVar9,uVar20,uVar14,&local_80,1);
                local_a0 = local_84;
                FUN_1004d7d0(iVar6);
                local_a4 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
                uVar14 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
                iVar13 = (*extraout_w11)(uVar15,local_90,uStack_8c,uVar9,uVar20,local_88,iVar13,1,
                                         uVar14);
              }
              if (iVar13 == 0) {
                return 0x80004005;
              }
              FUN_10008fd0(*piVar3);
              iVar6 = *piVar3;
              puVar7 = (uint *)(iVar6 + 0x34);
              if ((*puVar7 >> 3 & 1) == 0) {
                FUN_10008e78(iVar6);
              }
              else {
                FUN_100914d0(*(undefined4 *)(iVar6 + 0x20));
                *(undefined4 *)(iVar6 + 0x20) = 0;
                *puVar7 = *puVar7 & 0xfffffff7;
              }
              iVar6 = *piVar3;
              iVar10 = *(int *)(iVar6 + 0xc4);
              if (iVar10 - 1U < 0xfffffffe) {
                (*(code *)PTR_FUN_100ba06c)(iVar10);
              }
              *(int *)(iVar6 + 0xc4) = -1;
              uVar15 = (*local_a4)();
              (*extraout_w11_01)(uVar15);
              *(int *)(*piVar3 + 0x50) = iVar13;
              *(uint *)(*piVar3 + 200) = *(uint *)(*piVar3 + 200) & 0xfffffffe | local_a0 & 1;
              *(undefined8 *)(param_1 + 0x1a0) = uStack_58;
              *puVar4 = local_60;
              *(undefined8 *)(param_1 + 0x1b0) = uStack_48;
              *(undefined8 *)(param_1 + 0x1a8) = local_50;
              *puVar18 = uVar9;
              *puVar5 = uVar20;
              FUN_1004d138(param_1);
              if ((((*puVar1 >> 0x11 & 1) == 0) && ((*(uint *)(param_1 + 0x19c) >> 2 & 1) == 0)) &&
                 ((*puVar2 >> 0xb & 1) == 0)) {
                uVar15 = 0xffffffff;
              }
              else {
                uVar15 = 0;
              }
              *(undefined4 *)(*piVar3 + 0xc4) = uVar15;
            }
            uVar19 = *(uint *)(param_1 + 0x154);
            if ((*puVar2 & 0x800) == 0) {
              iVar17 = 0;
              uVar15 = 0;
              uVar19 = uVar19 & 0xfffff7ff;
            }
            else {
              uVar15 = *(undefined4 *)(param_2 + 0x24);
              uVar19 = uVar19 | 0x800;
            }
            *(uint *)(param_1 + 0x154) = uVar19;
            *(undefined4 *)(param_1 + 0x174) = uVar15;
            *(int *)(param_1 + 0x160) = iVar17;
            FUN_1004c408(param_1 + 0x150);
            FUN_1004c3a8(extraout_x11 & 0xffffffff);
            FUN_1004c308(extraout_x11_00 & 0xffffffff);
            FUN_10007120(*piVar3,*puVar18,*puVar5);
            *(undefined1 *)(extraout_w14 + 0x1f) = 0;
            if (extraout_w13 != extraout_w12) {
              FUN_10008fd0(*piVar3);
              iVar13 = *piVar3;
              puVar1 = (uint *)(iVar13 + 0x34);
              if ((*puVar1 >> 3 & 1) == 0) {
                FUN_10008e78(iVar13);
              }
              else {
                FUN_100914d0(*(undefined4 *)(iVar13 + 0x20));
                *(undefined4 *)(iVar13 + 0x20) = 0;
                *puVar1 = *puVar1 & 0xfffffff7;
              }
              iVar13 = *piVar3;
              iVar17 = *(int *)(iVar13 + 0xc4);
              if (iVar17 - 1U < 0xfffffffe) {
                (*(code *)PTR_FUN_100ba06c)(iVar17);
              }
              *(int *)(iVar13 + 0xc4) = -1;
              FUN_1004b350(param_1,1);
            }
            FUN_1004c0a8(param_1);
            uVar14 = 0;
          }
        }
      }
    }
  }
  return uVar14;
}

