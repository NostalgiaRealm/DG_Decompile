/*
 * FUN_18002d870 at 18002d870
 * undefined __fastcall FUN_18002d870(longlong param_1, ushort param_2)
 * Address ranges: 18002d870-18002d8a8
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18002d870(longlong param_1,ushort param_2)

{
  ulonglong uVar1;
  
  if (((byte)param_2 & 0xf0) == 0x80) {
    uVar1 = (ulonglong)(param_2 & 0xf);
    FUN_1800568f4(param_1,*(uint *)(param_1 + 0x98 + (ulonglong)(param_2 & 0xf) * 4));
    *(undefined4 *)(param_1 + 0x98 + uVar1 * 4) = 0;
  }
  return;
}

