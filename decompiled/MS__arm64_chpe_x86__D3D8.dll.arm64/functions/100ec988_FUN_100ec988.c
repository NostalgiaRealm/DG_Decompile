/*
 * FUN_100ec988 at 100ec988
 * undefined FUN_100ec988(void)
 * Address ranges: 100ec988-100ec9fb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined1 FUN_100ec988(int param_1,undefined4 param_2)

{
  undefined1 uVar1;
  ulonglong uVar2;
  undefined4 local_30 [4];
  
  uVar1 = 1;
  local_30[0] = param_2;
  (*(code *)PTR_FUN_10134070)(param_1 + 0x1c);
  uVar2 = FUN_100ecca8(param_1 + 0xc,local_30);
  if ((int)uVar2 != 0) {
    uVar1 = FUN_100eba50(uVar2,uVar2 & 0xffffffff,1);
  }
  (*(code *)PTR_FUN_101340bc)(param_1 + 0x1c);
  return uVar1;
}

