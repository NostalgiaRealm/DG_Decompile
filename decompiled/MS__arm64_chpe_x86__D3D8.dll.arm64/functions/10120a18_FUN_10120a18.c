/*
 * FUN_10120a18 at 10120a18
 * undefined FUN_10120a18(void)
 * Address ranges: 10120a18-10120abf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10120a18(undefined4 param_1)

{
  int in_w5;
  int *unaff_w26;
  int local_58;
  undefined4 local_54;
  
  local_58 = *unaff_w26;
  local_54 = __hybrid_WowA64ExceptionHandlerFunctionPointer;
  *unaff_w26 = (int)&local_58;
  (*__hybrid_WowA64DispatchCallFunctionPointer)(param_1);
  if (-1 < in_w5) {
    (*DAT_10127028)();
  }
  *unaff_w26 = local_58;
  return;
}

