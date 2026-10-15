/*
 * FUN_10073c78 at 10073c78
 * undefined FUN_10073c78(void)
 * Address ranges: 10073c78-10073cf7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10073c78(undefined8 param_1,int param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(param_2 + 0x1304);
  FUN_1007d820(*puVar1,param_4,0,0,0x2000);
  FUN_1007d820(*puVar1,param_3,0,0,0x1000);
  FUN_1007f6e0(*puVar1,param_3,0,param_4,0,param_5);
  return;
}

