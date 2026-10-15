/*
 * FUN_100111a2 at 100111a2
 * int __fastcall FUN_100111a2(int param_1, byte param_2)
 * Address ranges: 100111a2-100111e3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int __fastcall FUN_100111a2(int param_1,byte param_2)

{
  int iVar1;
  
  iVar1 = 0;
  if (((param_1 == 0) || (param_1 == 1)) || (param_1 == 2)) {
    if (param_2 == 0) {
      iVar1 = 0x10;
    }
  }
  else if ((param_1 == 4) || (param_1 == 5)) {
    if (param_2 == 0) {
      return 0x20;
    }
  }
  else if (param_1 == 8) {
    if (param_2 != 0) {
      return 0x20;
    }
  }
  else if (param_1 == 0xf) {
    return (uint)param_2 << 4;
  }
  return iVar1;
}

