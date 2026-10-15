/*
 * FUN_10078ac0 at 10078ac0
 * undefined FUN_10078ac0(void)
 * Address ranges: 10078ac0-10078b37
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined1 FUN_10078ac0(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined1 uVar1;
  ulonglong uVar2;
  undefined4 local_30 [4];
  
  uVar1 = 1;
  local_30[0] = param_2;
  (*(code *)PTR_FUN_100ba0a0)(param_1 + 0x1c);
  uVar2 = FUN_10078e68(param_1,local_30);
  if ((int)uVar2 != 0) {
    uVar1 = FUN_10078140(uVar2,uVar2 & 0xffffffff,param_3);
  }
  (*(code *)PTR_FUN_100ba0f0)(param_1 + 0x1c);
  return uVar1;
}

