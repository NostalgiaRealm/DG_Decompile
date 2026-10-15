/*
 * FUN_18003ab80 at 18003ab80
 * undefined __fastcall FUN_18003ab80(longlong param_1, ushort param_2)
 * Address ranges: 18003ab80-18003abb8
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18003ab80(longlong param_1,ushort param_2)

{
  ulonglong uVar1;
  
  if (((byte)param_2 & 0xf0) == 0x80) {
    uVar1 = (ulonglong)(param_2 & 0xf);
    FUN_1800542e8(param_1,*(uint *)(param_1 + 0x98 + (ulonglong)(param_2 & 0xf) * 4));
    *(undefined4 *)(param_1 + 0x98 + uVar1 * 4) = 0;
  }
  return;
}

