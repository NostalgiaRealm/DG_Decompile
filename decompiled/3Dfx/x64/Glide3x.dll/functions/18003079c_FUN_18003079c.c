/*
 * FUN_18003079c at 18003079c
 * uint __fastcall FUN_18003079c(longlong param_1, uint * param_2, longlong * param_3, ulonglong param_4, char param_5)
 * Address ranges: 18003079c-180031632
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint FUN_18003079c(longlong param_1,uint *param_2,longlong *param_3,ulonglong param_4,char param_5)

{
  uint *puVar1;
  uint *puVar2;
  uint *puVar3;
  char cVar4;
  bool bVar5;
  bool bVar6;
  ushort uVar7;
  ushort uVar8;
  ushort uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  undefined8 uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  ushort uVar16;
  uint unaff_R15D;
  uint local_58;
  
  uVar9 = (ushort)param_4;
  local_58 = 0;
  cVar4 = *(char *)(param_1 + 0x8c);
  bVar5 = false;
  uVar15 = param_4;
  if (cVar4 == '\x01') {
    local_58 = FUN_180056854((longlong)param_2,1,'\0');
    uVar13 = 0x150101;
LAB_18003082e:
    uVar14 = (ulonglong)local_58;
    FUN_18002f8c0(param_2,param_3,uVar13,uVar15,local_58);
    bVar6 = true;
    if (local_58 == 0) {
      return unaff_R15D;
    }
  }
  else {
    if (cVar4 == '\x02') {
      local_58 = FUN_180056854((longlong)param_2,1,'\0');
      uVar13 = 0x110101;
      goto LAB_18003082e;
    }
    if (cVar4 != '\x03') goto LAB_18003126b;
    uVar14 = 0x190101;
    bVar6 = false;
    local_58 = 0x190101;
  }
  bVar5 = bVar6;
  if (((*(uint *)(param_1 + 0x8c) & 0x300) == 0x200) && (bVar5 = false, (param_4 & 0xdf0) != 0)) {
    bVar5 = bVar6;
  }
  if (bVar5) {
    uVar10 = FUN_180056854((longlong)param_2,4,'\x01');
    uVar11 = FUN_180056854((longlong)param_2,2,'\x01');
    FUN_180057838(param_2,param_3,0x34,(ulonglong)uVar11);
    FUN_180057838(param_2,param_3,0x33,(ulonglong)uVar11);
    FUN_180057838(param_2,param_3,0x1c,(ulonglong)uVar11);
    FUN_180057838(param_2,param_3,0x1e,(ulonglong)uVar11);
    FUN_180057838(param_2,param_3,0xa7,(ulonglong)uVar11);
    FUN_180057838(param_2,param_3,0x1e,(ulonglong)uVar10);
    FUN_180057838(param_2,param_3,0xa7,(ulonglong)uVar10);
    FUN_180057838(param_2,param_3,0xa7,(ulonglong)uVar10);
    FUN_180057838(param_2,param_3,0xa7,(ulonglong)uVar10);
    FUN_180057838(param_2,param_3,0xa7,(ulonglong)uVar10);
    FUN_180057838(param_2,param_3,0x1d,(ulonglong)uVar10);
    FUN_180057838(param_2,param_3,1,(ulonglong)uVar10);
    FUN_180057838(param_2,param_3,0x1e,(ulonglong)uVar11);
    FUN_180057838(param_2,param_3,0x1e,(ulonglong)uVar11);
    FUN_180057838(param_2,param_3,0x1e,(ulonglong)uVar11);
    FUN_180057838(param_2,param_3,0x1e,(ulonglong)uVar11);
    FUN_180057838(param_2,param_3,0xa7,(ulonglong)uVar10);
    FUN_180057838(param_2,param_3,0x1e,(ulonglong)uVar10);
    FUN_180057838(param_2,param_3,0xa7,(ulonglong)uVar11);
    FUN_180057838(param_2,param_3,0,(ulonglong)uVar11);
    FUN_180057838(param_2,param_3,0xe,(ulonglong)uVar11);
    FUN_180057838(param_2,param_3,0xa7,(ulonglong)uVar10);
    FUN_180057838(param_2,param_3,0xa7,(ulonglong)uVar11);
    FUN_180057838(param_2,param_3,0,(ulonglong)uVar10);
    FUN_1800568f4((longlong)param_2,uVar11);
    FUN_1800568f4((longlong)param_2,uVar10);
    local_58 = FUN_180056854((longlong)param_2,1,'\x01');
    uVar14 = (ulonglong)local_58;
    FUN_180057838(param_2,param_3,0x32,(ulonglong)local_58);
    param_2[3] = param_2[3] | 0x700;
  }
  uVar11 = (uint)uVar14;
  uVar10 = *(uint *)(param_1 + 0x8c) & 0x300;
  if (uVar10 == 0x100) {
LAB_180031552:
    if (param_5 == '\0') {
      uVar9 = 0x70;
    }
    else {
      uVar9 = FUN_18002d760((longlong)param_2,0,0,0,0,7,'\0');
    }
    FUN_18002d0b8((longlong)param_2,uVar9,7);
    uVar10 = FUN_180056e90(param_2,param_2 + 0x58,uVar14,0,0,0);
    param_2[0x57] = uVar10;
    uVar13 = FUN_18002d8ac((longlong)param_2,(uint)uVar9,0xa4);
    uVar10 = FUN_180056924(param_2,param_2 + 0x60,(ulonglong)param_2[0x14],0x80,(byte)uVar13,0,0);
    param_2[0x5f] = uVar10;
    uVar10 = (param_2[0x57] + param_2[0x4f] + uVar10) * 0x1000000 + 0x1000000 & 0x7f000000 | 0x2038;
  }
  else {
    if (uVar10 != 0x200) {
      if ((param_4 & 0xdf0) != 0) {
        if (param_5 == '\0') {
          uVar10 = 0x70;
        }
        else {
          uVar7 = FUN_18002d760((longlong)param_2,0,0,0,0,7,'\0');
          uVar10 = (uint)uVar7;
        }
        uVar16 = (ushort)uVar10;
        uVar8 = FUN_18002d8e4((int *)param_2,uVar9,uVar16,0,0,0,7,param_3);
        uVar7 = uVar8;
        if (((uVar8 >> 0xd & 1) != 0) || ((uVar8 & 0xf00) == 0x100)) {
          if (((uVar8 & 0xf0) != 0xf0) && ((uVar8 & 0xf0) != 0x80)) {
            uVar7 = FUN_18002d760((longlong)param_2,0,0,0,0,7,'\0');
          }
          FUN_18002db50((int *)param_2,uVar8,uVar7,0,7,param_3,'\x01');
        }
        uVar8 = FUN_18002d760((longlong)param_2,uVar7,0,0,0,7,'\0');
        FUN_18002d0b8((longlong)param_2,uVar8,7);
        uVar13 = FUN_18002d8ac((longlong)param_2,(uint)uVar8,0xa4);
        FUN_18002d248((int *)param_2,0,uVar7,(byte)uVar13,1,'\0');
        uVar13 = FUN_18002d8ac((longlong)param_2,(uint)uVar8,0xa4);
        uVar11 = FUN_180056924(param_2,param_2 + 0x60,(ulonglong)param_2[0x14],0x80,(byte)uVar13,0,0
                              );
        puVar1 = param_2 + 0x57;
        puVar2 = param_2 + 0x4f;
        puVar3 = param_2 + 0x5f;
        *puVar3 = uVar11;
        FUN_180057998(param_3,(*puVar1 + *puVar2 + uVar11) * 0x1000000 + 0x1000000 & 0x7f000000,
                      puVar2,puVar1,puVar3,(uint *)0x0);
        FUN_18002d0b8((longlong)param_2,uVar16,7);
        uVar11 = FUN_180056e90(param_2,param_2 + 0x58,(ulonglong)local_58,0,0,0);
        *puVar1 = uVar11;
        uVar13 = FUN_18002d8ac((longlong)param_2,uVar10,0xa4);
        FUN_18002d248((int *)param_2,1,uVar8,(byte)uVar13,0,'\0');
        uVar13 = FUN_18002d8ac((longlong)param_2,uVar10,0xa4);
        FUN_18002d248((int *)param_2,2,uVar7,(byte)uVar13,0,'\0');
        FUN_180057998(param_3,(param_2[0x67] + *puVar3 + *puVar1 + *puVar2) * 0x1000000 + 0x1000000
                              & 0x7f000000 | 0x2032,puVar2,puVar1,puVar3,param_2 + 0x67);
        FUN_18002d870((longlong)param_2,uVar8);
        if ((uVar7 != uVar9) && (uVar7 != uVar16)) {
          FUN_18002d870((longlong)param_2,uVar7);
        }
        goto LAB_18003126b;
      }
      goto LAB_180031552;
    }
    if ((param_4 & 0xdf0) == 0) {
      FUN_18002db50((int *)param_2,0,0x70,0,7,param_3,'\0');
      local_58 = uVar11;
      goto LAB_18003126b;
    }
    if ((uVar9 & 0xff0) != 0x100) {
      if (param_5 == '\0') {
        uVar10 = 0x70;
      }
      else {
        uVar7 = FUN_18002d760((longlong)param_2,0,0,0,0,7,'\0');
        uVar10 = (uint)uVar7;
      }
      uVar16 = (ushort)uVar10;
      uVar8 = FUN_18002d8e4((int *)param_2,uVar9,uVar16,0,0,0,7,param_3);
      uVar7 = uVar8;
      if (((uVar8 >> 0xd & 1) != 0) || ((uVar8 & 0xf00) == 0x100)) {
        if (((uVar8 & 0xf0) != 0xf0) && ((uVar8 & 0xf0) != 0x80)) {
          uVar7 = FUN_18002d760((longlong)param_2,0,0,0,0,7,'\0');
        }
        FUN_18002db50((int *)param_2,uVar8,uVar7,0,7,param_3,'\x01');
      }
      FUN_18002d0b8((longlong)param_2,uVar16,7);
      puVar1 = param_2 + 0x57;
      uVar12 = FUN_180056e90(param_2,param_2 + 0x58,(ulonglong)(uVar11 | 0x80000000),0,0,0);
      *puVar1 = uVar12;
      uVar13 = FUN_18002d8ac((longlong)param_2,uVar10,0xa4);
      FUN_18002d248((int *)param_2,1,uVar7,(byte)uVar13,0,'\0');
      puVar2 = param_2 + 0x5f;
      FUN_180057998(param_3,(*puVar1 + *puVar2 * 2 + param_2[0x4f]) * 0x1000000 + 0x1000000 &
                            0x7f000000 | 0x2032,param_2 + 0x4f,puVar1,puVar2,puVar2);
      local_58 = uVar11;
      if ((uVar7 != uVar9) && (uVar7 != uVar16)) {
        FUN_18002d870((longlong)param_2,uVar7);
      }
      goto LAB_18003126b;
    }
    if (param_5 == '\0') {
      uVar9 = 0x70;
    }
    else {
      uVar9 = FUN_18002d760((longlong)param_2,0,0,0,0,7,'\0');
    }
    FUN_18002d0b8((longlong)param_2,uVar9,7);
    uVar10 = FUN_180056e90(param_2,param_2 + 0x58,(ulonglong)(uVar11 | 0x80000000),0,0,0);
    param_2[0x57] = uVar10;
    param_2[0x5f] = 5;
    param_2[0x60] = 0x4006;
    param_2[0x61] = 0x3f800000;
    param_2[0x62] = 0x3f800000;
    param_2[99] = 0x3f800000;
    param_2[100] = 0x3f800000;
    uVar10 = (param_2[0x4f] + uVar10) * 0x1000000 + 0xb000000 & 0x7f000000 | 0x2000;
  }
  FUN_180057998(param_3,uVar10,param_2 + 0x4f,param_2 + 0x57,param_2 + 0x5f,(uint *)0x0);
  local_58 = uVar11;
LAB_18003126b:
  if (bVar5) {
    FUN_1800568f4((longlong)param_2,local_58);
  }
  return unaff_R15D;
}

