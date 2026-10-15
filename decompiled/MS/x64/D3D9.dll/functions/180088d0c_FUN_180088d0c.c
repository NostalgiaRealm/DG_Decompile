/*
 * FUN_180088d0c at 180088d0c
 * char * __fastcall FUN_180088d0c(byte param_1)
 * Address ranges: 180088d0c-180088de5
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

char * FUN_180088d0c(byte param_1)

{
  byte bVar1;
  char *pcVar2;
  
  pcVar2 = (char *)0x0;
  bVar1 = param_1 >> 4;
  if (bVar1 < 8) {
    if (bVar1 == 7) {
      pcVar2 = "BINORMAL";
    }
    else if (bVar1 == 0) {
      pcVar2 = "POSITION";
    }
    else if (bVar1 == 1) {
      pcVar2 = "BLENDWEIGHT";
    }
    else if (bVar1 == 2) {
      pcVar2 = "BLENDINDICES";
    }
    else if (bVar1 == 3) {
      pcVar2 = "NORMAL";
    }
    else if (bVar1 == 4) {
      pcVar2 = "PSIZE";
    }
    else if (bVar1 == 5) {
      pcVar2 = "TEXCOORD";
    }
    else if (bVar1 == 6) {
      pcVar2 = "TANGENT";
    }
  }
  else if (bVar1 == 8) {
    pcVar2 = "TESSFACTOR";
  }
  else if (bVar1 == 9) {
    pcVar2 = "POSITIONT";
  }
  else if (bVar1 == 10) {
    pcVar2 = "COLOR";
  }
  else if (bVar1 == 0xb) {
    pcVar2 = "FOG";
  }
  else if (bVar1 == 0xc) {
    pcVar2 = "DEPTH";
  }
  else if (bVar1 == 0xd) {
    pcVar2 = "SAMPLE";
  }
  return pcVar2;
}

