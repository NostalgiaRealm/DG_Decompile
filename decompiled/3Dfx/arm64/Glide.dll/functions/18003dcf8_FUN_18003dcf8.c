/*
 * FUN_18003dcf8 at 18003dcf8
 * undefined __cdecl FUN_18003dcf8(longlong param_1, uint param_2, int * param_3, longlong * param_4, byte param_5, byte param_6, byte param_7)
 * Address ranges: 18003dcf8-18003e2fb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18003dcf8(longlong param_1,uint param_2,int *param_3,longlong *param_4,byte param_5,
                  byte param_6,byte param_7)

{
  uint uVar1;
  bool bVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int *piVar7;
  longlong lVar8;
  uint extraout_w1;
  ulonglong uVar9;
  int iVar10;
  ulonglong uVar11;
  int iVar12;
  longlong lVar13;
  
  uVar9 = (ulonglong)param_2;
  uVar4 = FUN_180056b90((longlong)param_3,(uint)param_7 * 2 + 2,1);
  param_3[0x1a] = uVar4;
  uVar11 = (ulonglong)(param_2 + 3 | 0x410100);
  FUN_180057ab0(param_3,param_4,0xe,(ulonglong)uVar4,3,uVar11,0x1a4,uVar11);
  if ((param_5 & 1) != 0) {
    FUN_18003ca50(uVar9,param_3,param_4);
  }
  lVar13 = uVar9 * 0x180;
  lVar8 = lVar13 + param_1;
  iVar12 = *(int *)(lVar8 + 0x144);
  bVar2 = *(int *)(lVar8 + 0x13c) != *(int *)(lVar8 + 0x140);
  bVar3 = param_7 == 0;
  if ((iVar12 == 0) ||
     ((param_6 == 0 && (!bVar2 || bVar3) &&
      (*(float *)(lVar8 + 0x120) == *(float *)(lVar8 + 0x124) || param_7 == 0)))) {
    iVar10 = 0;
  }
  else {
    iVar10 = 1;
  }
  if (param_7 == 0 && iVar10 == 0) {
    uVar11 = 0;
    iVar10 = 0;
  }
  else {
    uVar4 = FUN_180056b90((longlong)param_3,1,1);
    uVar11 = (ulonglong)uVar4;
  }
  param_3[0x1c] = (int)uVar11;
  if (iVar12 == 0) {
    if ((param_7 & 1) == 0) goto LAB_18003e2c0;
    FUN_180057ab0(param_3,param_4,0x36,uVar11,1,(ulonglong)(uint)param_3[0x12],0xe4,lVar13 + 300);
    goto LAB_18003e2a8;
  }
  if (iVar10 == 0) {
    if ((param_7 & 1) == 0) goto LAB_18003e2c0;
    FUN_180057ab0(param_3,param_4,0x1c,uVar11,1,(ulonglong)(uint)param_3[0x12],0xe4,lVar13 + 0x120);
    goto LAB_18003e2a8;
  }
  if (!bVar2 || bVar3) {
    uVar4 = 0;
  }
  else {
    uVar4 = FUN_180056b90((longlong)param_3,1,1);
  }
  param_3[0x19] = uVar4;
  if (*param_3 == 0x40) {
    uVar4 = FUN_180056b90((longlong)param_3,1,1);
    param_3[0x1b] = uVar4;
    if (bVar2 && !bVar3) {
      FUN_180057ab0(param_3,param_4,0x1d,(ulonglong)(uint)param_3[0x19],1,
                    (ulonglong)(uint)param_3[0x12],0xe4,lVar13 + 0x11c);
    }
    FUN_180057ab0(param_3,param_4,0x34,(ulonglong)(uint)param_3[0x1b],1,
                  (ulonglong)(uint)param_3[0x12],0xe4,lVar13 + 0x11c);
  }
  else {
    FUN_18003c950(uVar9,param_3,param_4);
    FUN_180057ab0(param_3,param_4,0,(ulonglong)(uint)param_3[0x1b],1,(ulonglong)(uint)param_3[0x1b],
                  0,(ulonglong)(uint)param_3[0x12]);
    if (bVar2 && !bVar3) {
      FUN_180057ab0(param_3,param_4,0x1d,(ulonglong)(uint)param_3[0x19],1,
                    (ulonglong)(uint)param_3[0x1b],0,(ulonglong)(uint)param_3[0x12]);
    }
    FUN_180057ab0(param_3,param_4,0x34,(ulonglong)(uint)param_3[0x1b],1,
                  (ulonglong)(uint)param_3[0x1b],0,(ulonglong)(uint)param_3[0x12]);
  }
  FUN_180057ab0(param_3,param_4,0x33,(ulonglong)(uint)param_3[0x1b],1,(ulonglong)(uint)param_3[0x1b]
                ,0,(ulonglong)(uint)param_3[0x12]);
  if ((param_7 & 1) != 0) {
    uVar4 = param_3[0x19];
    if (uVar4 != 0) {
      FUN_180057ab0(param_3,param_4,0x37,(ulonglong)uVar4,1,(ulonglong)uVar4,0x100,
                    (ulonglong)(uint)param_3[0x12]);
    }
  }
  FUN_180057ab0(param_3,param_4,0x1c,(ulonglong)(uint)param_3[0x1c],1,(ulonglong)(uint)param_3[0x1b]
                ,0,0);
  uVar1 = *(uint *)(lVar8 + 0x148);
  uVar6 = param_3[0x1b];
  uVar4 = uVar1 & 1;
  piVar7 = param_3;
  if ((param_6 & 1) == 0) {
LAB_18003e190:
    FUN_180056c30((longlong)piVar7,uVar6);
  }
  else {
    param_3[uVar9 + 0x1d] = uVar6;
    FUN_180057ab0(param_3,param_4,0x1a,(ulonglong)uVar6,1,(ulonglong)(uint)param_3[0x1b],0,0);
    if (uVar4 != 0) {
      uVar5 = FUN_180056b90((longlong)param_3,1,1);
      uVar6 = FUN_180056b90((longlong)param_3,extraout_w1,1);
      FUN_180057ab0(param_3,param_4,0,(ulonglong)uVar5,1,
                    (ulonglong)(param_3[uVar9 + 0x1d] | 0x80000000),0,(ulonglong)(uint)param_3[0x16]
                   );
      FUN_180057ab0(param_3,param_4,1,(ulonglong)uVar6,1,(ulonglong)(uint)param_3[0x1c],0,
                    (ulonglong)(uint)param_3[0x16]);
      FUN_180057ab0(param_3,param_4,0x37,(ulonglong)(uint)param_3[uVar9 + 0x1d],1,(ulonglong)uVar6,0
                    ,(ulonglong)uVar5);
      piVar7 = (int *)FUN_180056c30((longlong)param_3,uVar5);
      goto LAB_18003e190;
    }
  }
  param_3[0x1b] = 0;
  if ((param_7 & 1) == 0) {
LAB_18003e2c0:
    lVar8 = FUN_180056c30((longlong)param_3,param_3[0x1a]);
    FUN_180056c30(lVar8,param_3[0x1c]);
    param_3[0x1a] = 0;
    param_3[0x1c] = 0;
    return;
  }
  uVar4 = uVar4 << 1 | (uint)((uVar1 & 2) != 0);
  if (uVar4 - 1 < 2) {
    FUN_180057ab0(param_3,param_4,0x1e,(ulonglong)(uint)param_3[0x1c],1,
                  (ulonglong)(uint)param_3[0x1c],0,(ulonglong)(uint)param_3[0x16]);
    if (uVar4 != 2) goto LAB_18003e270;
    FUN_180057ab0(param_3,param_4,1,(ulonglong)(uint)param_3[0x1c],1,(ulonglong)(uint)param_3[0x1c],
                  0,(ulonglong)(uint)param_3[0x16]);
  }
  else if (uVar4 == 3) {
    FUN_180057ab0(param_3,param_4,0x3c,(ulonglong)(uint)param_3[0x1c],1,
                  (ulonglong)(uint)param_3[0x1c],0,(ulonglong)(uint)param_3[0x16]);
  }
  else {
LAB_18003e270:
    if (uVar4 == 0) goto LAB_18003e2a8;
  }
  FUN_180057ab0(param_3,param_4,0x54,(ulonglong)(uint)param_3[0x1c],1,(ulonglong)(uint)param_3[0x1c]
                ,0,(ulonglong)(uint)param_3[0x12]);
LAB_18003e2a8:
  FUN_18003cbc8(param_1,param_2,param_3,param_4);
  return;
}

