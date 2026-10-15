/*
 * FUN_1006fc90 at 1006fc90
 * undefined FUN_1006fc90(void)
 * Address ranges: 1006fc90-1006fd0f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1006fc90(undefined8 param_1,int param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(param_2 + 0x1304);
  FUN_10063e28(*puVar1,param_4,0,0,0x2000);
  FUN_10063e28(*puVar1,param_3,0,0,0x1000);
  FUN_100658e0(*puVar1,param_3,0,param_4,0,param_5);
  return;
}

