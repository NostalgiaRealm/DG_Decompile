/*
 * FUN_1003b861 at 1003b861
 * undefined4 __fastcall FUN_1003b861(undefined4 param_1)
 * Address ranges: 1003b861-1003b885
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __fastcall FUN_1003b861(undefined4 param_1)

{
  switch(param_1) {
  case 0x44:
  case 0x45:
    return 4;
  case 0x46:
  case 0x47:
  case 0x48:
  case 0x4f:
  case 0x50:
  case 0x51:
    return 8;
  case 0x49:
  case 0x4a:
  case 0x4b:
  case 0x4c:
  case 0x4d:
  case 0x4e:
  case 0x52:
  case 0x53:
  case 0x54:
    return 0x10;
  default:
    return 0;
  }
}

