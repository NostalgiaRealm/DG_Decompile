/*
 * FUN_10041310 at 10041310
 * undefined FUN_10041310(void)
 * Address ranges: 10041310-100413af
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_10041310(undefined4 param_1,undefined4 param_2,undefined4 *param_3)

{
  int iVar1;
  code *extraout_w11;
  undefined4 uVar2;
  
  uVar2 = 0x80070057;
  if (param_3 != (undefined4 *)0x0) {
    *param_3 = 0;
    iVar1 = FUN_10091750(param_2,&DAT_100b1a30,0x10);
    if ((iVar1 != 0) && (iVar1 = FUN_10091750(param_2,0x100b18b0,0x10), iVar1 != 0)) {
      return 0x80004002;
    }
    *param_3 = param_1;
    (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
    (*extraout_w11)(param_1);
    uVar2 = 0;
  }
  return uVar2;
}

