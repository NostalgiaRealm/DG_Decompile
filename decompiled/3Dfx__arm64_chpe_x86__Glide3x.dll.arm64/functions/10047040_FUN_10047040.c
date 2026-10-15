/*
 * FUN_10047040 at 10047040
 * undefined FUN_10047040(void)
 * Address ranges: 10047040-1004709f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_10047040(undefined8 param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_1007dc70(0x6c);
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else if (param_2 == (undefined4 *)0x0) {
    uVar2 = FUN_10047cc0(iVar1);
  }
  else {
    uVar2 = FUN_10047d90(iVar1,*param_2,param_2[1],param_2[2]);
  }
  return uVar2;
}

