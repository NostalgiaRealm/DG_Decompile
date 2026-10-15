/*
 * FUN_180048474 at 180048474
 * undefined __fastcall FUN_180048474(longlong param_1, longlong param_2)
 * Address ranges: 180048474-1800484c4
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180048474(longlong param_1,longlong param_2)

{
  if (param_2 != *(longlong *)(param_1 + 0x28)) {
    FUN_1800477f0(param_1);
    (**(code **)(**(longlong **)(param_1 + 0x688) + 0xe8))();
    *(longlong *)(param_1 + 0x28) = param_2;
    FUN_18005f814((undefined1 *)(param_1 + 0x168),0,0x100);
  }
  return;
}

