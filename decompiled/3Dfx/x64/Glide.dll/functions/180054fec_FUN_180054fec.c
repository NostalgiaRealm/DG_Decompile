/*
 * FUN_180054fec at 180054fec
 * uint __fastcall FUN_180054fec(uint param_1, byte param_2, uint param_3, int param_4, uint param_5, uint param_6)
 * Address ranges: 180054fec-180055103
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint FUN_180054fec(uint param_1,byte param_2,uint param_3,int param_4,uint param_5,uint param_6)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  
  bVar6 = (byte)(param_1 >> 0x12) & 3;
  bVar5 = (byte)(param_1 >> 0x14) & 7;
  bVar1 = (bVar5 - 1) + bVar6;
  bVar4 = bVar1;
  if (3 < bVar5) {
    bVar4 = bVar6 + 3;
  }
  bVar2 = bVar1;
  if (2 < bVar5) {
    bVar2 = bVar6 + 2;
  }
  if (1 < bVar5) {
    bVar1 = bVar6 + 1;
  }
  bVar6 = ((bVar4 << 2 | bVar2) << 2 | bVar1) << 2 | bVar6;
  uVar3 = (uint)(param_4 == 1);
  if (param_4 == 4) {
    uVar3 = 6;
  }
  return ((uint)(byte)(((bVar6 >> (param_2 >> 4 & 3) * '\x02' & 3 |
                        (bVar6 >> (param_2 >> 6) * '\x02') << 2) << 2 |
                       bVar6 >> (param_2 >> 2 & 3) * '\x02' & 3) << 2) |
          (((param_6 & 3) << 3 | param_5 & 3) << 2 | param_3 & 3) << 0x10 |
          bVar6 >> (param_2 & 3) * '\x02' & 3 | param_1 & 0x3f00) << 4 | uVar3;
}

