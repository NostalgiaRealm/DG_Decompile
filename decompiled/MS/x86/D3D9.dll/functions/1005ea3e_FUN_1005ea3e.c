/*
 * FUN_1005ea3e at 1005ea3e
 * undefined __stdcall FUN_1005ea3e(int * param_1, int * param_2, uint param_3, uint param_4)
 * Address ranges: 1005ea3e-1005eb27
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1005ea3e(int *param_1,int *param_2,uint param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  int *piVar3;
  byte bVar4;
  uint local_18;
  char local_14;
  byte local_10;
  undefined3 uStack_f;
  undefined4 local_c;
  void *local_8;
  
  uVar1 = FUN_1005e375((byte)(param_3 >> 0x10));
  bVar4 = (byte)(param_4 >> 0x10);
  local_c = CONCAT31((int3)(uVar1 >> 8),bVar4);
  uVar2 = FUN_1005e375(bVar4);
  _local_10 = CONCAT31(uStack_f,(byte)uVar2);
  bVar4 = (byte)uVar1;
  if ((param_3 & 0xff00ffff) == (param_4 & 0xff00ffff)) {
    bVar4 = (byte)uVar2 | (byte)uVar1;
  }
  FUN_1005e47e(&local_18,(int)param_1,param_3,bVar4);
  FUN_1005e4d8(local_8,param_1,param_2,0,param_3,0,0,'\0',local_18,local_14);
  if (((param_3 & 0xff00ffff) == (param_4 & 0xff00ffff)) && (local_18 != 0)) {
    param_1[0xdc] = local_18;
    *(char *)(param_1 + 0xdd) = (char)local_c;
    param_1[0xe0] = -1;
    param_1[0xe3] = -1;
    param_1[0xe2] = -1;
    param_1[0xe1] = -1;
  }
  else {
    piVar3 = (int *)FUN_1005e47e(&local_18,(int)param_1,param_4,(char)_local_10);
    FUN_1005e4d8(local_8,param_1,param_2,1,param_4,0,0,'\0',*piVar3,(char)piVar3[1]);
  }
  return;
}

