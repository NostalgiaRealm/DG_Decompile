/*
 * FUN_10080340 at 10080340
 * undefined FUN_10080340(void)
 * Address ranges: 10080340-10080887
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_10080340(int param_1,int param_2,undefined8 *param_3)

{
  int *piVar1;
  int *piVar2;
  uint *puVar3;
  int iVar4;
  undefined8 *puVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  undefined4 *puVar11;
  int iVar12;
  code *pcVar13;
  int iVar14;
  int iVar15;
  short sVar16;
  short sVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  bool bVar23;
  int *piVar24;
  undefined8 uVar25;
  longlong lVar26;
  int *piVar27;
  uint uVar28;
  code *extraout_w11;
  code *extraout_w11_00;
  uint uVar29;
  int local_140;
  int local_110;
  undefined8 local_f0;
  undefined8 uStack_e8;
  int local_e0;
  undefined8 local_d0;
  longlong lStack_c8;
  longlong local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  longlong local_90 [2];
  int local_80;
  int iStack_7c;
  uint uStack_78;
  int iStack_74;
  int iStack_70;
  undefined1 auStack_60 [8];
  longlong local_58;
  longlong local_50;
  longlong local_48;
  
  iStack_74 = 0;
  iStack_70 = 0;
  bVar23 = *(char *)(param_1 + param_2 * 0x18 + 0x530) != '\0';
  local_80 = 4;
  if (!bVar23) {
    local_80 = 1;
  }
  iStack_7c = 2;
  if (!bVar23) {
    iStack_7c = 0;
  }
  uStack_78 = (uint)bVar23;
  iVar12 = param_1 + param_2 * 0x16c0;
  uVar25 = (*(code *)PTR_FUN_100a803c)(iVar12 + 0x1c58);
  lVar26 = FUN_1007db38(uVar25,param_3);
  local_90[0] = lVar26;
  piVar24 = (int *)FUN_1007de18(iVar12 + 0x1c74,local_90);
  uVar28 = uStack_78;
  iVar4 = iStack_7c;
  iVar10 = local_80;
  pcVar13 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  local_110 = 0;
  if (piVar24 != (int *)0x0) {
    uStack_e8 = CONCAT44(iStack_74,uStack_78);
    local_f0 = CONCAT44(iStack_7c,local_80);
    lStack_c8 = param_3[1];
    local_d0 = *param_3;
    uVar25 = param_3[3];
    local_c0 = param_3[2];
    uStack_a8 = param_3[5];
    local_b0 = param_3[4];
    iVar7 = iStack_74;
    if (iStack_74 == 0) {
      iVar7 = 1;
    }
    local_a0 = param_3[6];
    iVar8 = iStack_70;
    if (iStack_70 == 0) {
      iVar8 = 1;
    }
    lVar6 = 0x10000;
    if (lStack_c8 != 0) {
      lVar6 = lStack_c8;
    }
    piVar27 = (int *)*piVar24;
    local_b8 = uVar25;
    if (piVar27[1] != 0) {
      iVar20 = (int)uStack_a8;
      uStack_a8._4_4_ = (int)((ulonglong)uStack_a8 >> 0x20);
      iVar21 = uStack_a8._4_4_;
      uVar29 = 0;
      iVar18 = (int)local_b0;
      local_b0._4_4_ = (int)((ulonglong)local_b0 >> 0x20);
      iVar19 = local_b0._4_4_;
      local_110 = 0;
      iVar14 = (int)local_d0;
      iVar22 = (int)local_a0;
      local_b8._6_2_ = (short)((ulonglong)uVar25 >> 0x30);
      sVar17 = local_b8._6_2_;
      local_b8._4_2_ = (short)((ulonglong)uVar25 >> 0x20);
      sVar16 = local_b8._4_2_;
      local_b8._0_4_ = (int)uVar25;
      iVar15 = (int)local_b8;
      local_58 = lVar6;
      local_50 = local_c0;
      local_48 = lVar26;
      do {
        iVar9 = *(int *)(*piVar27 + uVar29 * 8);
        (*pcVar13)();
        (*extraout_w11)(iVar9,&local_d0);
        (*pcVar13)();
        (*extraout_w11_00)(iVar9,&local_f0,auStack_60);
        lVar26 = local_48;
        if ((((((int)local_f0 == iVar10) && (local_f0._4_4_ == iVar4)) &&
             ((uint)uStack_e8 == uVar28)) &&
            (((uStack_e8._4_4_ == iVar7 && (local_e0 == iVar8)) &&
             (((int)local_d0 == iVar14 && ((lStack_c8 == local_58 && (local_c0 == local_50))))))))
           && (((int)local_b8 == iVar15 &&
               (((((local_b8._4_2_ == sVar16 && (local_b8._6_2_ == sVar17)) &&
                  ((int)local_b0 == iVar18)) &&
                 ((local_b0._4_4_ == iVar19 && ((int)uStack_a8 == iVar20)))) &&
                ((uStack_a8._4_4_ == iVar21 && ((int)local_a0 == iVar22)))))))) {
          iVar10 = *(int *)(*(int *)*piVar24 + uVar29 * 8 + 4);
          piVar27 = (int *)(iVar12 + 0x1c84);
          if (iVar10 == *(int *)(iVar12 + 0x1c90)) {
            FUN_100826b0(piVar27);
          }
          else {
            piVar1 = (int *)(iVar12 + 0x1c94);
            iVar7 = *piVar1;
            *(undefined4 *)(*piVar27 + iVar10 * 0xc) = 0;
            iVar4 = *piVar27 + iVar10 * 0xc;
            piVar2 = (int *)(iVar4 + 4);
            if (iVar10 == iVar7) {
              *piVar1 = *piVar2;
            }
            else {
              *(undefined4 *)(*piVar27 + *piVar2 * 0xc + 8) = *(undefined4 *)(iVar4 + 8);
              iVar4 = *piVar27 + iVar10 * 0xc;
              *(undefined4 *)(*piVar27 + *(int *)(iVar4 + 8) * 0xc + 4) = *(undefined4 *)(iVar4 + 4)
              ;
              *(undefined4 *)(*piVar27 + iVar10 * 0xc + 8) =
                   *(undefined4 *)(*piVar27 + *piVar1 * 0xc + 8);
              *(int *)(*piVar27 + iVar10 * 0xc + 4) = *piVar1;
              *(int *)(*piVar27 + *piVar1 * 0xc + 8) = iVar10;
              iVar4 = *(int *)(*piVar27 + iVar10 * 0xc + 8);
              if (iVar4 != -1) {
                *(int *)(*piVar27 + iVar4 * 0xc + 4) = iVar10;
              }
            }
          }
          piVar27 = (int *)*piVar24;
          puVar3 = (uint *)(piVar27 + 1);
          uVar28 = *puVar3;
          if (uVar29 < uVar28) {
            uVar29 = uVar29 + 1;
            if (uVar29 < uVar28) {
              do {
                puVar5 = (undefined8 *)(*piVar27 + uVar29 * 8);
                uVar29 = uVar29 + 1;
                puVar5[-1] = *puVar5;
                uVar28 = *puVar3;
              } while (uVar29 < uVar28);
            }
            *puVar3 = uVar28 - 1;
          }
          *(longlong *)(iVar12 + 0x1c50) = *(longlong *)(iVar12 + 0x1c50) - lVar26;
          puVar11 = (undefined4 *)*piVar24;
          local_110 = iVar9;
          if (puVar11[1] == 0) {
            if (puVar11 != (undefined4 *)0x0) {
              FUN_10083420(*puVar11);
              FUN_100833b0(puVar11,0xc);
            }
            FUN_1007dea8(iVar12 + 0x1c74,local_90);
          }
          break;
        }
        piVar27 = (int *)*piVar24;
        uVar29 = uVar29 + 1;
      } while (uVar29 < (uint)piVar27[1]);
    }
  }
  (*(code *)PTR_FUN_100a8090)(iVar12 + 0x1c58);
  local_140 = local_110;
  if (local_110 == 0) {
    local_140 = 0;
    FUN_10066958(param_1 + 0x520,param_2,&local_80,0,param_3,0);
  }
  return local_140;
}

