/*
 * FUN_18008c898 at 18008c898
 * undefined8 __fastcall FUN_18008c898(longlong param_1, ulonglong param_2, int param_3, longlong param_4, uint param_5, float param_6, float param_7, float param_8, float param_9)
 * Address ranges: 18008c898-18008ce3c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8
FUN_18008c898(longlong param_1,ulonglong param_2,int param_3,longlong param_4,uint param_5,
             float param_6,float param_7,float param_8,float param_9)

{
  longlong *plVar1;
  int iVar2;
  byte bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  char cVar7;
  BOOL BVar8;
  uint uVar9;
  int *piVar10;
  longlong *plVar11;
  undefined8 extraout_RAX;
  longlong lVar12;
  undefined1 uVar13;
  int iVar14;
  uint uVar15;
  undefined8 uVar16;
  undefined4 uVar17;
  longlong lVar18;
  longlong lVar19;
  longlong *plVar20;
  undefined1 uVar21;
  float fVar22;
  float fVar23;
  RECT local_160;
  longlong local_150;
  longlong *local_148;
  float local_138;
  float local_134;
  float local_130;
  float local_12c;
  undefined8 local_128;
  undefined8 uStack_120;
  int local_118;
  int local_114;
  undefined8 local_110;
  longlong *local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  longlong *local_d8;
  undefined8 uStack_d0;
  float local_c8 [8];
  uint local_a8;
  
  iVar14 = (int)param_2;
  FUN_1800dfe48(*(longlong *)(param_1 + 0x1cf10),param_2,param_1);
  plVar1 = (longlong *)(param_4 + -0xe0);
  uVar21 = 1;
  (**(code **)(*plVar1 + 0xb0))(plVar1,param_2 & 0xffffffff);
  fVar22 = (float)(**(code **)(*plVar1 + 0x58))(plVar1);
  fVar23 = (float)(**(code **)(*plVar1 + 0x60))(plVar1);
  uVar15 = param_3 * *(int *)(param_4 + -0xa4) + iVar14;
  cVar7 = (**(code **)(*plVar1 + 0xa8))(plVar1);
  if ((((cVar7 == '\0') || (*(int *)(param_4 + -0x9c) - 3U < 3)) ||
      (*(longlong *)(param_4 + 0xb8) == 0)) ||
     (BVar8 = IsRectEmpty((RECT *)(*(longlong *)(param_4 + 0xd0) + (ulonglong)uVar15 * 0x28 + 0x18))
     , BVar8 != 0)) {
    local_148 = (longlong *)0x0;
    (**(code **)(*plVar1 + 8))(plVar1,param_2 & 0xffffffff,param_3,0);
    lVar12 = -0x68;
    lVar19 = -0x60;
    lVar18 = -0x50;
  }
  else {
    fVar23 = 1.0;
    lVar12 = 0xb8;
    fVar22 = 1.0;
    lVar19 = 0xc0;
    lVar18 = 0xd0;
    local_148 = plVar1;
  }
  local_150 = lVar18;
  FUN_1800a97d0(lVar12,&local_160.left,param_6,param_7,param_8,param_9);
  plVar20 = *(longlong **)(param_4 + lVar19);
  if (plVar20 == (longlong *)0x0) {
    plVar20 = *(longlong **)(lVar12 + param_4);
  }
  (**(code **)(*plVar20 + 0x50))(plVar20);
  if ((local_a8 < 0x39) && ((0x100000a19800a00U >> ((ulonglong)local_a8 & 0x3f) & 1) != 0)) {
    bVar6 = true;
  }
  else {
    bVar6 = false;
  }
  if ((local_a8 < 0x37) && ((0x40020400010404U >> ((ulonglong)local_a8 & 0x3f) & 1) != 0)) {
    bVar4 = true;
  }
  else {
    bVar4 = false;
  }
  if (*(int *)(param_4 + 8) == 0) {
LAB_18008ca89:
    bVar5 = false;
  }
  else {
    piVar10 = (int *)(param_4 + -0x9c);
    if (param_4 == 0) {
      piVar10 = (int *)&DAT_00000044;
    }
    if (2 < *piVar10 - 3U) goto LAB_18008ca89;
    bVar5 = true;
  }
  if ((local_160.left == 0) && (local_160.top == 0)) {
    bVar3 = (byte)param_2 & 0x1f;
    uVar9 = *(uint *)(param_4 + -0xbc) >> bVar3;
    if (*(uint *)(param_4 + -0xbc) >> bVar3 == 0) {
      uVar9 = 1;
    }
    if (local_160.right != uVar9) goto LAB_18008cc3f;
    bVar3 = (byte)param_2 & 0x1f;
    uVar9 = *(uint *)(param_4 + -0xb8) >> bVar3;
    if (*(uint *)(param_4 + -0xb8) >> bVar3 == 0) {
      uVar9 = 1;
    }
    if (local_160.bottom != uVar9) goto LAB_18008cc3f;
    if (bVar5) {
      uVar9 = *(uint *)(&DAT_18010ff10 + (longlong)*(int *)(param_4 + -0xb4) * 0x2c);
      if (uVar9 == 0) {
        fVar22 = 0.0;
      }
      else {
        fVar22 = (float)((double)(uVar9 & param_5) / (double)uVar9);
      }
      cVar7 = (**(code **)(*plVar1 + 0x88))(plVar1);
      uVar13 = 0;
      if (cVar7 == '\0') {
        uVar16 = 1;
      }
      else {
        uVar9 = *(uint *)(&DAT_18010ff14 + (longlong)*(int *)(param_4 + -0xb4) * 0x2c);
        uVar13 = 0;
        if (uVar9 != 0) {
          iVar2 = 0;
          if (uVar9 != 0) {
            for (; (uVar9 >> iVar2 & 1) == 0; iVar2 = iVar2 + 1) {
            }
          }
          uVar13 = (undefined1)((uVar9 & param_5) >> ((byte)iVar2 & 0x1f));
        }
        uVar16 = 3;
      }
      lVar12 = *(longlong *)(*(longlong *)(lVar18 + param_4) + 8 + (ulonglong)uVar15 * 0x28);
      if (lVar12 == 0) {
        uVar21 = 0;
      }
      else {
        plVar20 = *(longlong **)(*(longlong *)(param_1 + 0x1cf18) + 8);
        (**(code **)(*plVar20 + 0x1a8))(plVar20,lVar12,uVar16,fVar22,uVar13);
      }
      goto LAB_18008cdbd;
    }
    if (*(int *)(param_4 + 8) == 0) {
      lVar12 = 0;
    }
    else {
      plVar11 = (longlong *)(param_4 + -0xd0);
      if (param_4 == 0) {
        plVar11 = (longlong *)&DAT_00000010;
      }
      lVar12 = *plVar11;
    }
    uVar16 = FUN_1800aa158((ulonglong)CONCAT31((int3)(param_2 >> 8),!bVar4 && !bVar6),
                           *(uint *)(param_4 + -0xb4),lVar12,param_5,!bVar4 && !bVar6,local_c8);
    if (((char)uVar16 != '\0') && (*(int *)(*(longlong *)(param_1 + 0x1cf18) + 0x20) != 0x1002)) {
      plVar20 = *(longlong **)(*(longlong *)(param_1 + 0x1cf18) + 8);
      (**(code **)(*plVar20 + 400))
                (plVar20,*(undefined8 *)(*(longlong *)(lVar18 + param_4) + (ulonglong)uVar15 * 0x28)
                 ,local_c8);
      goto LAB_18008cdbd;
    }
LAB_18008cc50:
    lVar12 = (-(ulonglong)(bVar4 || bVar6) & 0xfffffffffffffff8) + 0x1cfe8;
  }
  else {
LAB_18008cc3f:
    if (!bVar5) goto LAB_18008cc50;
    lVar12 = 0x1cff0;
  }
  if (*(int *)(param_4 + 8) == 0) {
    lVar18 = 0;
  }
  else {
    plVar11 = (longlong *)(param_4 + -0xd0);
    if (param_4 == 0) {
      plVar11 = (longlong *)&DAT_00000010;
    }
    lVar18 = *plVar11;
  }
  FUN_1800aa244(param_1,*(uint *)(param_4 + -0xb4),lVar18,param_5);
  uVar9 = 0xffffffff;
  FUN_1800dbbbc(*(longlong *)(param_1 + 0x1cf10),(ulonglong)*(uint *)(param_1 + 0x28),
                (int *)&DAT_1801001b0,(int *)0x0,-1,'\0');
  FUN_1800dbe08(*(longlong *)(param_1 + 0x1cf10),(ulonglong)*(uint *)(param_1 + 0x28),
                (uint *)&DAT_180100328);
  local_138 = fVar22 * param_6;
  local_134 = fVar23 * param_7;
  local_130 = fVar22 * param_8;
  local_12c = fVar23 * param_9;
  local_110 = 0;
  local_108 = (longlong *)0x0;
  uStack_100 = 0;
  local_f8 = 0;
  uStack_f0 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_d8 = (longlong *)0x0;
  uStack_d0 = 0;
  local_128 = 0;
  uStack_120 = 0;
  if (bVar5) {
    uStack_d0 = *(undefined8 *)(*(longlong *)(local_150 + param_4) + 8 + (ulonglong)uVar15 * 0x28);
    piVar10 = (int *)&DAT_1801002b8;
    local_d8 = plVar20;
  }
  else {
    uStack_100 = *(undefined8 *)(*(longlong *)(local_150 + param_4) + (ulonglong)uVar15 * 0x28);
    piVar10 = (int *)&DAT_180100350;
    local_108 = plVar20;
  }
  uVar17 = 0;
  local_118 = iVar14;
  local_114 = param_3;
  FUN_1800dbc90(*(longlong *)(param_1 + 0x1cf10),(ulonglong)*(uint *)(param_1 + 0x28),piVar10,0);
  FUN_180089dfc(param_1,&local_138,*(longlong *)(lVar12 + param_1),uVar17,uVar9 & 0xffffff00);
LAB_18008cdbd:
  if (local_148 == (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x18))(plVar1);
  }
  else {
    FUN_1800929e8((longlong)local_148,uVar15,&local_160);
  }
  (**(code **)(*plVar1 + 0xb8))(plVar1,iVar14,param_3);
  LeaveCriticalSection((LPCRITICAL_SECTION)(*(longlong *)(param_1 + 0x1cf10) + 0x620));
  return CONCAT71((int7)((ulonglong)extraout_RAX >> 8),uVar21);
}

