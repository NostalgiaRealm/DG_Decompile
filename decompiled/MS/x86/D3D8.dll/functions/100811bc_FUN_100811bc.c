/*
 * FUN_100811bc at 100811bc
 * undefined __fastcall FUN_100811bc(undefined4 * param_1)
 * Address ranges: 100811bc-10081214
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_100811bc(undefined4 *param_1)

{
  undefined4 uStack_8;
  
  uStack_8 = param_1;
  FUN_10003838((void *)((int)&uStack_8 + 3),(byte)(*(uint *)(param_1[0x1b] + 0xb0c) >> 2) & 1);
  if ((param_1[0x1e] == 0) && (param_1[0x1d] == 0)) {
    FUN_100066bc((void *)param_1[0x1b],(int)param_1);
  }
  FUN_1000e69c((int)param_1);
  FUN_1008108b(param_1);
  FUN_100ad48c(param_1);
  FUN_10003881((char *)((int)&uStack_8 + 3));
  return;
}

