/*
 * FUN_100353d2 at 100353d2
 * undefined4 __thiscall FUN_100353d2(void * this, int param_1, uint * param_2, int * param_3, int * param_4, uint param_5, uint param_6)
 * Address ranges: 100353d2-10035797
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __thiscall
FUN_100353d2(void *this,int param_1,uint *param_2,int *param_3,int *param_4,uint param_5,
            uint param_6)

{
  byte *pbVar1;
  uint uVar2;
  int iVar3;
  undefined4 extraout_EDX;
  undefined4 uVar4;
  
  FUN_10030f37((int *)param_2,param_4,param_5,param_6);
  param_2[0x82] = 0;
  param_2[0x81] = 0;
  param_2[0x80] = 0;
  param_2[0x7f] = 0;
  param_2[0x7e] = 0;
  FUN_10034fa8(this,param_1,param_2,param_4,param_5,param_6);
  FUN_1003289c((int *)param_2,param_4);
  uVar2 = param_2[0x82];
  if (uVar2 == 0) {
    param_2[0x82] = 0x410103;
  }
  else if ((uVar2 & 0x3f00) == 0) {
    pbVar1 = (byte *)((uVar2 & 0xff) + param_2[0xc]);
    *pbVar1 = *pbVar1 & ~(('\x01' << ((byte)(uVar2 >> 0x14) & 7)) + -1 <<
                         ((byte)(uVar2 >> 0x12) & 3));
  }
  uVar4 = 0;
  FUN_10056ee5((int)param_2,3,'\0');
  FUN_100580c1(CONCAT31((int3)((uint)uVar4 >> 8),*(undefined1 *)((int)param_2 + 499)),
               CONCAT31((int3)((uint)extraout_EDX >> 8),7));
  FUN_10057c8a((int *)param_2,param_4,0x2000);
  FUN_10057c8a((int *)param_2,param_4,0x37);
  FUN_100310eb((int *)param_2,param_4,param_2[0x7e],param_5,param_6);
  FUN_10031277((int *)param_2,param_4,param_2[0x7e],param_5,param_6);
  FUN_100314b5((int *)param_2,param_4,param_2[0x7e],param_5,param_6);
  FUN_10057c8a((int *)param_2,param_4,0x2036);
  FUN_10057c8a((int *)param_2,param_4,0x3e);
  FUN_100581f6(*param_2,param_3);
  if ((param_2[2] & 1) != 0) {
    FUN_10058272(*param_2,param_3);
  }
  FUN_10058272(*param_2,param_3);
  uVar2 = 0;
  do {
    if (*(char *)((int)param_2 + uVar2 + 0x1e6) != '\0') {
      pbVar1 = (byte *)((int)param_2 + ((int)uVar2 >> 3) + 0x9c);
      *pbVar1 = *pbVar1 | '\x01' << (uVar2 & 7);
    }
    uVar2 = uVar2 + 1;
  } while (uVar2 < 8);
  if ((param_2[3] & 0x101) == 0) {
    param_2[0x27] = param_2[0x27] & 0xfffffffe;
  }
  FUN_100315c2(param_2,param_3,param_5,param_6);
  if ((param_2[3] >> 0x18 & 1) != 0) {
    iVar3 = FUN_10057dfe(*param_2);
    if (((iVar3 == 0x40) || (iVar3 == 0x41)) || (iVar3 == 0x50)) {
      FUN_10058143(param_3);
    }
    else if (iVar3 == 0x51) {
      FUN_100581ae(param_3);
    }
  }
  if ((param_2[3] >> 0x1a & 1) != 0) {
    FUN_1005766e(param_2,param_3);
  }
  if ((param_2[3] >> 0x1b & 1) != 0) {
    FUN_1005766e(param_2,param_3);
  }
  if ((char)param_2[0xf] != '\0') {
    FUN_10057d33(param_3,4);
  }
  if (*(char *)((int)param_2 + 0x3d) != '\0') {
    FUN_10058353(param_3);
  }
  if (*(char *)((int)param_2 + 0x3e) != '\0') {
    FUN_10058353(param_3);
  }
  if (*(char *)((int)param_2 + 0x3f) != '\0') {
    FUN_10058353(param_3);
  }
  if ((char)param_2[0x10] != '\0') {
    FUN_10058353(param_3);
  }
  uVar2 = 0;
  do {
    if (*(char *)((int)param_2 + uVar2 + 0x1e6) != '\0') {
      FUN_10058353(param_3);
    }
    uVar2 = uVar2 + 1;
  } while (uVar2 < 8);
  FUN_10057d33(param_3,3);
  if (*(char *)((int)param_2 + 0x35) != '\0') {
    FUN_10057d33(param_3,2);
  }
  uVar2 = param_2[0x7e];
  if (uVar2 != 0) {
    pbVar1 = (byte *)((uVar2 & 0xff) + param_2[0xc]);
    *pbVar1 = *pbVar1 & ~(('\x01' << ((byte)(uVar2 >> 0x14) & 7)) + -1 <<
                         ((byte)(uVar2 >> 0x12) & 3));
  }
  return 1;
}

