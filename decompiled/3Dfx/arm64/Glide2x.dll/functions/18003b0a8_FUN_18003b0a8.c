/*
 * FUN_18003b0a8 at 18003b0a8
 * ushort __cdecl FUN_18003b0a8(ushort param_1, ulonglong param_2)
 * Address ranges: 18003b0a8-18003b0e3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

ushort FUN_18003b0a8(ushort param_1,ulonglong param_2)

{
  ushort uVar1;
  undefined *puVar2;
  
  uVar1 = param_1 & 0xf00;
  if ((param_1 & 0xf00) == 0) {
    puVar2 = &DAT_180064bc0;
  }
  else {
    if (uVar1 != 0x100) goto LAB_18003b0d4;
    puVar2 = &DAT_180064bc8;
  }
  uVar1 = *(ushort *)(puVar2 + (param_2 >> 8 & 0xff) * 2);
LAB_18003b0d4:
  return param_1 & 0xf0ff | uVar1;
}

