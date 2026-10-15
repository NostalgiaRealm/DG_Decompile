/*
 * FUN_100a1d1f at 100a1d1f
 * bool __stdcall FUN_100a1d1f(int param_1)
 * Address ranges: 100a1d1f-100a1dc7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_100a1d1f(int param_1)

{
  short sVar1;
  short sVar2;
  undefined4 uVar3;
  uint uVar4;
  
  if ((DAT_100bf1b4 & 1) == 0) {
    DAT_100bf1b4 = DAT_100bf1b4 | 1;
    _DAT_100bf0d0 = 0x6d99cbf4;
    _DAT_100bf0d4 = 0xbc2bdf05;
    _DAT_100bf0d8 = 0x9bd05598;
    _DAT_100bf0dc = 0x50b94372;
    _DAT_100bf0e0 = 0x446f;
  }
  if (*(ushort *)(param_1 + 0x2c) >> 1 == 9) {
    uVar4 = 0;
    do {
      sVar1 = (&DAT_100b5344)[uVar4];
      sVar2 = FUN_100ae241(*(short *)(*(int *)(param_1 + 0x30) + uVar4 * 2));
      if ((short)(sVar2 - sVar1) != (&DAT_100bf0d0)[uVar4]) {
        return false;
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < 9);
    if (uVar4 == 9) {
      uVar3 = FUN_100a1c7f(*(int *)(param_1 + 0x18),FUN_100a1dc8);
      return (char)uVar3 != '\0';
    }
  }
  return false;
}

