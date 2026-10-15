/*
 * FUN_100cf0d0 at 100cf0d0
 * undefined FUN_100cf0d0(void)
 * Address ranges: 100cf0d0-100cf123
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_100cf0d0(int param_1,ulonglong param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  code *extraout_w11;
  
  puVar2 = (undefined4 *)(param_1 + 0x1c);
  uVar1 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)
                    (*(undefined4 *)(param_1 + 4),param_2,param_2 & 0xffffffff);
  uVar1 = (*extraout_w11)(uVar1,*puVar2);
  return uVar1;
}

