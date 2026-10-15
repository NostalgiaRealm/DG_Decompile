/*
 * FUN_10154e50 at 10154e50
 * undefined FUN_10154e50(void)
 * Address ranges: 10154e50-10154ee7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10154e50(void)

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
    (*DAT_1015c028)();
  }
  *unaff_w26 = local_58;
  return;
}

