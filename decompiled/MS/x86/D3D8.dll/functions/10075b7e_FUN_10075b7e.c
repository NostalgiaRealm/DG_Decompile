/*
 * FUN_10075b7e at 10075b7e
 * uint * __fastcall FUN_10075b7e(int * param_1, uint * param_2, uint * param_3, int param_4, byte param_5)
 * Address ranges: 10075b7e-10075d1c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint * __fastcall FUN_10075b7e(int *param_1,uint *param_2,uint *param_3,int param_4,byte param_5)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  
  uVar1 = FUN_100a05ed((int)(param_2 + 3),4,'\x01');
  if ((((*(char *)((int)param_2 + 5) == '\0') && (*(char *)((int)param_2 + 6) == '\0')) &&
      (*(char *)((int)param_2 + 7) == '\0')) && ((char)param_2[2] == '\0')) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_100a05ed((int)(param_2 + 3),2,'\x01');
  }
  *(byte *)(param_2 + 0x1d) = (byte)param_2[0x1d] | 3;
  FUN_100a138c((int *)(param_2 + 3),param_1,0x33);
  if (uVar2 != 0) {
    FUN_100a138c((int *)(param_2 + 3),param_1,0x1a);
  }
  FUN_100a138c((int *)(param_2 + 3),param_1,0x1b);
  FUN_100a138c((int *)(param_2 + 3),param_1,0x36);
  puVar4 = (uint *)0x0;
  uVar3 = *param_2 & 0xf;
  if (uVar3 == 0) {
    puVar4 = FUN_10073db2(param_1,param_2,uVar1,uVar2,0,param_4,param_3);
  }
  else if (uVar3 == 1) {
    puVar4 = FUN_100742ee(param_1,param_2,uVar1,uVar2,0,param_4,param_3);
  }
  else if (uVar3 == 2) {
    puVar4 = FUN_10074a7f(param_1,param_2,uVar1,uVar2,0,param_4,param_3,param_5);
  }
  else if ((uVar3 == 3) || (uVar3 == 4)) {
    puVar4 = (uint *)FUN_10074fea(param_1,param_2,uVar1,uVar2,param_4,(uint)param_3);
  }
  else if (uVar3 == 5) {
    puVar4 = (uint *)FUN_10075525(param_1,param_2,uVar1,uVar2,param_4,(uint)param_3);
  }
  return puVar4;
}

