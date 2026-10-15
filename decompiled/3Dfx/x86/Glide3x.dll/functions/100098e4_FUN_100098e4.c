/*
 * FUN_100098e4 at 100098e4
 * undefined __fastcall FUN_100098e4(int param_1)
 * Address ranges: 100098e4-10009a7d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_100098e4(int param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  undefined4 unaff_EBX;
  undefined4 uStack_14;
  
  FUN_1002b5f0(*(int *)(param_1 + 0x3308) + 0x11c0);
  puVar1 = *(undefined4 **)(param_1 + 0x3314);
  piVar2 = *(int **)(*(int *)(*(int *)(param_1 + 0x3308) + 0x1300) + 0xc);
  if (puVar1 != (undefined4 *)0x0) {
    FUN_1003b621(puVar1);
    FUN_10052276(puVar1);
  }
  FUN_1003e17e(*(void **)(param_1 + 0x3300),*(int **)(param_1 + 0x3318));
  FUN_1003e17e(*(void **)(param_1 + 0x3300),*(int **)(param_1 + 0x3328));
  *(undefined4 *)(param_1 + 0x3328) = 0;
  FUN_1003e1a2(*(void **)(param_1 + 0x3300),*(uint *)(param_1 + 0x3334));
  FUN_1003e1a2(*(void **)(param_1 + 0x3300),*(uint *)(param_1 + 0x3330));
  (**(code **)(**(int **)(param_1 + 0x3334) + 8))(*(int **)(param_1 + 0x3334));
  (**(code **)(**(int **)(param_1 + 0x3330) + 8))(*(int **)(param_1 + 0x3330));
  *(undefined4 *)(param_1 + 0x3334) = 0;
  *(undefined4 *)(param_1 + 0x3330) = 0;
  FUN_1003e17e(*(void **)(param_1 + 0x3300),*(int **)(param_1 + 0x332c));
  *(undefined4 *)(param_1 + 0x332c) = 0;
  puVar1 = *(undefined4 **)(param_1 + 0x330c);
  if (puVar1 != (undefined4 *)0x0) {
    FUN_1003e581(puVar1);
    FUN_10052276(puVar1);
  }
  puVar1 = *(undefined4 **)(param_1 + 0x3324);
  *(undefined4 *)(param_1 + 0x330c) = 0;
  if (puVar1 != (undefined4 *)0x0) {
    FUN_1003b621(puVar1);
    FUN_10052276(puVar1);
  }
  FUN_1003e17e(*(void **)(param_1 + 0x3300),*(int **)(param_1 + 0x331c));
  FUN_1003e17e(*(void **)(param_1 + 0x3300),*(int **)(param_1 + 0x3320));
  *(undefined4 *)(param_1 + 0x3324) = 0;
  *(undefined4 *)(param_1 + 0x331c) = 0;
  *(undefined4 *)(param_1 + 0x3320) = 0;
  FUN_1003ee8f(*(void **)(*(int *)(param_1 + 0x3308) + 0x15dc),*(int **)(param_1 + 0x3338),2,piVar2,
               uStack_14,unaff_EBX);
  *(undefined4 *)(param_1 + 0x3338) = 0xffffffff;
  return;
}

