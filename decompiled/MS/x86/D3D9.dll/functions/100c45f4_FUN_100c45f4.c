/*
 * FUN_100c45f4 at 100c45f4
 * bool __stdcall FUN_100c45f4(int param_1)
 * Address ranges: 100c45f4-100c469c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_100c45f4(int param_1)

{
  short sVar1;
  short sVar2;
  undefined4 uVar3;
  uint uVar4;
  
  if ((DAT_100e3bd4 & 1) == 0) {
    DAT_100e3bd4 = DAT_100e3bd4 | 1;
    _DAT_100e3af0 = 0x6d99cbf4;
    _DAT_100e3af4 = 0xbc2bdf05;
    _DAT_100e3af8 = 0x9bd05598;
    _DAT_100e3afc = 0x50b94372;
    _DAT_100e3b00 = 0x446f;
  }
  if (*(ushort *)(param_1 + 0x2c) >> 1 == 9) {
    uVar4 = 0;
    do {
      sVar1 = (&DAT_100d8d9c)[uVar4];
      sVar2 = FUN_100d0b1f(*(short *)(*(int *)(param_1 + 0x30) + uVar4 * 2));
      if ((short)(sVar2 - sVar1) != (&DAT_100e3af0)[uVar4]) {
        return false;
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < 9);
    if (uVar4 == 9) {
      uVar3 = FUN_100c4554(*(int *)(param_1 + 0x18),FUN_100c469d);
      return (char)uVar3 != '\0';
    }
  }
  return false;
}

