/*
 * FUN_1001850a at 1001850a
 * uint __fastcall FUN_1001850a(int param_1)
 * Address ranges: 1001850a-10018606
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint __fastcall FUN_1001850a(int param_1)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  SIZE_T SVar4;
  undefined4 *puVar5;
  uint uVar6;
  
  uVar3 = 0;
  uVar6 = 0xffffffff;
  if (*(uint *)(param_1 + 0x3b8) == 0) {
LAB_1001853a:
    if (uVar6 != 0xffffffff) goto LAB_100185be;
  }
  else {
    do {
      uVar6 = uVar3;
      if (*(int *)(*(int *)(param_1 + 0x3b4) + uVar3 * 4) == 0) goto LAB_1001853a;
      uVar3 = uVar3 + 1;
      uVar6 = 0xffffffff;
    } while (uVar3 < *(uint *)(param_1 + 0x3b8));
  }
  piVar1 = (int *)(param_1 + 0x3b4);
  iVar2 = *(int *)(param_1 + 0x3bc);
  if (*(int *)(param_1 + 0x3b8) == iVar2) {
    if (iVar2 == 0) {
      uVar3 = 0x10;
    }
    else {
      uVar3 = iVar2 * 2;
    }
    SVar4 = (SIZE_T)((ulonglong)uVar3 * 4);
    if ((int)((ulonglong)uVar3 * 4 >> 0x20) != 0) {
      SVar4 = 0xffffffff;
    }
    puVar5 = (undefined4 *)FUN_100cfd89(SVar4);
    if (puVar5 != (undefined4 *)0x0) {
      FUN_100cff00(puVar5,(undefined4 *)*piVar1,*(int *)(param_1 + 0x3bc) << 2);
      thunk_FUN_100cfd6c((LPVOID)*piVar1);
      *piVar1 = (int)puVar5;
      *(uint *)(param_1 + 0x3bc) = uVar3;
      goto LAB_10018597;
    }
  }
  else {
LAB_10018597:
    *(undefined4 *)(*piVar1 + *(int *)(param_1 + 0x3b8) * 4) = 0;
    *(int *)(param_1 + 0x3b8) = *(int *)(param_1 + 0x3b8) + 1;
    uVar6 = *(int *)(param_1 + 0x3b8) - 1;
  }
  if (uVar6 == 0xffffffff) {
    return 0xffffffff;
  }
LAB_100185be:
  puVar5 = (undefined4 *)FUN_100cfd55(0xac54);
  if (puVar5 == (undefined4 *)0x0) {
    puVar5 = (undefined4 *)0x0;
  }
  else {
    puVar5 = FUN_10017661(puVar5);
  }
  *(undefined4 **)(*(int *)(param_1 + 0x3b4) + uVar6 * 4) = puVar5;
  iVar2 = *(int *)(param_1 + 0x3b4);
  if (*(int *)(iVar2 + uVar6 * 4) == 0) {
    uVar6 = 0xffffffff;
  }
  else {
    FUN_100cfed0(*(int **)(iVar2 + uVar6 * 4),0,0xac54);
  }
  return uVar6;
}

