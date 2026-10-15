/*
 * FUN_1800ac758 at 1800ac758
 * uint __fastcall FUN_1800ac758(longlong param_1, uint param_2, byte param_3)
 * Address ranges: 1800ac758-1800ac790
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint FUN_1800ac758(longlong param_1,uint param_2,byte param_3)

{
  uint uVar1;
  
  uVar1 = 1;
  if (param_2 >> (param_3 & 0x1f) != 0) {
    uVar1 = param_2 >> (param_3 & 0x1f);
  }
  if ((&DAT_1800fe9f8)[*(uint *)(param_1 + 0x2c)] != '\0') {
    uVar1 = (uVar1 - 1) + (uint)(byte)(&DAT_1800feb08)[*(uint *)(param_1 + 0x2c)] &
            -(uint)(byte)(&DAT_1800feb08)[*(uint *)(param_1 + 0x2c)];
  }
  return uVar1;
}

