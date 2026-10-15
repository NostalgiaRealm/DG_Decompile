/*
 * FUN_1800a6424 at 1800a6424
 * undefined __fastcall FUN_1800a6424(longlong * param_1, uint * param_2, uint param_3, byte param_4, int param_5, uint param_6, byte param_7)
 * Address ranges: 1800a6424-1800a67f6
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800a6424(longlong *param_1,uint *param_2,uint param_3,byte param_4,int param_5,
                  uint param_6,byte param_7)

{
  uint *puVar1;
  byte bVar2;
  ulonglong uVar3;
  uint uVar4;
  byte bVar5;
  byte bVar6;
  ulonglong uVar7;
  
  puVar1 = param_2 + 4;
  bVar5 = (param_7 ^ 1) << 3;
  bVar6 = bVar5 | 7;
  if ((param_6 & 0x3f00) != 0x200) {
    param_3 = param_6;
  }
  if (param_5 == 2) {
    param_3 = param_6;
  }
  uVar3 = (ulonglong)param_3;
  uVar7 = uVar3;
  if (*puVar1 < 0x50) {
    bVar2 = param_4 & 3;
    uVar4 = 0;
    do {
      if (((bVar2 != uVar4) && (((byte)(1 << ((byte)uVar4 & 0x1f)) & bVar6) != 0)) &&
         (((*param_2 & 0x40000000) == 0 || (uVar4 != 3)))) {
        FUN_1800edbe0(puVar1,param_1,0x55,uVar3);
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < 4);
    if ((((uint)bVar6 & 1 << bVar2) != 0) && (((*param_2 & 0x40000000) == 0 || (bVar2 != 3)))) {
      FUN_1800edbe0(puVar1,param_1,0x55,uVar3);
    }
    FUN_1800edbe0(puVar1,param_1,1,uVar3);
  }
  else {
    FUN_1800edbe0(puVar1,param_1,0x8a,uVar3);
  }
  if ((*param_2 & 0x40004000) == 0x40000000) {
    FUN_1800edbe0(puVar1,param_1,0x36,uVar3);
    uVar7 = uVar3;
  }
  if (param_5 != 2) {
    FUN_1800a4434(param_1,(longlong)param_2,param_6,CONCAT71((int7)(uVar7 >> 8),bVar5) | 7,param_3,2
                  ,param_5);
  }
  return;
}

