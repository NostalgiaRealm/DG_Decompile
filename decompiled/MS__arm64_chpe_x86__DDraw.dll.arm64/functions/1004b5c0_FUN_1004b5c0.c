/*
 * FUN_1004b5c0 at 1004b5c0
 * undefined FUN_1004b5c0(void)
 * Address ranges: 1004b5c0-1004b97b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_1004b5c0(int param_1,int param_2)

{
  int *piVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  code *pcVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 uVar8;
  int iVar9;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined4 *puVar10;
  uint uVar11;
  undefined4 *extraout_w8;
  code *extraout_w11;
  code *extraout_w11_00;
  code *extraout_w11_01;
  code *extraout_w11_02;
  code *extraout_w11_03;
  code *extraout_w11_04;
  uint uVar12;
  undefined8 uVar13;
  uint uVar14;
  uint uVar15;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 local_90;
  byte local_8c;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined1 local_54;
  undefined1 auStack_50 [16];
  
  piVar1 = (int *)(param_2 + 4);
  uVar13 = 1;
  if (*(int *)(*(int *)(*piVar1 + 0x50) + 4) != 2) {
    uVar13 = 0;
    FUN_100395c8(*(int *)(param_1 + 0xfc),auStack_50);
    iVar9 = param_2 + 0x150;
    uVar6 = FUN_1004d7d0(iVar9);
    FUN_1004c7e0(param_1,&local_98,*(undefined4 *)(param_2 + 0x15c),*(undefined4 *)(param_2 + 0x158)
                 ,uVar6,auStack_50,1);
    iVar7 = FUN_1004d7d0(iVar9);
    uVar11 = 6;
    if (iVar7 != 2) {
      uVar11 = 1;
    }
    if ((*(uint *)(param_1 + 0x154) >> 0x11 & 1) == 0) {
      uVar15 = 1;
    }
    else {
      uVar15 = *(uint *)(param_1 + 0x168);
    }
    uVar6 = *(undefined4 *)(*(int *)(param_1 + 4) + 0x4c);
    FUN_1004d7d0(iVar9);
    pcVar5 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
    uVar8 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
    iVar9 = (*extraout_w11)(uVar6,local_98,uStack_94,*(uint *)(param_1 + 0x15c),
                            *(uint *)(param_1 + 0x158),local_90,*extraout_w8,1,uVar8);
    if (iVar9 != 0) {
      (*pcVar5)();
      (*extraout_w11_00)(param_1);
      (*pcVar5)();
      (*extraout_w11_01)(iVar9);
      iVar7 = *(int *)(*piVar1 + 0x50);
      *(int *)(*piVar1 + 0x50) = iVar9;
      *(uint *)(*piVar1 + 200) = *(uint *)(*piVar1 + 200) & 0xfffffffe | local_8c & 1;
      puVar2 = (uint *)(*(int *)(param_1 + 4) + 200);
      *puVar2 = *puVar2 | 4;
      FUN_10050030(param_2);
      local_60 = 0;
      local_58 = 0;
      uVar14 = 0;
      uStack_78 = 0;
      local_80 = 0;
      uStack_68 = 0;
      uStack_70 = 0;
      local_54 = 1;
      uVar13 = extraout_x1;
      do {
        uVar12 = 0;
        if (uVar15 != 0) {
          do {
            uVar3 = *(uint *)(param_1 + 0x15c) >> (ulonglong)(uVar12 & 0x1f);
            if (uVar3 == 0) {
              uVar3 = 1;
            }
            uVar4 = *(uint *)(param_1 + 0x158) >> (ulonglong)(uVar12 & 0x1f);
            if (uVar4 == 0) {
              uVar4 = 1;
            }
            (*(code *)PTR_FUN_100ba2b8)(&uStack_70,0,0,uVar3,uVar4);
            (*(code *)PTR_FUN_100ba2b8)(&local_80,0,0,uVar3,uVar4);
            uVar6 = (*pcVar5)();
            (*extraout_w11_02)(uVar6,uVar12,uVar14,uVar12,uVar14,iVar9,iVar7,&local_80);
            uVar12 = uVar12 + 1;
            uVar13 = extraout_x1_00;
          } while (uVar12 < uVar15);
        }
        uVar14 = uVar14 + 1;
      } while (uVar14 < uVar11);
      if (DAT_100c291c != 0) {
        puVar10 = (undefined4 *)(*(int *)(param_1 + 0xfc) + 0xc);
        uVar6 = (*pcVar5)(DAT_100c291c,uVar13,param_1);
        (*extraout_w11_03)(uVar6,*puVar10);
      }
      (*pcVar5)();
      (*extraout_w11_04)(iVar7);
      uVar13 = 1;
    }
  }
  return uVar13;
}

