/*
 * FUN_10095b68 at 10095b68
 * undefined FUN_10095b68(void)
 * Address ranges: 10095b68-10095c0b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10095b68(undefined4 param_1)

{
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
    (*DAT_1009b028)(unaff_w27);
  }
  *unaff_w26 = local_58;
  return;
}

