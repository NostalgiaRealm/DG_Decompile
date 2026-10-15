/*
 * FUN_1011ece0 at 1011ece0
 * undefined FUN_1011ece0(void)
 * Address ranges: 1011ece0-1011ed87
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1011ece0(void)

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
    (*DAT_10127028)();
  }
  *unaff_w26 = local_58;
  return;
}

