/*
 * FUN_180003254 at 180003254
 * undefined8 __fastcall FUN_180003254(longlong param_1, uint param_2, int param_3, HWND param_4, uint * param_5, longlong * param_6)
 * Address ranges: 180003254-18000385a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8
FUN_180003254(longlong param_1,uint param_2,int param_3,HWND param_4,uint *param_5,longlong *param_6
             )

{
  char cVar1;
  uint uVar2;
  char *pcVar3;
  longlong lVar4;
  bool bVar5;
  bool bVar6;
  longlong lVar7;
  uint *puVar8;
  undefined1 uVar9;
  uint uVar10;
  int iVar11;
  ulonglong uVar12;
  HWND pHVar13;
  uint *puVar14;
  int iVar15;
  uint uVar16;
  undefined8 *puVar17;
  uint uVar18;
  HWND pHVar19;
  longlong lVar20;
  undefined8 *puVar21;
  uint *puVar22;
  longlong lVar23;
  uint *puVar24;
  uint uVar25;
  undefined4 uVar26;
  uint *puVar27;
  bool bVar28;
  uint uStack0000000000000038;
  uint uStack0000000000000040;
  undefined4 in_stack_ffffffffffffff78;
  undefined4 in_stack_ffffffffffffff7c;
  uint local_68 [10];
  
  puVar8 = param_5;
  lVar23 = param_1;
  iVar15 = param_3;
  uVar10 = FUN_18000223c(param_5[2]);
  uVar16 = param_5[0xc];
  uStack0000000000000038 = uVar10;
  uStack0000000000000040 = FUN_18000223c(uVar16);
  if (iVar15 == 2) {
    param_5 = &DAT_18010e158;
    puVar21 = &DAT_18010e2a8;
    puVar17 = &DAT_18010e290;
  }
  else {
    lVar20 = (ulonglong)*(uint *)(lVar23 + 0x10) * 0x1b0;
    puVar21 = (undefined8 *)(&DAT_18010e458 + lVar20);
    puVar17 = (undefined8 *)(&DAT_18010e440 + lVar20);
    param_5 = (uint *)(&DAT_18010e308 + lVar20);
  }
  if ((puVar8[3] < 2) || (puVar8[6] != 3)) {
    bVar5 = true;
  }
  else {
    bVar5 = false;
  }
  bVar28 = (puVar8[0xd] & ~((-(uint)(*(char *)(lVar23 + 0x67) != '\0') & 0xfe0) + 0x17)) == 0;
  if ((((puVar8[0xd] & 2) != 0) && (puVar8[0xb] != 0)) && ((uVar16 == 0x46 || (uVar16 == 0x52)))) {
    bVar28 = false;
  }
  uVar25 = puVar8[0xf];
  if (((uVar25 < 9) && ((0x117U >> (uVar25 & 0x1f) & 1) != 0)) || (uVar25 == 0x80000000)) {
    bVar6 = true;
  }
  else {
    bVar6 = false;
  }
  pcVar3 = (char *)*puVar21;
  uVar12 = 0;
  cVar1 = *pcVar3;
  while( true ) {
    if (cVar1 == -1) {
      return 0x8876086c;
    }
    if ((byte)pcVar3[uVar12] == uVar10) break;
    uVar12 = (ulonglong)((int)uVar12 + 1);
    cVar1 = pcVar3[uVar12];
  }
  uVar10 = puVar8[4];
  if (0x10 < (int)uVar10) {
    return 0x8876086c;
  }
  if (3 < puVar8[3]) {
    return 0x8876086c;
  }
  if (4 < puVar8[6] - 1) {
    return 0x8876086c;
  }
  if (!bVar5) {
    return 0x8876086c;
  }
  uVar18 = puVar8[0xb];
  if (uVar18 != 0) {
    pcVar3 = (char *)*puVar17;
    uVar12 = 0;
    cVar1 = *pcVar3;
    while( true ) {
      if (cVar1 == -1) {
        return 0x8876086c;
      }
      if ((byte)pcVar3[uVar12] == uStack0000000000000040) break;
      uVar12 = (ulonglong)((int)uVar12 + 1);
      cVar1 = pcVar3[uVar12];
    }
  }
  if (!bVar28) {
    return 0x8876086c;
  }
  if (!bVar6) {
    return 0x8876086c;
  }
  if ((uVar10 != 0) && (puVar8[6] != 1)) {
    return 0x8876086c;
  }
  uVar2 = puVar8[5];
  uVar12 = FUN_180003094(param_1,param_2,param_3,puVar8[2],
                         CONCAT44(in_stack_ffffffffffffff7c,in_stack_ffffffffffffff78),uVar10,uVar2,
                         1);
  if ((int)uVar12 < 0) {
    return 0x8876086c;
  }
  if (uVar18 != 0) {
    uVar18 = uVar16;
    uVar12 = FUN_180001ffc(param_1,param_3,puVar8[2],puVar8[2],uVar16);
    if ((int)uVar12 < 0) {
      return 0x8876086c;
    }
    uVar12 = FUN_180003094(param_1,param_2,param_3,uVar16,CONCAT44(in_stack_ffffffffffffff7c,uVar18)
                           ,uVar10,uVar2,1);
    if ((int)uVar12 < 0) {
      return 0x8876086c;
    }
  }
  uVar16 = puVar8[10];
  pHVar19 = *(HWND *)(puVar8 + 8);
  pHVar13 = GetDesktopWindow();
  puVar14 = (uint *)0x0;
  if ((pHVar19 == pHVar13) || (pHVar19 == (HWND)0x0)) {
    pHVar19 = param_4;
  }
  *param_6 = (longlong)pHVar19;
  *(uint *)(param_6 + 1) = *puVar8;
  *(uint *)((longlong)param_6 + 0xc) = puVar8[1];
  *(uint *)((longlong)param_6 + 0x1c) = (uint)(byte)(&DAT_180100e08)[(int)uStack0000000000000038];
  *(uint *)(param_6 + 4) = *puVar8;
  *(uint *)((longlong)param_6 + 0x24) = puVar8[1];
  *(undefined4 *)(param_6 + 6) = 1;
  *(undefined4 *)((longlong)param_6 + 0x34) = 1;
  uVar10 = 0;
  uVar18 = uVar10;
  if ((uVar25 != 0x80000000) && (uVar18 = uVar25, uVar25 == 0)) {
    uVar18 = (uint)(puVar8[10] == 0);
  }
  *(uint *)(param_6 + 8) = uVar18;
  *(uint *)((longlong)param_6 + 0x3c) = puVar8[6];
  uVar25 = puVar8[3];
  if (uVar25 == 0) {
    uVar25 = 1;
  }
  *(uint *)((longlong)param_6 + 0x44) = uVar25;
  *(uint *)(param_6 + 10) = puVar8[2];
  *(uint *)(param_6 + 9) = uStack0000000000000038;
  lVar23 = DAT_180111f20;
  if (puVar8[0xb] != 0) {
    uVar10 = puVar8[0xc];
  }
  *(uint *)((longlong)param_6 + 0x54) = uVar10;
  uVar12 = (ulonglong)param_2;
  uVar10 = 0x2a;
  if (puVar8[0xb] != 0) {
    uVar10 = uStack0000000000000040;
  }
  *(uint *)((longlong)param_6 + 0x4c) = uVar10;
  *(uint *)(param_6 + 0xb) = puVar8[4];
  *(uint *)((longlong)param_6 + 0x5c) = puVar8[5];
  if ((puVar8[2] == 0x23) && (*(int *)(lVar23 + 0x8d2) == 0)) {
    uVar26 = 1;
  }
  else {
    iVar15 = *(int *)(*(longlong *)((&DAT_1801128e0)[uVar12 * 0x4b] + 8) + 0xd2);
    if (iVar15 == 2) {
      puVar27 = (uint *)0x1;
    }
    else if (iVar15 == 3) {
      puVar27 = (uint *)0x2;
    }
    else {
      puVar27 = (uint *)0x3;
      if (iVar15 != 4) {
        puVar27 = puVar14;
      }
    }
    uVar26 = SUB84(puVar27,0);
  }
  *(undefined4 *)(param_6 + 7) = uVar26;
  *(uint *)(param_6 + 0xc) = param_2;
  lVar20 = uVar12 * 600;
  *(undefined4 *)((longlong)param_6 + 100) = (&DAT_180112900)[uVar12 * 0x96];
  *(int *)(param_6 + 0xd) = (&DAT_180112900)[uVar12 * 0x96] + 1;
  *(uint *)((longlong)param_6 + 0x6c) = puVar8[0xd];
  *(byte *)(param_6 + 0xe) = (byte)puVar8[0xd] & 1;
  *(bool *)((longlong)param_6 + 0x71) = puVar8[10] != 0;
  if ((*(char *)(lVar23 + 0x881) != '\0') || (uVar9 = 1, *(char *)(lVar23 + 0x820) == '\0')) {
    uVar9 = 0;
  }
  *(undefined1 *)((longlong)param_6 + 0x72) = uVar9;
  *(byte *)((longlong)param_6 + 0x73) = (byte)(*param_5 >> 0x11) & 1;
  lVar7 = DAT_180111f20;
  if (puVar8[6] == 4) {
    return 0x80004005;
  }
  uVar10 = puVar8[0xe];
  if (uVar16 == 0) {
    if (((*(char *)(lVar23 + 0x822) == '\0') || (*(int *)(lVar23 + 0x870) == 0)) ||
       (bVar5 = true, *(int *)(lVar23 + 0x874) == 0)) {
      bVar5 = false;
    }
    if ((uVar10 == 0) || (bVar5)) {
      puVar21 = &DAT_180112b18;
      puVar17 = &DAT_180112b20;
    }
    else {
      puVar21 = &DAT_180112b08;
      puVar17 = &DAT_180112b10;
    }
    if (*(uint *)(puVar17 + uVar12 * 0x4b) == 0) {
      return 0x8876086c;
    }
    uVar16 = *puVar8;
    puVar27 = puVar14;
    do {
      puVar24 = (uint *)((longlong)puVar14 * 0x18 + puVar21[uVar12 * 0x4b]);
      puVar22 = puVar27;
      if ((((*puVar24 == uVar16) && (puVar24[1] == puVar8[1])) &&
          ((uVar10 == 0 || (((bVar5 || (puVar24[4] <= uVar10)) || (puVar24[4] <= uVar10 + 1)))))) &&
         (puVar22 = puVar24, puVar27 != (uint *)0x0)) {
        iVar15 = -(uVar10 - puVar27[4]);
        if (iVar15 < 0) {
          iVar15 = uVar10 - puVar27[4];
        }
        iVar11 = -(uVar10 - puVar24[4]);
        if (iVar11 < 0) {
          iVar11 = uVar10 - puVar24[4];
        }
        uVar16 = *puVar8;
        if (iVar15 <= iVar11) {
          puVar22 = puVar27;
        }
      }
      uVar25 = (int)puVar14 + 1;
      puVar14 = (uint *)(ulonglong)uVar25;
      puVar27 = puVar22;
    } while (uVar25 < *(uint *)(puVar17 + uVar12 * 0x4b));
    if (puVar22 == (uint *)0x0) {
      return 0x8876086c;
    }
    *(uint *)(param_6 + 2) = puVar22[2];
    *(uint *)((longlong)param_6 + 0x14) = puVar22[3];
    *(uint *)(param_6 + 3) = puVar22[4];
    puVar14 = FUN_18002f91c(local_68,(uint *)(param_6 + 1),(ulonglong)param_2);
    lVar4 = *(longlong *)(puVar14 + 2);
    lVar23 = *(longlong *)(puVar14 + 4);
    param_6[4] = *(longlong *)puVar14;
    param_6[5] = lVar4;
    param_6[6] = lVar23;
    if ((puVar8[0xe] == 0) &&
       (((*(char *)(lVar7 + 0x822) == '\0' || (*(int *)(lVar7 + 0x870) == 0)) ||
        (*(int *)(lVar7 + 0x874) == 0)))) {
      *(undefined4 *)(param_6 + 5) = *(undefined4 *)(&DAT_180112a60 + uVar12 * 0x4b);
      *(undefined4 *)((longlong)param_6 + 0x2c) =
           *(undefined4 *)((longlong)&DAT_180112a60 + lVar20 + 4);
    }
    return 0;
  }
  if (uVar10 != 0) {
    return 0x8876086c;
  }
  if (*puVar8 == 0) {
    return 0x8876086c;
  }
  if (puVar8[1] == 0) {
    return 0x8876086c;
  }
  *(undefined4 *)(param_6 + 2) = *(undefined4 *)(&DAT_180112a78 + uVar12 * 0x4b);
  *(undefined4 *)((longlong)param_6 + 0x14) = *(undefined4 *)((longlong)&DAT_180112a78 + lVar20 + 4)
  ;
  *(undefined4 *)(param_6 + 3) = *(undefined4 *)(&DAT_180112a80 + uVar12 * 0x4b);
  *(undefined4 *)(param_6 + 5) = *(undefined4 *)(&DAT_180112a78 + uVar12 * 0x4b);
  *(undefined4 *)((longlong)param_6 + 0x2c) = *(undefined4 *)((longlong)&DAT_180112a78 + lVar20 + 4)
  ;
  return 0;
}

