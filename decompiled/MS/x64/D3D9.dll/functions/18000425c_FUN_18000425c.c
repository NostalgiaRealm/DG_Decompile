/*
 * FUN_18000425c at 18000425c
 * int __fastcall FUN_18000425c(longlong param_1, uint param_2, uint param_3, int param_4, undefined8 * param_5)
 * Address ranges: 18000425c-180004452
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_18000425c(longlong param_1,uint param_2,uint param_3,int param_4,undefined8 *param_5)

{
  ulonglong uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined8 *puVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  int iVar8;
  undefined8 *puVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  undefined8 *puVar13;
  longlong lVar14;
  
  iVar8 = -0x7789f794;
  if (param_5 == (undefined8 *)0x0) {
    return -0x7789f794;
  }
  *param_5 = 0;
  param_5[1] = 0;
  if (*(uint *)(param_1 + 0x70) <= param_2) {
    return -0x7789f794;
  }
  puVar9 = (undefined8 *)0x0;
  uVar10 = 0;
  uVar7 = (ulonglong)*(uint *)(*(longlong *)(param_1 + 0x68) + (ulonglong)param_2 * 4);
  lVar14 = DAT_180111f20;
  uVar11 = uVar10;
  uVar12 = 0;
  if ((((*(byte *)(DAT_180111f20 + 0x9e3) & 4) != 0) &&
      (iVar4 = param_4, iVar2 = FUN_180002500(param_4), uVar11 = 0, uVar12 = 0, iVar2 == 0x20)) &&
     (uVar3 = FUN_1800039d0(param_1,iVar4), (char)uVar3 != '\0')) {
    puVar5 = (undefined8 *)thunk_FUN_1800fbccc(0x10);
    if (puVar5 != (undefined8 *)0x0) {
      FUN_1800fbcf0((LPVOID)0x0);
      uVar10 = 0x10;
      *(undefined1 *)puVar5 = 0x20;
      puVar9 = puVar5;
    }
    uVar12 = (uint)(puVar5 != (undefined8 *)0x0);
    lVar14 = DAT_180111f20;
    uVar11 = uVar10;
  }
  if ((((*(byte *)(lVar14 + 0x9e3) & 2) != 0) && (iVar4 = FUN_180002500(param_4), iVar4 == 0x10)) &&
     (uVar3 = FUN_1800039d0(param_1,param_4), (char)uVar3 != '\0')) {
    puVar5 = puVar9;
    if (uVar12 == uVar11) {
      uVar10 = 0x10;
      if (uVar11 != 0) {
        uVar10 = uVar11 * 2;
      }
      puVar5 = (undefined8 *)thunk_FUN_1800fbccc((ulonglong)uVar10);
      lVar14 = DAT_180111f20;
      if (puVar5 == (undefined8 *)0x0) goto LAB_180004380;
      FUN_1800fbec0(puVar5,puVar9,(ulonglong)uVar11);
      FUN_1800fbcf0(puVar9);
      lVar14 = DAT_180111f20;
    }
    uVar6 = (ulonglong)uVar12;
    uVar12 = uVar12 + 1;
    *(undefined1 *)(uVar6 + (longlong)puVar5) = 0x10;
    puVar9 = puVar5;
  }
LAB_180004380:
  if (((*(char *)(lVar14 + 0x822) == '\0') || (*(int *)(lVar14 + 0x870) == 0)) ||
     (*(int *)(lVar14 + 0x874) == 0)) {
    puVar13 = &DAT_180112b08;
    puVar5 = &DAT_180112b10;
  }
  else {
    puVar13 = &DAT_180112b18;
    puVar5 = &DAT_180112b20;
  }
  if (uVar12 == 0) {
    iVar8 = (-(uint)(param_3 < *(uint *)(puVar5 + uVar7 * 0x4b)) & 0xfffffffe) + 0x8876086c;
  }
  uVar6 = (ulonglong)param_3 / (ulonglong)*(uint *)(puVar5 + uVar7 * 0x4b);
  uVar1 = (ulonglong)param_3 % (ulonglong)*(uint *)(puVar5 + uVar7 * 0x4b);
  if ((uint)uVar6 < uVar12) {
    iVar8 = 0;
    *(undefined4 *)param_5 = *(undefined4 *)(puVar13[uVar7 * 0x4b] + uVar1 * 0x18);
    *(undefined4 *)((longlong)param_5 + 4) =
         *(undefined4 *)(puVar13[uVar7 * 0x4b] + 4 + uVar1 * 0x18);
    uVar3 = 0x23;
    *(undefined4 *)(param_5 + 1) = *(undefined4 *)(puVar13[uVar7 * 0x4b] + 0x10 + uVar1 * 0x18);
    if (param_4 != 0x23) {
      uVar3 = FUN_180001fa0(param_1,(uint)*(byte *)(uVar6 + (longlong)puVar9));
    }
    *(undefined4 *)((longlong)param_5 + 0xc) = uVar3;
  }
  FUN_1800fbcf0(puVar9);
  return iVar8;
}

