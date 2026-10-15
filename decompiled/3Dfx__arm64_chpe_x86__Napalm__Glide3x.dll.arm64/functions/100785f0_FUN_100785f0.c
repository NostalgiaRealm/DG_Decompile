/*
 * FUN_100785f0 at 100785f0
 * undefined FUN_100785f0(void)
 * Address ranges: 100785f0-10078643
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint FUN_100785f0(uint param_1,byte param_2,uint param_3,int param_4,uint param_5,uint param_6)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = (uint)param_2;
  uVar2 = param_1 >> 0x14 & 7;
  if (uVar2 <= param_2) {
    uVar1 = uVar2 + 0xff;
  }
  uVar2 = 2;
  if (param_4 != 4) {
    uVar2 = (uint)(param_4 == 1);
  }
  return uVar2 | (uVar1 + (param_1 >> 0x12) & 3 |
                  (param_3 & 3 | (param_5 & 3 | (param_6 & 3) << 3) << 2) << 0x10 | param_1 & 0x3f00
                 ) << 4 | 8;
}

