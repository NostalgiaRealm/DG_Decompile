/*
 * FUN_1004a98d at 1004a98d
 * bool __stdcall FUN_1004a98d(int param_1)
 * Address ranges: 1004a98d-1004aa35
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_1004a98d(int param_1)

{
  short sVar1;
  short sVar2;
  undefined4 uVar3;
  uint uVar4;
  
  if ((DAT_10070bb0 & 1) == 0) {
    DAT_10070bb0 = DAT_10070bb0 | 1;
    _DAT_10070ad8 = 0x6d99cbf4;
    _DAT_10070adc = 0xbc2bdf05;
    _DAT_10070ae0 = 0x9bd05598;
    _DAT_10070ae4 = 0x50b94372;
    _DAT_10070ae8 = 0x446f;
  }
  if (*(ushort *)(param_1 + 0x2c) >> 1 == 9) {
    uVar4 = 0;
    do {
      sVar1 = (&DAT_100662b0)[uVar4];
      sVar2 = FUN_1006199f(*(short *)(*(int *)(param_1 + 0x30) + uVar4 * 2));
      if ((short)(sVar2 - sVar1) != (&DAT_10070ad8)[uVar4]) {
        return false;
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < 9);
    if (uVar4 == 9) {
      uVar3 = FUN_1004a8ed(*(int *)(param_1 + 0x18),FUN_1004aa36);
      return (char)uVar3 != '\0';
    }
  }
  return false;
}

