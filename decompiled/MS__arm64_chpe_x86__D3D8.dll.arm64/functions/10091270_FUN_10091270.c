/*
 * FUN_10091270 at 10091270
 * undefined FUN_10091270(void)
 * Address ranges: 10091270-10091323
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

char FUN_10091270(int param_1,ulonglong param_2,ulonglong param_3,byte param_4)

{
  byte *pbVar1;
  uint uVar2;
  char cVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  uVar5 = (ulonglong)param_4;
  uVar4 = FUN_1008f048(param_1,param_2,param_3,uVar5);
  if ((uVar4 & 1) == 0) {
    cVar3 = FUN_1008c970(param_1,param_2 & 0xffffffff,param_3 & 0xffffffff,uVar5 & 0xffffffff);
  }
  else {
    cVar3 = FUN_10090280(param_1,param_2 & 0xffffffff,param_3 & 0xffffffff,uVar5 & 0xffffffff);
    if (cVar3 != '\0') {
      *(undefined1 *)(param_1 + 0xdb) = 0;
      uVar2 = (int)param_2 + *(int *)(param_1 + 0x2c) * (int)param_3;
      pbVar1 = (byte *)((uVar2 >> 3 & 3) + param_1 + ((uVar2 >> 5) + 0x33) * 4);
      *pbVar1 = *pbVar1 & ((byte)(1 << (ulonglong)(uVar2 & 7)) ^ 0xff);
    }
  }
  return cVar3;
}

