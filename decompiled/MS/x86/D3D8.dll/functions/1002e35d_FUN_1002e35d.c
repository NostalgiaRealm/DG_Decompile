/*
 * FUN_1002e35d at 1002e35d
 * undefined __fastcall FUN_1002e35d(undefined4 * param_1)
 * Address ranges: 1002e35d-1002e3c9
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_1002e35d(undefined4 *param_1)

{
  undefined4 *puVar1;
  
  *param_1 = &PTR_FUN_100b218c;
  param_1[6] = &PTR_LAB_100b2188;
  FUN_10092acb((void *)param_1[1],param_1[2],(int *)param_1[0xb]);
  FUN_10092acb((void *)param_1[1],param_1[2],(int *)param_1[0xc]);
  FUN_1002e772((void *)param_1[3],param_1[1],param_1[2]);
  puVar1 = (undefined4 *)param_1[3];
  if (puVar1 != (undefined4 *)0x0) {
    FUN_10007c30(puVar1);
    FUN_100ad48c(puVar1);
  }
  param_1[6] = &PTR_FUN_100b2194;
  *param_1 = &PTR_LAB_100b2198;
  param_1[4] = &PTR_FUN_100b27ac;
  return;
}

