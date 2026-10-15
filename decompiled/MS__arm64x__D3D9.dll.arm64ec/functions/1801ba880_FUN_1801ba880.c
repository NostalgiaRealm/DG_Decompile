/*
 * FUN_1801ba880 at 1801ba880
 * undefined FUN_1801ba880(void)
 * Address ranges: 1801ba880-1801ba89b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1801ba880(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  longlong lVar1;
  
  lVar1 = FUN_1801b91a0();
  if (lVar1 != 0) {
    *(undefined4 *)(lVar1 + 0x24) = param_3;
    *(undefined4 *)(lVar1 + 0x28) = param_4;
  }
  return;
}

