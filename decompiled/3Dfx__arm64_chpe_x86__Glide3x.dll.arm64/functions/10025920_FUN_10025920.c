/*
 * FUN_10025920 at 10025920
 * undefined FUN_10025920(void)
 * Address ranges: 10025920-1002594f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10025920(undefined4 *param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = *param_1;
  iVar2 = param_1[1];
  *(undefined4 *)(iVar2 + 0x4038) = param_1[3];
  FUN_1000de50(iVar2,uVar1,1);
  return;
}

