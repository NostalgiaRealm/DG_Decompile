/*
 * FUN_10001d20 at 10001d20
 * undefined FUN_10001d20(void)
 * Address ranges: 10001d20-10002007
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10001d20(int param_1,int param_2)

{
  uint *puVar1;
  int iVar2;
  code *pcVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined4 uVar6;
  int iVar7;
  code *extraout_w11;
  code *extraout_w11_00;
  code *extraout_w11_01;
  code *extraout_w11_02;
  code *extraout_w11_03;
  code *extraout_w11_04;
  code *extraout_w11_05;
  code *extraout_w11_06;
  uint uVar8;
  undefined1 auVar9 [16];
  
  uVar4 = DAT_10170ad0;
  pcVar3 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
  uVar5 = (*extraout_w11)(uVar4,&DAT_1015e3e0);
  if (uVar5 != 0) {
    (*pcVar3)();
    uVar6 = (*extraout_w11_00)(param_2);
    switch(uVar6) {
    case 0:
      puVar1 = (uint *)&DAT_00000054;
      if (param_2 != 0) {
        puVar1 = (uint *)(param_2 + -0x1c);
      }
      if (((*puVar1 & 0x203) == 0) && (uVar8 = 0, uVar5 != 0)) {
        do {
          (*pcVar3)();
          iVar7 = (*extraout_w11_01)(uVar4,&DAT_1015e3e0,uVar8);
          if (iVar7 != 0) {
            iVar2 = 0;
            if (*(int *)(param_1 + 0xd90) != 0) {
              iVar2 = *(int *)(param_1 + 0xd90) + 0x60;
            }
            auVar9 = (*pcVar3)(iVar7,iVar2);
            (*extraout_w11_02)(auVar9._0_8_ & 0xffffffff,auVar9._8_8_,param_2);
          }
          uVar8 = uVar8 + 1;
        } while (uVar8 < uVar5);
      }
      break;
    case 1:
      puVar1 = (uint *)&DAT_00000054;
      if (param_2 != 0) {
        puVar1 = (uint *)(param_2 + -0x1c);
      }
      if (((*puVar1 & 0x203) == 0) && (uVar8 = 0, uVar5 != 0)) {
        do {
          (*pcVar3)();
          iVar7 = (*extraout_w11_03)(uVar4,&DAT_1015e3e0,uVar8);
          if (iVar7 != 0) {
            iVar2 = 0;
            if (*(int *)(param_1 + 0xd90) != 0) {
              iVar2 = *(int *)(param_1 + 0xd90) + 0x60;
            }
            auVar9 = (*pcVar3)(iVar7,iVar2);
            (*extraout_w11_04)(auVar9._0_8_ & 0xffffffff,auVar9._8_8_,param_2);
          }
          uVar8 = uVar8 + 1;
        } while (uVar8 < uVar5);
      }
      break;
    case 2:
      puVar1 = (uint *)&DAT_000000a4;
      if (param_2 != 0) {
        puVar1 = (uint *)(param_2 + -0x1c);
      }
      if (((*puVar1 >> 9 & 1) == 0) && (uVar8 = 0, uVar5 != 0)) {
        do {
          (*pcVar3)();
          iVar7 = (*extraout_w11_05)(uVar4,&DAT_1015e3e0,uVar8);
          if (iVar7 != 0) {
            iVar2 = 0;
            if (*(int *)(param_1 + 0xd90) != 0) {
              iVar2 = *(int *)(param_1 + 0xd90) + 0x60;
            }
            auVar9 = (*pcVar3)(iVar7,iVar2);
            (*extraout_w11_06)(auVar9._0_8_ & 0xffffffff,auVar9._8_8_,param_2);
          }
          uVar8 = uVar8 + 1;
        } while (uVar8 < uVar5);
      }
    }
  }
  return;
}

