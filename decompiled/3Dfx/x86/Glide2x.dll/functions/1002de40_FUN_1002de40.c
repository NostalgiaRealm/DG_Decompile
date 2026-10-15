/*
 * FUN_1002de40 at 1002de40
 * ushort __fastcall FUN_1002de40(undefined4 param_1, ushort param_2, ushort param_3, ushort param_4, ushort param_5)
 * Address ranges: 1002de40-1002dea2
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

ushort __fastcall
FUN_1002de40(undefined4 param_1,ushort param_2,ushort param_3,ushort param_4,ushort param_5)

{
  switch(param_1) {
  case 1:
    return param_2;
  case 2:
    return param_3;
  case 3:
    return param_4;
  case 4:
    return param_5 | 0x1000;
  case 5:
    return param_5;
  default:
    return 0;
  case 8:
  case 0xe:
  case 0xf:
    return 0x100;
  case 9:
    return param_2 | 0x100;
  case 10:
    param_5 = param_3;
    break;
  case 0xb:
    param_5 = param_4;
    break;
  case 0xc:
    return param_5 | 0x1100;
  case 0xd:
  }
  return param_5 | 0x100;
}

