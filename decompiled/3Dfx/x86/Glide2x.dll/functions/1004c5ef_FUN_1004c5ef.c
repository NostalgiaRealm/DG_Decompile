/*
 * FUN_1004c5ef at 1004c5ef
 * bool __stdcall FUN_1004c5ef(int param_1)
 * Address ranges: 1004c5ef-1004c697
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_1004c5ef(int param_1)

{
  short sVar1;
  short sVar2;
  undefined4 uVar3;
  uint uVar4;
  
  if ((DAT_100598c8 & 1) == 0) {
    DAT_100598c8 = DAT_100598c8 | 1;
    _DAT_10059818 = 0x6d99cbf4;
    _DAT_1005981c = 0xbc2bdf05;
    _DAT_10059820 = 0x9bd05598;
    _DAT_10059824 = 0x50b94372;
    _DAT_10059828 = 0x446f;
  }
  if (*(ushort *)(param_1 + 0x2c) >> 1 == 9) {
    uVar4 = 0;
    do {
      sVar1 = (&DAT_10054fc0)[uVar4];
      sVar2 = FUN_10050512(*(short *)(*(int *)(param_1 + 0x30) + uVar4 * 2));
      if ((short)(sVar2 - sVar1) != (&DAT_10059818)[uVar4]) {
        return false;
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < 9);
    if (uVar4 == 9) {
      uVar3 = FUN_1004c54f(*(int *)(param_1 + 0x18),FUN_1004c698);
      return (char)uVar3 != '\0';
    }
  }
  return false;
}

