/*
 * FUN_18009ee00 at 18009ee00
 * undefined FUN_18009ee00(void)
 * Address ranges: 18009ee00-18009efa7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_18009ee00(undefined8 param_1,uint *param_2,int param_3,int param_4,int param_5,uint param_6)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  
  iVar3 = FUN_1800f42d0(param_2 + 4,4,1);
  bVar1 = *(byte *)((longlong)param_2 + 0x6d);
  uVar4 = 5;
  if ((*param_2 & 0xf) != 5) {
    uVar4 = 1;
  }
  param_2[(ulonglong)bVar1 + 0x22] = uVar4;
  uVar4 = *param_2;
  iVar5 = param_4;
  if (param_4 == 0 || param_5 != param_3) {
    iVar5 = iVar3;
  }
  uVar2 = (param_6 ^ 1) << 3 | 7;
  *(byte *)(param_2 + 0x20) = (byte)param_2[0x20] | 3;
  FUN_1800f5730(param_2 + 4,param_1,0x36,iVar3,3,0x210101,4,0);
  uVar6 = 0;
  FUN_1800f5730(param_2 + 4,param_1,0x36,iVar3,4,param_2[0x17],0,0xb4,0);
  FUN_1800f5730(param_2 + 4,param_1,0x48,iVar5,(char)uVar2,iVar3,0xa4,bVar1 | 0x410700,
                CONCAT44(uVar6,0xe4),uVar4 >> 0x10 & 1 | 0x20010600,0,param_2[0x17] | 0x10000000,0,
                0xb0,0);
  if (param_5 != param_3) {
    iVar5 = param_4;
    if (param_4 == 0) {
      iVar5 = iVar3;
    }
    FUN_18009b2f0(param_1,param_2,iVar5,uVar2,iVar3,param_3,param_5);
  }
  if (iVar5 != iVar3) {
    FUN_1800f4370(param_2 + 4,iVar3);
  }
  return iVar5;
}

