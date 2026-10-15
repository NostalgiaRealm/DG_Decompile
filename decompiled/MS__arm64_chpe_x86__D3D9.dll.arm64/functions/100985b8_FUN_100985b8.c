/*
 * FUN_100985b8 at 100985b8
 * undefined FUN_100985b8(void)
 * Address ranges: 100985b8-10098693
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint FUN_100985b8(undefined8 param_1,int param_2,uint param_3,byte param_4)

{
  uint *puVar1;
  uint *puVar2;
  uint uVar3;
  byte *pbVar4;
  
  puVar2 = (uint *)(param_2 + (param_3 + 0x37) * 4);
  if (*puVar2 == 0) {
    if (*(char *)(param_2 + 0x1b3) == '\0') {
      puVar1 = (uint *)(param_2 + 0x148);
      *puVar2 = *puVar1 | 0x410100;
      *(char *)(*puVar1 + param_2 + 0x136) = (char)param_3;
      *puVar1 = *puVar1 + 1;
    }
    else {
      *puVar2 = *(byte *)(param_2 + param_3 + 0x136) | 0x410100;
    }
  }
  if (*(char *)(param_2 + 0x1b4) == '\0') {
    uVar3 = param_3;
    if (param_3 == 0x10) {
      uVar3 = 1;
    }
    switch((uint)(*(ulonglong *)(*(int *)(param_2 + 0x1a0) + 0x48) >>
                 (((ulonglong)uVar3 & 0xf) << 2)) & 0xf) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
      goto switchD_10098660_caseD_0;
    case 5:
    case 6:
      pbVar4 = (byte *)(param_2 + param_3 + 0x124);
      param_4 = *pbVar4 | 1;
      break;
    default:
      goto switchD_10098660_default;
    }
  }
  else {
switchD_10098660_caseD_0:
    pbVar4 = (byte *)(param_2 + param_3 + 0x124);
    param_4 = *pbVar4 | param_4;
  }
  *pbVar4 = param_4;
switchD_10098660_default:
  return *puVar2;
}

