/*
 * FUN_1004e649 at 1004e649
 * undefined4 __thiscall FUN_1004e649(void * this, int param_1, uint * param_2, int * param_3, int * param_4, uint param_5, uint param_6)
 * Address ranges: 1004e649-1004e91c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __thiscall
FUN_1004e649(void *this,int param_1,uint *param_2,int *param_3,int *param_4,uint param_5,
            uint param_6)

{
  byte *pbVar1;
  uint uVar2;
  undefined4 extraout_EDX;
  undefined4 uVar3;
  
  FUN_100498b7((int *)param_2,param_4,param_5);
  param_2[0x82] = 0;
  param_2[0x81] = 0;
  param_2[0x80] = 0;
  param_2[0x7f] = 0;
  param_2[0x7e] = 0;
  FUN_1004e1ea(this,param_1,param_2,param_4,param_5,param_6);
  FUN_1004b5e4((int *)param_2,param_4);
  FUN_1004b677((int *)param_2,param_4);
  uVar2 = param_2[0x82];
  if (((uVar2 & 0x3f00) == 0) && (uVar2 != 0)) {
    pbVar1 = (byte *)((uVar2 & 0xff) + param_2[0xc]);
    *pbVar1 = *pbVar1 & ~(('\x01' << ((byte)(uVar2 >> 0x14) & 7)) + -1 <<
                         ((byte)(uVar2 >> 0x12) & 3));
  }
  uVar3 = 0;
  FUN_100a05ed((int)param_2,3,'\0');
  FUN_100a1889(CONCAT31((int3)((uint)uVar3 >> 8),*(undefined1 *)((int)param_2 + 499)),
               CONCAT31((int3)((uint)extraout_EDX >> 8),7));
  FUN_100a138c((int *)param_2,param_4,0x2000);
  FUN_100a138c((int *)param_2,param_4,0x37);
  FUN_10049a6b((int *)param_2,param_4,param_2[0x7e],param_5);
  FUN_10049bfb((int *)param_2,param_4,param_2[0x7e],param_5,param_6);
  FUN_10049e35((int *)param_2,param_4,param_2[0x7e],param_5,param_6);
  FUN_100a138c((int *)param_2,param_4,0x2036);
  FUN_100a138c((int *)param_2,param_4,0x3e);
  FUN_100a19d8(*param_2,param_3);
  if ((param_2[2] & 1) != 0) {
    FUN_100a1a54(*param_2,param_3);
  }
  FUN_100a1a54(*param_2,param_3);
  uVar2 = 0;
  do {
    if (*(char *)((int)param_2 + uVar2 + 0x1e6) != '\0') {
      pbVar1 = (byte *)((int)param_2 + ((int)uVar2 >> 3) + 0x9c);
      *pbVar1 = *pbVar1 | '\x01' << (uVar2 & 7);
    }
    uVar2 = uVar2 + 1;
  } while (uVar2 < 8);
  FUN_10049f42(param_2,param_3,param_5,param_6);
  if ((char)param_2[0xf] != '\0') {
    FUN_100a1b89(param_3);
  }
  if (*(char *)((int)param_2 + 0x3d) != '\0') {
    FUN_100a1b5c(param_3);
  }
  if (*(char *)((int)param_2 + 0x3e) != '\0') {
    FUN_100a1b5c(param_3);
  }
  if (*(char *)((int)param_2 + 0x3f) != '\0') {
    FUN_100a1b5c(param_3);
  }
  if ((char)param_2[0x10] != '\0') {
    FUN_100a1b5c(param_3);
  }
  uVar2 = 0;
  do {
    if (*(char *)((int)param_2 + uVar2 + 0x1e6) != '\0') {
      FUN_100a1b5c(param_3);
    }
    uVar2 = uVar2 + 1;
  } while (uVar2 < 8);
  FUN_100a1bb8(param_3);
  if (*(char *)((int)param_2 + 0x35) != '\0') {
    FUN_100a1c01(param_3);
  }
  uVar2 = param_2[0x7e];
  if (uVar2 != 0) {
    pbVar1 = (byte *)((uVar2 & 0xff) + param_2[0xc]);
    *pbVar1 = *pbVar1 & ~(('\x01' << ((byte)(uVar2 >> 0x14) & 7)) + -1 <<
                         ((byte)(uVar2 >> 0x12) & 3));
  }
  return 1;
}

