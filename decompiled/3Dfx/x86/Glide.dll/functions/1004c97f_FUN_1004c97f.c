/*
 * FUN_1004c97f at 1004c97f
 * bool __stdcall FUN_1004c97f(int param_1)
 * Address ranges: 1004c97f-1004ca27
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_1004c97f(int param_1)

{
  short sVar1;
  short sVar2;
  undefined4 uVar3;
  uint uVar4;
  
  if ((DAT_100598f8 & 1) == 0) {
    DAT_100598f8 = DAT_100598f8 | 1;
    _DAT_10059848 = 0x6d99cbf4;
    _DAT_1005984c = 0xbc2bdf05;
    _DAT_10059850 = 0x9bd05598;
    _DAT_10059854 = 0x50b94372;
    _DAT_10059858 = 0x446f;
  }
  if (*(ushort *)(param_1 + 0x2c) >> 1 == 9) {
    uVar4 = 0;
    do {
      sVar1 = (&DAT_10054fc0)[uVar4];
      sVar2 = FUN_100508a2(*(short *)(*(int *)(param_1 + 0x30) + uVar4 * 2));
      if ((short)(sVar2 - sVar1) != (&DAT_10059848)[uVar4]) {
        return false;
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < 9);
    if (uVar4 == 9) {
      uVar3 = FUN_1004c8df(*(int *)(param_1 + 0x18),FUN_1004ca28);
      return (char)uVar3 != '\0';
    }
  }
  return false;
}

