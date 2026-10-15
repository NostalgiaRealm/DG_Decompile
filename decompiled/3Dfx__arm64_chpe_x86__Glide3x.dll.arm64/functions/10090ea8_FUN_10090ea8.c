/*
 * FUN_10090ea8 at 10090ea8
 * undefined FUN_10090ea8(void)
 * Address ranges: 10090ea8-10090f4f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10090ea8(void)

{
  int in_w5;
  int *unaff_w26;
  int local_58;
  undefined4 local_54;
  
  local_58 = *unaff_w26;
  local_54 = __hybrid_WowA64ExceptionHandlerFunctionPointer;
  *unaff_w26 = (int)&local_58;
  (*__hybrid_WowA64DispatchCallFunctionPointer)();
  if (-1 < in_w5) {
    (*DAT_10097020)();
  }
  *unaff_w26 = local_58;
  return;
}

