/*
 * FUN_18005f814 at 18005f814
 * undefined1 * __fastcall FUN_18005f814(undefined1 * param_1, undefined1 param_2, longlong param_3)
 * Address ranges: 18005f814-18005f827
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined1 * FUN_18005f814(undefined1 *param_1,undefined1 param_2,longlong param_3)

{
  undefined1 *puVar1;
  
  puVar1 = param_1;
  for (; param_3 != 0; param_3 = param_3 + -1) {
    *param_1 = param_2;
    param_1 = param_1 + 1;
  }
  return puVar1;
}

