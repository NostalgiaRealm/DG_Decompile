/*
 * FUN_1004aab3 at 1004aab3
 * uint __stdcall FUN_1004aab3(int param_1)
 * Address ranges: 1004aab3-1004ab66
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_1004aab3(int param_1)

{
  short sVar1;
  short sVar2;
  ushort uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  bool bVar7;
  uint local_8;
  
  if ((DAT_10070bac & 1) == 0) {
    DAT_10070bac = DAT_10070bac | 1;
    _DAT_10070aec = 0x53eedcd5;
    _DAT_10070af0 = 0x5cac678e;
    _DAT_10070af4 = 0x669342e0;
    _DAT_10070af8 = 0x42eccba4;
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
          sVar1 = (&DAT_100662a0)[uVar6];
          sVar2 = FUN_1006199f(*(short *)(*(int *)(param_1 + 0x30) + uVar6 * 2 + local_8 * 2));
          uVar3 = sVar2 - sVar1;
          uVar4 = (uint)uVar3;
          if (uVar3 != (&DAT_10070aec)[uVar6]) goto LAB_1004ab49;
          uVar6 = uVar6 + 1;
        } while (uVar6 < 8);
        if (uVar6 == 8) {
          return CONCAT31((uint3)(byte)(uVar3 >> 8),1);
        }
LAB_1004ab49:
        local_8 = local_8 + 1;
      } while (local_8 < uVar5);
    }
  }
  return uVar4 & 0xffffff00;
}

