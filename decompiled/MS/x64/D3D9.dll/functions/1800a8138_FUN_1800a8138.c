/*
 * FUN_1800a8138 at 1800a8138
 * uint __fastcall FUN_1800a8138(longlong * param_1, uint * param_2, uint param_3, int param_4, byte param_5)
 * Address ranges: 1800a8138-1800a83ba
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint FUN_1800a8138(longlong *param_1,uint *param_2,uint param_3,int param_4,byte param_5)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined4 in_stack_ffffffffffffff7c;
  
  puVar1 = param_2 + 4;
  uVar2 = FUN_1800ec8c0((longlong)puVar1,4,'\x01');
  uVar3 = 0;
  if ((((*(char *)((longlong)param_2 + 5) != '\0') || (*(char *)((longlong)param_2 + 6) != '\0')) ||
      (*(char *)((longlong)param_2 + 7) != '\0')) || ((char)param_2[2] != '\0')) {
    uVar3 = FUN_1800ec8c0((longlong)puVar1,2,'\x01');
  }
  *(byte *)(param_2 + 0x20) = (byte)param_2[0x20] | 3;
  FUN_1800edbe0(puVar1,param_1,0x33,(ulonglong)uVar2);
  if (uVar3 != 0) {
    FUN_1800edbe0(puVar1,param_1,0x1a,(ulonglong)uVar3);
  }
  FUN_1800edbe0(puVar1,param_1,0x1b,(ulonglong)uVar2);
  uVar6 = 0xc;
  FUN_1800edbe0(puVar1,param_1,0x36,(ulonglong)uVar2);
  uVar5 = 0;
  uVar4 = *param_2 & 0xf;
  if (uVar4 == 0) {
    uVar5 = FUN_1800a5388(param_1,param_2,uVar2,uVar3,CONCAT44(in_stack_ffffffffffffff7c,uVar6),
                          param_4,param_3,param_5);
  }
  else if (uVar4 == 1) {
    uVar5 = FUN_1800a5b78(param_1,param_2,uVar2,uVar3,
                          CONCAT44(in_stack_ffffffffffffff7c,uVar6) & 0xffffffffffffff00,param_4,
                          param_3,param_5);
  }
  else if (uVar4 == 2) {
    uVar5 = FUN_1800a67f8(param_1,param_2,uVar2,uVar3,CONCAT44(in_stack_ffffffffffffff7c,uVar6),
                          param_4,param_3,param_5);
  }
  else if ((uVar4 == 3) || (uVar4 == 4)) {
    uVar5 = FUN_1800a7080(param_1,param_2,uVar2,uVar3,param_4,param_3,param_5);
  }
  else if (uVar4 == 5) {
    uVar5 = FUN_1800a7834(param_1,param_2,uVar2,uVar3,param_4,param_3,param_5);
  }
  return uVar5;
}

