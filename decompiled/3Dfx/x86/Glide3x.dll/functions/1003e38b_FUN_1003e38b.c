/*
 * FUN_1003e38b at 1003e38b
 * undefined4 __fastcall FUN_1003e38b(undefined4 param_1)
 * Address ranges: 1003e38b-1003e3ac
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __fastcall FUN_1003e38b(undefined4 param_1)

{
  switch(param_1) {
  case 0x44:
  case 0x45:
    return 2;
  case 0x46:
  case 0x47:
  case 0x48:
  case 0x49:
  case 0x4a:
  case 0x4b:
  case 0x4c:
  case 0x4d:
  case 0x4e:
  case 0x4f:
  case 0x50:
  case 0x51:
  case 0x52:
  case 0x53:
  case 0x54:
    return 4;
  default:
    return 1;
  }
}

