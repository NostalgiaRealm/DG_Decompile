/*
 * FUN_1800ed324 at 1800ed324
 * undefined __fastcall FUN_1800ed324(int * param_1, longlong * param_2)
 * Address ranges: 1800ed324-1800ed3c6
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800ed324(int *param_1,longlong *param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined4 uStack0000000000000028;
  undefined4 uStack0000000000000030;
  
  uVar2 = FUN_1800ee040(*param_1);
  iVar1 = (int)uVar2;
  if (((iVar1 == 0x40) || (iVar1 == 0x41)) || (iVar1 == 0x50)) {
    FUN_1800eddec(param_2,4,0x4004058,0x107000);
  }
  else if (iVar1 == 0x51) {
    uStack0000000000000030 = 8;
    uStack0000000000000028 = 0;
    FUN_1800ee25c(param_2);
    return;
  }
  return;
}

