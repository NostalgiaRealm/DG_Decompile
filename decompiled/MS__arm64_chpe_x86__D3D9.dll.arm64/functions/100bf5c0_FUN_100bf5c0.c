/*
 * FUN_100bf5c0 at 100bf5c0
 * undefined FUN_100bf5c0(void)
 * Address ranges: 100bf5c0-100bfa7f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint FUN_100bf5c0(int param_1,undefined4 param_2,undefined4 param_3,int param_4,int param_5,
                 int *param_6)

{
  undefined4 *puVar1;
  int *piVar2;
  int *piVar3;
  uint uVar4;
  undefined4 uVar5;
  uint uVar6;
  int iVar7;
  code *pcVar8;
  bool bVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  code *extraout_w11;
  code *extraout_w11_00;
  code *extraout_w11_01;
  code *extraout_w11_02;
  code *extraout_w11_03;
  undefined1 auVar16 [16];
  int local_78;
  int iStack_74;
  undefined4 local_70;
  int iStack_6c;
  int local_68;
  undefined4 uStack_64;
  undefined1 auStack_60 [4];
  int local_5c;
  int local_58;
  int iStack_54;
  int local_50;
  
  FUN_10130fb8(*(int *)(param_1 + -0x7c) + 0x11c0);
  pcVar8 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  iVar7 = param_1 + -0xc0;
  uVar12 = 0;
  (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
  iVar10 = (*extraout_w11)(iVar7,1);
  if (iVar10 != 0) {
    puVar1 = (undefined4 *)(iVar10 + 0xc);
    uVar12 = 1;
    iVar11 = FUN_100bdc30(iVar7,*puVar1,param_2,param_3);
    if (iVar11 != -0x7fffbffb) {
      FUN_100bd090(iVar7,auStack_60,param_2,param_3);
      if (iVar11 < 0) {
        iVar10 = FUN_100be708(iVar7,param_2,param_3);
        if (iVar10 == 0) {
          uVar12 = param_6[1];
          uVar13 = param_6[3];
          if (uVar12 <= uVar13) {
            iVar10 = *param_6;
            bVar9 = uVar12 == uVar13;
            iVar11 = local_50;
            do {
              if (bVar9) {
                iVar11 = param_6[2];
              }
              FUN_101325a0(param_4 + uVar12 * param_5 + iVar10 * local_5c,iVar10 * local_5c,
                           (iVar11 - iVar10) * local_5c);
              uVar13 = param_6[3];
              uVar12 = uVar12 + 1;
              iVar10 = 0;
              bVar9 = uVar12 == uVar13;
            } while (uVar12 <= uVar13);
          }
          FUN_100beaa0(iVar7,param_2,param_3);
          uVar12 = 1;
        }
      }
      else {
        (*pcVar8)();
        (*extraout_w11_00)(iVar7,param_2,param_3);
        uVar14 = FUN_100babb0(iVar10,iVar11);
        if ((uVar14 & 1) != 0) {
          uVar5 = *puVar1;
          iVar7 = *(int *)(param_1 + 0x20);
          piVar2 = (int *)(iVar7 + 0x1cf04);
          *(int *)(*(int *)(*piVar2 + 0x1304) + 0x948) = iVar7;
          piVar3 = (int *)(*(int *)(*piVar2 + 0x1304) + 0x634);
          *piVar3 = *piVar3 + 1;
          FUN_10113dd8(*(undefined4 *)(*piVar2 + 0x1304),uVar5,iVar11,0,0);
          uVar14 = FUN_10114608(*(undefined4 *)(*piVar2 + 0x1304));
          uVar15 = FUN_10113d40(*(int *)(*piVar2 + 0x1304) + 4,0);
          if (((uVar15 & 1) == 0) || (uVar14 == 0)) {
            FUN_1011f160(*(undefined4 *)(*(int *)(iVar7 + 0x1cf00) + 0x172c0),uVar5,iVar11);
          }
          else {
            uVar5 = *(undefined4 *)(*piVar2 + 0x1304);
            while (uVar15 = FUN_10114528(uVar5), uVar15 < uVar14) {
              DataMemoryBarrier(2,2);
              Yield();
            }
          }
          iVar7 = *param_6;
          iVar10 = param_6[2];
          uVar13 = param_6[1];
          uVar6 = param_6[3];
          if (iVar7 == 0) {
            uVar12 = 1;
          }
          else {
            iStack_74 = uVar13 * iStack_54;
            local_78 = iVar7 * local_58;
            iStack_6c = local_50;
            if (uVar6 == uVar13) {
              iStack_6c = iVar10;
            }
            iStack_6c = iStack_6c * local_58;
            local_68 = iStack_54 + uVar13 * iStack_54;
            local_70 = 0;
            uStack_64 = 1;
            auVar16 = (*pcVar8)(*puVar1,param_4 + uVar13 * param_5 + iVar7 * local_5c);
            uVar12 = (*extraout_w11_01)(auVar16._0_8_ & 0xffffffff,auVar16._8_8_,param_5,0,iVar11,
                                        &local_78);
            uVar12 = ~uVar12 >> 0x1f;
            uVar13 = uVar13 + 1;
          }
          if (uVar13 < uVar6) {
            iStack_74 = iStack_54 * uVar13;
            local_78 = 0;
            iStack_6c = local_50 * local_58;
            local_70 = 0;
            uVar4 = uVar6;
            if (iVar10 == local_50) {
              uVar4 = uVar6 + 1;
            }
            local_68 = uVar4 * iStack_54;
            uStack_64 = 1;
            auVar16 = (*pcVar8)(*puVar1,param_4 + uVar13 * param_5);
            uVar13 = (*extraout_w11_02)(auVar16._0_8_ & 0xffffffff,auVar16._8_8_,param_5,0,iVar11,
                                        &local_78);
            uVar12 = uVar12 & ~uVar13 >> 0x1f;
            uVar13 = uVar6;
            if (iVar10 == local_50) {
              uVar13 = uVar6 + 1;
            }
          }
          if (uVar6 == uVar13) {
            iStack_74 = iStack_54 * uVar13;
            local_68 = iStack_54 + uVar6 * iStack_54;
            local_78 = 0;
            iStack_6c = iVar10 * local_58;
            local_70 = 0;
            uStack_64 = 1;
            auVar16 = (*pcVar8)(*puVar1,param_4 + uVar13 * param_5);
            uVar13 = (*extraout_w11_03)(auVar16._0_8_ & 0xffffffff,auVar16._8_8_,param_5,0,iVar11,
                                        &local_78);
            uVar12 = uVar12 & ~uVar13 >> 0x1f;
          }
        }
      }
    }
  }
  return uVar12;
}

