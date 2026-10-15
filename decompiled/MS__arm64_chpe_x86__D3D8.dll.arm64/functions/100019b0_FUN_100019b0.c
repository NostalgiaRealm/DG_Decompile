/*
 * FUN_100019b0 at 100019b0
 * undefined FUN_100019b0(void)
 * Address ranges: 100019b0-10001cb3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

byte FUN_100019b0(int param_1,int param_2)

{
  uint *puVar1;
  int iVar2;
  code *pcVar3;
  undefined4 uVar4;
  byte bVar5;
  uint uVar6;
  undefined4 uVar7;
  int iVar8;
  code *extraout_w11;
  code *extraout_w11_00;
  code *extraout_w11_01;
  code *extraout_w11_02;
  code *extraout_w11_03;
  code *extraout_w11_04;
  code *extraout_w11_05;
  code *extraout_w11_06;
  byte bVar9;
  uint uVar10;
  undefined1 auVar11 [16];
  
  uVar4 = DAT_1013ceec;
  pcVar3 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  bVar9 = 1;
  (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
  uVar6 = (*extraout_w11)(uVar4,&DAT_10129050);
  if (uVar6 != 0) {
    (*pcVar3)();
    uVar7 = (*extraout_w11_00)(param_2);
    switch(uVar7) {
    case 0:
      puVar1 = (uint *)&DAT_00000054;
      if (param_2 != 0) {
        puVar1 = (uint *)(param_2 + -0x1c);
      }
      if (((*puVar1 & 0x203) == 0) && (uVar10 = 0, uVar6 != 0)) {
        do {
          (*pcVar3)();
          iVar8 = (*extraout_w11_01)(uVar4,&DAT_10129050,uVar10);
          if (iVar8 != 0) {
            iVar2 = 0;
            if (*(int *)(param_1 + 0xacc) != 0) {
              iVar2 = *(int *)(param_1 + 0xacc) + 0x60;
            }
            auVar11 = (*pcVar3)(iVar8,iVar2);
            bVar5 = (*extraout_w11_02)(auVar11._0_8_ & 0xffffffff,auVar11._8_8_,param_2);
            bVar9 = bVar5 & bVar9;
          }
          uVar10 = uVar10 + 1;
        } while (uVar10 < uVar6);
      }
      break;
    case 1:
      puVar1 = (uint *)&DAT_00000054;
      if (param_2 != 0) {
        puVar1 = (uint *)(param_2 + -0x1c);
      }
      if (((*puVar1 & 0x203) == 0) && (uVar10 = 0, uVar6 != 0)) {
        do {
          (*pcVar3)();
          iVar8 = (*extraout_w11_03)(uVar4,&DAT_10129050,uVar10);
          if (iVar8 != 0) {
            iVar2 = 0;
            if (*(int *)(param_1 + 0xacc) != 0) {
              iVar2 = *(int *)(param_1 + 0xacc) + 0x60;
            }
            auVar11 = (*pcVar3)(iVar8,iVar2);
            bVar5 = (*extraout_w11_04)(auVar11._0_8_ & 0xffffffff,auVar11._8_8_,param_2);
            bVar9 = bVar5 & bVar9;
          }
          uVar10 = uVar10 + 1;
        } while (uVar10 < uVar6);
      }
      break;
    case 2:
      puVar1 = (uint *)&DAT_000000a4;
      if (param_2 != 0) {
        puVar1 = (uint *)(param_2 + -0x1c);
      }
      if (((*puVar1 >> 9 & 1) == 0) && (uVar10 = 0, uVar6 != 0)) {
        do {
          (*pcVar3)();
          iVar8 = (*extraout_w11_05)(uVar4,&DAT_10129050,uVar10);
          if (iVar8 != 0) {
            iVar2 = 0;
            if (*(int *)(param_1 + 0xacc) != 0) {
              iVar2 = *(int *)(param_1 + 0xacc) + 0x60;
            }
            auVar11 = (*pcVar3)(iVar8,iVar2);
            bVar5 = (*extraout_w11_06)(auVar11._0_8_ & 0xffffffff,auVar11._8_8_,param_2);
            bVar9 = bVar5 & bVar9;
          }
          uVar10 = uVar10 + 1;
        } while (uVar10 < uVar6);
      }
    }
  }
  return bVar9;
}

