/*
 * FUN_1800a5828 at 1800a5828
 * uint __fastcall FUN_1800a5828(longlong * param_1, longlong param_2, uint param_3, undefined8 param_4, undefined8 param_5, int param_6, uint param_7, undefined8 param_8, byte param_9)
 * Address ranges: 1800a5828-1800a5b75
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint FUN_1800a5828(longlong *param_1,longlong param_2,uint param_3,undefined8 param_4,
                  undefined8 param_5,int param_6,uint param_7,undefined8 param_8,byte param_9)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  char cVar5;
  uint uVar6;
  uint uVar7;
  ulonglong uVar8;
  
  cVar5 = (param_9 ^ 1) << 3;
  puVar1 = (uint *)(param_2 + 0x10);
  *(undefined4 *)(param_2 + 0x88 + (ulonglong)*(byte *)(param_2 + 0x68) * 4) = 5;
  *(undefined4 *)(param_2 + 0x88 + (ulonglong)*(byte *)(param_2 + 0x69) * 4) = 5;
  uVar6 = FUN_1800ec8c0((longlong)puVar1,4,'\x01');
  uVar7 = FUN_1800ec8c0((longlong)puVar1,(param_9 ^ 1) + 3,'\0');
  FUN_1800edbe0(puVar1,param_1,0xa7,(ulonglong)uVar6);
  FUN_1800edbe0(puVar1,param_1,0xa7,(ulonglong)uVar7);
  FUN_1800edbe0(puVar1,param_1,0,(ulonglong)uVar7);
  FUN_1800edbe0(puVar1,param_1,0xa7,(ulonglong)uVar6);
  FUN_1800edbe0(puVar1,param_1,0xa7,(ulonglong)param_3);
  uVar8 = (ulonglong)uVar6;
  FUN_1800edbe0(puVar1,param_1,0,uVar8);
  if ((param_7 == 0) || (param_6 != 1)) {
    bVar4 = false;
  }
  else {
    bVar4 = true;
  }
  uVar8 = CONCAT71((int7)(uVar8 >> 8),cVar5) | 7;
  uVar2 = uVar6;
  if (bVar4) {
    uVar2 = param_7;
  }
  FUN_1800a46a4(param_1,param_2,uVar2,uVar8,uVar6);
  if ((param_6 != 3) && (uVar2 == uVar6)) {
    uVar3 = uVar6;
    if (param_7 != 0) {
      uVar3 = param_7;
    }
    FUN_1800a4434(param_1,param_2,uVar3,CONCAT71((int7)(uVar8 >> 8),cVar5) | 7,uVar6,1,param_6);
  }
  FUN_1800ec960((longlong)puVar1,uVar7);
  if (uVar2 == param_7) {
    FUN_1800ec960((longlong)puVar1,uVar6);
    uVar6 = param_7;
  }
  return uVar6;
}

