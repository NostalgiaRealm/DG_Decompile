/*
 * FUN_140013b88 at 140013b88
 * undefined __cdecl FUN_140013b88(longlong param_1, longlong param_2, longlong param_3, undefined * param_4)
 * Address ranges: 140013b88-140013bcf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_140013b88(longlong param_1,longlong param_2,longlong param_3,undefined *param_4)

{
  longlong lVar1;
  
  lVar1 = param_1 + param_2 * param_3;
  for (; param_3 != 0; param_3 = param_3 + -1) {
    lVar1 = lVar1 - param_2;
    (*(code *)param_4)(lVar1);
  }
  return;
}

