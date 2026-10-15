/*
 * FUN_1800a4e68 at 1800a4e68
 * ulonglong __fastcall FUN_1800a4e68(longlong * param_1, longlong param_2, uint param_3, ulonglong param_4, uint param_5)
 * Address ranges: 1800a4e68-1800a51e2
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

ulonglong FUN_1800a4e68(longlong *param_1,longlong param_2,uint param_3,ulonglong param_4,
                       uint param_5)

{
  uint *puVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  uVar3 = param_4 & 0xffffffff;
  uVar2 = (ulonglong)param_3;
  if ((int)param_4 != 2) {
    FUN_1800a4434(param_1,param_2,param_3,CONCAT71((int7)(param_4 >> 8),0xf),param_3,(int)param_4,2)
    ;
    uVar3 = 2;
  }
  puVar1 = (uint *)(param_2 + 0x10);
  if (*puVar1 < 0x50) {
    FUN_1800edbe0(puVar1,param_1,0x55,uVar2);
    FUN_1800edbe0(puVar1,param_1,0x55,uVar2);
    FUN_1800edbe0(puVar1,param_1,0x55,uVar2);
  }
  FUN_1800edbe0(puVar1,param_1,0x55,uVar2);
  if (*puVar1 < 0x50) {
    FUN_1800edbe0(puVar1,param_1,0x29,uVar2);
    FUN_1800edbe0(puVar1,param_1,0x29,uVar2);
    FUN_1800edbe0(puVar1,param_1,0x29,uVar2);
  }
  FUN_1800edbe0(puVar1,param_1,0x29,uVar2);
  FUN_1800edbe0(puVar1,param_1,0x3c,uVar2);
  FUN_1800edbe0(puVar1,param_1,0x3c,uVar2);
  if (param_5 != 0) {
    uVar2 = (ulonglong)param_5;
  }
  FUN_1800edbe0(puVar1,param_1,1,uVar2);
  return uVar3;
}

