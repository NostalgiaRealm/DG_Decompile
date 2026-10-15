/*
 * FUN_18001b6a8 at 18001b6a8
 * undefined __fastcall FUN_18001b6a8(longlong param_1, char param_2, byte param_3, char param_4)
 * Address ranges: 18001b6a8-18001b6ea
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18001b6a8(longlong param_1,char param_2,byte param_3,char param_4)

{
  uint uVar1;
  uint uVar2;
  
  if ((param_2 == '\0') || (uVar2 = 3, param_4 == '\0')) {
    uVar2 = 1;
  }
  uVar1 = *(uint *)(param_1 + 0x3f4);
  uVar2 = (uint)param_3 << 2 | uVar1 & 0xfffffff9 | uVar2;
  *(uint *)(param_1 + 0x3f4) = uVar2;
  *(byte *)(param_1 + 0xd12) = *(byte *)(param_1 + 0xd12) | uVar2 != uVar1;
  return;
}

