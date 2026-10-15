/*
 * FUN_1800bc34c at 1800bc34c
 * ulonglong __fastcall FUN_1800bc34c(longlong param_1, uint param_2, uint param_3, uint param_4, uint param_5, int param_6, uint param_7, undefined8 * param_8, longlong param_9)
 * Address ranges: 1800bc34c-1800bc74f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

ulonglong FUN_1800bc34c(longlong param_1,uint param_2,uint param_3,uint param_4,uint param_5,
                       int param_6,uint param_7,undefined8 *param_8,longlong param_9)

{
  int iVar1;
  undefined1 auVar2 [16];
  bool bVar3;
  bool bVar4;
  BOOL BVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  longlong *plVar11;
  undefined8 *puVar12;
  uint uVar13;
  ulonglong uVar14;
  uint uVar15;
  uint uVar16;
  ulonglong uVar17;
  
  if (((*(byte *)(param_1 + -0x59c0) & 4) == 0) && (DAT_1801123a8[1].LockCount == 0)) {
    *(undefined4 *)((longlong)&DAT_1801123a8[1].DebugInfo + 4) = 1;
    bVar3 = false;
  }
  else {
    BVar5 = TryEnterCriticalSection(DAT_1801123a8);
    bVar3 = true;
    if (BVar5 == 0) {
      FUN_1800044dc(0);
      bVar3 = true;
    }
  }
  uVar15 = 1;
  if (param_8 == (undefined8 *)0x0) {
    uVar14 = 0x8876086c;
    goto LAB_1800bc714;
  }
  *param_8 = 0;
  uVar6 = FUN_180002a0c(*(longlong *)(param_1 + -0x5a10),*(uint *)(param_1 + -0x5990),
                        *(int *)(param_1 + -0x59d0),*(int *)(param_1 + -0x59b0),param_7,param_5,3,
                        param_6,0);
  uVar16 = 1;
  if (uVar6 != 0x876086f) {
    uVar16 = param_4;
  }
  uVar14 = 0x8876086c;
  uVar7 = 0;
  if (uVar6 != 0x876086f) {
    uVar7 = uVar6;
  }
  if (((param_5 >> 10 & 1) != 0) && (1 < uVar16)) {
    uVar7 = 0x8876086c;
  }
  if ((int)uVar7 < 0) {
    uVar14 = (ulonglong)uVar7;
    goto LAB_1800bc714;
  }
  uVar13 = 0;
  uVar7 = param_3;
  if (param_3 <= param_2) {
    uVar7 = param_2;
  }
  if (uVar7 == 0) {
    uVar7 = uVar15;
  }
  do {
    uVar13 = uVar13 + 1;
    uVar7 = uVar7 >> 1;
  } while (uVar7 != 0);
  uVar7 = uVar13;
  if (uVar16 != 0) {
    uVar7 = uVar16;
  }
  uVar10 = FUN_180006e6c(param_1 + -0x6838,param_2,param_3,uVar7,uVar13,param_6);
  uVar13 = 0;
  uVar16 = ~-(uint)((char)uVar10 != '\0') & 0x8876086c;
  if ((char)uVar10 == '\0') {
LAB_1800bc536:
    uVar9 = 0x2a;
  }
  else {
    uVar8 = 0;
    if (param_7 == 0) {
      if ((*(int *)(param_1 + -0x59d0) == 1) &&
         (uVar8 = FUN_180017994(param_2,param_3,uVar7,1,param_6),
         *(ulonglong *)(&DAT_180112b00 + (ulonglong)*(uint *)(param_1 + -0x5990) * 600) <
         (ulonglong)uVar8)) {
        uVar16 = 0x8876017c;
      }
    }
    else if (param_7 == 3) goto LAB_1800bc536;
    uVar13 = uVar8;
    uVar9 = FUN_18000223c(param_6);
  }
  if (-1 < (int)uVar16) {
    uVar16 = uVar6;
  }
  if ((uVar16 != 0x876086f) && (uVar15 = uVar7, (int)uVar16 < 0)) {
    uVar14 = (ulonglong)uVar16;
    goto LAB_1800bc714;
  }
  if (param_9 != 0) goto LAB_1800bc714;
  uVar14 = 0x8007000e;
  plVar11 = FUN_1800aceb8(param_1 + -0x6838,param_2,param_3,(short)uVar15,param_5,param_6,param_7,
                          uVar9,*(undefined8 *)(param_1 + -0x59a0),uVar13);
  if (plVar11 == (longlong *)0x0) goto LAB_1800bc714;
  bVar4 = FUN_1800171bc(plVar11,-(ulonglong)(plVar11[3] != 0) & plVar11[3] - 0x6838U);
  if (bVar4) {
    iVar1 = *(int *)(param_1 + -0x596c);
    if (*(int *)(param_1 + -0x5970) == iVar1) {
      uVar17 = 0x10;
      if (iVar1 != 0) {
        uVar17 = (ulonglong)(uint)(iVar1 * 2);
      }
      auVar2._8_8_ = 0;
      auVar2._0_8_ = uVar17;
      uVar10 = SUB168(ZEXT816(8) * auVar2,0);
      if (SUB168(ZEXT816(8) * auVar2,8) != 0) {
        uVar10 = 0xffffffffffffffff;
      }
      puVar12 = (undefined8 *)thunk_FUN_1800fbccc(uVar10);
      if (puVar12 != (undefined8 *)0x0) {
        FUN_1800fbec0(puVar12,*(undefined8 **)(param_1 + -0x5978),
                      (ulonglong)*(uint *)(param_1 + -0x596c) << 3);
        FUN_1800fbcf0(*(LPVOID *)(param_1 + -0x5978));
        *(undefined8 **)(param_1 + -0x5978) = puVar12;
        *(int *)(param_1 + -0x596c) = (int)uVar17;
        goto LAB_1800bc66d;
      }
    }
    else {
LAB_1800bc66d:
      *(longlong **)(*(longlong *)(param_1 + -0x5978) + (ulonglong)*(uint *)(param_1 + -0x5970) * 8)
           = plVar11;
      *(int *)(param_1 + -0x5970) = *(int *)(param_1 + -0x5970) + 1;
      uVar17 = FUN_1800c2624((longlong)(plVar11 + 0x13),(longlong *)&DAT_1800fd670,param_8);
      uVar14 = uVar17 & 0xffffffff;
      if (-1 < (int)uVar17) {
        *(ulonglong *)(&DAT_180112b00 + (ulonglong)*(uint *)(param_1 + -0x5990) * 600) =
             *(longlong *)(&DAT_180112b00 + (ulonglong)*(uint *)(param_1 + -0x5990) * 600) -
             (ulonglong)uVar13;
        FUN_18000150c(param_1 + -0x6838,plVar11 + 0x12);
        goto LAB_1800bc714;
      }
      FUN_180007ac0(param_1 + -0x6838,(longlong)plVar11);
    }
    FUN_180017c64((longlong)plVar11);
    FUN_180017480(plVar11);
  }
  FUN_1800c2500(plVar11);
  FUN_1800fbcf0(plVar11);
LAB_1800bc714:
  if (bVar3) {
    LeaveCriticalSection(DAT_1801123a8);
  }
  else {
    *(undefined4 *)((longlong)&DAT_1801123a8[1].DebugInfo + 4) = 0;
  }
  return uVar14;
}

