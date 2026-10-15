/*
 * FUN_10092970 at 10092970
 * undefined FUN_10092970(void)
 * Address ranges: 10092970-10092ab3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8
FUN_10092970(int param_1,undefined4 param_2,undefined4 param_3,ulonglong param_4,ulonglong param_5)

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
    FUN_100ae748(param_1 + -0x1c,local_40,*(undefined4 *)(param_1 + 0x14),param_2,param_3,
                 param_4 & 0xffffffff,param_5 & 0xffffffff);
    if (local_40[0] == 0) {
      return 0;
    }
    uVar1 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
    (*extraout_w11)(uVar1,*extraout_w8,param_2,0,local_40[0]);
    FUN_100fed00(local_40[0]);
  }
  return 1;
}

