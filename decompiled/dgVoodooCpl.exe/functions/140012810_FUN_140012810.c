/*
 * FUN_140012810 at 140012810
 * undefined __fastcall FUN_140012810(longlong * param_1)
 * Address ranges: 140012810-140012858
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_140012810(longlong *param_1)

{
  longlong lVar1;
  
  if (param_1[0x90] != 0) {
    (**(code **)(*param_1 + 0x18))();
    lVar1 = param_1[0x90];
    *(undefined8 *)(lVar1 + 0x530) = 0;
    FUN_140013580(lVar1);
    param_1[0x90] = 0;
    param_1[2] = 0;
  }
  return;
}

