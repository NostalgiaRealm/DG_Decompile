/*
 * FUN_1800a6da4 at 1800a6da4
 * undefined __fastcall FUN_1800a6da4(longlong * param_1, longlong param_2, undefined8 param_3, uint param_4, undefined8 param_5, undefined8 param_6, uint param_7)
 * Address ranges: 1800a6da4-1800a707c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800a6da4(longlong *param_1,longlong param_2,undefined8 param_3,uint param_4,
                  undefined8 param_5,undefined8 param_6,uint param_7)

{
  uint *puVar1;
  uint uVar2;
  
  puVar1 = (uint *)(param_2 + 0x10);
  if (*puVar1 < 0x50) {
    uVar2 = FUN_1800ec8c0((longlong)puVar1,2,'\0');
    FUN_1800edbe0(puVar1,param_1,0x29,(ulonglong)uVar2);
    FUN_1800edbe0(puVar1,param_1,0x29,(ulonglong)uVar2);
    FUN_1800edbe0(puVar1,param_1,0x29,(ulonglong)param_4);
    FUN_1800edbe0(puVar1,param_1,0x3c,(ulonglong)param_4);
    FUN_1800edbe0(puVar1,param_1,0x3c,(ulonglong)param_4);
  }
  else {
    if (param_7 == 0) {
      param_7 = FUN_1800ec8c0((longlong)puVar1,4,'\0');
    }
    FUN_1800edbe0(puVar1,param_1,0x29,(ulonglong)param_7);
    FUN_1800edbe0(puVar1,param_1,0x3c,(ulonglong)param_7);
  }
  FUN_1800edbe0(puVar1,param_1,0x3c,(ulonglong)param_4);
  return;
}

