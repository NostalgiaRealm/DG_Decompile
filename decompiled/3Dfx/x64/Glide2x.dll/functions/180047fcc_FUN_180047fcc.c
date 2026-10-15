/*
 * FUN_180047fcc at 180047fcc
 * undefined __fastcall FUN_180047fcc(longlong param_1, longlong param_2)
 * Address ranges: 180047fcc-18004801c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180047fcc(longlong param_1,longlong param_2)

{
  if (param_2 != *(longlong *)(param_1 + 0x28)) {
    FUN_180047348(param_1);
    (**(code **)(**(longlong **)(param_1 + 0x688) + 0xe8))();
    *(longlong *)(param_1 + 0x28) = param_2;
    FUN_18005f374((undefined1 *)(param_1 + 0x168),0,0x100);
  }
  return;
}

