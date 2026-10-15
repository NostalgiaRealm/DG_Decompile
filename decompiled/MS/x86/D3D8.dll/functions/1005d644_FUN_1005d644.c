/*
 * FUN_1005d644 at 1005d644
 * char * __fastcall FUN_1005d644(uint param_1)
 * Address ranges: 1005d644-1005d6ab
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

char * __fastcall FUN_1005d644(uint param_1)

{
  char *pcVar1;
  
  pcVar1 = (char *)0x0;
  switch((param_1 & 0xff) >> 4) {
  case 0:
    return "POSITION";
  case 1:
    return "BLENDWEIGHT";
  case 2:
    return "BLENDINDICES";
  case 3:
    return "NORMAL";
  case 4:
    return "PSIZE";
  case 5:
    return "TEXCOORD";
  case 6:
    return "TANGENT";
  case 7:
    return "BINORMAL";
  case 8:
    return "TESSFACTOR";
  case 9:
    return "POSITIONT";
  case 10:
    return "COLOR";
  case 0xb:
    return "FOG";
  case 0xc:
    return "DEPTH";
  case 0xd:
    pcVar1 = "SAMPLE";
  }
  return pcVar1;
}

