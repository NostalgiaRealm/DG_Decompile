/*
 * FUN_100c471a at 100c471a
 * uint __stdcall FUN_100c471a(int param_1)
 * Address ranges: 100c471a-100c47cd
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_100c471a(int param_1)

{
  short sVar1;
  short sVar2;
  ushort uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  bool bVar7;
  uint local_8;
  
  if ((DAT_100e3bd0 & 1) == 0) {
    DAT_100e3bd0 = DAT_100e3bd0 | 1;
    _DAT_100e3b04 = 0x53eedcd5;
    _DAT_100e3b08 = 0x5cac678e;
    _DAT_100e3b0c = 0x669342e0;
    _DAT_100e3b10 = 0x42eccba4;
  }
  uVar4 = (uint)(*(ushort *)(param_1 + 0x2c) >> 1);
  if (7 < uVar4) {
    uVar5 = uVar4 - 8;
    bVar7 = uVar4 != 8;
    local_8 = 0;
    uVar4 = 0;
    if (bVar7) {
      do {
        uVar6 = 0;
        do {
          sVar1 = (&DAT_100d8d8c)[uVar6];
          sVar2 = FUN_100d0b1f(*(short *)(*(int *)(param_1 + 0x30) + uVar6 * 2 + local_8 * 2));
          uVar3 = sVar2 - sVar1;
          uVar4 = (uint)uVar3;
          if (uVar3 != (&DAT_100e3b04)[uVar6]) goto LAB_100c47b0;
          uVar6 = uVar6 + 1;
        } while (uVar6 < 8);
        if (uVar6 == 8) {
          return CONCAT31((uint3)(byte)(uVar3 >> 8),1);
        }
LAB_100c47b0:
        local_8 = local_8 + 1;
      } while (local_8 < uVar5);
    }
  }
  return uVar4 & 0xffffff00;
}

