/*
 * FUN_10072660 at 10072660
 * undefined FUN_10072660(void)
 * Address ranges: 10072660-100726bf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10072660(int param_1,int param_2)

{
  code *extraout_w11;
  
  if (param_2 != 0) {
    FUN_10078600(*(undefined4 *)(param_1 + 0x172c0),param_2,1);
    (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
    (*extraout_w11)(param_2);
  }
  return;
}

