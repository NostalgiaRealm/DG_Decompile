/*
 * FUN_100524e0 at 100524e0
 * bool __stdcall FUN_100524e0(int param_1)
 * Address ranges: 100524e0-10052588
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_100524e0(int param_1)

{
  short sVar1;
  short sVar2;
  undefined4 uVar3;
  uint uVar4;
  
  if ((DAT_1005fbd8 & 1) == 0) {
    DAT_1005fbd8 = DAT_1005fbd8 | 1;
    _DAT_1005fb48 = 0x6d99cbf4;
    _DAT_1005fb4c = 0xbc2bdf05;
    _DAT_1005fb50 = 0x9bd05598;
    _DAT_1005fb54 = 0x50b94372;
    _DAT_1005fb58 = 0x446f;
  }
  if (*(ushort *)(param_1 + 0x2c) >> 1 == 9) {
    uVar4 = 0;
    do {
      sVar1 = (&DAT_1005b6c8)[uVar4];
      sVar2 = FUN_10056532(*(short *)(*(int *)(param_1 + 0x30) + uVar4 * 2));
      if ((short)(sVar2 - sVar1) != (&DAT_1005fb48)[uVar4]) {
        return false;
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < 9);
    if (uVar4 == 9) {
      uVar3 = FUN_10052440(*(int *)(param_1 + 0x18),FUN_10052589);
      return (char)uVar3 != '\0';
    }
  }
  return false;
}

