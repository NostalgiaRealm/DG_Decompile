/*
 * FUN_100169c0 at 100169c0
 * undefined FUN_100169c0(void)
 * Address ranges: 100169c0-10016a73
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

char FUN_100169c0(int param_1,ulonglong param_2,ulonglong param_3,byte param_4)

{
  byte *pbVar1;
  uint uVar2;
  char cVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  uVar5 = (ulonglong)param_4;
  uVar4 = FUN_10014798(param_1,param_2,param_3,uVar5);
  if ((uVar4 & 1) == 0) {
    cVar3 = FUN_100120c0(param_1,param_2 & 0xffffffff,param_3 & 0xffffffff,uVar5 & 0xffffffff);
  }
  else {
    cVar3 = FUN_100159d0(param_1,param_2 & 0xffffffff,param_3 & 0xffffffff,uVar5 & 0xffffffff);
    if (cVar3 != '\0') {
      *(undefined1 *)(param_1 + 0xdb) = 0;
      uVar2 = (int)param_2 + *(int *)(param_1 + 0x2c) * (int)param_3;
      pbVar1 = (byte *)((uVar2 >> 3 & 3) + param_1 + ((uVar2 >> 5) + 0x33) * 4);
      *pbVar1 = *pbVar1 & ((byte)(1 << (ulonglong)(uVar2 & 7)) ^ 0xff);
    }
  }
  return cVar3;
}

