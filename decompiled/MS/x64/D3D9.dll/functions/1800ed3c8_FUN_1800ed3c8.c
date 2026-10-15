/*
 * FUN_1800ed3c8 at 1800ed3c8
 * undefined __fastcall FUN_1800ed3c8(int * param_1, longlong * param_2)
 * Address ranges: 1800ed3c8-1800ed457
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800ed3c8(int *param_1,longlong *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  uVar2 = FUN_1800ee040(*param_1);
  iVar1 = (int)uVar2;
  if (((iVar1 == 0x40) || (iVar1 == 0x41)) || (iVar1 == 0x50)) {
    FUN_1800eddec(param_2,4,0x40000a2,0x107000);
  }
  else if (iVar1 == 0x51) {
    FUN_1800eddec(param_2,7,0x70060a2,0x307000);
    return;
  }
  return;
}

