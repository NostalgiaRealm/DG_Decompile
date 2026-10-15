/*
 * FUN_140012a90 at 140012a90
 * undefined8 * __fastcall FUN_140012a90(undefined8 * param_1, uint param_2)
 * Address ranges: 140012a90-140012b0a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 * FUN_140012a90(undefined8 *param_1,uint param_2)

{
  longlong lVar1;
  
  *param_1 = &PTR_FUN_140028e60;
  if (param_1[0x90] != 0) {
    FUN_140012950((longlong)param_1);
    lVar1 = param_1[0x90];
    *(undefined8 *)(lVar1 + 0x530) = 0;
    FUN_140013580(lVar1);
    param_1[0x90] = 0;
    param_1[2] = 0;
  }
  FUN_1400122a0(param_1);
  if ((param_2 & 1) != 0) {
    FUN_140024260(param_1);
  }
  return param_1;
}

