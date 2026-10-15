/*
 * FUN_18002c8e8 at 18002c8e8
 * undefined __fastcall FUN_18002c8e8(longlong param_1, uint param_2, uint * param_3, longlong * param_4, char param_5, char param_6, byte param_7)
 * Address ranges: 18002c8e8-18002d0b6
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18002c8e8(longlong param_1,uint param_2,uint *param_3,longlong *param_4,char param_5,
                  char param_6,byte param_7)

{
  int iVar1;
  bool bVar2;
  bool bVar3;
  byte bVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  longlong lVar10;
  
  uVar8 = (ulonglong)param_2;
  uVar5 = FUN_180056854((longlong)param_3,(uint)param_7 * 2 + 2,'\x01');
  param_3[0x1a] = uVar5;
  FUN_180057838(param_3,param_4,0xe,(ulonglong)uVar5);
  if (param_5 != '\0') {
    FUN_18002abec(uVar8,param_3,param_4);
  }
  lVar10 = uVar8 * 0x1a0;
  iVar1 = *(int *)(lVar10 + 0x144 + param_1);
  if ((*(int *)(lVar10 + 0x13c + param_1) == *(int *)(lVar10 + 0x140 + param_1)) || (param_7 == 0))
  {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  if ((*(float *)(lVar10 + 0x120 + param_1) == *(float *)(lVar10 + 0x124 + param_1)) ||
     (param_7 == 0)) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  if ((iVar1 == 0) || ((param_6 == '\0' && !bVar3 && (!bVar2)))) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  if (param_7 != 0 || bVar2) {
    uVar5 = FUN_180056854((longlong)param_3,1,'\x01');
    uVar9 = (ulonglong)uVar5;
  }
  else {
    uVar9 = 0;
  }
  param_3[0x1c] = (uint)uVar9;
  if (iVar1 == 0) {
    if (param_7 == 0) goto LAB_18002d07b;
    uVar5 = 0x36;
LAB_18002ca7f:
    FUN_180057838(param_3,param_4,uVar5,uVar9);
LAB_18002cfca:
    FUN_18002adcc(param_1,param_2,param_3,param_4);
  }
  else {
    if (bVar2) {
      if (bVar3) {
        uVar5 = FUN_180056854((longlong)param_3,1,'\x01');
      }
      else {
        uVar5 = 0;
      }
      param_3[0x19] = uVar5;
      if (*param_3 == 0x40) {
        uVar5 = FUN_180056854((longlong)param_3,1,'\x01');
        param_3[0x1b] = uVar5;
        if (bVar3) {
          FUN_180057838(param_3,param_4,0x1d,(ulonglong)param_3[0x19]);
        }
        FUN_180057838(param_3,param_4,0x34,(ulonglong)param_3[0x1b]);
      }
      else {
        FUN_18002aae0(uVar8,param_3,param_4);
        FUN_180057838(param_3,param_4,0,(ulonglong)param_3[0x1b]);
        if (bVar3) {
          FUN_180057838(param_3,param_4,0x1d,(ulonglong)param_3[0x19]);
        }
        FUN_180057838(param_3,param_4,0x34,(ulonglong)param_3[0x1b]);
      }
      FUN_180057838(param_3,param_4,0x33,(ulonglong)param_3[0x1b]);
      if ((param_7 != 0) && (param_3[0x19] != 0)) {
        FUN_180057838(param_3,param_4,0x37,(ulonglong)param_3[0x19]);
      }
      FUN_180057838(param_3,param_4,0x1c,(ulonglong)param_3[0x1c]);
      bVar4 = *(byte *)(lVar10 + 0x148 + param_1);
      uVar5 = *(uint *)(lVar10 + 0x148 + param_1);
      uVar9 = (ulonglong)uVar5;
      uVar6 = param_3[0x1b];
      if (param_6 == '\0') {
        FUN_1800568f4((longlong)param_3,uVar6);
      }
      else {
        param_3[uVar8 + 0x1d] = uVar6;
        FUN_180057838(param_3,param_4,0x1a,(ulonglong)uVar6);
        if ((bVar4 & 1) != 0) {
          uVar6 = FUN_180056854((longlong)param_3,1,'\x01');
          uVar7 = FUN_180056854((longlong)param_3,1,'\x01');
          FUN_180057838(param_3,param_4,0,(ulonglong)uVar6);
          FUN_180057838(param_3,param_4,1,(ulonglong)uVar7);
          FUN_180057838(param_3,param_4,0x37,(ulonglong)param_3[uVar8 + 0x1d]);
          FUN_1800568f4((longlong)param_3,uVar6);
          FUN_1800568f4((longlong)param_3,uVar7);
        }
        uVar9 = (ulonglong)uVar5;
      }
      param_3[0x1b] = 0;
      if (param_7 != 0) {
        bVar4 = (uVar9 & 2) != 0 | (bVar4 & 1) * '\x02';
        if ((bVar4 == 1) || (bVar4 == 2)) {
          FUN_180057838(param_3,param_4,0x1e,(ulonglong)param_3[0x1c]);
          if (bVar4 != 2) goto LAB_18002cf7a;
          FUN_180057838(param_3,param_4,1,(ulonglong)param_3[0x1c]);
        }
        else {
          if (bVar4 == 3) {
            FUN_180057838(param_3,param_4,0x3c,(ulonglong)param_3[0x1c]);
          }
LAB_18002cf7a:
          if (bVar4 == 0) goto LAB_18002cfca;
        }
        FUN_180057838(param_3,param_4,0x54,(ulonglong)param_3[0x1c]);
        goto LAB_18002cfca;
      }
    }
    else if (param_7 != 0) {
      uVar5 = 0x1c;
      goto LAB_18002ca7f;
    }
LAB_18002d07b:
    FUN_1800568f4((longlong)param_3,param_3[0x1a]);
    FUN_1800568f4((longlong)param_3,param_3[0x1c]);
    param_3[0x1a] = 0;
    param_3[0x1c] = 0;
  }
  return;
}

