/*
 * FUN_1000bbd4 at 1000bbd4
 * uint __fastcall FUN_1000bbd4(uint * param_1, int * param_2, int param_3, uint param_4, uint param_5)
 * Address ranges: 1000bbd4-1000bd62
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint __fastcall FUN_1000bbd4(uint *param_1,int *param_2,int param_3,uint param_4,uint param_5)

{
  byte *pbVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint *extraout_ECX;
  ulonglong uVar6;
  
  iVar2 = param_3;
  if ((param_4 == 0x100700) && (param_5 == 0x5302)) {
    param_3._0_1_ = *(char *)(param_3 + 10);
  }
  else {
    param_3._0_1_ = '\x02';
  }
  uVar6 = FUN_1000b651(param_1,param_2,*(ushort *)(iVar2 + 1),*(byte *)(iVar2 + 7),(char)param_3,
                       *(byte *)(iVar2 + 0xd),'\0','\0');
  uVar3 = (uint)uVar6;
  FUN_1000b9b4((int)param_1,uVar3);
  uVar4 = FUN_1000b611(param_1,param_2,*(ushort *)(iVar2 + 0x11),*(char *)(iVar2 + 0x10),
                       *(char *)(iVar2 + 0x13));
  FUN_1000b9b4((int)param_1,uVar4);
  uVar5 = FUN_1000b55c(extraout_ECX,param_2,0xffff);
  FUN_10001877(param_2,uVar4,param_4,param_5,uVar3,(int)(uVar6 >> 0x20),0);
  FUN_10001877(param_2,uVar5,0x100100,0x2902,uVar4,0,0);
  FUN_10001877(param_2,uVar5,0x100700,0x5402,param_1[1] | 0x80000000,0x100,0);
  FUN_10001877(param_2,uVar5,0x130700,0xc202,param_1[1] | 0x80000000,0x150,4);
  FUN_10001877(param_2,uVar4,0x100700,0x5402,uVar5,0,0);
  FUN_10001877(param_2,uVar5,0x100700,0x5502,param_1[1] | 0x80000000,0x160,0);
  FUN_10001877(param_2,uVar4,0x100700,0x5602,uVar5,0,0);
  if (-1 < (int)uVar4) {
    pbVar1 = (byte *)((int)param_1 + ((int)uVar4 >> 3) + 0x14);
    *pbVar1 = *pbVar1 & ~('\x01' << (uVar4 & 7));
  }
  if (-1 < (int)uVar3) {
    pbVar1 = (byte *)((int)param_1 + ((int)uVar3 >> 3) + 0x14);
    *pbVar1 = *pbVar1 & ~('\x01' << (uVar3 & 7));
  }
  return uVar4;
}

