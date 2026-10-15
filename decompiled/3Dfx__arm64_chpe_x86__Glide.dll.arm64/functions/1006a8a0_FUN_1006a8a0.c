/*
 * FUN_1006a8a0 at 1006a8a0
 * undefined FUN_1006a8a0(void)
 * Address ranges: 1006a8a0-1006a9bb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_1006a8a0(undefined8 param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  code *extraout_w11;
  
  if (param_2[0xd] == 3) {
    if (*(short *)(param_2 + 0x324) != 0) {
      (*(code *)PTR_FUN_1009d138)(param_2 + 0x313,param_2 + 0x313,0,0,0);
    }
    (*(code *)PTR_FUN_1009d1f4)(*param_2,0xfffffff0,param_2[0x34e]);
    (*(code *)PTR_FUN_1009d1f4)(*param_2,0xffffffec,param_2[0x34f]);
    (*(code *)PTR_FUN_1009d1f8)
              (*param_2,0,param_2[0x34a],param_2[0x34b],param_2[0x34c] - param_2[0x34a],
               param_2[0x34d] - param_2[0x34b],0x214);
  }
  uVar1 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
  uVar1 = (*extraout_w11)(uVar1,0,0);
  param_2[0xd] = 0;
  return uVar1;
}

