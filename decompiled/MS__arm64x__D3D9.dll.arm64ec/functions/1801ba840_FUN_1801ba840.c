/*
 * FUN_1801ba840 at 1801ba840
 * undefined FUN_1801ba840(void)
 * Address ranges: 1801ba840-1801ba85b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1801ba840(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  longlong lVar1;
  
  lVar1 = FUN_1801b91a0();
  if (lVar1 != 0) {
    *(undefined4 *)(lVar1 + 0x20) = param_3;
  }
  return;
}

