/*
 * FUN_1000c96b at 1000c96b
 * uint __fastcall FUN_1000c96b(uint * param_1, int * param_2, int param_3)
 * Address ranges: 1000c96b-1000cb0c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint __fastcall FUN_1000c96b(uint *param_1,int *param_2,int param_3)

{
  byte *pbVar1;
  ulonglong uVar2;
  uint *puVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint *extraout_ECX;
  uint *extraout_ECX_00;
  uint *extraout_ECX_01;
  ulonglong local_18;
  uint *local_10;
  uint local_c;
  
  local_10 = param_1;
  local_18 = FUN_1000b651(param_1,param_2,*(ushort *)(param_3 + 1),*(byte *)(param_3 + 7),
                          *(char *)(param_3 + 10),*(byte *)(param_3 + 0xd),'\0','\0');
  uVar2 = local_18 >> 0x20;
  FUN_1000b9b4((int)param_1,(uint)local_18);
  local_c = FUN_1000bd63(extraout_ECX,param_2,(uint *)&local_18,(uint *)&local_18,'\0');
  FUN_1000b9b4((int)param_1,local_c);
  uVar5 = FUN_1000b55c(extraout_ECX_00,param_2,0xffff);
  FUN_1000b9b4((int)param_1,uVar5);
  uVar6 = FUN_1000b55c(extraout_ECX_01,param_2,0xffff);
  FUN_10001877(param_2,uVar5,0x100700,0x5702,uVar5,0,0);
  FUN_10001877(param_2,uVar6,0x100100,0x2902,(uint)local_18,(int)uVar2,0);
  uVar4 = local_c;
  FUN_10001877(param_2,uVar5,0x130700,0xc202,local_c,0,1);
  FUN_10001877(param_2,uVar6,0x100700,0x5e02,uVar4,0,0);
  FUN_10001877(param_2,uVar4,0x100100,0x2902,uVar5,0,0);
  puVar3 = local_10;
  FUN_10001877(param_2,local_c,0x100700,0x5502,local_10[1] | 0x80000000,0x160,0);
  FUN_10001877(param_2,uVar5,0x100700,0x5402,uVar6,0,0);
  uVar4 = local_c;
  FUN_10001877(param_2,local_c,0x100700,0x5602,uVar5,0,0);
  if (-1 < (int)uVar5) {
    pbVar1 = (byte *)((int)puVar3 + ((int)uVar5 >> 3) + 0x14);
    *pbVar1 = *pbVar1 & ~('\x01' << (uVar5 & 7));
  }
  if (-1 < (int)uVar4) {
    pbVar1 = (byte *)((int)puVar3 + ((int)uVar4 >> 3) + 0x14);
    *pbVar1 = *pbVar1 & ~('\x01' << (uVar4 & 7));
  }
  if (-1 < (int)(uint)local_18) {
    pbVar1 = (byte *)((int)puVar3 + ((int)(uint)local_18 >> 3) + 0x14);
    *pbVar1 = *pbVar1 & ~('\x01' << ((uint)local_18 & 7));
  }
  return uVar4;
}

