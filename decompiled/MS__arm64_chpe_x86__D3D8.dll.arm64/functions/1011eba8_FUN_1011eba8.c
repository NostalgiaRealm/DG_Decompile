/*
 * FUN_1011eba8 at 1011eba8
 * undefined FUN_1011eba8(void)
 * Address ranges: 1011eba8-1011ec47
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_1011eba8(void)

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
  (*__hybrid_WowA64DispatchCallFunctionPointer)();
  if (-1 < in_w5) {
    (*DAT_10127028)();
  }
  *unaff_w26 = local_58;
  return CONCAT44(extraout_w1,unaff_w27);
}

