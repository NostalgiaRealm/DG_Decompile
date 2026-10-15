/*
 * FUN_10091e2c at 10091e2c
 * undefined __fastcall FUN_10091e2c(int param_1)
 * Address ranges: 10091e2c-1009202c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_10091e2c(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  uVar4 = 0;
  do {
    puVar1 = (undefined4 *)(param_1 + 0x14);
    if (*(int *)(param_1 + 0x1258 + uVar4 * 4) != 0) {
      (**(code **)(*(int *)*puVar1 + 0x6c))(uVar4,0,0,0,0,0,0);
      iVar2 = *(int *)(param_1 + 0x1258 + uVar4 * 4);
      *(uint *)(iVar2 + 0x2c) = *(uint *)(iVar2 + 0x2c) & ~(1 << (uVar4 & 0x1f));
      (**(code **)(**(int **)(param_1 + 0x1258 + uVar4 * 4) + 8))();
      *(undefined4 *)(param_1 + 0x1258 + uVar4 * 4) = 0;
      *(uint *)(param_1 + 0x6678) = *(uint *)(param_1 + 0x6678) & ~(1 << (uVar4 & 0x1f));
    }
    uVar4 = uVar4 + 1;
  } while (uVar4 < 0x10);
  uVar4 = 0;
  do {
    if (*(int *)(param_1 + 0x1298 + uVar4 * 4) != 0) {
      (**(code **)(*(int *)*puVar1 + 0xd4))(uVar4,0,0,0);
      (**(code **)(**(int **)(param_1 + 0x1298 + uVar4 * 4) + 8))();
      *(undefined4 *)(param_1 + 0x1298 + uVar4 * 4) = 0;
      *(uint *)(param_1 + 0x6684) = *(uint *)(param_1 + 0x6684) & ~(1 << (uVar4 & 0x1f));
    }
    uVar4 = uVar4 + 1;
  } while (uVar4 < 5);
  uVar4 = 0;
  do {
    if (*(int *)(param_1 + 26000 + uVar4 * 4) != 0) {
      (**(code **)(*(int *)*puVar1 + 0xb0))(uVar4,0,0,0);
      *(undefined4 *)(*(int *)(param_1 + 26000 + uVar4 * 4) + 0x5c) = 0xffffffff;
      (**(code **)(**(int **)(param_1 + 26000 + uVar4 * 4) + 0xc))();
      *(undefined4 *)(param_1 + 26000 + uVar4 * 4) = 0;
    }
    *(undefined4 *)(param_1 + 0x65d0 + uVar4 * 4) = 0;
    *(undefined4 *)(param_1 + 0x6610 + uVar4 * 4) = 0;
    uVar4 = uVar4 + 1;
  } while (uVar4 < 0x10);
  if (*(int *)(param_1 + 0x658c) != 0) {
    (**(code **)(*(int *)*puVar1 + 0xb4))(0,0);
    *(undefined1 *)(*(int *)(param_1 + 0x658c) + 0x48) = 0;
    (**(code **)(**(int **)(param_1 + 0x658c) + 8))();
    *(undefined4 *)(param_1 + 0x658c) = 0;
  }
  if (*(undefined4 **)(param_1 + 0xc288) != (undefined4 *)0x0) {
    FUN_1009e840(*(undefined4 **)(param_1 + 0xc288));
    *(undefined4 *)(param_1 + 0xc288) = 0;
  }
  if (*(undefined4 **)(param_1 + 0xc28c) != (undefined4 *)0x0) {
    FUN_1009e598(*(undefined4 **)(param_1 + 0xc28c));
    *(undefined4 *)(param_1 + 0xc28c) = 0;
  }
  if (*(int *)(param_1 + 0xc284) != 0) {
    (**(code **)(*(int *)*puVar1 + 0x90))(0);
    FUN_1009c9c5(*(undefined4 **)(param_1 + 0xc284));
    *(undefined4 *)(param_1 + 0xc284) = 0;
  }
  local_40 = 0;
  local_3c = 0;
  local_38 = 0;
  local_34 = 0;
  local_30 = 0;
  local_2c = 0;
  local_28 = 0;
  local_24 = 0;
  local_20 = 0;
  local_1c = 0;
  local_18 = 0;
  local_14 = 0;
  local_10 = 0;
  local_c = 0;
  local_8 = 0;
  (**(code **)(*(int *)*puVar1 + 0x44))(4,1,&local_40,&local_10);
  uVar4 = 0;
  do {
    piVar3 = *(int **)(param_1 + 0x18 + uVar4 * 4);
    if (piVar3 != (int *)0x0) {
      FUN_1000604e(piVar3);
      *(undefined4 *)(param_1 + 0x18 + uVar4 * 4) = 0;
      *(undefined4 *)(param_1 + 0xc270 + uVar4 * 4) = 0;
    }
    uVar4 = uVar4 + 1;
  } while (uVar4 < 4);
  if (*(int *)(param_1 + 0x28) != 0) {
    FUN_1000604e(*(int **)(param_1 + 0x28));
    *(undefined4 *)(param_1 + 0x28) = 0;
    *(undefined4 *)(param_1 + 0xc280) = 0;
  }
  return;
}

