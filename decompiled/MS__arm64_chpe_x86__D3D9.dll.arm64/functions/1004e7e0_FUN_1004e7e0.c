/*
 * FUN_1004e7e0 at 1004e7e0
 * undefined FUN_1004e7e0(void)
 * Address ranges: 1004e7e0-1004ea13
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_1004e7e0(int param_1,int param_2,undefined4 param_3,undefined8 *param_4,int param_5,
                uint param_6)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  code *extraout_w11;
  code *extraout_w11_00;
  code *extraout_w11_01;
  code *extraout_w11_02;
  undefined1 auVar6 [16];
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  
  param_6 = param_6 & 1;
  if (param_6 != 0) {
    FUN_10047f98(param_1,0,0,0);
  }
  iVar2 = -0x7fffbffb;
  iVar3 = iVar2;
  switch(param_3) {
  case 9:
    if (param_5 - 1U < 3) goto LAB_1004e9f4;
    auVar6 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
    iVar3 = (*extraout_w11)(auVar6._0_8_ & 0xffffffff,auVar6._8_8_ & 0xffffffff,&local_40);
    local_38 = local_40;
    break;
  default:
    auVar6 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
    iVar3 = (*extraout_w11_02)(auVar6._0_8_ & 0xffffffff,auVar6._8_8_ & 0xffffffff,param_4,param_5);
    if (iVar3 == 0) {
      return 0;
    }
    goto LAB_1004e9f4;
  case 0xb:
    if (param_5 - 1U < 3) goto LAB_1004e9f4;
    uVar5 = 0x10;
    puVar1 = &local_40;
    if (param_5 == 0) {
      uVar5 = 0;
      puVar1 = (undefined4 *)0x0;
    }
    auVar6 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)
                       (*(undefined4 *)(*(int *)(param_1 + 0xf6b4) + 4),
                        *(undefined4 *)(param_2 + 0x10),puVar1,uVar5,param_6 ^ 1);
    iVar3 = (*extraout_w11_00)(auVar6._0_8_ & 0xffffffff,auVar6._8_8_ & 0xffffffff);
    break;
  case 0xc:
    if (6 < param_5 - 1U) {
      uVar5 = 0x10;
      puVar1 = &local_40;
      if (param_5 == 0) {
        uVar5 = 0;
        puVar1 = (undefined4 *)0x0;
      }
      auVar6 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)
                         (*(undefined4 *)(*(int *)(param_1 + 0xf6b4) + 4),
                          *(undefined4 *)(param_2 + 0x10),puVar1,uVar5,param_6 ^ 1);
      iVar3 = (*extraout_w11_01)(auVar6._0_8_ & 0xffffffff,auVar6._8_8_ & 0xffffffff);
      if (iVar3 == 0) {
        if (param_4 == (undefined8 *)0x0) {
          return 0;
        }
        *param_4 = CONCAT44(uStack_3c,local_40);
        return 0;
      }
    }
    goto LAB_1004e9f4;
  }
  if (iVar3 == 0) {
    if (param_4 == (undefined8 *)0x0) {
      return 0;
    }
    *(undefined4 *)param_4 = local_38;
    return 0;
  }
LAB_1004e9f4:
  iVar4 = 1;
  if (iVar3 != 1) {
    iVar4 = iVar2;
  }
  return iVar4;
}

