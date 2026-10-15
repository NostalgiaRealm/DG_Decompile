/*
 * FUN_10059ad8 at 10059ad8
 * undefined FUN_10059ad8(void)
 * Address ranges: 10059ad8-10059b4b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined1 FUN_10059ad8(int param_1,undefined4 param_2)

{
  undefined1 uVar1;
  ulonglong uVar2;
  undefined4 local_30 [4];
  
  uVar1 = 1;
  local_30[0] = param_2;
  (*(code *)PTR_FUN_1009d03c)(param_1 + 0x1c);
  uVar2 = FUN_10059ce8(param_1,local_30);
  if ((int)uVar2 != 0) {
    uVar1 = FUN_10058e20(uVar2,uVar2 & 0xffffffff,0);
  }
  (*(code *)PTR_FUN_1009d090)(param_1 + 0x1c);
  return uVar1;
}

