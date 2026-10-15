/*
 * FUN_10123a28 at 10123a28
 * undefined FUN_10123a28(void)
 * Address ranges: 10123a28-10123aa7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10123a28(undefined8 param_1,int param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(param_2 + 0x1304);
  FUN_10113dd8(*puVar1,param_4,0,0,0x2000);
  FUN_10113dd8(*puVar1,param_3,0,0,0x1000);
  FUN_10115dd0(*puVar1,param_3,0,param_4,0,param_5);
  return;
}

