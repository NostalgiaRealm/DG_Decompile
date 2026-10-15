/*
 * FUN_10003a00 at 10003a00
 * undefined FUN_10003a00(void)
 * Address ranges: 10003a00-10003a53
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_10003a00(int param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  int iVar2;
  
  iVar2 = FUN_10004ff0(param_1,param_2);
  if (*(uint *)(param_1 + 8) < 2) {
    puVar1 = (undefined4 *)(DAT_10170ad0 + 0x94b);
  }
  else {
    puVar1 = (undefined4 *)(iVar2 + 200);
  }
  return *puVar1;
}

