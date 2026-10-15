/*
 * FUN_180084440 at 180084440
 * undefined FUN_180084440(void)
 * Address ranges: 180084440-1800844ab
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_180084440(longlong *param_1,undefined4 param_2,undefined4 param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  
  lVar1 = (**(code **)(*param_1 + 200))();
  if ((lVar1 == 0) || (uVar2 = FUN_180084320(param_1), (uVar2 & 1) == 0)) {
    uVar3 = 0;
  }
  else {
    (**(code **)*param_1)(param_1,param_2,param_3);
    uVar3 = 1;
  }
  return uVar3;
}

