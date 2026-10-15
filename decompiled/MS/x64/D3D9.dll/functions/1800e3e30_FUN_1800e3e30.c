/*
 * FUN_1800e3e30 at 1800e3e30
 * undefined __fastcall FUN_1800e3e30(longlong param_1, undefined8 param_2, undefined8 param_3)
 * Address ranges: 1800e3e30-1800e3e81
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800e3e30(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_1800e24c4(param_1);
  FUN_1800e2604(param_1);
  (**(code **)(**(longlong **)(param_1 + 0x688) + 0x88))
            (*(longlong **)(param_1 + 0x688),param_2,param_3);
  FUN_1800e25b4(param_1);
  return;
}

