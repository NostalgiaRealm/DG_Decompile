/*
 * FUN_1005d5d3 at 1005d5d3
 * undefined4 __thiscall FUN_1005d5d3(void * this, int param_1, uint * param_2, int * param_3, int * param_4, undefined4 param_5, uint param_6)
 * Address ranges: 1005d5d3-1005d8da
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __thiscall
FUN_1005d5d3(void *this,int param_1,uint *param_2,int *param_3,int *param_4,undefined4 param_5,
            uint param_6)

{
  byte *pbVar1;
  uint uVar2;
  undefined4 extraout_EDX;
  undefined4 uVar3;
  
  FUN_100587ce((int *)param_2,param_4,param_5,param_6);
  param_2[0x86] = 0;
  param_2[0x85] = 0;
  param_2[0x84] = 0;
  param_2[0x83] = 0;
  param_2[0x82] = 0;
  FUN_1005d178(this,param_1,param_2,param_4,param_5,param_6);
  FUN_1005a556((int *)param_2,param_4);
  FUN_1005a5e9((int *)param_2,param_4);
  uVar2 = param_2[0x86];
  if (((uVar2 & 0x3f00) == 0) && (uVar2 != 0)) {
    pbVar1 = (byte *)((uVar2 & 0xff) + param_2[0xc]);
    *pbVar1 = *pbVar1 & ~(('\x01' << ((byte)(uVar2 >> 0x14) & 7)) + -1 <<
                         ((byte)(uVar2 >> 0x12) & 3));
  }
  uVar3 = 0;
  FUN_100c2e34((int)param_2,3,'\0');
  FUN_100c40de(CONCAT31((int3)((uint)uVar3 >> 8),*(undefined1 *)((int)param_2 + 0x203)),
               CONCAT31((int3)((uint)extraout_EDX >> 8),7));
  FUN_100c3be1((int *)param_2,param_4,0x2000);
  FUN_100c3be1((int *)param_2,param_4,0x37);
  FUN_10058982((int *)param_2,param_4,param_2[0x82],param_5,param_6);
  FUN_10058b0e((int *)param_2,param_4,param_2[0x82],param_5,param_6);
  FUN_10058d4c((int *)param_2,param_4,param_2[0x82],param_5,param_6);
  FUN_100c3be1((int *)param_2,param_4,0x2036);
  FUN_100c3be1((int *)param_2,param_4,0x3e);
  FUN_100c422d(*param_2,param_3);
  if ((param_2[2] & 1) != 0) {
    FUN_100c42a9(*param_2,param_3);
  }
  FUN_100c42a9(*param_2,param_3);
  uVar2 = 0;
  do {
    if (*(char *)((int)param_2 + uVar2 + 0x1f6) != '\0') {
      pbVar1 = (byte *)((int)param_2 + ((int)uVar2 >> 3) + 0xac);
      *pbVar1 = *pbVar1 | '\x01' << (uVar2 & 7);
    }
    uVar2 = uVar2 + 1;
  } while (uVar2 < 8);
  FUN_10058e97(param_2,param_3,param_5,param_6);
  if ((char)param_2[0xf] != '\0') {
    FUN_100c43de(param_3);
  }
  if (*(char *)((int)param_2 + 0x3d) != '\0') {
    FUN_100c43b1(param_3);
  }
  if (*(char *)((int)param_2 + 0x3e) != '\0') {
    FUN_100c43b1(param_3);
  }
  if (*(char *)((int)param_2 + 0x3f) != '\0') {
    FUN_100c43b1(param_3);
  }
  if ((char)param_2[0x10] != '\0') {
    FUN_100c43b1(param_3);
  }
  uVar2 = 0;
  do {
    if (*(char *)((int)param_2 + uVar2 + 0x1f6) != '\0') {
      FUN_100c43b1(param_3);
    }
    uVar2 = uVar2 + 1;
  } while (uVar2 < 8);
  FUN_100c440d(param_3);
  if (*(char *)((int)param_2 + 0x35) != '\0') {
    FUN_100c4456(param_3);
  }
  uVar2 = param_2[0x82];
  if (uVar2 != 0) {
    pbVar1 = (byte *)((uVar2 & 0xff) + param_2[0xc]);
    *pbVar1 = *pbVar1 & ~(('\x01' << ((byte)(uVar2 >> 0x14) & 7)) + -1 <<
                         ((byte)(uVar2 >> 0x12) & 3));
  }
  return 1;
}

