/*
 * FUN_100151d8 at 100151d8
 * undefined FUN_100151d8(void)
 * Address ranges: 100151d8-1001545b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100151d8(int param_1,uint param_2,undefined4 param_3,int param_4)

{
  byte *pbVar1;
  
  switch(*(undefined4 *)(param_1 + 0xe4)) {
  case 1:
    break;
  case 2:
    break;
  case 4:
    break;
  case 8:
    break;
  case 0x10:
  }
  if (param_4 == 2) {
    FUN_10010380(0,0,(float)*(uint *)(param_1 + 0x14),(float)*(uint *)(param_1 + 0x18),0,0,
                 (float)*(uint *)(param_1 + 0xdc),(float)*(uint *)(param_1 + 0xe0),
                 *(undefined4 *)(param_1 + 0xa8),*(undefined4 *)(param_1 + 0x1c),
                 *(undefined4 *)(param_1 + 0x1c),param_2,param_3,param_2,param_3,0,0);
  }
  else if (param_4 == 1) {
    FUN_10010380(0,0,(float)*(uint *)(param_1 + 0xdc),(float)*(uint *)(param_1 + 0xe0),0,0,
                 (float)*(uint *)(param_1 + 0xdc),(float)*(uint *)(param_1 + 0xe0),
                 *(undefined4 *)(param_1 + 0xa8),*(undefined4 *)(param_1 + 0x1c),
                 *(undefined4 *)(param_1 + 0x1c),param_2,param_3,param_2,param_3,0,0);
    pbVar1 = (byte *)((param_2 >> 3 & 3) + param_1 + ((param_2 >> 5) + 0x55) * 4);
    *pbVar1 = *pbVar1 | (byte)(1 << (ulonglong)(param_2 & 7));
  }
  return;
}

