/*
 * FUN_1800e40f4 at 1800e40f4
 * undefined __fastcall FUN_1800e40f4(longlong param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4)
 * Address ranges: 1800e40f4-1800e4139
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800e40f4(longlong param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_1800e24c4(param_1);
  FUN_1800e2604(param_1);
  (**(code **)(**(longlong **)(param_1 + 0x688) + 0x70))
            (*(longlong **)(param_1 + 0x688),param_2,param_3,param_4);
  FUN_1800e25b4(param_1);
  return;
}

