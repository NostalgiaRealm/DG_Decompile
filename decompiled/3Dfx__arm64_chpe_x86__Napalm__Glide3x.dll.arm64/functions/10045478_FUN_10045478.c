/*
 * FUN_10045478 at 10045478
 * undefined FUN_10045478(void)
 * Address ranges: 10045478-1004593b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10045478(ushort *param_1,int param_2,undefined4 param_3,uint param_4,byte param_5,
                 uint param_6)

{
  ushort *puVar1;
  ushort *puVar2;
  ushort *puVar3;
  ushort *puVar4;
  uint uVar5;
  undefined1 uVar6;
  undefined4 uVar7;
  ushort uVar8;
  ushort uVar9;
  ushort uVar10;
  bool bVar11;
  bool bVar12;
  bool bVar13;
  int iVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  ushort uVar19;
  ushort uVar20;
  undefined1 uVar21;
  uint uVar22;
  undefined8 uVar23;
  uint uVar24;
  uint uVar25;
  ushort local_50;
  
  uVar25 = param_4 & 0xffff;
  uVar15 = param_4 & 0xffff;
  uVar5 = param_4 & 0xf0;
  uVar16 = param_6;
  if ((uVar5 == 0xf0) && (*(int *)(param_2 + 0xa0) == 0)) {
    iVar14 = FUN_10077af0(param_2,4,1);
    *(int *)(param_2 + 0xa0) = iVar14;
  }
  uVar22 = 0xf;
  if ((param_6 & 0xff) == 0) {
    uVar22 = (uint)(byte)((param_5 ^ 1) + 7);
  }
  uVar21 = 0xa4;
  if (param_5 == 0) {
    uVar21 = 0xff;
  }
  uVar6 = 0xe4;
  if ((param_6 & 0xff) == 0) {
    uVar6 = uVar21;
  }
  puVar1 = param_1 + 5;
  bVar11 = uVar5 == 0x70;
  uVar8 = *puVar1;
  bVar12 = (uVar8 & 0xf00) != 0;
  if ((*param_1 & 0xdf0) == 0) {
    if ((uVar8 & 0xf0) == 0xf0) {
      if ((uVar8 & 0xf00) == 0x100) {
        uVar15 = FUN_10041930(param_2,0,0,0,0,uVar22,0);
        uVar15 = uVar15 & 0xffff;
        FUN_10041df8(param_2,*puVar1,uVar15,(char)param_1[4],uVar22,param_3,0);
        FUN_10041df8(param_2,uVar15 | 0x100,uVar25,0,uVar22,param_3,0);
        FUN_10041a38(param_2,uVar15);
        goto LAB_100458dc;
      }
      uVar8 = param_1[3];
    }
    FUN_10041df8(param_2,uVar8,uVar25,(char)param_1[4],uVar22,param_3,0);
    goto LAB_100458dc;
  }
  if ((*param_1 & 0xff0) == 0x100) {
    if (bVar11 && bVar12) {
      param_4 = 0;
      uVar15 = FUN_10041930(param_2,0,0,0,0,uVar22,0);
      uVar15 = uVar15 & 0xffff;
    }
    uVar10 = param_1[4];
    uVar8 = param_1[3];
    uVar9 = param_1[2];
    uVar20 = param_1[1];
    local_50 = uVar20 & 0x4000;
    bVar13 = (uVar20 & 0x4000) != 0;
    uVar16 = (uint)uVar20;
    uVar17 = (uint)uVar9;
    if (!bVar13) {
      uVar16 = (uint)uVar9;
      uVar17 = param_4;
    }
    if ((bVar13) || (uVar17 = (uint)uVar20, (uVar9 & 0x4000) != 0)) {
      uVar16 = FUN_10041b00(param_2,uVar16,uVar15,uVar17,uVar8,0,uVar22,param_3);
      uVar16 = uVar16 & 0xffff;
    }
    else {
      uVar16 = 0;
    }
    uVar17 = (uint)uVar8;
    if ((uVar8 & 0x4000) != 0) {
      uVar17 = uVar16;
    }
    uVar24 = (uint)uVar9;
    if ((uVar9 & 0x4000) != 0) {
      uVar24 = uVar16;
    }
    uVar18 = (uint)uVar20;
    if (local_50 != 0) {
      uVar18 = uVar16;
    }
    FUN_100422d0(param_2,uVar18,uVar24,uVar17,uVar15,(char)uVar10,uVar22,uVar6,param_3);
    if (uVar16 != uVar15) {
LAB_100458bc:
      FUN_10041a38(param_2,uVar16);
    }
  }
  else {
    if (bVar11 && bVar12) {
      uVar16 = uVar22;
      uVar15 = FUN_10041930(param_2,0,0,0,0,uVar22,0);
      uVar15 = uVar15 & 0xffff;
    }
    uVar8 = *param_1;
    uVar24 = (uint)uVar8;
    puVar2 = param_1 + 3;
    puVar3 = param_1 + 2;
    uVar9 = *puVar2;
    uVar17 = (uint)uVar9;
    puVar4 = param_1 + 1;
    uVar20 = *puVar3;
    uVar10 = *puVar4;
    uVar19 = uVar10;
    if ((uVar8 & 0x4000) == 0) {
      uVar18 = (uint)uVar9;
      uVar17 = uVar18;
      uVar24 = (uint)uVar10;
      uVar19 = uVar8;
      if ((uVar10 & 0x4000) != 0) goto LAB_100457e8;
      bVar13 = (uVar20 & 0x4000) == 0;
      if (bVar13) {
        uVar17 = uVar16;
      }
      uVar24 = (uint)uVar20;
      uVar20 = uVar10;
      if ((!bVar13) || (uVar16 = 0, uVar17 = uVar24, uVar24 = uVar18, (uVar9 & 0x4000) != 0))
      goto LAB_100457e8;
    }
    else {
LAB_100457e8:
      uVar16 = FUN_10041b00(param_2,uVar24,uVar15,uVar19,uVar20,uVar17,uVar22,param_3);
      uVar16 = uVar16 & 0xffff;
    }
    uVar23 = *(undefined8 *)param_1;
    uVar7 = *(undefined4 *)(param_1 + 4);
    uVar8 = param_1[6];
    uVar9 = (ushort)uVar16;
    if ((*param_1 & 0x4000) != 0) {
      *param_1 = uVar9;
    }
    if ((*puVar4 & 0x4000) != 0) {
      *puVar4 = uVar9;
    }
    if ((*puVar3 & 0x4000) != 0) {
      *puVar3 = uVar9;
    }
    if ((*puVar2 & 0x4000) != 0) {
      *puVar2 = uVar9;
    }
    FUN_10042d38(param_2,param_1,uVar15,uVar22,uVar6,param_3);
    *(undefined8 *)param_1 = uVar23;
    *(undefined4 *)(param_1 + 4) = uVar7;
    param_1[6] = uVar8;
    if (uVar16 != uVar15) goto LAB_100458bc;
  }
  if (bVar11 && bVar12) {
    uVar15 = *puVar1 & 0xf00 | uVar15;
  }
LAB_100458dc:
  if ((uVar5 == 0x70) && ((uVar15 & 0xf0) != 0x70)) {
    FUN_10041df8(param_2,uVar15,uVar25,0,uVar22,param_3,0);
    FUN_10041a38(param_2,uVar15);
  }
  return;
}

