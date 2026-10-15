/*
 * FUN_1800a67f8 at 1800a67f8
 * uint __fastcall FUN_1800a67f8(longlong * param_1, uint * param_2, uint param_3, uint param_4, undefined8 param_5, int param_6, uint param_7, byte param_8)
 * Address ranges: 1800a67f8-1800a6bf1
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint FUN_1800a67f8(longlong *param_1,uint *param_2,uint param_3,uint param_4,undefined8 param_5,
                  int param_6,uint param_7,byte param_8)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  byte bVar5;
  uint *puVar6;
  byte bVar7;
  undefined8 uVar8;
  ulonglong uVar9;
  char cVar10;
  uint uVar11;
  
  if ((param_7 == 0) || ((*param_2 & 0x20000) == 0)) {
    bVar5 = 0;
  }
  else {
    bVar5 = 1;
  }
  uVar2 = FUN_1800a51e4(param_1,param_2,param_3,param_4,-(uint)bVar5 & param_7);
  uVar11 = uVar2;
  if (uVar2 == param_7) goto LAB_1800a6bce;
  bVar5 = (param_8 ^ 1) + 3;
  cVar10 = (param_8 ^ 1) << 3;
  bVar7 = -(*(char *)((longlong)param_2 + 6) != '\0') & 2U |
          *(char *)((longlong)param_2 + 5) != '\0';
  if (bVar7 == 0) {
    if (param_7 != 0) {
      uVar11 = param_7;
    }
    param_7 = uVar11;
    FUN_1800a6424(param_1,param_2,uVar2,0,param_6,param_7,param_8);
  }
  else {
    if ((bVar7 == 1) || (bVar7 == 2)) {
      uVar3 = FUN_1800ec8c0((longlong)(param_2 + 4),(uint)bVar5,'\x01');
      bVar5 = 0xaa;
      if (bVar7 == 1) {
        bVar5 = 0x55;
      }
      FUN_1800a6424(param_1,param_2,uVar2,bVar5,1,uVar3,param_8);
      uVar8 = 0;
      FUN_1800a6424(param_1,param_2,uVar2,0,1,uVar2,param_8);
      if ((param_7 == 0) || (param_6 != 1)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      uVar9 = CONCAT71((int7)((ulonglong)uVar8 >> 8),cVar10) | 7;
      uVar4 = uVar2;
      if (bVar1) {
        uVar4 = param_7;
      }
      FUN_1800a46a4(param_1,(longlong)param_2,uVar4,uVar9,uVar3);
      FUN_1800ec960((longlong)(param_2 + 4),uVar3);
      if (!bVar1) {
        uVar3 = uVar2;
        if (param_7 != 0) {
          uVar3 = param_7;
        }
        FUN_1800a4434(param_1,(longlong)param_2,uVar3,CONCAT71((int7)(uVar9 >> 8),cVar10) | 7,uVar2,
                      1,param_6);
      }
      if (uVar4 != param_7) goto LAB_1800a6bce;
      puVar6 = param_2 + 4;
    }
    else {
      if (bVar7 != 3) goto LAB_1800a6bce;
      uVar3 = FUN_1800ec8c0((longlong)(param_2 + 4),(uint)bVar5,'\x01');
      uVar4 = FUN_1800ec8c0((longlong)(param_2 + 4),(uint)bVar5,'\x01');
      FUN_1800a6424(param_1,param_2,uVar2,0x55,1,uVar3,param_8);
      uVar8 = 0;
      FUN_1800a6424(param_1,param_2,uVar2,0,1,uVar4,param_8);
      FUN_1800a46a4(param_1,(longlong)param_2,uVar3,
                    CONCAT71((int7)((ulonglong)uVar8 >> 8),cVar10) | 7,uVar3);
      FUN_1800a6424(param_1,param_2,uVar2,0xff,1,uVar4,param_8);
      uVar8 = 0;
      FUN_1800a6424(param_1,param_2,uVar2,0xaa,1,uVar2,param_8);
      uVar9 = CONCAT71((int7)((ulonglong)uVar8 >> 8),cVar10) | 7;
      FUN_1800a46a4(param_1,(longlong)param_2,uVar2,uVar9,uVar4);
      FUN_1800ec960((longlong)(param_2 + 4),uVar4);
      if ((param_7 == 0) || (param_6 != 1)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      uVar9 = CONCAT71((int7)(uVar9 >> 8),cVar10) | 7;
      uVar4 = uVar2;
      if (bVar1) {
        uVar4 = param_7;
      }
      FUN_1800a46a4(param_1,(longlong)param_2,uVar2,uVar9,uVar2);
      puVar6 = param_2 + 4;
      FUN_1800ec960((longlong)puVar6,uVar3);
      if (!bVar1) {
        uVar3 = uVar2;
        if (param_7 != 0) {
          uVar3 = param_7;
        }
        FUN_1800a4434(param_1,(longlong)param_2,uVar3,CONCAT71((int7)(uVar9 >> 8),cVar10) | 7,uVar2,
                      1,param_6);
        puVar6 = param_2 + 4;
      }
      if (uVar4 != param_7) goto LAB_1800a6bce;
    }
    FUN_1800ec960((longlong)puVar6,uVar2);
  }
  uVar11 = param_7;
  if (param_7 != uVar2) {
    FUN_1800ec960((longlong)(param_2 + 4),uVar2);
  }
LAB_1800a6bce:
  FUN_1800ec960((longlong)(param_2 + 4),param_4);
  return uVar11;
}

