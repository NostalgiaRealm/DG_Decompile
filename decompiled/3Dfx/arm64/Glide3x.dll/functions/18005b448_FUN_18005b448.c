/*
 * FUN_18005b448 at 18005b448
 * undefined4 __cdecl FUN_18005b448(longlong param_1)
 * Address ranges: 18005b448-18005b45f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_18005b448(longlong param_1)

{
  undefined4 uVar1;
  
  if (*(char *)(param_1 + 0x478) == '\0') {
    uVar1 = *(undefined4 *)(param_1 + 0x328);
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}

