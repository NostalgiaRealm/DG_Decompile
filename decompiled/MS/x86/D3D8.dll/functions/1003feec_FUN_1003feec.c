/*
 * FUN_1003feec at 1003feec
 * undefined __fastcall FUN_1003feec(undefined4 * param_1)
 * Address ranges: 1003feec-1003ff57
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_1003feec(undefined4 *param_1)

{
  undefined4 *puVar1;
  
  *param_1 = &PTR_FUN_100b2418;
  param_1[6] = &PTR_LAB_100b2414;
  FUN_100ac680(param_1[1] + param_1[2] * 0x16c0 + 0x1880);
  FUN_10040273((void *)param_1[3],param_1[1],(void *)param_1[2]);
  puVar1 = (undefined4 *)param_1[3];
  if (puVar1 != (undefined4 *)0x0) {
    FUN_10007c30(puVar1);
    FUN_100ad48c(puVar1);
  }
  param_1[6] = &PTR_FUN_100b2194;
  param_1[0xd] = &PTR_FUN_100b27ac;
  *param_1 = &PTR_LAB_100b2198;
  param_1[4] = &PTR_FUN_100b27ac;
  return;
}

