/*
 * FUN_18002fe28 at 18002fe28
 * ushort __cdecl FUN_18002fe28(ushort param_1, ulonglong param_2)
 * Address ranges: 18002fe28-18002fe63
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

ushort FUN_18002fe28(ushort param_1,ulonglong param_2)

{
  ushort uVar1;
  undefined *puVar2;
  
  uVar1 = param_1 & 0xf00;
  if ((param_1 & 0xf00) == 0) {
    puVar2 = &DAT_180067978;
  }
  else {
    if (uVar1 != 0x100) goto LAB_18002fe54;
    puVar2 = &DAT_180067980;
  }
  uVar1 = *(ushort *)(puVar2 + (param_2 >> 8 & 0xff) * 2);
LAB_18002fe54:
  return param_1 & 0xf0ff | uVar1;
}

