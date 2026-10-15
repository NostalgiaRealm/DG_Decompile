/*
 * FUN_18000cae8 at 18000cae8
 * undefined __cdecl FUN_18000cae8(longlong param_1, longlong param_2, longlong param_3, undefined * param_4)
 * Address ranges: 18000cae8-18000cb2f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18000cae8(longlong param_1,longlong param_2,longlong param_3,undefined *param_4)

{
  longlong lVar1;
  
  lVar1 = param_1 + param_2 * param_3;
  for (; param_3 != 0; param_3 = param_3 + -1) {
    lVar1 = lVar1 - param_2;
    (*(code *)param_4)(lVar1);
  }
  return;
}

