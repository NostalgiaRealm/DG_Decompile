/*
 * FUN_1001a2d8 at 1001a2d8
 * undefined FUN_1001a2d8(void)
 * Address ranges: 1001a2d8-1001a3d7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1001a2d8(int *param_1,int param_2,undefined8 param_3,undefined8 *param_4)

{
  int iVar1;
  undefined4 uVar2;
  code *extraout_w11;
  undefined1 auVar3 [16];
  undefined1 auStack_208 [488];
  
  *(undefined8 *)(*param_1 + param_2 * 0x18) = param_3;
  iVar1 = *param_1 + param_2 * 0x18;
  *(undefined8 *)(iVar1 + 8) = *param_4;
  *(undefined4 *)(iVar1 + 0x10) = *(undefined4 *)(param_4 + 1);
  auVar3 = FUN_1003bd00(param_1,*(undefined4 *)param_4,auStack_208);
  uVar2 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)
                    (*(undefined4 *)(param_1[3] + param_1[4] * 0x1510 + 0x510),auVar3._8_8_,
                     auVar3._0_8_ & 0xffffffff);
  (*extraout_w11)(uVar2,auStack_208);
  *(undefined4 *)(*param_1 + param_2 * 0x18 + 0x14) = 0;
  return;
}

