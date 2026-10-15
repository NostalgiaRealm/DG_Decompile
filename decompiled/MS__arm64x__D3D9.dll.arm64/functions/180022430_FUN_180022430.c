/*
 * FUN_180022430 at 180022430
 * undefined FUN_180022430(void)
 * Address ranges: 180022430-180022473
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180022430(longlong *param_1,undefined8 param_2,undefined4 param_3)

{
  longlong lVar1;
  
  lVar1 = (**(code **)(*param_1 + 0x28))();
  if (lVar1 != 0) {
    (*__imp_USER32_dll_GetWindowTextW)(lVar1,param_2,param_3);
  }
  return;
}

