/*
 * FUN_10024c90 at 10024c90
 * undefined FUN_10024c90(void)
 * Address ranges: 10024c90-1002510b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint FUN_10024c90(int param_1,undefined4 param_2,undefined4 param_3,int param_4,int param_5,
                 int *param_6)

{
  undefined4 *puVar1;
  int *piVar2;
  uint uVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  code *pcVar7;
  bool bVar8;
  char cVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  ulonglong uVar14;
  longlong lVar15;
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
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined1 auStack_58 [4];
  int local_54;
  int local_50;
  int iStack_4c;
  int local_48;
  
  local_60 = param_3;
  uStack_5c = param_2;
  FUN_10090418(*(int *)(param_1 + -0x7c) + 0x11c0);
  pcVar7 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  iVar6 = param_1 + -0xc0;
  uVar12 = 0;
  (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
  iVar10 = (*extraout_w11)(iVar6,1);
  if (iVar10 != 0) {
    puVar1 = (undefined4 *)(iVar10 + 0xc);
    uVar12 = 1;
    iVar11 = FUN_10023350(iVar6,*puVar1,param_2,param_3);
    if (iVar11 != -0x7fffbffb) {
      FUN_10022718(iVar6,auStack_58,param_2,param_3);
      if (iVar11 < 0) {
        iVar10 = FUN_10023e18(iVar6,param_2,param_3);
        if (iVar10 == 0) {
          uVar12 = param_6[1];
          uVar13 = param_6[3];
          if (uVar12 <= uVar13) {
            iVar10 = *param_6;
            bVar8 = uVar12 == uVar13;
            iVar11 = local_48;
            do {
              if (bVar8) {
                iVar11 = param_6[2];
              }
              FUN_100917a0(param_4 + uVar12 * param_5 + iVar10 * local_54,iVar10 * local_54,
                           (iVar11 - iVar10) * local_54);
              uVar13 = param_6[3];
              uVar12 = uVar12 + 1;
              iVar10 = 0;
              bVar8 = uVar12 == uVar13;
            } while (uVar12 <= uVar13);
          }
          FUN_10024198(iVar6,uStack_5c,local_60);
          uVar12 = 1;
        }
      }
      else {
        (*pcVar7)();
        (*extraout_w11_00)(iVar6,param_2,param_3);
        uVar14 = FUN_100206e0(iVar10,iVar11);
        if ((uVar14 & 1) != 0) {
          iVar6 = *(int *)(param_1 + 0x20);
          uVar4 = *puVar1;
          *(int *)(*(int *)(*(int *)(iVar6 + 0xcf04) + 0x1304) + 0x948) = iVar6;
          piVar2 = (int *)(*(int *)(*(int *)(iVar6 + 0xcf04) + 0x1304) + 0x634);
          *piVar2 = *piVar2 + 1;
          FUN_1007d820(*(undefined4 *)(*(int *)(iVar6 + 0xcf04) + 0x1304),uVar4,iVar11,0,0);
          lVar15 = FUN_1007dd50(*(undefined4 *)(*(int *)(iVar6 + 0xcf04) + 0x1304));
          cVar9 = FUN_1007d440(*(int *)(*(int *)(iVar6 + 0xcf04) + 0x1304) + 4,0);
          if (cVar9 == '\0' || (cVar9 == '\0' || lVar15 == 0)) {
            FUN_10078ac0(*(undefined4 *)(*(int *)(iVar6 + 0xcf00) + 0x172c0),uVar4,iVar11);
          }
          else {
            FUN_1007de50(*(undefined4 *)(*(int *)(iVar6 + 0xcf04) + 0x1304),lVar15);
          }
          iVar6 = *param_6;
          iVar10 = param_6[2];
          uVar5 = param_6[3];
          uVar13 = param_6[1];
          if (iVar6 == 0) {
            uVar12 = 1;
          }
          else {
            iStack_74 = uVar13 * iStack_4c;
            local_78 = iVar6 * local_50;
            iStack_6c = local_48;
            if (uVar5 == uVar13) {
              iStack_6c = iVar10;
            }
            iStack_6c = iStack_6c * local_50;
            local_68 = iStack_4c + uVar13 * iStack_4c;
            local_70 = 0;
            uStack_64 = 1;
            auVar16 = (*pcVar7)(*puVar1,param_4 + uVar13 * param_5 + iVar6 * local_54);
            uVar12 = (*extraout_w11_01)(auVar16._0_8_ & 0xffffffff,auVar16._8_8_,param_5,0,iVar11,
                                        &local_78);
            uVar12 = ~uVar12 >> 0x1f;
            uVar13 = uVar13 + 1;
          }
          if (uVar13 < uVar5) {
            iStack_74 = iStack_4c * uVar13;
            local_78 = 0;
            iStack_6c = local_48 * local_50;
            local_70 = 0;
            uVar3 = uVar5;
            if (iVar10 == local_48) {
              uVar3 = uVar5 + 1;
            }
            local_68 = uVar3 * iStack_4c;
            uStack_64 = 1;
            auVar16 = (*pcVar7)(*puVar1,param_4 + uVar13 * param_5);
            uVar13 = (*extraout_w11_02)(auVar16._0_8_ & 0xffffffff,auVar16._8_8_,param_5,0,iVar11,
                                        &local_78);
            uVar12 = uVar12 & ~uVar13 >> 0x1f;
            uVar13 = uVar5;
            if (iVar10 == local_48) {
              uVar13 = uVar5 + 1;
            }
          }
          if (uVar5 == uVar13) {
            iStack_74 = iStack_4c * uVar13;
            local_78 = 0;
            iStack_6c = iVar10 * local_50;
            local_70 = 0;
            local_68 = iStack_4c + uVar5 * iStack_4c;
            uStack_64 = 1;
            auVar16 = (*pcVar7)(*puVar1,param_4 + uVar13 * param_5);
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

