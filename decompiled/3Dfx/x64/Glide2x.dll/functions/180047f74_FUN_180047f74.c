/*
 * FUN_180047f74 at 180047f74
 * undefined __fastcall FUN_180047f74(longlong param_1, longlong param_2)
 * Address ranges: 180047f74-180047fc8
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180047f74(longlong param_1,longlong param_2)

{
  if (param_2 != *(longlong *)(param_1 + 0x20)) {
    FUN_180047348(param_1);
    (**(code **)(**(longlong **)(param_1 + 0x688) + 0xf0))();
    *(undefined1 *)(param_1 + 0x674) = 1;
    *(longlong *)(param_1 + 0x20) = param_2;
    FUN_18005f374((undefined1 *)(param_1 + 0x68),0,0x100);
  }
  return;
}

