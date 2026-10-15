/*
 * FUN_10075330 at 10075330
 * undefined FUN_10075330(void)
 * Address ranges: 10075330-100753af
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10075330(undefined8 param_1,int param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(param_2 + 0x1304);
  FUN_100694c8(*puVar1,param_4,0,0,0x2000);
  FUN_100694c8(*puVar1,param_3,0,0,0x1000);
  FUN_1006af80(*puVar1,param_3,0,param_4,0,param_5);
  return;
}

