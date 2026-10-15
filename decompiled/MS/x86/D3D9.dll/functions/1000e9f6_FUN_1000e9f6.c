/*
 * FUN_1000e9f6 at 1000e9f6
 * undefined __fastcall FUN_1000e9f6(uint * param_1, int * param_2, uint param_3)
 * Address ranges: 1000e9f6-1000ead4
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_1000e9f6(uint *param_1,int *param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  uVar4 = param_3;
  FUN_10001877(param_2,*param_1 | 0x80000000,0x12010,0x88102,0xffffffff,
               (uint)*(ushort *)(param_3 + 0x10) << 4,0);
  FUN_1000f71e(param_1,param_2,'\0');
  FUN_10001877(param_2,0xffffffff,0x30000,((*(char *)(uVar4 + 1) != '\0') + 4) * 0x100 | 0x7001,
               0xffffffff,0,0);
  iVar1 = param_2[1];
  iVar2 = *param_2;
  FUN_10001877(param_2,0xffffffff,0x10000,0xe801,0xffffffff,0,0);
  iVar3 = FUN_1000e331((int)param_1,(uint)*(ushort *)(uVar4 + 0x10));
  uVar4 = 0;
  if ((char)param_1[0x7b] != '\0') {
    uVar4 = 0x80000000;
  }
  param_3 = param_2[1] - *param_2 | uVar4;
  FUN_10003d8f((void *)(iVar3 + 4),&param_3);
  *(char *)(*param_2 + -1 + (iVar1 - iVar2)) =
       ((char)param_2[1] - (char)*param_2) - (char)(iVar1 - iVar2);
  return;
}

