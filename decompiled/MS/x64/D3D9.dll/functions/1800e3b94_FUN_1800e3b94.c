/*
 * FUN_1800e3b94 at 1800e3b94
 * undefined __fastcall FUN_1800e3b94(longlong param_1, int param_2)
 * Address ranges: 1800e3b94-1800e3bd2
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800e3b94(longlong param_1,int param_2)

{
  if (param_2 != *(int *)(param_1 + 0x670)) {
    FUN_1800e2604(param_1);
    (**(code **)(**(longlong **)(param_1 + 0x688) + 0xc0))(*(longlong **)(param_1 + 0x688),param_2);
    *(int *)(param_1 + 0x670) = param_2;
  }
  return;
}

