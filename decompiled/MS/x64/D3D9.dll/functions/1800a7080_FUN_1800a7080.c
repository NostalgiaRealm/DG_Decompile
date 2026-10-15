/*
 * FUN_1800a7080 at 1800a7080
 * uint __fastcall FUN_1800a7080(longlong * param_1, uint * param_2, uint param_3, uint param_4, int param_5, uint param_6, byte param_7)
 * Address ranges: 1800a7080-1800a773f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint FUN_1800a7080(longlong *param_1,uint *param_2,uint param_3,uint param_4,int param_5,
                  uint param_6,byte param_7)

{
  uint *puVar1;
  bool bVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  undefined8 uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  undefined4 in_stack_ffffffffffffff88;
  uint uVar13;
  undefined4 uVar14;
  undefined3 uVar15;
  undefined4 in_stack_ffffffffffffff8c;
  uint uVar16;
  undefined4 in_stack_ffffffffffffff94;
  uint local_48;
  int local_3c;
  
  cVar3 = (param_7 ^ 1) << 3;
  local_48 = 0;
  local_3c = 2;
  uVar5 = 0;
  param_2[(ulonglong)*(byte *)((longlong)param_2 + 0x6d) + 0x22] = 5 - (((byte)*param_2 & 0xf) != 4)
  ;
  uVar10 = -(uint)(*(char *)((longlong)param_2 + 6) != '\0') & 2 |
           (uint)(*(char *)((longlong)param_2 + 5) != '\0');
  if ((param_6 == 0) || ((*param_2 & 0x800) != 0)) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  if (uVar10 == 0) {
    FUN_1800a4770((longlong)param_2,param_3,param_4);
    if ((!bVar2) || (uVar4 = param_6, param_5 != 2)) goto LAB_1800a7151;
  }
  else {
LAB_1800a7151:
    uVar4 = FUN_1800ec8c0((longlong)(param_2 + 4),4,'\x01');
  }
  puVar1 = param_2 + 4;
  uVar7 = 0;
  if (uVar4 != param_6) {
    uVar7 = (ulonglong)uVar4;
  }
  uVar13 = CONCAT31((int3)((uint)in_stack_ffffffffffffff88 >> 8),cVar3);
  uVar8 = (ulonglong)uVar4;
  uVar16 = param_3;
  FUN_1800a6bf4(param_1,param_2,0,uVar8);
  uVar11 = -(uint)(uVar10 != 0) & param_3;
  uVar12 = -(uint)(uVar10 != 0) & param_4;
  uVar6 = (uint)uVar7;
  if ((*param_2 & 0x800) != 0) {
    local_48 = FUN_1800ec8c0((longlong)puVar1,4,'\x01');
    uVar8 = (ulonglong)local_48;
    uVar13 = CONCAT31((int3)(uVar13 >> 8),1);
    FUN_1800a6da4(param_1,(longlong)param_2,uVar7,local_48,
                  CONCAT44(in_stack_ffffffffffffff8c,uVar13),
                  CONCAT44(in_stack_ffffffffffffff94,uVar16) & 0xffffffffffffff00,local_48);
  }
  if (*(char *)((longlong)param_2 + 5) != '\0') {
    if (((uVar10 == 1) && (uVar11 != 0)) && ((uVar11 & 0x3f00) == 0)) {
      FUN_1800ec960((longlong)puVar1,uVar11);
    }
    uVar5 = FUN_1800ec8c0((longlong)puVar1,4,'\x01');
    uVar14 = CONCAT31((int3)(uVar13 >> 8),cVar3);
    uVar4 = uVar11;
    FUN_1800a6bf4(param_1,param_2,1,(ulonglong)uVar5);
    if ((*param_2 & 0x800) != 0) {
      if (local_48 == 0) {
        local_48 = FUN_1800ec8c0((longlong)puVar1,4,'\x01');
      }
      FUN_1800a6da4(param_1,(longlong)param_2,(ulonglong)uVar5,local_48,
                    CONCAT44(in_stack_ffffffffffffff8c,CONCAT31((int3)((uint)uVar14 >> 8),2)),
                    CONCAT44(in_stack_ffffffffffffff94,CONCAT31((int3)(uVar4 >> 8),0x55)),0);
    }
    FUN_1800edbe0(puVar1,param_1,0x56,uVar7);
    uVar8 = (ulonglong)uVar5;
    FUN_1800edbe0(puVar1,param_1,0x56,uVar8);
    local_3c = 1;
    if (((uVar10 != 1) || (!bVar2)) || (uVar4 = param_6, param_5 != 1)) {
      uVar4 = uVar6;
    }
    uVar8 = CONCAT71((int7)(uVar8 >> 8),cVar3) | 7;
    uVar13 = uVar5;
    FUN_1800a46a4(param_1,(longlong)param_2,uVar4,uVar8,uVar5);
    if (((uVar10 == 1) && (uVar12 != 0)) && ((uVar12 & 0x3f00) == 0)) {
      FUN_1800ec960((longlong)puVar1,uVar12);
    }
  }
  if (*(char *)((longlong)param_2 + 6) == '\0') {
LAB_1800a750b:
    if (*(char *)((longlong)param_2 + 5) == '\0') goto LAB_1800a7697;
  }
  else {
    if (((uVar10 == 2) && (uVar11 != 0)) && ((uVar11 & 0x3f00) == 0)) {
      FUN_1800ec960((longlong)puVar1,uVar11);
    }
    if (uVar5 == 0) {
      uVar5 = FUN_1800ec8c0((longlong)puVar1,4,'\x01');
    }
    uVar8 = (ulonglong)uVar5;
    uVar13 = CONCAT31((int3)(uVar13 >> 8),cVar3);
    uVar10 = uVar11;
    FUN_1800a6bf4(param_1,param_2,2,uVar8);
    if ((*param_2 & 0x800) != 0) {
      if (local_48 == 0) {
        local_48 = FUN_1800ec8c0((longlong)puVar1,4,'\x01');
      }
      uVar8 = (ulonglong)local_48;
      uVar13 = CONCAT31((int3)(uVar13 >> 8),4);
      FUN_1800a6da4(param_1,(longlong)param_2,(ulonglong)uVar5,local_48,
                    CONCAT44(in_stack_ffffffffffffff8c,uVar13),
                    CONCAT44(in_stack_ffffffffffffff94,CONCAT31((int3)(uVar10 >> 8),0xaa)),0);
    }
    if (*(char *)((longlong)param_2 + 5) == '\0') {
      FUN_1800edbe0(puVar1,param_1,0x56,uVar7);
      uVar7 = (ulonglong)uVar5;
      FUN_1800edbe0(puVar1,param_1,0x56,uVar7);
      local_3c = 1;
      if ((!bVar2) || (uVar4 = param_6, param_5 != 1)) {
        uVar4 = uVar6;
      }
      uVar8 = CONCAT71((int7)(uVar7 >> 8),0xf);
      uVar13 = uVar5;
      FUN_1800a46a4(param_1,(longlong)param_2,uVar6,uVar8,uVar5);
      if ((uVar12 != 0) && ((uVar12 & 0x3f00) == 0)) {
        FUN_1800ec960((longlong)puVar1,uVar12);
      }
      goto LAB_1800a750b;
    }
  }
  if (*(char *)((longlong)param_2 + 6) != '\0') {
    if ((uVar11 != 0) && ((uVar11 & 0x3f00) == 0)) {
      FUN_1800ec960((longlong)puVar1,uVar11);
    }
    uVar10 = FUN_1800ec8c0((longlong)puVar1,4,'\x01');
    uVar15 = (undefined3)(uVar13 >> 8);
    FUN_1800a6bf4(param_1,param_2,3,(ulonglong)uVar10);
    if ((*param_2 & 0x800) != 0) {
      FUN_1800a6da4(param_1,(longlong)param_2,(ulonglong)uVar10,local_48,
                    CONCAT44(in_stack_ffffffffffffff8c,CONCAT31(uVar15,8)),
                    CONCAT44(in_stack_ffffffffffffff94,CONCAT31((int3)(uVar11 >> 8),0xff)),0);
    }
    FUN_1800edbe0(puVar1,param_1,0x56,(ulonglong)uVar5);
    uVar7 = (ulonglong)uVar10;
    FUN_1800edbe0(puVar1,param_1,0x56,uVar7);
    uVar9 = CONCAT71((int7)(uVar7 >> 8),0xf);
    local_3c = 1;
    FUN_1800a46a4(param_1,(longlong)param_2,uVar5,uVar9,uVar10);
    FUN_1800ec960((longlong)puVar1,uVar10);
    if ((!bVar2) || (uVar4 = param_6, param_5 != 1)) {
      uVar4 = uVar6;
    }
    uVar8 = CONCAT71((int7)((ulonglong)uVar9 >> 8),0xf);
    FUN_1800a46a4(param_1,(longlong)param_2,uVar6,uVar8,uVar5);
    if ((uVar12 != 0) && ((uVar12 & 0x3f00) == 0)) {
      FUN_1800ec960((longlong)puVar1,uVar12);
    }
  }
LAB_1800a7697:
  if ((*param_2 & 0x800) != 0) {
    uVar8 = 0;
    FUN_1800a4b10(param_1,param_2,local_48,0,uVar12,local_48);
  }
  if (uVar4 != param_6) {
    if (local_3c != param_5) {
      uVar4 = uVar6;
      if (param_6 != 0) {
        uVar4 = param_6;
      }
      FUN_1800a4434(param_1,(longlong)param_2,uVar4,CONCAT71((int7)(uVar8 >> 8),cVar3) | 7,uVar6,
                    local_3c,param_5);
    }
  }
  if (uVar6 != uVar4) {
    FUN_1800ec960((longlong)puVar1,uVar6);
  }
  FUN_1800ec960((longlong)puVar1,uVar5);
  FUN_1800ec960((longlong)puVar1,local_48);
  return uVar4;
}

