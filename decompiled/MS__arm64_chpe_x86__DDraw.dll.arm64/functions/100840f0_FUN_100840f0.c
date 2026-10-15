/*
 * FUN_100840f0 at 100840f0
 * undefined FUN_100840f0(void)
 * Address ranges: 100840f0-1008412f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint FUN_100840f0(uint param_1,byte param_2,uint param_3,undefined8 param_4,uint param_5,
                 uint param_6)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = (uint)param_2;
  uVar1 = param_1 >> 0x14 & 7;
  if (uVar1 <= param_2) {
    uVar2 = uVar1 + 0xff;
  }
  return (uVar2 + (param_1 >> 0x12) & 3 |
          (param_3 & 3 | (param_5 & 3 | (param_6 & 3) << 3) << 2) << 0x10 | param_1 & 0x3f00) << 4 |
         10;
}

