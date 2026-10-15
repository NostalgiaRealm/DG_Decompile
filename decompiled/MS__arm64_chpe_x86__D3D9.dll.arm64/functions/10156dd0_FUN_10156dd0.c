/*
 * FUN_10156dd0 at 10156dd0
 * undefined FUN_10156dd0(void)
 * Address ranges: 10156dd0-10156e6f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_10156dd0(undefined4 param_1)

{
  undefined4 extraout_w1;
  int in_w5;
  int *unaff_w26;
  undefined4 unaff_w27;
  int local_58;
  undefined4 local_54;
  
  local_58 = *unaff_w26;
  local_54 = __hybrid_WowA64ExceptionHandlerFunctionPointer;
  *unaff_w26 = (int)&local_58;
  (*__hybrid_WowA64DispatchCallFunctionPointer)(param_1);
  if (-1 < in_w5) {
    (*DAT_1015c028)();
  }
  *unaff_w26 = local_58;
  return CONCAT44(extraout_w1,unaff_w27);
}

