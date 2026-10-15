/*
 * FUN_180092f54 at 180092f54
 * undefined8 __fastcall FUN_180092f54(longlong param_1)
 * Address ranges: 180092f54-180092f7a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_180092f54(longlong param_1)

{
  undefined8 in_RAX;
  undefined8 uVar1;
  
  if (*(char *)(param_1 + 0x249) == '\0') {
    uVar1 = FUN_180090fbc(param_1);
    *(char *)(param_1 + 0x249) = (char)uVar1;
  }
  else {
    uVar1 = CONCAT71((int7)((ulonglong)in_RAX >> 8),1);
  }
  return uVar1;
}

