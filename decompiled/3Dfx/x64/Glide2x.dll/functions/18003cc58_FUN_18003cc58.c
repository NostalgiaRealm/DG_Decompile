/*
 * FUN_18003cc58 at 18003cc58
 * undefined __fastcall FUN_18003cc58(ushort * param_1, int * param_2, longlong * param_3, ushort param_4, byte param_5, char param_6)
 * Address ranges: 18003cc58-18003d10b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18003cc58(ushort *param_1,int *param_2,longlong *param_3,ushort param_4,byte param_5,
                  char param_6)

{
  undefined8 uVar1;
  ushort uVar2;
  undefined4 uVar3;
  bool bVar4;
  byte bVar5;
  byte bVar6;
  ushort uVar7;
  ushort uVar8;
  uint uVar9;
  ushort uVar10;
  ushort uVar11;
  ushort uVar12;
  ushort uVar13;
  ushort uVar14;
  ushort uVar15;
  
  uVar12 = param_4 & 0xf0;
  if ((uVar12 == 0xf0) && (param_2[0x2a] == 0)) {
    uVar9 = FUN_180054248((longlong)param_2,4,'\x01');
    param_2[0x2a] = uVar9;
  }
  bVar5 = (param_5 ^ 1) + 7;
  if (param_6 != '\0') {
    bVar5 = 0xf;
  }
  bVar6 = (-(param_5 != 0) & 0xa5U) - 1;
  if (param_6 != '\0') {
    bVar6 = 0xe4;
  }
  uVar10 = param_1[5];
  if (((uVar10 & 0xf00) == 0) || (bVar4 = true, uVar12 != 0x70)) {
    bVar4 = false;
  }
  uVar7 = param_4;
  if ((*param_1 & 0xdf0) == 0) {
    if (((byte)uVar10 & 0xf0) == 0xf0) {
      if ((uVar10 & 0xf00) == 0x100) {
        uVar7 = FUN_18003aa70((longlong)param_2,0,0,0,0,bVar5,'\0');
        FUN_18003ae60(param_2,param_1[5],uVar7,(byte)param_1[4],bVar5,param_3,'\0');
        FUN_18003ae60(param_2,uVar7 | 0x100,param_4,0,bVar5,param_3,'\0');
        FUN_18003ab80((longlong)param_2,uVar7);
        goto LAB_18003d0b0;
      }
      uVar10 = param_1[3];
    }
    FUN_18003ae60(param_2,uVar10,param_4,(byte)param_1[4],bVar5,param_3,'\0');
    goto LAB_18003d0b0;
  }
  if ((*param_1 & 0xff0) == 0x100) {
    if (bVar4) {
      uVar7 = FUN_18003aa70((longlong)param_2,0,0,0,0,bVar5,'\0');
    }
    uVar8 = 0;
    uVar15 = param_1[4];
    uVar10 = param_1[1];
    uVar2 = param_1[3];
    uVar14 = param_1[2];
    uVar11 = uVar10;
    uVar13 = uVar14;
    if (((uVar10 & 0x4000) != 0) || (uVar11 = uVar14, uVar13 = uVar10, (uVar14 & 0x4000) != 0)) {
      uVar8 = FUN_18003abf4(param_2,uVar11,uVar7,uVar13,uVar2,0,bVar5,param_3);
    }
    uVar11 = uVar8;
    if ((uVar10 & 0x4000) == 0) {
      uVar11 = uVar10;
    }
    uVar10 = uVar8;
    if ((uVar14 & 0x4000) == 0) {
      uVar10 = uVar14;
    }
    uVar14 = uVar8;
    if ((uVar2 & 0x4000) == 0) {
      uVar14 = uVar2;
    }
    FUN_18003b2fc(param_2,uVar11,uVar10,uVar14,uVar7,(byte)uVar15,bVar5,bVar6,param_3,'\x01',1);
  }
  else {
    if (bVar4) {
      uVar7 = FUN_18003aa70((longlong)param_2,0,0,0,0,bVar5,'\0');
    }
    uVar10 = param_1[1];
    uVar2 = param_1[2];
    uVar14 = param_1[3];
    uVar15 = uVar2;
    if ((*param_1 & 0x4000) == 0) {
      uVar11 = uVar10;
      if ((((uVar10 & 0x4000) != 0) || (uVar11 = uVar2, uVar15 = uVar10, (uVar2 & 0x4000) != 0)) ||
         (uVar8 = 0, uVar10 = uVar14 & 0x4000, uVar11 = uVar14, uVar14 = uVar2, uVar10 != 0)) {
        uVar10 = *param_1;
        goto LAB_18003cff0;
      }
    }
    else {
      uVar11 = *param_1;
LAB_18003cff0:
      uVar8 = FUN_18003abf4(param_2,uVar11,uVar7,uVar10,uVar15,uVar14,bVar5,param_3);
    }
    uVar3 = *(undefined4 *)(param_1 + 4);
    uVar1 = *(undefined8 *)param_1;
    uVar10 = param_1[6];
    if ((*param_1 & 0x4000) != 0) {
      *param_1 = uVar8;
    }
    if ((param_1[1] & 0x4000) != 0) {
      param_1[1] = uVar8;
    }
    if ((param_1[2] & 0x4000) != 0) {
      param_1[2] = uVar8;
    }
    if ((param_1[3] & 0x4000) != 0) {
      param_1[3] = uVar8;
    }
    FUN_18003b9bc(param_2,param_1,uVar7,bVar5,bVar6,param_3);
    *(undefined8 *)param_1 = uVar1;
    *(undefined4 *)(param_1 + 4) = uVar3;
    param_1[6] = uVar10;
  }
  if (uVar8 != uVar7) {
    FUN_18003ab80((longlong)param_2,uVar8);
  }
  if (bVar4) {
    uVar7 = uVar7 | param_1[5] & 0xf00;
  }
LAB_18003d0b0:
  if ((uVar12 == 0x70) && (((byte)uVar7 & 0xf0) != 0x70)) {
    FUN_18003ae60(param_2,uVar7,param_4,0,bVar5,param_3,'\0');
    FUN_18003ab80((longlong)param_2,uVar7);
  }
  return;
}

