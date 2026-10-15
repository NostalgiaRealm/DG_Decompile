/*
 * FUN_10095220 at 10095220
 * undefined FUN_10095220(void)
 * Address ranges: 10095220-100952bf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_10095220(void)

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
    (*DAT_1009b028)();
  }
  *unaff_w26 = local_58;
  return CONCAT44(extraout_w1,unaff_w27);
}

