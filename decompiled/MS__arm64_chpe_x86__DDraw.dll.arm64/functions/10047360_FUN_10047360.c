/*
 * FUN_10047360 at 10047360
 * undefined FUN_10047360(void)
 * Address ranges: 10047360-100473c7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_10047360(int param_1)

{
  uint uVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  
  uVar1 = *(uint *)(param_1 + 0x19c);
  if ((((uVar1 & 1) == 0) && (uVar2 = FUN_10047330(param_1,param_1), (uVar2 & 1) == 0)) &&
     (((uVar1 >> 2 & 1) == 0 || ((*(int *)(param_1 + 0x1a0) + 0xcdaba7bcU & 0xfdffffff) == 0)))) {
    uVar3 = 0;
  }
  else {
    uVar3 = 1;
  }
  return uVar3;
}

