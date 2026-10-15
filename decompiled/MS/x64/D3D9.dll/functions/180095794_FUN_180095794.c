/*
 * FUN_180095794 at 180095794
 * longlong * __fastcall FUN_180095794(undefined8 param_1, longlong * param_2, longlong * param_3, longlong * param_4, byte param_5, undefined8 param_6, byte param_7, undefined8 param_8, int * param_9, int * param_10)
 * Address ranges: 180095794-18009595e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

longlong *
FUN_180095794(undefined8 param_1,longlong *param_2,longlong *param_3,longlong *param_4,byte param_5,
             undefined8 param_6,byte param_7,undefined8 param_8,int *param_9,int *param_10)

{
  LONG LVar1;
  LONG LVar2;
  LONG LVar3;
  bool bVar4;
  bool bVar5;
  char cVar6;
  undefined1 uVar7;
  longlong lVar8;
  LPRECT ptVar9;
  longlong *plVar10;
  ulonglong uVar11;
  undefined1 uVar12;
  undefined1 local_98 [16];
  uint local_88;
  uint local_80;
  short local_7c;
  short local_7a;
  undefined4 local_74;
  tagRECT local_60;
  uint local_50;
  uint local_48;
  short local_44;
  short local_42;
  undefined4 local_3c;
  
  *param_2 = (longlong)(param_4 + 0xc);
  param_2[1] = (longlong)(param_3 + 0xc);
  lVar8 = *(longlong *)((longlong)param_4 + 0x7c);
  if (lVar8 == 0) {
    lVar8 = *(longlong *)((longlong)param_4 + 0x74);
  }
  param_2[2] = lVar8;
  plVar10 = *(longlong **)((longlong)param_3 + 0x7c);
  if (plVar10 == (longlong *)0x0) {
    plVar10 = *(longlong **)((longlong)param_3 + 0x74);
  }
  param_2[3] = (longlong)plVar10;
  lVar8 = (**(code **)(*plVar10 + 0x50))(plVar10,local_98);
  *(undefined4 *)(param_2 + 5) = *(undefined4 *)(lVar8 + 0x20);
  lVar8 = (**(code **)(*(longlong *)param_2[2] + 0x50))((longlong *)param_2[2],local_98);
  uVar12 = 1;
  *(undefined4 *)((longlong)param_2 + 0x24) = *(undefined4 *)(lVar8 + 0x20);
  *(undefined4 *)(param_2 + 4) = 3;
  if ((*(int *)((longlong)param_4 + 0x2c) != 0) || (*(int *)((longlong)param_3 + 0x2c) != 0)) {
    uVar7 = 0;
    uVar11 = 3;
    goto LAB_18009584c;
  }
  cVar6 = (**(code **)(*param_4 + 0xa8))(param_4);
  if (cVar6 == '\0') {
    cVar6 = (**(code **)(*param_3 + 0xa8))(param_3);
    uVar7 = 0;
    if (cVar6 != '\0') goto LAB_18009583d;
  }
  else {
LAB_18009583d:
    uVar7 = 1;
  }
  uVar11 = (ulonglong)*(uint *)(param_2 + 4);
LAB_18009584c:
  *(undefined1 *)(param_2 + 0xb) = uVar7;
  *(bool *)((longlong)param_2 + 0x5b) = *(int *)((longlong)param_4 + 0x44) - 3U < 3;
  ptVar9 = FUN_1800aab5c(uVar11,&local_60,param_3,param_4,param_9,param_10,(byte)uVar11);
  LVar1 = ptVar9->top;
  LVar2 = ptVar9->right;
  LVar3 = ptVar9->bottom;
  *(LONG *)((longlong)param_2 + 0x34) = ptVar9->left;
  *(LONG *)(param_2 + 7) = LVar1;
  *(LONG *)((longlong)param_2 + 0x3c) = LVar2;
  *(LONG *)(param_2 + 8) = LVar3;
  LVar1 = ptVar9[1].top;
  LVar2 = ptVar9[1].right;
  LVar3 = ptVar9[1].bottom;
  *(LONG *)((longlong)param_2 + 0x44) = ptVar9[1].left;
  *(LONG *)(param_2 + 9) = LVar1;
  *(LONG *)((longlong)param_2 + 0x4c) = LVar2;
  *(LONG *)(param_2 + 10) = LVar3;
  *(LONG *)((longlong)param_2 + 0x54) = ptVar9[2].left;
  (**(code **)(*(longlong *)param_2[3] + 0x50))((longlong *)param_2[3],local_98);
  (**(code **)(*(longlong *)param_2[2] + 0x50))();
  if ((((*(int *)((longlong)param_2 + 0x34) == 0) && ((int)param_2[7] == 0)) &&
      (*(uint *)((longlong)param_2 + 0x3c) == local_88 >> (param_5 & 0x1f))) &&
     (*(uint *)(param_2 + 8) == local_80 >> (param_5 & 0x1f))) {
    bVar5 = true;
  }
  else {
    bVar5 = false;
  }
  if (((*(int *)((longlong)param_2 + 0x44) == 0) && ((int)param_2[9] == 0)) &&
     ((*(uint *)((longlong)param_2 + 0x4c) == local_50 >> (param_7 & 0x1f) &&
      (*(uint *)(param_2 + 10) == local_48 >> (param_7 & 0x1f))))) {
    bVar4 = true;
  }
  else {
    bVar4 = false;
  }
  *(undefined4 *)((longlong)param_2 + 0x2c) = local_3c;
  *(undefined4 *)(param_2 + 6) = local_74;
  if ((bVar4) && (bVar5)) {
    uVar7 = 1;
  }
  else {
    uVar7 = 0;
  }
  *(undefined1 *)((longlong)param_2 + 0x5a) = uVar7;
  if (((((!bVar4) || (!bVar5)) || (local_42 != 1)) || ((local_7a != 1 || (local_44 != 1)))) ||
     (local_7c != 1)) {
    uVar12 = 0;
  }
  *(undefined1 *)((longlong)param_2 + 0x59) = uVar12;
  return param_2;
}

