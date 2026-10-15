/*
 * FUN_1800e3458 at 1800e3458
 * undefined __fastcall FUN_1800e3458(longlong param_1, longlong param_2)
 * Address ranges: 1800e3458-1800e34a8
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800e3458(longlong param_1,longlong param_2)

{
  if (param_2 != *(longlong *)(param_1 + 0x28)) {
    FUN_1800e2604(param_1);
    (**(code **)(**(longlong **)(param_1 + 0x688) + 0xe8))();
    *(longlong *)(param_1 + 0x28) = param_2;
    FUN_1800fbea0((undefined1 *)(param_1 + 0x168),0,0x100);
  }
  return;
}

