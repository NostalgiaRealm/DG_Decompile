/*
 * FUN_18008aa60 at 18008aa60
 * longlong * __fastcall FUN_18008aa60(undefined8 param_1, longlong * param_2, longlong * param_3, longlong * param_4, char param_5, int param_6, int param_7, int param_8, int param_9, int * param_10, int * param_11)
 * Address ranges: 18008aa60-18008ad6b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

longlong *
FUN_18008aa60(undefined8 param_1,longlong *param_2,longlong *param_3,longlong *param_4,char param_5,
             int param_6,int param_7,int param_8,int param_9,int *param_10,int *param_11)

{
  LONG LVar1;
  LONG LVar2;
  LONG LVar3;
  bool bVar4;
  bool bVar5;
  char cVar6;
  char cVar7;
  char cVar8;
  char cVar9;
  BOOL BVar10;
  longlong lVar11;
  LPRECT ptVar12;
  longlong *plVar13;
  longlong lVar14;
  undefined1 uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  tagRECT local_98;
  undefined4 local_88;
  undefined4 local_84;
  uint local_68;
  uint local_64;
  int local_60;
  int local_5c;
  undefined4 local_58;
  undefined4 local_54;
  
  uVar15 = 1;
  uVar16 = param_9 * *(int *)((longlong)param_4 + 0x3c) + param_8;
  uVar17 = param_7 * *(int *)((longlong)param_3 + 0x3c) + param_6;
  if ((param_4[0x1a] == 0) ||
     (BVar10 = IsRectEmpty((RECT *)(param_4[0x1a] +
                                   ((ulonglong)uVar16 * 4 + 3 + (ulonglong)uVar16) * 8)),
     BVar10 != 0)) {
    bVar5 = true;
  }
  else {
    bVar5 = false;
  }
  if ((param_3[0x1a] == 0) ||
     (BVar10 = IsRectEmpty((RECT *)(param_3[0x1a] +
                                   ((ulonglong)uVar17 * 4 + 3 + (ulonglong)uVar17) * 8)),
     BVar10 != 0)) {
    bVar4 = true;
  }
  else {
    bVar4 = false;
  }
  if ((param_5 != '\0' || bVar4) || (cVar6 = (**(code **)(*param_3 + 0xa8))(param_3), cVar6 != '\0')
     ) {
    uVar18 = 2;
  }
  else {
    uVar18 = 0;
  }
  if ((bVar5) || (cVar6 = (**(code **)(*param_4 + 0xa8))(param_4), cVar6 != '\0')) {
    uVar19 = 1;
  }
  else {
    uVar19 = 0;
  }
  uVar19 = uVar19 | uVar18;
  cVar6 = '\0';
  if ((((param_5 == '\0') && (cVar7 = (**(code **)(*param_3 + 0x98))(param_3), cVar7 != '\0')) &&
      (param_3[0x17] != 0)) &&
     (((param_4[0x17] != 0 &&
       (BVar10 = IsRectEmpty((RECT *)(param_4[0x12] + ((ulonglong)uVar16 * 5 + 3) * 8)), BVar10 != 0
       )) && (BVar10 = IsRectEmpty((RECT *)(param_3[0x12] + (ulonglong)uVar17 * 0x28 + 0x18)),
             BVar10 != 0)))) {
    uVar19 = 0;
  }
  lVar11 = param_4[0x10];
  if (lVar11 == 0) {
    lVar11 = param_4[0xf];
  }
  plVar13 = (longlong *)param_3[0x10];
  if (plVar13 == (longlong *)0x0) {
    plVar13 = (longlong *)param_3[0xf];
  }
  if (uVar19 == 0) {
    plVar13 = (longlong *)param_3[0x17];
  }
  else if (uVar19 != 2) {
    lVar14 = param_4[0x11];
    goto LAB_18008ac07;
  }
  lVar14 = param_4[0x19];
  lVar11 = param_4[0x17];
LAB_18008ac07:
  param_2[2] = (longlong)plVar13;
  param_2[1] = lVar11;
  *param_2 = lVar14;
  *(uint *)(param_2 + 3) = uVar19;
  cVar7 = cVar6;
  if (((*(int *)((longlong)param_4 + 0x2c) == 0) && (*(int *)((longlong)param_3 + 0x2c) == 0)) &&
     ((plVar13 = param_4, cVar8 = (**(code **)(*param_4 + 0xa8))(), cVar8 != '\0' ||
      (plVar13 = param_3, cVar8 = (**(code **)(*param_3 + 0xa8))(), cVar8 != '\0')))) {
    cVar7 = '\x01';
  }
  *(char *)(param_2 + 10) = cVar7;
  *(bool *)((longlong)param_2 + 0x53) = *(int *)((longlong)param_4 + 0x44) - 3U < 3;
  ptVar12 = FUN_1800aab5c(plVar13,&local_98,param_3,param_4,param_10,param_11,(byte)uVar19);
  LVar1 = ptVar12->top;
  LVar2 = ptVar12->right;
  LVar3 = ptVar12->bottom;
  *(LONG *)((longlong)param_2 + 0x2c) = ptVar12->left;
  *(LONG *)(param_2 + 6) = LVar1;
  *(LONG *)((longlong)param_2 + 0x34) = LVar2;
  *(LONG *)(param_2 + 7) = LVar3;
  LVar1 = ptVar12[1].top;
  LVar2 = ptVar12[1].right;
  LVar3 = ptVar12[1].bottom;
  *(LONG *)((longlong)param_2 + 0x3c) = ptVar12[1].left;
  *(LONG *)(param_2 + 8) = LVar1;
  *(LONG *)((longlong)param_2 + 0x44) = LVar2;
  *(LONG *)(param_2 + 9) = LVar3;
  *(LONG *)((longlong)param_2 + 0x4c) = ptVar12[2].left;
  (**(code **)(*(longlong *)param_2[2] + 0x50))((longlong *)param_2[2],&local_68);
  (**(code **)(*(longlong *)param_2[1] + 0x50))((longlong *)param_2[1],&local_98);
  if ((((*(int *)((longlong)param_2 + 0x2c) != 0) || ((int)param_2[6] != 0)) ||
      (*(uint *)((longlong)param_2 + 0x34) != local_68 >> ((byte)param_6 & 0x1f))) ||
     (cVar7 = '\x01', *(uint *)(param_2 + 7) != local_64 >> ((byte)param_6 & 0x1f))) {
    cVar7 = cVar6;
  }
  if (((*(int *)((longlong)param_2 + 0x3c) != 0) || ((int)param_2[8] != 0)) ||
     ((*(uint *)((longlong)param_2 + 0x44) != (uint)local_98.left >> ((byte)param_8 & 0x1f) ||
      (cVar8 = '\x01', *(uint *)(param_2 + 9) != (uint)local_98.top >> ((byte)param_8 & 0x1f))))) {
    cVar8 = cVar6;
  }
  *(undefined4 *)((longlong)param_2 + 0x1c) = local_88;
  *(undefined4 *)(param_2 + 4) = local_58;
  *(undefined4 *)((longlong)param_2 + 0x24) = local_84;
  *(undefined4 *)(param_2 + 5) = local_54;
  if ((cVar8 == '\0') || (cVar9 = '\x01', cVar7 == '\0')) {
    cVar9 = cVar6;
  }
  *(char *)((longlong)param_2 + 0x52) = cVar9;
  if ((((cVar8 == '\0') || (cVar7 == '\0')) || (local_98.right != 1)) ||
     (((local_60 != 1 || (local_98.bottom != 1)) || (local_5c != 1)))) {
    uVar15 = 0;
  }
  *(undefined1 *)((longlong)param_2 + 0x51) = uVar15;
  return param_2;
}

