/*
 * FUN_180048bb0 at 180048bb0
 * undefined __fastcall FUN_180048bb0(longlong param_1, int param_2)
 * Address ranges: 180048bb0-180048bee
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180048bb0(longlong param_1,int param_2)

{
  if (param_2 != *(int *)(param_1 + 0x670)) {
    FUN_1800477f0(param_1);
    (**(code **)(**(longlong **)(param_1 + 0x688) + 0xc0))(*(longlong **)(param_1 + 0x688),param_2);
    *(int *)(param_1 + 0x670) = param_2;
  }
  return;
}

