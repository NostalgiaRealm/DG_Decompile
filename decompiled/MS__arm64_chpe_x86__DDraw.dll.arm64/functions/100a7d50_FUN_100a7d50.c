/*
 * FUN_100a7d50 at 100a7d50
 * undefined FUN_100a7d50(void)
 * Address ranges: 100a7d50-100a7df3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100a7d50(void)

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
    (*DAT_100b0028)(unaff_w27);
  }
  *unaff_w26 = local_58;
  return;
}

