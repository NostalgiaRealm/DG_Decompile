/*
 * FUN_180021d48 at 180021d48
 * int __cdecl FUN_180021d48(uint param_1, byte param_2)
 * Address ranges: 180021d48-180021d93
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_180021d48(uint param_1,byte param_2)

{
  int iVar1;
  
  if (param_1 < 3) {
    iVar1 = (param_2 ^ 1) << 4;
  }
  else if (param_1 - 4 < 2) {
    iVar1 = (param_2 ^ 1) << 5;
  }
  else {
    iVar1 = 0;
    if ((param_1 == 0xf) && (iVar1 = 0x10, param_2 == 0)) {
      iVar1 = 0;
    }
  }
  return iVar1;
}

