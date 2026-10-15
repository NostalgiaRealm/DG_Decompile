/*
 * FUN_101292c8 at 101292c8
 * undefined FUN_101292c8(void)
 * Address ranges: 101292c8-1012977f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_101292c8(int param_1,undefined8 *param_2,int param_3,undefined8 *param_4)

{
  int *piVar1;
  int *piVar2;
  uint *puVar3;
  undefined8 *puVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  undefined4 *puVar8;
  code *pcVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  short sVar14;
  short sVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  int *piVar21;
  undefined8 uVar22;
  longlong lVar23;
  int *piVar24;
  uint uVar25;
  code *extraout_w11;
  code *extraout_w11_00;
  uint uVar26;
  undefined4 uVar27;
  int iVar28;
  int local_d8;
  int local_d4;
  int local_d0;
  undefined4 local_cc;
  int local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  int local_b0;
  undefined8 local_a0;
  longlong lStack_98;
  longlong local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  longlong local_60;
  longlong local_58;
  longlong local_50;
  longlong local_48;
  
  local_c8 = param_1 + 0x18;
  local_d4 = param_3;
  uVar22 = (*(code *)PTR_FUN_1016c074)(local_c8);
  lVar23 = FUN_10128fe8(uVar22,param_4);
  local_d0 = param_1 + 0x34;
  local_60 = lVar23;
  piVar21 = (int *)FUN_1011c558(local_d0,&local_60);
  pcVar9 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  uVar27 = 0;
  if (piVar21 != (int *)0x0) {
    uStack_b8 = param_2[1];
    local_c0 = *param_2;
    iVar6 = *(int *)(param_2 + 2);
    iVar28 = (int)((ulonglong)uStack_b8 >> 0x20);
    lStack_98 = param_4[1];
    local_a0 = *param_4;
    uVar22 = param_4[3];
    local_90 = param_4[2];
    uStack_78 = param_4[5];
    local_80 = param_4[4];
    if (iVar28 == 0) {
      iVar28 = 1;
    }
    local_70 = param_4[6];
    if (iVar6 == 0) {
      iVar6 = 1;
    }
    lVar5 = 0x10000;
    if (lStack_98 != 0) {
      lVar5 = lStack_98;
    }
    piVar24 = (int *)*piVar21;
    local_88 = uVar22;
    if (piVar24[1] != 0) {
      iVar18 = (int)uStack_78;
      uStack_78._4_4_ = (int)((ulonglong)uStack_78 >> 0x20);
      iVar19 = uStack_78._4_4_;
      iVar16 = (int)local_80;
      local_80._4_4_ = (int)((ulonglong)local_80 >> 0x20);
      iVar17 = local_80._4_4_;
      uVar26 = 0;
      iVar11 = (int)uStack_b8;
      local_cc = 0;
      iVar20 = (int)local_70;
      local_88._6_2_ = (short)((ulonglong)uVar22 >> 0x30);
      sVar15 = local_88._6_2_;
      local_88._4_2_ = (short)((ulonglong)uVar22 >> 0x20);
      sVar14 = local_88._4_2_;
      local_88._0_4_ = (int)uVar22;
      iVar13 = (int)local_88;
      iVar12 = (int)local_a0;
      iVar7 = (int)local_c0;
      local_c0._4_4_ = (int)((ulonglong)local_c0 >> 0x20);
      iVar10 = local_c0._4_4_;
      local_58 = lVar5;
      local_50 = local_90;
      local_48 = lVar23;
      do {
        uVar27 = *(undefined4 *)(*piVar24 + uVar26 * 8);
        (*pcVar9)();
        (*extraout_w11)(uVar27,&local_a0);
        (*pcVar9)();
        (*extraout_w11_00)(uVar27,&local_c0,&local_d8);
        lVar23 = local_48;
        if ((((((((int)local_c0 == iVar7) && (local_c0._4_4_ == iVar10)) &&
               ((int)uStack_b8 == iVar11)) && ((uStack_b8._4_4_ == iVar28 && (local_b0 == iVar6))))
             && (((int)local_a0 == iVar12 && ((lStack_98 == local_58 && (local_90 == local_50))))))
            && ((int)local_88 == iVar13)) &&
           ((((local_88._4_2_ == sVar14 && (local_88._6_2_ == sVar15)) && ((int)local_80 == iVar16))
            && (((local_80._4_4_ == iVar17 && ((int)uStack_78 == iVar18)) &&
                ((uStack_78._4_4_ == iVar19 &&
                 (((int)local_70 == iVar20 && (local_d8 == local_d4 || local_d4 == 0)))))))))) {
          iVar28 = *(int *)(*(int *)*piVar21 + uVar26 * 8 + 4);
          piVar24 = (int *)(param_1 + 0x44);
          if (iVar28 == *(int *)(param_1 + 0x50)) {
            FUN_1012ba20(piVar24);
          }
          else {
            piVar1 = (int *)(param_1 + 0x54);
            iVar7 = *piVar1;
            *(undefined4 *)(*piVar24 + iVar28 * 0xc) = 0;
            iVar6 = *piVar24 + iVar28 * 0xc;
            piVar2 = (int *)(iVar6 + 4);
            if (iVar28 == iVar7) {
              *piVar1 = *piVar2;
            }
            else {
              *(undefined4 *)(*piVar24 + *piVar2 * 0xc + 8) = *(undefined4 *)(iVar6 + 8);
              iVar6 = *piVar24 + iVar28 * 0xc;
              *(undefined4 *)(*piVar24 + *(int *)(iVar6 + 8) * 0xc + 4) = *(undefined4 *)(iVar6 + 4)
              ;
              *(undefined4 *)(*piVar24 + iVar28 * 0xc + 8) =
                   *(undefined4 *)(*piVar24 + *piVar1 * 0xc + 8);
              *(int *)(*piVar24 + iVar28 * 0xc + 4) = *piVar1;
              *(int *)(*piVar24 + *piVar1 * 0xc + 8) = iVar28;
              iVar6 = *(int *)(*piVar24 + iVar28 * 0xc + 8);
              if (iVar6 != -1) {
                *(int *)(*piVar24 + iVar6 * 0xc + 4) = iVar28;
              }
            }
          }
          piVar24 = (int *)*piVar21;
          puVar3 = (uint *)(piVar24 + 1);
          uVar25 = *puVar3;
          if (uVar26 < uVar25) {
            uVar26 = uVar26 + 1;
            if (uVar26 < uVar25) {
              do {
                puVar4 = (undefined8 *)(*piVar24 + uVar26 * 8);
                uVar26 = uVar26 + 1;
                puVar4[-1] = *puVar4;
                uVar25 = *puVar3;
              } while (uVar26 < uVar25);
            }
            *puVar3 = uVar25 - 1;
          }
          *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) - lVar23;
          puVar8 = (undefined4 *)*piVar21;
          if (puVar8[1] == 0) {
            if (puVar8 != (undefined4 *)0x0) {
              FUN_101322d0(*puVar8);
              FUN_10132260(puVar8,0xc);
            }
            FUN_1011c5e8(local_d0,&local_60);
          }
          break;
        }
        piVar24 = (int *)*piVar21;
        uVar26 = uVar26 + 1;
        uVar27 = local_cc;
      } while (uVar26 < (uint)piVar24[1]);
    }
  }
  (*(code *)PTR_FUN_1016c0c0)(local_c8);
  return uVar27;
}

