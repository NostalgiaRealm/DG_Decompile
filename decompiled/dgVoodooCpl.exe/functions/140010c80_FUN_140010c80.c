/*
 * FUN_140010c80 at 140010c80
 * undefined __fastcall FUN_140010c80(longlong * param_1)
 * Address ranges: 140010c80-140010cb7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_140010c80(longlong *param_1)

{
  if (param_1[0x90] != 0) {
    (**(code **)(*param_1 + 0x18))();
    FUN_140013580(param_1[0x90]);
    param_1[0x90] = 0;
    param_1[2] = 0;
  }
  return;
}

