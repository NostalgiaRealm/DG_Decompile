/*
 * FUN_10154db0 at 10154db0
 * undefined FUN_10154db0(void)
 * Address ranges: 10154db0-10154e4b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10154db0(void)

{
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
    (*DAT_1015c028)(unaff_w27);
  }
  *unaff_w26 = local_58;
  return;
}

