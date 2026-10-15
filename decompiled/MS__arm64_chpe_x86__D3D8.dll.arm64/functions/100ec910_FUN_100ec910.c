/*
 * FUN_100ec910 at 100ec910
 * undefined FUN_100ec910(void)
 * Address ranges: 100ec910-100ec987
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined1 FUN_100ec910(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined1 uVar1;
  ulonglong uVar2;
  undefined4 local_30 [4];
  
  uVar1 = 1;
  local_30[0] = param_2;
  (*(code *)PTR_FUN_10134070)(param_1 + 0x1c);
  uVar2 = FUN_100ecd30(param_1,local_30);
  if ((int)uVar2 != 0) {
    uVar1 = FUN_100ebc50(uVar2,uVar2 & 0xffffffff,param_3);
  }
  (*(code *)PTR_FUN_101340bc)(param_1 + 0x1c);
  return uVar1;
}

