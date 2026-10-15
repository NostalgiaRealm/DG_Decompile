/*
 * FUN_1004f613 at 1004f613
 * undefined __stdcall FUN_1004f613(int * param_1, int * param_2, uint param_3, uint param_4)
 * Address ranges: 1004f613-1004f6fc
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1004f613(int *param_1,int *param_2,uint param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  byte bVar3;
  undefined4 extraout_EDX;
  undefined8 uVar4;
  uint local_18;
  char local_14;
  byte local_10;
  undefined3 uStack_f;
  undefined4 local_c;
  undefined4 local_8;
  
  uVar1 = FUN_1004efaf((byte)(param_3 >> 0x10));
  bVar3 = (byte)(param_4 >> 0x10);
  local_c = CONCAT31((int3)(uVar1 >> 8),bVar3);
  uVar2 = FUN_1004efaf(bVar3);
  _local_10 = CONCAT31(uStack_f,(byte)uVar2);
  bVar3 = (byte)uVar1;
  if ((param_3 & 0xff00ffff) == (param_4 & 0xff00ffff)) {
    bVar3 = (byte)uVar2 | (byte)uVar1;
  }
  FUN_1004f0bb(&local_18,(int)param_1,param_3,bVar3);
  FUN_1004f115(local_8,extraout_EDX,param_1,param_2,0,param_3,0,0,'\0',local_18,local_14);
  if (((param_3 & 0xff00ffff) == (param_4 & 0xff00ffff)) && (local_18 != 0)) {
    param_1[0xa0] = local_18;
    *(char *)(param_1 + 0xa1) = (char)local_c;
    param_1[0xa4] = -1;
    param_1[0xa7] = -1;
    param_1[0xa6] = -1;
    param_1[0xa5] = -1;
  }
  else {
    uVar4 = FUN_1004f0bb(&local_18,(int)param_1,param_4,(char)_local_10);
    FUN_1004f115(local_8,(int)((ulonglong)uVar4 >> 0x20),param_1,param_2,1,param_4,0,0,'\0',
                 *(int *)uVar4,(char)((int *)uVar4)[1]);
  }
  return;
}

