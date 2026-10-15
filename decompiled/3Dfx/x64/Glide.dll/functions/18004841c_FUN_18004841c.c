/*
 * FUN_18004841c at 18004841c
 * undefined __fastcall FUN_18004841c(longlong param_1, longlong param_2)
 * Address ranges: 18004841c-180048470
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18004841c(longlong param_1,longlong param_2)

{
  if (param_2 != *(longlong *)(param_1 + 0x20)) {
    FUN_1800477f0(param_1);
    (**(code **)(**(longlong **)(param_1 + 0x688) + 0xf0))();
    *(undefined1 *)(param_1 + 0x674) = 1;
    *(longlong *)(param_1 + 0x20) = param_2;
    FUN_18005f814((undefined1 *)(param_1 + 0x68),0,0x100);
  }
  return;
}

