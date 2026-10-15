/*
 * FUN_1800a7834 at 1800a7834
 * uint __fastcall FUN_1800a7834(longlong * param_1, uint * param_2, uint param_3, uint param_4, int param_5, uint param_6, char param_7)
 * Address ranges: 1800a7834-1800a8135
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint FUN_1800a7834(longlong *param_1,uint *param_2,uint param_3,uint param_4,int param_5,
                  uint param_6,char param_7)

{
  uint *puVar1;
  uint uVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  undefined8 uVar11;
  ulonglong uVar12;
  uint uVar13;
  ulonglong uVar14;
  char cVar15;
  uint uVar16;
  uint local_58;
  undefined1 local_4c;
  
  cVar3 = '\0';
  if ((param_7 == '\0') || ((*param_2 & 0x400) != 0)) {
    local_4c = 0xf;
  }
  else {
    local_4c = 7;
  }
  param_2[(ulonglong)*(byte *)((longlong)param_2 + 0x6d) + 0x22] = 5;
  if ((*param_2 & 0x400) != 0) {
    param_2[(ulonglong)*(byte *)((longlong)param_2 + 0x6e) + 0x22] = 5;
  }
  if ((*(char *)((longlong)param_2 + 6) != '\0') || (uVar4 = 0, (char)param_2[2] != '\0')) {
    uVar4 = 2;
  }
  if ((*(char *)((longlong)param_2 + 5) != '\0') ||
     (uVar16 = 0, *(char *)((longlong)param_2 + 7) != '\0')) {
    uVar16 = 1;
  }
  uVar16 = uVar16 | uVar4;
  if ((param_6 == 0) || (cVar15 = '\x01', (*param_2 & 0x400) != 0)) {
    cVar15 = cVar3;
  }
  if ((uVar16 == 0) && ((*param_2 & 0x400) == 0)) {
    cVar3 = FUN_1800a4770((longlong)param_2,param_3,param_4);
LAB_1800a7934:
    if ((cVar15 == '\0') || (uVar4 = param_6, param_5 != 1)) goto LAB_1800a7948;
  }
  else {
    if (uVar16 == 0) goto LAB_1800a7934;
LAB_1800a7948:
    uVar4 = FUN_1800ec8c0((longlong)(param_2 + 4),4,'\x01');
  }
  puVar1 = param_2 + 4;
  uVar10 = (ulonglong)uVar4;
  uVar2 = 0;
  if (uVar4 != param_6) {
    uVar2 = uVar4;
  }
  FUN_1800edbe0(puVar1,param_1,0x2d,uVar10);
  uVar9 = 0;
  uVar8 = uVar9;
  if (cVar3 == '\0') {
    uVar9 = (ulonglong)param_4;
    uVar8 = (ulonglong)param_3;
  }
  if ((*param_2 & 0x400) == 0) {
    local_58 = 0;
  }
  else {
    if (uVar16 == 0) {
      FUN_1800a4770((longlong)param_2,(uint)uVar8,(uint)uVar9);
      uVar9 = 0;
      uVar8 = 0;
    }
    local_58 = FUN_1800ec8c0((longlong)puVar1,4,'\x01');
    uVar5 = FUN_1800ec8c0((longlong)puVar1,4,'\0');
    FUN_1800edbe0(puVar1,param_1,0x2d,(ulonglong)uVar5);
    uVar10 = (ulonglong)uVar5;
    FUN_1800a7740(param_1,param_2,(ulonglong)uVar2,uVar10,local_58);
  }
  uVar12 = 0;
  if ((*(char *)((longlong)param_2 + 5) != '\0') ||
     (uVar14 = uVar12, *(char *)((longlong)param_2 + 7) != '\0')) {
    if ((uVar16 == 1) && ((*param_2 & 0x400) == 0)) {
      if (((uint)uVar8 != 0) && ((uVar8 & 0x3f00) == 0)) {
        FUN_1800ec960((longlong)puVar1,(uint)uVar8);
      }
      uVar8 = uVar12 & 0xffffffff;
    }
    uVar5 = FUN_1800ec8c0((longlong)puVar1,4,'\x01');
    uVar14 = (ulonglong)uVar5;
    uVar10 = 0x201;
    FUN_1800edbe0(puVar1,param_1,0x8000002d,0x201);
    if ((*param_2 & 0x400) != 0) {
      if (uVar16 == 1) {
        FUN_1800a4770((longlong)param_2,(uint)uVar8,(uint)uVar9);
        uVar9 = 0;
        uVar8 = 0;
      }
      uVar6 = FUN_1800ec8c0((longlong)puVar1,4,'\0');
      FUN_1800edbe0(puVar1,param_1,0x8000002d,0x201);
      uVar10 = (ulonglong)uVar6;
      FUN_1800a7740(param_1,param_2,(ulonglong)uVar5,uVar10,local_58);
    }
    if (*(char *)((longlong)param_2 + 5) != '\0') {
      uVar4 = uVar2;
      if (((uVar16 == 1) && (cVar15 != '\0')) && (param_5 == 1)) {
        uVar4 = param_6;
      }
      uVar10 = CONCAT71((int7)(uVar10 >> 8),local_4c);
      FUN_1800a46a4(param_1,(longlong)param_2,uVar4,uVar10,uVar5);
    }
    uVar12 = 0;
    if ((uVar16 == 1) && ((*param_2 & 0x400) == 0)) {
      if (((uint)uVar9 != 0) && ((uVar9 & 0x3f00) == 0)) {
        FUN_1800ec960((longlong)puVar1,(uint)uVar9);
      }
      uVar9 = uVar12 & 0xffffffff;
    }
  }
  uVar5 = (uint)uVar12;
  if ((*(char *)((longlong)param_2 + 6) != (char)uVar12) || ((char)param_2[2] != (char)uVar12)) {
    if ((uVar16 == 2) && ((*param_2 & 0x400) == 0)) {
      if (((uint)uVar8 != 0) && ((uVar8 & 0x3f00) == 0)) {
        FUN_1800ec960((longlong)puVar1,(uint)uVar8);
      }
      uVar8 = uVar12 & 0xffffffff;
    }
    if ((int)uVar14 == 0) {
      uVar5 = FUN_1800ec8c0((longlong)puVar1,4,'\x01');
      uVar14 = (ulonglong)uVar5;
    }
    uVar10 = 0x2001;
    FUN_1800edbe0(puVar1,param_1,0x8000002d,0x2001);
    uVar6 = (uint)uVar9;
    if ((*param_2 & 0x400) != 0) {
      if (uVar16 == 2) {
        FUN_1800a4770((longlong)param_2,(uint)uVar8,uVar6);
      }
      uVar5 = FUN_1800ec8c0((longlong)puVar1,4,'\0');
      FUN_1800edbe0(puVar1,param_1,0x8000002d,0x2001);
      uVar10 = (ulonglong)uVar5;
      FUN_1800a7740(param_1,param_2,uVar14,uVar10,local_58);
    }
    if ((*(char *)((longlong)param_2 + 5) == '\0') && (*(char *)((longlong)param_2 + 6) != '\0')) {
      uVar4 = uVar2;
      if ((cVar15 != '\0') && (param_5 == 1)) {
        uVar4 = param_6;
      }
      uVar10 = CONCAT71((int7)(uVar10 >> 8),local_4c);
      FUN_1800a46a4(param_1,(longlong)param_2,uVar2,uVar10,(uint)uVar14);
    }
    uVar12 = 0;
    uVar5 = 0;
    if ((uVar16 == 2) && ((*param_2 & 0x400) == 0)) {
      if ((uVar6 != 0) && ((uVar9 & 0x3f00) == 0)) {
        FUN_1800ec960((longlong)puVar1,uVar6);
      }
      uVar5 = (uint)uVar12;
      uVar9 = uVar12 & 0xffffffff;
    }
  }
  uVar6 = (uint)uVar9;
  uVar16 = (uint)uVar8;
  cVar3 = (char)uVar5;
  uVar13 = (uint)uVar14;
  if (((*(char *)((longlong)param_2 + 5) == cVar3) || (*(char *)((longlong)param_2 + 6) == cVar3))
     && ((uVar7 = uVar6, *(char *)((longlong)param_2 + 7) == cVar3 || ((char)param_2[2] == cVar3))))
  {
LAB_1800a801d:
    uVar6 = uVar7;
    if ((*param_2 & 0x400) == 0) goto LAB_1800a805a;
  }
  else {
    uVar7 = uVar16;
    if ((((*param_2 & 0x400) == 0) && (uVar7 = uVar5, uVar16 != 0)) && ((uVar8 & 0x3f00) == 0)) {
      FUN_1800ec960((longlong)puVar1,uVar16);
    }
    uVar16 = FUN_1800ec8c0((longlong)puVar1,4,'\x01');
    uVar10 = 0x2201;
    FUN_1800edbe0(puVar1,param_1,0x8000002d,0x2201);
    if ((*param_2 & 0x400) != 0) {
      if ((uVar7 != 0) && ((uVar7 & 0x3f00) == 0)) {
        FUN_1800ec960((longlong)puVar1,uVar7);
      }
      uVar5 = FUN_1800ec8c0((longlong)puVar1,4,'\0');
      FUN_1800edbe0(puVar1,param_1,0x8000002d,0x2201);
      uVar10 = (ulonglong)uVar5;
      FUN_1800a7740(param_1,param_2,uVar14,uVar10,local_58);
    }
    FUN_1800ec960((longlong)puVar1,uVar16);
    if ((*(char *)((longlong)param_2 + 5) != '\0') && (*(char *)((longlong)param_2 + 6) != '\0')) {
      uVar11 = CONCAT71((int7)(uVar10 >> 8),0xf);
      FUN_1800a46a4(param_1,(longlong)param_2,uVar13,uVar11,uVar16);
      uVar4 = uVar2;
      if ((cVar15 != '\0') && (param_5 == 1)) {
        uVar4 = param_6;
      }
      uVar10 = CONCAT71((int7)((ulonglong)uVar11 >> 8),0xf);
      FUN_1800a46a4(param_1,(longlong)param_2,uVar2,uVar10,uVar13);
    }
    uVar16 = 0;
    if ((*param_2 & 0x400) == 0) {
      uVar7 = 0;
      if ((uVar6 != 0) && ((uVar9 & 0x3f00) == 0)) {
        FUN_1800ec960((longlong)(param_2 + 4),uVar6);
        uVar7 = uVar16;
      }
      goto LAB_1800a801d;
    }
  }
  uVar10 = (ulonglong)local_58;
  FUN_1800a4824(param_1,param_2,uVar6,local_58);
  if ((uVar6 != 0) && ((uVar6 & 0x3f00) == 0)) {
    FUN_1800ec960((longlong)(param_2 + 4),uVar6);
  }
LAB_1800a805a:
  if (uVar4 != param_6) {
    if (param_5 == 1) {
      if (param_6 != 0) {
        FUN_1800edbe0(param_2 + 4,param_1,0x36,(ulonglong)param_6);
      }
    }
    else {
      uVar4 = uVar2;
      if (param_6 != 0) {
        uVar4 = param_6;
      }
      FUN_1800a4434(param_1,(longlong)param_2,uVar4,CONCAT71((int7)(uVar10 >> 8),local_4c),uVar2,1,
                    param_5);
    }
  }
  if (uVar2 != uVar4) {
    FUN_1800ec960((longlong)(param_2 + 4),uVar2);
  }
  FUN_1800ec960((longlong)(param_2 + 4),uVar13);
  FUN_1800ec960((longlong)(param_2 + 4),local_58);
  return uVar4;
}

