/*
 * FUN_10079568 at 10079568
 * undefined FUN_10079568(void)
 * Address ranges: 10079568-100795e7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint FUN_10079568(undefined8 param_1,int param_2,int param_3,byte param_4)

{
  uint *puVar1;
  byte *pbVar2;
  uint *puVar3;
  
  puVar3 = (uint *)(param_2 + (param_3 + 0x37) * 4);
  if (*puVar3 == 0) {
    if (*(char *)(param_2 + 0x1af) == '\0') {
      puVar1 = (uint *)(param_2 + 0x148);
      *puVar3 = *puVar1 | 0x410100;
      *(char *)(*puVar1 + param_2 + 0x136) = (char)param_3;
      *puVar1 = *puVar1 + 1;
    }
    else {
      *puVar3 = *(byte *)(param_2 + param_3 + 0x136) | 0x410100;
    }
  }
  pbVar2 = (byte *)(param_2 + param_3 + 0x124);
  *pbVar2 = *pbVar2 | param_4;
  return *puVar3;
}

