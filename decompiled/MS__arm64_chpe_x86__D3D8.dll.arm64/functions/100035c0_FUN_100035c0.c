/*
 * FUN_100035c0 at 100035c0
 * undefined FUN_100035c0(void)
 * Address ranges: 100035c0-10003613
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_100035c0(int param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  int iVar2;
  
  iVar2 = FUN_10004650(param_1,param_2);
  if (*(uint *)(param_1 + 8) < 2) {
    puVar1 = (undefined4 *)(DAT_1013ceec + 0x94b);
  }
  else {
    puVar1 = (undefined4 *)(iVar2 + 200);
  }
  return *puVar1;
}

