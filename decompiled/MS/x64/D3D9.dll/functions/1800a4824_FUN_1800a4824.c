/*
 * FUN_1800a4824 at 1800a4824
 * undefined __fastcall FUN_1800a4824(longlong * param_1, uint * param_2, int param_3, uint param_4)
 * Address ranges: 1800a4824-1800a4b0d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800a4824(longlong *param_1,uint *param_2,int param_3,uint param_4)

{
  uint *puVar1;
  ulonglong uVar2;
  uint uVar3;
  byte bVar4;
  
  uVar2 = (ulonglong)param_4;
  bVar4 = -(*(char *)((-(ulonglong)((*param_2 & 0x400) != 0) & 2) + 6 + (longlong)param_2) != '\0')
          & 2U | *(char *)((-(ulonglong)((*param_2 & 0x400) != 0) & 2) + 5 + (longlong)param_2) !=
                 '\0';
  if ((bVar4 == 1) || (bVar4 == 2)) {
    puVar1 = param_2 + 4;
    uVar3 = FUN_1800ec8c0((longlong)puVar1,1,'\0');
    if (param_3 != 0) {
      FUN_1800edbe0(puVar1,param_1,0x1d,(ulonglong)uVar3);
      FUN_1800edbe0(puVar1,param_1,0x3c,uVar2);
    }
  }
  else {
    if (bVar4 != 3) goto LAB_1800a4ac2;
    puVar1 = param_2 + 4;
    uVar3 = FUN_1800ec8c0((longlong)puVar1,2,'\0');
    if (param_3 != 0) {
      FUN_1800edbe0(puVar1,param_1,0x1d,(ulonglong)uVar3);
      FUN_1800edbe0(puVar1,param_1,0x3c,uVar2);
      FUN_1800edbe0(puVar1,param_1,0x3c,uVar2);
    }
    FUN_1800edbe0(puVar1,param_1,1,uVar2);
  }
  FUN_1800edbe0(param_2 + 4,param_1,1,uVar2);
LAB_1800a4ac2:
  FUN_1800edbe0(param_2 + 4,param_1,~((*param_2 >> 0xc) << 0x12) & 0x40000 | 0xd,0xffffffff);
  return;
}

