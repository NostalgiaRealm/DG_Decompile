/*
 * FUN_18007eb88 at 18007eb88
 * undefined __fastcall FUN_18007eb88(undefined8 param_1, longlong * param_2, longlong param_3, uint param_4, undefined8 param_5, uint param_6, int param_7)
 * Address ranges: 18007eb88-18007ed85
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18007eb88(undefined8 param_1,longlong *param_2,longlong param_3,uint param_4,
                  undefined8 param_5,uint param_6,int param_7)

{
  uint *puVar1;
  uint uVar2;
  ulonglong uVar3;
  
  puVar1 = (uint *)(param_3 + 0x20);
  uVar2 = FUN_1800ec8c0((longlong)puVar1,1,'\0');
  if (param_6 != 0) {
    param_4 = param_6;
  }
  uVar3 = (ulonglong)uVar2;
  if (param_7 == 0) {
    FUN_1800edbe0(puVar1,param_2,0x10,uVar3);
    FUN_1800edbe0(puVar1,param_2,0x44,(ulonglong)uVar2);
  }
  else if (*puVar1 == 0x10040) {
    FUN_1800edbe0(puVar1,param_2,0xe,uVar3);
  }
  else {
    FUN_1800edbe0(puVar1,param_2,0x81,uVar3);
  }
  FUN_1800edbe0(puVar1,param_2,0x38,(ulonglong)param_4);
  FUN_1800edbe0(puVar1,param_2,0x27,(ulonglong)uVar2);
  FUN_1800edbe0(puVar1,param_2,1,(ulonglong)param_4);
  FUN_1800ec960((longlong)puVar1,uVar2);
  return;
}

