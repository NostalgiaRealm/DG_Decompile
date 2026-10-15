/*
 * FUN_100f0458 at 100f0458
 * undefined FUN_100f0458(void)
 * Address ranges: 100f0458-100f04d7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100f0458(undefined8 param_1,int param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(param_2 + 0x1304);
  FUN_100e1588(*puVar1,param_4,0,0,0x2000);
  FUN_100e1588(*puVar1,param_3,0,0,0x1000);
  FUN_100e3580(*puVar1,param_3,0,param_4,0,param_5);
  return;
}

