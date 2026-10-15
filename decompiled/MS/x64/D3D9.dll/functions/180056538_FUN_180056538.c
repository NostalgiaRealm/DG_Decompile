/*
 * FUN_180056538 at 180056538
 * undefined8 * __fastcall FUN_180056538(undefined8 * param_1, uint param_2)
 * Address ranges: 180056538-180056575
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 * FUN_180056538(undefined8 *param_1,uint param_2)

{
  *param_1 = &PTR_FUN_180102348;
  FUN_180056008(param_1);
  if ((param_2 & 1) != 0) {
    FUN_1800fbcf0(param_1);
  }
  return param_1;
}

