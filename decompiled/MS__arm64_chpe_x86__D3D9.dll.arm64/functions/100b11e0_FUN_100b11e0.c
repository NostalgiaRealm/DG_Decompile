/*
 * FUN_100b11e0 at 100b11e0
 * undefined FUN_100b11e0(void)
 * Address ranges: 100b11e0-100b1293
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

char FUN_100b11e0(int param_1,ulonglong param_2,ulonglong param_3,byte param_4)

{
  byte *pbVar1;
  uint uVar2;
  char cVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  uVar5 = (ulonglong)param_4;
  uVar4 = FUN_100aef38(param_1,param_2,param_3,uVar5);
  if ((uVar4 & 1) == 0) {
    cVar3 = FUN_100ac840(param_1,param_2 & 0xffffffff,param_3 & 0xffffffff,uVar5 & 0xffffffff);
  }
  else {
    cVar3 = FUN_100b01a0(param_1,param_2 & 0xffffffff,param_3 & 0xffffffff,uVar5 & 0xffffffff);
    if (cVar3 != '\0') {
      *(undefined1 *)(param_1 + 0xdb) = 0;
      uVar2 = (int)param_2 + *(int *)(param_1 + 0x2c) * (int)param_3;
      pbVar1 = (byte *)((uVar2 >> 3 & 3) + param_1 + ((uVar2 >> 5) + 0x33) * 4);
      *pbVar1 = *pbVar1 & ((byte)(1 << (ulonglong)(uVar2 & 7)) ^ 0xff);
    }
  }
  return cVar3;
}

