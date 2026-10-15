/*
 * FUN_1001438d at 1001438d
 * uint __fastcall FUN_1001438d(int param_1)
 * Address ranges: 1001438d-10014489
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint __fastcall FUN_1001438d(int param_1)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  SIZE_T SVar4;
  undefined4 *puVar5;
  uint uVar6;
  
  uVar3 = 0;
  uVar6 = 0xffffffff;
  if (*(uint *)(param_1 + 0x214) == 0) {
LAB_100143bd:
    if (uVar6 != 0xffffffff) goto LAB_10014441;
  }
  else {
    do {
      uVar6 = uVar3;
      if (*(int *)(*(int *)(param_1 + 0x210) + uVar3 * 4) == 0) goto LAB_100143bd;
      uVar3 = uVar3 + 1;
      uVar6 = 0xffffffff;
    } while (uVar3 < *(uint *)(param_1 + 0x214));
  }
  piVar1 = (int *)(param_1 + 0x210);
  iVar2 = *(int *)(param_1 + 0x218);
  if (*(int *)(param_1 + 0x214) == iVar2) {
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
    puVar5 = (undefined4 *)FUN_100ad4a9(SVar4);
    if (puVar5 != (undefined4 *)0x0) {
      FUN_100adac0(puVar5,(undefined4 *)*piVar1,*(int *)(param_1 + 0x218) << 2);
      thunk_FUN_100ad48c((LPVOID)*piVar1);
      *piVar1 = (int)puVar5;
      *(uint *)(param_1 + 0x218) = uVar3;
      goto LAB_1001441a;
    }
  }
  else {
LAB_1001441a:
    *(undefined4 *)(*piVar1 + *(int *)(param_1 + 0x214) * 4) = 0;
    *(int *)(param_1 + 0x214) = *(int *)(param_1 + 0x214) + 1;
    uVar6 = *(int *)(param_1 + 0x214) - 1;
  }
  if (uVar6 == 0xffffffff) {
    return 0xffffffff;
  }
LAB_10014441:
  puVar5 = (undefined4 *)FUN_100ad475(0x93a4);
  if (puVar5 == (undefined4 *)0x0) {
    puVar5 = (undefined4 *)0x0;
  }
  else {
    puVar5 = FUN_10013622(puVar5);
  }
  *(undefined4 **)(*(int *)(param_1 + 0x210) + uVar6 * 4) = puVar5;
  iVar2 = *(int *)(param_1 + 0x210);
  if (*(int *)(iVar2 + uVar6 * 4) == 0) {
    uVar6 = 0xffffffff;
  }
  else {
    FUN_100ada8e(*(int **)(iVar2 + uVar6 * 4),0,0x93a4);
  }
  return uVar6;
}

