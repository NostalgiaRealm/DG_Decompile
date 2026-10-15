/*
 * FUN_1004f6b0 at 1004f6b0
 * undefined FUN_1004f6b0(void)
 * Address ranges: 1004f6b0-1004f7bf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4
FUN_1004f6b0(int param_1,int param_2,int param_3,undefined8 param_4,undefined8 param_5,
            undefined4 param_6)

{
  int iVar1;
  undefined4 uVar2;
  code *extraout_w11;
  undefined1 auVar3 [16];
  int local_58;
  int local_54;
  undefined4 local_50;
  undefined1 local_4c;
  
  local_50 = 0x100;
  local_4c = 1;
  local_58 = FUN_101322b0(0x100);
  local_54 = local_58;
  auVar3 = FUN_10087098(param_1 + 0x28,*(undefined4 *)(param_1 + 0x3c),*(undefined4 *)(param_1 + -4)
                        ,param_4,param_5,param_6,&local_58,0);
  iVar1 = local_58;
  if ((auVar3._0_8_ & 1) != 0) {
    uVar2 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)
                      (*(undefined4 *)(param_2 + param_3 * 0x1510 + 0x510),auVar3._8_8_,
                       local_54 - local_58);
    (*extraout_w11)(uVar2,iVar1);
  }
  FUN_101322d0(iVar1);
  return 0;
}

