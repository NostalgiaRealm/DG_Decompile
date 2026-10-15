/*
 * FUN_1006bff0 at 1006bff0
 * undefined FUN_1006bff0(void)
 * Address ranges: 1006bff0-1006c06f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1006bff0(undefined8 param_1,int param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(param_2 + 0x1304);
  FUN_10060198(*puVar1,param_4,0,0,0x2000);
  FUN_10060198(*puVar1,param_3,0,0,0x1000);
  FUN_10061c50(*puVar1,param_3,0,param_4,0,param_5);
  return;
}

