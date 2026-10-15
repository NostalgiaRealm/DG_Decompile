/*
 * FUN_18003d638 at 18003d638
 * uint __fastcall FUN_18003d638(longlong param_1, uint * param_2, longlong * param_3, ulonglong param_4, char param_5)
 * Address ranges: 18003d638-18003e4fb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint FUN_18003d638(longlong param_1,uint *param_2,longlong *param_3,ulonglong param_4,char param_5)

{
  uint *puVar1;
  uint *puVar2;
  uint *puVar3;
  char cVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  ushort uVar8;
  ushort uVar9;
  ushort uVar10;
  uint uVar11;
  uint uVar12;
  undefined8 uVar13;
  ulonglong uVar14;
  ushort uVar15;
  uint local_54;
  
  uVar10 = (ushort)param_4;
  cVar4 = *(char *)(param_1 + 0x8c);
  bVar7 = false;
  bVar6 = false;
  uVar11 = 0;
  if (cVar4 == '\x01') {
    local_54 = FUN_180054248((longlong)param_2,1,'\x01');
    bVar7 = true;
    FUN_18005522c(param_2,param_3,0x38,(ulonglong)local_54);
LAB_18003d739:
    if (local_54 == 0) goto LAB_18003e140;
  }
  else {
    if (cVar4 == '\x02') {
      uVar14 = param_4;
      local_54 = FUN_180054248((longlong)param_2,1,'\0');
      FUN_18003cbd0(param_2,param_3,0x110101,uVar14,local_54);
      bVar6 = true;
      goto LAB_18003d739;
    }
    if (cVar4 != '\x03') {
      return 0;
    }
    local_54 = 0x190101;
  }
  bVar5 = bVar6;
  if (((*(uint *)(param_1 + 0x8c) & 0x300) == 0x200) && (bVar5 = false, (param_4 & 0xdf0) != 0)) {
    bVar5 = bVar6;
  }
  if (bVar5) {
    uVar11 = FUN_180054248((longlong)param_2,4,'\x01');
    uVar12 = FUN_180054248((longlong)param_2,2,'\x01');
    bVar7 = true;
    FUN_18005522c(param_2,param_3,0x34,(ulonglong)uVar12);
    FUN_18005522c(param_2,param_3,0x33,(ulonglong)uVar12);
    FUN_18005522c(param_2,param_3,0x1c,(ulonglong)uVar12);
    FUN_18005522c(param_2,param_3,0x1e,(ulonglong)uVar12);
    FUN_18005522c(param_2,param_3,0xa7,(ulonglong)uVar12);
    FUN_18005522c(param_2,param_3,0x1e,(ulonglong)uVar11);
    FUN_18005522c(param_2,param_3,0xa7,(ulonglong)uVar11);
    FUN_18005522c(param_2,param_3,0xa7,(ulonglong)uVar11);
    FUN_18005522c(param_2,param_3,0xa7,(ulonglong)uVar11);
    FUN_18005522c(param_2,param_3,0xa7,(ulonglong)uVar11);
    FUN_18005522c(param_2,param_3,0x1d,(ulonglong)uVar11);
    FUN_18005522c(param_2,param_3,1,(ulonglong)uVar11);
    FUN_18005522c(param_2,param_3,0x1e,(ulonglong)uVar12);
    FUN_18005522c(param_2,param_3,0x1e,(ulonglong)uVar12);
    FUN_18005522c(param_2,param_3,0x1e,(ulonglong)uVar12);
    FUN_18005522c(param_2,param_3,0x1e,(ulonglong)uVar12);
    FUN_18005522c(param_2,param_3,0xa7,(ulonglong)uVar11);
    FUN_18005522c(param_2,param_3,0x1e,(ulonglong)uVar11);
    FUN_18005522c(param_2,param_3,0xa7,(ulonglong)uVar12);
    FUN_18005522c(param_2,param_3,0,(ulonglong)uVar12);
    FUN_18005522c(param_2,param_3,0xe,(ulonglong)uVar12);
    FUN_18005522c(param_2,param_3,0xa7,(ulonglong)uVar11);
    FUN_18005522c(param_2,param_3,0xa7,(ulonglong)uVar12);
    FUN_18005522c(param_2,param_3,0,(ulonglong)uVar11);
    FUN_1800542e8((longlong)param_2,uVar12);
    FUN_1800542e8((longlong)param_2,uVar11);
    local_54 = FUN_180054248((longlong)param_2,1,'\x01');
    FUN_18005522c(param_2,param_3,0x32,(ulonglong)local_54);
    param_2[3] = param_2[3] | 0x700;
  }
  uVar11 = *(uint *)(param_1 + 0x8c) & 0x300;
  if (uVar11 == 0x100) {
LAB_18003e41e:
    if (param_5 == '\0') {
      uVar11 = 0x70;
    }
    else {
      uVar10 = FUN_18003aa70((longlong)param_2,0,0,0,0,7,'\0');
      uVar11 = (uint)uVar10;
    }
    FUN_18003a434((longlong)param_2,(ushort)uVar11,7);
    uVar12 = FUN_180054884(param_2,param_2 + 0x58,(ulonglong)local_54,0,0,0);
    param_2[0x57] = uVar12;
    uVar13 = FUN_18003abbc((longlong)param_2,uVar11,0xa4);
    uVar12 = FUN_180054318(param_2,param_2 + 0x60,(ulonglong)param_2[0x14],0x80,(byte)uVar13,0,0);
    param_2[0x5f] = uVar12;
    uVar12 = (param_2[0x57] + param_2[0x4f] + uVar12) * 0x1000000 + 0x1000000 & 0x7f000000 | 0x2038;
  }
  else {
    if (uVar11 != 0x200) {
      if ((param_4 & 0xdf0) != 0) {
        if (param_5 == '\0') {
          uVar11 = 0x70;
        }
        else {
          uVar8 = FUN_18003aa70((longlong)param_2,0,0,0,0,7,'\0');
          uVar11 = (uint)uVar8;
        }
        uVar15 = (ushort)uVar11;
        uVar9 = FUN_18003abf4((int *)param_2,uVar10,uVar15,0,0,0,7,param_3);
        uVar8 = uVar9;
        if (((uVar9 >> 0xd & 1) != 0) || ((uVar9 & 0xf00) == 0x100)) {
          if (((uVar9 & 0xf0) != 0xf0) && ((uVar9 & 0xf0) != 0x80)) {
            uVar8 = FUN_18003aa70((longlong)param_2,0,0,0,0,7,'\0');
          }
          FUN_18003ae60((int *)param_2,uVar9,uVar8,0,7,param_3,'\x01');
        }
        uVar9 = FUN_18003aa70((longlong)param_2,uVar8,0,0,0,7,'\0');
        FUN_18003a434((longlong)param_2,uVar9,7);
        uVar13 = FUN_18003abbc((longlong)param_2,(uint)uVar9,0xa4);
        FUN_18003a558((int *)param_2,0,uVar8,(byte)uVar13,1,'\0');
        uVar13 = FUN_18003abbc((longlong)param_2,(uint)uVar9,0xa4);
        uVar12 = FUN_180054318(param_2,param_2 + 0x60,(ulonglong)param_2[0x14],0x80,(byte)uVar13,0,0
                              );
        puVar1 = param_2 + 0x57;
        puVar2 = param_2 + 0x4f;
        puVar3 = param_2 + 0x5f;
        *puVar3 = uVar12;
        FUN_18005538c(param_3,(*puVar1 + *puVar2 + uVar12) * 0x1000000 + 0x1000000 & 0x7f000000,
                      puVar2,puVar1,puVar3,(uint *)0x0);
        FUN_18003a434((longlong)param_2,uVar15,7);
        uVar12 = FUN_180054884(param_2,param_2 + 0x58,(ulonglong)local_54,0,0,0);
        *puVar1 = uVar12;
        uVar13 = FUN_18003abbc((longlong)param_2,uVar11,0xa4);
        FUN_18003a558((int *)param_2,1,uVar9,(byte)uVar13,0,'\0');
        uVar13 = FUN_18003abbc((longlong)param_2,uVar11,0xa4);
        FUN_18003a558((int *)param_2,2,uVar8,(byte)uVar13,0,'\0');
        FUN_18005538c(param_3,(param_2[0x67] + *puVar3 + *puVar1 + *puVar2) * 0x1000000 + 0x1000000
                              & 0x7f000000 | 0x2032,puVar2,puVar1,puVar3,param_2 + 0x67);
        FUN_18003ab80((longlong)param_2,uVar9);
        if ((uVar8 != uVar10) && (uVar8 != uVar15)) {
          FUN_18003ab80((longlong)param_2,uVar8);
        }
        goto LAB_18003e140;
      }
      goto LAB_18003e41e;
    }
    if ((param_4 & 0xdf0) == 0) {
      uVar11 = 0x70;
      FUN_18003ae60((int *)param_2,0,0x70,0,7,param_3,'\0');
      goto LAB_18003e140;
    }
    if ((uVar10 & 0xff0) != 0x100) {
      if (param_5 == '\0') {
        uVar11 = 0x70;
      }
      else {
        uVar8 = FUN_18003aa70((longlong)param_2,0,0,0,0,7,'\0');
        uVar11 = (uint)uVar8;
      }
      uVar15 = (ushort)uVar11;
      uVar9 = FUN_18003abf4((int *)param_2,uVar10,uVar15,0,0,0,7,param_3);
      uVar8 = uVar9;
      if (((uVar9 >> 0xd & 1) != 0) || ((uVar9 & 0xf00) == 0x100)) {
        if (((uVar9 & 0xf0) != 0xf0) && ((uVar9 & 0xf0) != 0x80)) {
          uVar8 = FUN_18003aa70((longlong)param_2,0,0,0,0,7,'\0');
        }
        FUN_18003ae60((int *)param_2,uVar9,uVar8,0,7,param_3,'\x01');
      }
      FUN_18003a434((longlong)param_2,uVar15,7);
      puVar1 = param_2 + 0x57;
      uVar12 = FUN_180054884(param_2,param_2 + 0x58,(ulonglong)(local_54 | 0x80000000),0,0,0);
      *puVar1 = uVar12;
      uVar13 = FUN_18003abbc((longlong)param_2,uVar11,0xa4);
      FUN_18003a558((int *)param_2,1,uVar8,(byte)uVar13,0,'\0');
      puVar2 = param_2 + 0x5f;
      FUN_18005538c(param_3,(*puVar1 + *puVar2 * 2 + param_2[0x4f]) * 0x1000000 + 0x1000000 &
                            0x7f000000 | 0x2032,param_2 + 0x4f,puVar1,puVar2,puVar2);
      if ((uVar8 != uVar10) && (uVar8 != uVar15)) {
        FUN_18003ab80((longlong)param_2,uVar8);
      }
      goto LAB_18003e140;
    }
    if (param_5 == '\0') {
      uVar11 = 0x70;
    }
    else {
      uVar10 = FUN_18003aa70((longlong)param_2,0,0,0,0,7,'\0');
      uVar11 = (uint)uVar10;
    }
    FUN_18003a434((longlong)param_2,(ushort)uVar11,7);
    uVar12 = FUN_180054884(param_2,param_2 + 0x58,(ulonglong)(local_54 | 0x80000000),0,0,0);
    param_2[0x57] = uVar12;
    param_2[0x5f] = 5;
    param_2[0x60] = 0x4006;
    param_2[0x61] = 0x3f800000;
    param_2[0x62] = 0x3f800000;
    param_2[99] = 0x3f800000;
    param_2[100] = 0x3f800000;
    uVar12 = (param_2[0x4f] + uVar12) * 0x1000000 + 0xb000000 & 0x7f000000 | 0x2000;
  }
  FUN_18005538c(param_3,uVar12,param_2 + 0x4f,param_2 + 0x57,param_2 + 0x5f,(uint *)0x0);
LAB_18003e140:
  if (bVar7) {
    FUN_1800542e8((longlong)param_2,local_54);
  }
  return uVar11;
}

