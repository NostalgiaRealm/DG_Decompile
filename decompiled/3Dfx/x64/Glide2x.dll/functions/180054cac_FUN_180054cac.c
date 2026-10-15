/*
 * FUN_180054cac at 180054cac
 * undefined __fastcall FUN_180054cac(int * param_1, longlong * param_2)
 * Address ranges: 180054cac-180054d41
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180054cac(int *param_1,longlong *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  uVar2 = FUN_1800554b8(*param_1);
  iVar1 = (int)uVar2;
  if (((iVar1 == 0x40) || (iVar1 == 0x41)) || (iVar1 == 0x50)) {
    FUN_180055308(param_2,4,0x40000a2,0x107000);
  }
  else if (iVar1 == 0x51) {
    FUN_180055308(param_2,7,0x70060a2,0x307000);
    return;
  }
  return;
}

