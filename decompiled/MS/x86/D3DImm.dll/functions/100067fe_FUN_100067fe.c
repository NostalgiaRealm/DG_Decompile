/*
 * FUN_100067fe at 100067fe
 * uint __fastcall FUN_100067fe(int param_1)
 * Address ranges: 100067fe-100068fa
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint __fastcall FUN_100067fe(int param_1)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  SIZE_T SVar4;
  undefined4 *puVar5;
  uint uVar6;
  
  uVar3 = 0;
  uVar6 = 0xffffffff;
  if (*(uint *)(param_1 + 0x218) == 0) {
LAB_1000682e:
    if (uVar6 != 0xffffffff) goto LAB_100068b2;
  }
  else {
    do {
      uVar6 = uVar3;
      if (*(int *)(*(int *)(param_1 + 0x214) + uVar3 * 4) == 0) goto LAB_1000682e;
      uVar3 = uVar3 + 1;
      uVar6 = 0xffffffff;
    } while (uVar3 < *(uint *)(param_1 + 0x218));
  }
  piVar1 = (int *)(param_1 + 0x214);
  iVar2 = *(int *)(param_1 + 0x21c);
  if (*(int *)(param_1 + 0x218) == iVar2) {
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
    puVar5 = (undefined4 *)FUN_1005c789(SVar4);
    if (puVar5 != (undefined4 *)0x0) {
      FUN_1005ca00(puVar5,(undefined4 *)*piVar1,*(int *)(param_1 + 0x21c) << 2);
      thunk_FUN_1005c76c((LPVOID)*piVar1);
      *piVar1 = (int)puVar5;
      *(uint *)(param_1 + 0x21c) = uVar3;
      goto LAB_1000688b;
    }
  }
  else {
LAB_1000688b:
    *(undefined4 *)(*piVar1 + *(int *)(param_1 + 0x218) * 4) = 0;
    *(int *)(param_1 + 0x218) = *(int *)(param_1 + 0x218) + 1;
    uVar6 = *(int *)(param_1 + 0x218) - 1;
  }
  if (uVar6 == 0xffffffff) {
    return 0xffffffff;
  }
LAB_100068b2:
  puVar5 = (undefined4 *)FUN_1005c755(0xa5c);
  if (puVar5 == (undefined4 *)0x0) {
    puVar5 = (undefined4 *)0x0;
  }
  else {
    puVar5 = FUN_10005aa8(puVar5);
  }
  *(undefined4 **)(*(int *)(param_1 + 0x214) + uVar6 * 4) = puVar5;
  iVar2 = *(int *)(param_1 + 0x214);
  if (*(int *)(iVar2 + uVar6 * 4) == 0) {
    uVar6 = 0xffffffff;
  }
  else {
    FUN_1005c9cc(*(int **)(iVar2 + uVar6 * 4),0,0xa5c);
  }
  return uVar6;
}

