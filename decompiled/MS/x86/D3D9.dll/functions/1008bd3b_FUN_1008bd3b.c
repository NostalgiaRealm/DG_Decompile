/*
 * FUN_1008bd3b at 1008bd3b
 * uint * __fastcall FUN_1008bd3b(int * param_1, uint * param_2, uint * param_3, int param_4, byte param_5)
 * Address ranges: 1008bd3b-1008bed9
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint * __fastcall FUN_1008bd3b(int *param_1,uint *param_2,uint *param_3,int param_4,byte param_5)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  
  uVar1 = FUN_100c2e34((int)(param_2 + 3),4,'\x01');
  if ((((*(char *)((int)param_2 + 5) == '\0') && (*(char *)((int)param_2 + 6) == '\0')) &&
      (*(char *)((int)param_2 + 7) == '\0')) && ((char)param_2[2] == '\0')) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_100c2e34((int)(param_2 + 3),2,'\x01');
  }
  *(byte *)(param_2 + 0x1d) = (byte)param_2[0x1d] | 3;
  FUN_100c3be1((int *)(param_2 + 3),param_1,0x33);
  if (uVar2 != 0) {
    FUN_100c3be1((int *)(param_2 + 3),param_1,0x1a);
  }
  FUN_100c3be1((int *)(param_2 + 3),param_1,0x1b);
  FUN_100c3be1((int *)(param_2 + 3),param_1,0x36);
  puVar4 = (uint *)0x0;
  uVar3 = *param_2 & 0xf;
  if (uVar3 == 0) {
    puVar4 = FUN_10089f6f(param_1,param_2,uVar1,uVar2,0,param_4,param_3);
  }
  else if (uVar3 == 1) {
    puVar4 = FUN_1008a4ab(param_1,param_2,uVar1,uVar2,0,param_4,param_3);
  }
  else if (uVar3 == 2) {
    puVar4 = FUN_1008ac3c(param_1,param_2,uVar1,uVar2,0,param_4,param_3,param_5);
  }
  else if ((uVar3 == 3) || (uVar3 == 4)) {
    puVar4 = (uint *)FUN_1008b1a7(param_1,param_2,uVar1,uVar2,param_4,(uint)param_3);
  }
  else if (uVar3 == 5) {
    puVar4 = (uint *)FUN_1008b6e2(param_1,param_2,uVar1,uVar2,param_4,(uint)param_3);
  }
  return puVar4;
}

