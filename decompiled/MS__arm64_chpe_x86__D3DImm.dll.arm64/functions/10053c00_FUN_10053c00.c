/*
 * FUN_10053c00 at 10053c00
 * undefined FUN_10053c00(void)
 * Address ranges: 10053c00-10053c3f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_10053c00(int param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 local_20 [4];
  
  uVar2 = 0;
  local_20[0] = param_2;
  puVar1 = (undefined4 *)FUN_100596d0(param_1 + 0x17b8,local_20);
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = *puVar1;
  }
  return uVar2;
}

