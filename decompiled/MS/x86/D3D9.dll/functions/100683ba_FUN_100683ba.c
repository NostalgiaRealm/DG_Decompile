/*
 * FUN_100683ba at 100683ba
 * undefined4 __fastcall FUN_100683ba(char param_1, uint param_2, uint param_3)
 * Address ranges: 100683ba-100683fd
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __fastcall FUN_100683ba(char param_1,uint param_2,uint param_3)

{
  uint uVar1;
  
  uVar1 = (uint)(byte)(param_1 << 4) | param_2 & 0xf;
  if ((((param_3 >> 0x18 != uVar1) && ((param_3 >> 0x10 & 0xff) != uVar1)) &&
      ((param_3 >> 8 & 0xff) != uVar1)) && ((param_3 & 0xff) != uVar1)) {
    return 0;
  }
  return 1;
}

