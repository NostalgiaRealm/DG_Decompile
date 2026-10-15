/*
 * FUN_100b2a90 at 100b2a90
 * undefined FUN_100b2a90(void)
 * Address ranges: 100b2a90-100b2bd3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8
FUN_100b2a90(int param_1,undefined4 param_2,undefined4 param_3,ulonglong param_4,ulonglong param_5)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 *extraout_w8;
  ulonglong extraout_x8;
  code *extraout_w11;
  code *extraout_w11_00;
  int local_40 [4];
  
  if (*(char *)(param_1 + -3) == '\0') {
    puVar2 = (undefined4 *)(param_1 + 0x18);
    uVar1 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
    (*extraout_w11_00)(uVar1,*puVar2,param_2,0,extraout_x8 & 0xffffffff,param_4 & 0xffffffff,
                       param_5 & 0xffffffff);
  }
  else {
    FUN_100cf168(param_1 + -0x1c,local_40,*(undefined4 *)(param_1 + 0x14),param_2,param_3,
                 param_4 & 0xffffffff,param_5 & 0xffffffff);
    if (local_40[0] == 0) {
      return 0;
    }
    uVar1 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
    (*extraout_w11)(uVar1,*extraout_w8,param_2,0,local_40[0]);
    FUN_101322d0(local_40[0]);
  }
  return 1;
}

