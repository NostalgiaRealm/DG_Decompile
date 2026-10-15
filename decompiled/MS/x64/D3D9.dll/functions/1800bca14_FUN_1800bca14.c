/*
 * FUN_1800bca14 at 1800bca14
 * ulonglong __fastcall FUN_1800bca14(longlong param_1, uint param_2, uint param_3, uint param_4, int param_5, uint param_6, undefined8 * param_7, longlong param_8)
 * Address ranges: 1800bca14-1800bcdf0
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

ulonglong FUN_1800bca14(longlong param_1,uint param_2,uint param_3,uint param_4,int param_5,
                       uint param_6,undefined8 *param_7,longlong param_8)

{
  longlong lVar1;
  int iVar2;
  undefined1 auVar3 [16];
  bool bVar4;
  bool bVar5;
  BOOL BVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  undefined8 uVar10;
  longlong *plVar11;
  undefined8 *puVar12;
  uint uVar13;
  ulonglong uVar14;
  uint uVar15;
  undefined4 uVar16;
  ulonglong uVar17;
  uint uVar18;
  
  if (((*(byte *)(param_1 + -0x59c0) & 4) == 0) && (DAT_1801123a8[1].LockCount == 0)) {
    bVar4 = false;
    *(undefined4 *)((longlong)&DAT_1801123a8[1].DebugInfo + 4) = 1;
  }
  else {
    bVar4 = true;
    BVar6 = TryEnterCriticalSection(DAT_1801123a8);
    if (BVar6 == 0) {
      FUN_1800044dc(0);
      bVar4 = true;
    }
  }
  uVar15 = 1;
  if (param_7 == (undefined8 *)0x0) {
    uVar14 = 0x8876086c;
    goto LAB_1800bcdb0;
  }
  *param_7 = 0;
  uVar7 = FUN_180002a0c(*(longlong *)(param_1 + -0x5a10),*(uint *)(param_1 + -0x5990),
                        *(int *)(param_1 + -0x59d0),*(int *)(param_1 + -0x59b0),param_6,param_4,5,
                        param_5,0);
  uVar14 = 0x8876086c;
  uVar8 = 0;
  if (uVar7 != 0x876086f) {
    uVar8 = uVar7;
  }
  if (((param_4 >> 10 & 1) != 0) && (1 < param_3)) {
    uVar8 = 0x8876086c;
  }
  if ((int)uVar8 < 0) {
    uVar14 = (ulonglong)uVar8;
    goto LAB_1800bcdb0;
  }
  uVar18 = 0;
  uVar9 = 0;
  uVar13 = 0;
  uVar8 = uVar15;
  if (param_2 != 0) {
    uVar8 = param_2;
  }
  uVar16 = 0x2a;
  for (; uVar8 != 0; uVar8 = uVar8 >> 1) {
    uVar13 = uVar13 + 1;
  }
  if (param_3 == 0) {
    param_3 = uVar13;
  }
  uVar10 = FUN_180006e6c(param_1 + -0x6838,param_2,param_2,param_3,uVar13,param_5);
  uVar8 = ~-(uint)((char)uVar10 != '\0') & 0x8876086c;
  if ((char)uVar10 != '\0') {
    if (param_6 == 0) {
      if ((*(int *)(param_1 + -0x59d0) == 1) &&
         (uVar9 = FUN_180017994(param_2,param_2,param_3,6,param_5),
         *(ulonglong *)(&DAT_180112b00 + (ulonglong)*(uint *)(param_1 + -0x5990) * 600) <
         (ulonglong)uVar9)) {
        uVar8 = 0x8876017c;
      }
LAB_1800bcbd4:
      uVar16 = FUN_18000223c(param_5);
      uVar18 = uVar9;
    }
    else {
      uVar18 = 0;
      if (param_6 != 3) goto LAB_1800bcbd4;
    }
    if (-1 < (int)uVar8) {
      uVar8 = uVar7;
    }
  }
  if ((uVar8 != 0x876086f) && (uVar15 = param_3, (int)uVar8 < 0)) {
    uVar14 = (ulonglong)uVar8;
    goto LAB_1800bcdb0;
  }
  if (param_8 != 0) goto LAB_1800bcdb0;
  uVar14 = 0x8007000e;
  lVar1 = param_1 + -0x6838;
  plVar11 = FUN_1800acc28(lVar1,param_2,param_2,(short)uVar15,param_4,param_5,param_6,uVar16,
                          *(undefined8 *)(param_1 + -0x59a0),uVar18);
  if (plVar11 == (longlong *)0x0) goto LAB_1800bcdb0;
  bVar5 = FUN_1800171bc(plVar11,-(ulonglong)(plVar11[3] != 0) & plVar11[3] - 0x6838U);
  if (bVar5) {
    iVar2 = *(int *)(param_1 + -0x595c);
    if (*(int *)(param_1 + -0x5960) == iVar2) {
      uVar17 = 0x10;
      if (iVar2 != 0) {
        uVar17 = (ulonglong)(uint)(iVar2 * 2);
      }
      auVar3._8_8_ = 0;
      auVar3._0_8_ = uVar17;
      uVar10 = SUB168(ZEXT816(8) * auVar3,0);
      if (SUB168(ZEXT816(8) * auVar3,8) != 0) {
        uVar10 = 0xffffffffffffffff;
      }
      puVar12 = (undefined8 *)thunk_FUN_1800fbccc(uVar10);
      if (puVar12 != (undefined8 *)0x0) {
        FUN_1800fbec0(puVar12,*(undefined8 **)(param_1 + -0x5968),
                      (ulonglong)*(uint *)(param_1 + -0x595c) << 3);
        FUN_1800fbcf0(*(LPVOID *)(param_1 + -0x5968));
        *(undefined8 **)(param_1 + -0x5968) = puVar12;
        *(int *)(param_1 + -0x595c) = (int)uVar17;
        goto LAB_1800bcd09;
      }
    }
    else {
LAB_1800bcd09:
      *(longlong **)(*(longlong *)(param_1 + -0x5968) + (ulonglong)*(uint *)(param_1 + -0x5960) * 8)
           = plVar11;
      *(int *)(param_1 + -0x5960) = *(int *)(param_1 + -0x5960) + 1;
      uVar17 = FUN_1800af650((longlong)(plVar11 + 0x13),(longlong *)&DAT_1800fd680,param_7);
      uVar14 = uVar17 & 0xffffffff;
      if (-1 < (int)uVar17) {
        *(ulonglong *)(&DAT_180112b00 + (ulonglong)*(uint *)(param_1 + -0x5990) * 600) =
             *(longlong *)(&DAT_180112b00 + (ulonglong)*(uint *)(param_1 + -0x5990) * 600) -
             (ulonglong)uVar18;
        FUN_18000150c(lVar1,plVar11 + 0x12);
        goto LAB_1800bcdb0;
      }
      FUN_180007b78(lVar1,(longlong)plVar11);
    }
    FUN_180017c64((longlong)plVar11);
    FUN_180017480(plVar11);
  }
  FUN_1800af3a8(plVar11);
  FUN_1800fbcf0(plVar11);
LAB_1800bcdb0:
  if (bVar4) {
    LeaveCriticalSection(DAT_1801123a8);
  }
  else {
    *(undefined4 *)((longlong)&DAT_1801123a8[1].DebugInfo + 4) = 0;
  }
  return uVar14;
}

