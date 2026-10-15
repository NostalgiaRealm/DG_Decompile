/*
 * DirectDrawCreateEx_native at 1003fa40
 * undefined DirectDrawCreateEx_native(void)
 * Address ranges: 1003fa40-1003faf3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4
DirectDrawCreateEx_native
          (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  code *extraout_w11;
  
  iVar1 = FUN_100375c0(s_DirectDrawCreateEx_100b3b28);
  if (iVar1 == 0) {
    iVar1 = FUN_10091750(param_3,&DAT_100b1850,0x10);
    if (iVar1 != 0) {
      return 0x80070057;
    }
    uVar2 = FUN_10037738(&DAT_100b1850,param_1,param_2,param_4);
  }
  else {
    (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
    uVar2 = (*extraout_w11)(param_1,param_2,param_3,param_4);
  }
  return uVar2;
}

