/*
 * FUN_1800a5388 at 1800a5388
 * uint __fastcall FUN_1800a5388(longlong * param_1, uint * param_2, uint param_3, uint param_4, undefined8 param_5, int param_6, uint param_7, byte param_8)
 * Address ranges: 1800a5388-1800a5825
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint FUN_1800a5388(longlong *param_1,uint *param_2,uint param_3,uint param_4,undefined8 param_5,
                  int param_6,uint param_7,byte param_8)

{
  bool bVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  byte bVar8;
  uint uVar9;
  ulonglong uVar10;
  char cVar11;
  
  if ((param_7 == 0) || (param_6 != 1)) {
    bVar1 = false;
    bVar2 = false;
    if (param_7 != 0) goto LAB_1800a53d7;
  }
  else {
    bVar1 = true;
    bVar2 = true;
LAB_1800a53d7:
    if ((*param_2 & 0x20000) != 0) {
      bVar8 = 1;
      goto LAB_1800a53e8;
    }
  }
  bVar8 = 0;
LAB_1800a53e8:
  uVar3 = FUN_1800a51e4(param_1,param_2,param_3,param_4,-(uint)bVar8 & param_7);
  uVar4 = uVar3;
  if (uVar3 != param_7) {
    cVar11 = (param_8 ^ 1) << 3;
    bVar8 = -(*(char *)((longlong)param_2 + 6) != '\0') & 2U |
            *(char *)((longlong)param_2 + 5) != '\0';
    if (bVar8 != 0) {
      uVar4 = FUN_1800ec8c0((longlong)(param_2 + 4),4,'\x01');
    }
    param_2[(ulonglong)(byte)param_2[0x1a] + 0x22] = 5;
    if ((bVar8 != 0) || (uVar7 = param_7, !bVar1)) {
      uVar7 = uVar4;
    }
    uVar10 = (ulonglong)uVar7;
    FUN_1800edbe0(param_2 + 4,param_1,0xa7,uVar10);
    if (bVar8 == 0) {
      if (uVar7 == uVar4) {
        uVar5 = uVar4;
        if (param_7 != 0) {
          uVar5 = param_7;
        }
        FUN_1800a4434(param_1,(longlong)param_2,uVar5,CONCAT71((int7)(uVar10 >> 8),cVar11) | 7,uVar4
                      ,1,param_6);
      }
    }
    else if (((bVar8 == 1) || (bVar8 == 2)) || (bVar8 == 3)) {
      uVar5 = uVar3;
      if (bVar8 == 3) {
        uVar5 = FUN_1800ec8c0((longlong)(param_2 + 4),4,'\x01');
      }
      uVar10 = (ulonglong)uVar5;
      FUN_1800edbe0(param_2 + 4,param_1,0xa7,uVar10);
      if ((bVar8 != 3) || (uVar7 = param_7, !bVar2)) {
        uVar7 = uVar4;
      }
      uVar10 = CONCAT71((int7)(uVar10 >> 8),cVar11) | 7;
      FUN_1800a46a4(param_1,(longlong)param_2,uVar7,uVar10,uVar5);
      if (bVar8 == 3) {
        uVar6 = FUN_1800ec8c0((longlong)(param_2 + 4),4,'\x01');
        FUN_1800edbe0(param_2 + 4,param_1,0xa7,(ulonglong)uVar6);
        uVar10 = (ulonglong)uVar3;
        FUN_1800edbe0(param_2 + 4,param_1,0xa7,uVar10);
        uVar10 = CONCAT71((int7)(uVar10 >> 8),cVar11) | 7;
        FUN_1800a46a4(param_1,(longlong)param_2,uVar3,uVar10,uVar6);
        uVar10 = CONCAT71((int7)(uVar10 >> 8),cVar11) | 7;
        uVar7 = uVar4;
        if (bVar2) {
          uVar7 = param_7;
        }
        FUN_1800a46a4(param_1,(longlong)param_2,uVar7,uVar10,uVar3);
        if (uVar7 == uVar4) {
          uVar9 = uVar4;
          if (param_7 != 0) {
            uVar9 = param_7;
          }
          FUN_1800a4434(param_1,(longlong)param_2,uVar9,CONCAT71((int7)(uVar10 >> 8),cVar11) | 7,
                        uVar4,1,param_6);
        }
        FUN_1800ec960((longlong)(param_2 + 4),uVar6);
      }
      else if (uVar7 == uVar4) {
        uVar6 = uVar4;
        if (param_7 != 0) {
          uVar6 = param_7;
        }
        FUN_1800a4434(param_1,(longlong)param_2,uVar6,CONCAT71((int7)(uVar10 >> 8),cVar11) | 7,uVar4
                      ,1,param_6);
      }
      if (uVar5 != uVar3) {
        FUN_1800ec960((longlong)(param_2 + 4),uVar5);
      }
    }
    if (uVar4 != uVar3) {
      FUN_1800ec960((longlong)(param_2 + 4),uVar3);
    }
    if (uVar7 != uVar4) {
      FUN_1800ec960((longlong)(param_2 + 4),uVar4);
      uVar4 = param_7;
    }
  }
  FUN_1800ec960((longlong)(param_2 + 4),param_4);
  return uVar4;
}

