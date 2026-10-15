/*
 * FUN_1800a5b78 at 1800a5b78
 * uint __fastcall FUN_1800a5b78(longlong * param_1, uint * param_2, uint param_3, uint param_4, undefined8 param_5, int param_6, uint param_7, byte param_8)
 * Address ranges: 1800a5b78-1800a6421
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint FUN_1800a5b78(longlong *param_1,uint *param_2,uint param_3,uint param_4,undefined8 param_5,
                  int param_6,uint param_7,byte param_8)

{
  uint *puVar1;
  bool bVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  byte bVar8;
  uint uVar9;
  ulonglong uVar10;
  undefined4 uVar11;
  undefined4 in_stack_ffffffffffffff4c;
  undefined4 in_stack_ffffffffffffff64;
  
  bVar8 = 1;
  if ((((param_7 == 0) || (bVar2 = true, param_6 != 1)) && (bVar2 = false, param_7 == 0)) ||
     ((*param_2 & 0x20000) == 0)) {
    bVar8 = 0;
  }
  uVar4 = FUN_1800a51e4(param_1,param_2,param_3,param_4,-(uint)bVar8 & param_7);
  uVar6 = uVar4;
  if (uVar4 == param_7) goto LAB_1800a63f9;
  cVar3 = (param_8 ^ 1) << 3;
  bVar8 = -(*(char *)((longlong)param_2 + 6) != '\0') & 2U |
          *(char *)((longlong)param_2 + 5) != '\0';
  param_2[(ulonglong)(byte)param_2[0x1a] + 0x22] = 5;
  param_2[(ulonglong)*(byte *)((longlong)param_2 + 0x69) + 0x22] = 5;
  if (bVar8 == 0) {
    puVar1 = param_2 + 4;
    uVar6 = FUN_1800ec8c0((longlong)puVar1,4,'\x01');
    uVar5 = uVar6;
    if (bVar2) {
      uVar5 = param_7;
    }
    if (*puVar1 < 0x50) {
      FUN_1800edbe0(puVar1,param_1,0x55,(ulonglong)uVar4);
      FUN_1800edbe0(puVar1,param_1,1,(ulonglong)uVar4);
    }
    else {
      FUN_1800edbe0(puVar1,param_1,0x8a,(ulonglong)uVar4);
    }
    FUN_1800edbe0(param_2 + 4,param_1,0xa7,(ulonglong)uVar6);
    FUN_1800edbe0(param_2 + 4,param_1,0xa7,(ulonglong)uVar4);
    uVar10 = (ulonglong)uVar5;
    FUN_1800edbe0(param_2 + 4,param_1,0,uVar10);
    if (uVar5 == param_7) {
LAB_1800a63dc:
      FUN_1800ec960((longlong)(param_2 + 4),uVar6);
      uVar6 = param_7;
    }
    else {
      uVar5 = uVar6;
      if (param_7 != 0) {
        uVar5 = param_7;
      }
      FUN_1800a4434(param_1,(longlong)param_2,uVar5,CONCAT71((int7)(uVar10 >> 8),cVar3) | 7,uVar6,1,
                    param_6);
    }
  }
  else if ((bVar8 == 1) || (bVar8 == 2)) {
    puVar1 = param_2 + 4;
    if (*puVar1 < 0x50) {
      FUN_1800edbe0(puVar1,param_1,0x55,(ulonglong)uVar4);
      uVar11 = 5;
      if (bVar8 == 1) {
        uVar11 = 3;
      }
      uVar6 = param_2[0x19];
      FUN_1800edbe0(puVar1,param_1,1,(ulonglong)uVar4);
    }
    else {
      uVar6 = 0;
      uVar11 = 0xf;
      FUN_1800edbe0(puVar1,param_1,0x8a,(ulonglong)uVar4);
    }
    uVar6 = FUN_1800a5828(param_1,(longlong)param_2,uVar4,(ulonglong)param_4,
                          CONCAT44(in_stack_ffffffffffffff4c,uVar11),param_6,param_7,
                          CONCAT44(in_stack_ffffffffffffff64,CONCAT31((int3)(uVar6 >> 8),bVar8)),
                          param_8);
    FUN_1800ec960((longlong)(param_2 + 4),uVar4);
  }
  else {
    uVar6 = 0;
    if (bVar8 == 3) {
      puVar1 = param_2 + 4;
      uVar5 = FUN_1800ec8c0((longlong)puVar1,4,'\x01');
      if (*puVar1 < 0x50) {
        FUN_1800edbe0(puVar1,param_1,0x55,(ulonglong)uVar5);
        uVar6 = param_2[0x19];
        uVar11 = 3;
        FUN_1800edbe0(puVar1,param_1,1,(ulonglong)uVar5);
      }
      else {
        uVar6 = 0;
        uVar11 = 0xf;
        FUN_1800edbe0(puVar1,param_1,0x8a,(ulonglong)uVar5);
      }
      uVar6 = FUN_1800a5828(param_1,(longlong)param_2,uVar5,(ulonglong)param_4,
                            CONCAT44(in_stack_ffffffffffffff4c,uVar11),3,0,
                            CONCAT44(in_stack_ffffffffffffff64,CONCAT31((int3)(uVar6 >> 8),1)),
                            param_8);
      FUN_1800ec960((longlong)puVar1,uVar5);
      if (*puVar1 < 0x50) {
        FUN_1800edbe0(puVar1,param_1,1,(ulonglong)uVar4);
        uVar5 = param_2[0x18];
        uVar11 = 0xc;
        FUN_1800edbe0(puVar1,param_1,0x55,(ulonglong)uVar4);
      }
      else {
        uVar5 = 0;
        uVar11 = 0xf;
        FUN_1800edbe0(puVar1,param_1,0x8a,(ulonglong)uVar4);
      }
      uVar10 = (ulonglong)param_4;
      uVar5 = FUN_1800a5828(param_1,(longlong)param_2,uVar4,uVar10,
                            CONCAT44(in_stack_ffffffffffffff4c,uVar11),3,0,
                            CONCAT44(in_stack_ffffffffffffff64,CONCAT31((int3)(uVar5 >> 8),1)),
                            param_8);
      if ((param_7 == 0) || (param_6 != 1)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      uVar7 = uVar6;
      if (bVar2) {
        uVar7 = param_7;
      }
      uVar10 = CONCAT71((int7)(uVar10 >> 8),cVar3) | 7;
      FUN_1800a46a4(param_1,(longlong)param_2,uVar7,uVar10,uVar5);
      if (uVar7 == uVar6) {
        uVar9 = uVar6;
        if (param_7 != 0) {
          uVar9 = param_7;
        }
        FUN_1800a4434(param_1,(longlong)param_2,uVar9,CONCAT71((int7)(uVar10 >> 8),cVar3) | 7,uVar6,
                      1,param_6);
      }
      FUN_1800ec960((longlong)puVar1,uVar5);
      if (uVar7 == param_7) goto LAB_1800a63dc;
    }
  }
  FUN_1800ec960((longlong)(param_2 + 4),uVar4);
LAB_1800a63f9:
  FUN_1800ec960((longlong)(param_2 + 4),param_4);
  return uVar6;
}

