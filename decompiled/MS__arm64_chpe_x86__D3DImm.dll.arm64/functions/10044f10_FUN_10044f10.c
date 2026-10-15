/*
 * FUN_10044f10 at 10044f10
 * undefined FUN_10044f10(void)
 * Address ranges: 10044f10-10044f8f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint FUN_10044f10(undefined8 param_1,undefined8 param_2,int param_3,int param_4,byte param_5)

{
  uint *puVar1;
  byte *pbVar2;
  uint *puVar3;
  
  puVar3 = (uint *)(param_3 + (param_4 + 0x33) * 4);
  if (*puVar3 == 0) {
    if (*(char *)(param_3 + 0x193) == '\0') {
      puVar1 = (uint *)(param_3 + 300);
      *puVar3 = *puVar1 | 0x410100;
      *(char *)(*puVar1 + param_3 + 0x11c) = (char)param_4;
      *puVar1 = *puVar1 + 1;
    }
    else {
      *puVar3 = *(byte *)(param_3 + param_4 + 0x11c) | 0x410100;
    }
  }
  pbVar2 = (byte *)(param_3 + param_4 + 0x10c);
  *pbVar2 = *pbVar2 | param_5;
  return *puVar3;
}

