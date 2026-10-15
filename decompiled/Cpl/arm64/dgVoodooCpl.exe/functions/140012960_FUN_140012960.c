/*
 * FUN_140012960 at 140012960
 * undefined __cdecl FUN_140012960(longlong * param_1)
 * Address ranges: 140012960-14001299f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_140012960(longlong *param_1)

{
  if (param_1[0x90] != 0) {
    (**(code **)(*param_1 + 0x18))();
    FUN_140014980(param_1[0x90]);
    param_1[0x90] = 0;
    param_1[2] = 0;
  }
  return;
}

