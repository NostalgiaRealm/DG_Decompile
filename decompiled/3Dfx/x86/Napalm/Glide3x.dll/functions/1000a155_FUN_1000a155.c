/*
 * FUN_1000a155 at 1000a155
 * undefined __fastcall FUN_1000a155(int param_1)
 * Address ranges: 1000a155-1000a2ee
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_1000a155(int param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  undefined4 unaff_EBX;
  undefined4 uStack_14;
  
  FUN_1002ea00(*(int *)(param_1 + 0x3688) + 0x11c0);
  puVar1 = *(undefined4 **)(param_1 + 0x3694);
  piVar2 = *(int **)(*(int *)(*(int *)(param_1 + 0x3688) + 0x1300) + 0xc);
  if (puVar1 != (undefined4 *)0x0) {
    FUN_1003ea2f(puVar1);
    FUN_10055686(puVar1);
  }
  FUN_10041587(*(void **)(param_1 + 0x3680),*(int **)(param_1 + 0x3698));
  FUN_10041587(*(void **)(param_1 + 0x3680),*(int **)(param_1 + 0x36a8));
  *(undefined4 *)(param_1 + 0x36a8) = 0;
  FUN_100415ab(*(void **)(param_1 + 0x3680),*(uint *)(param_1 + 0x36b4));
  FUN_100415ab(*(void **)(param_1 + 0x3680),*(uint *)(param_1 + 14000));
  (**(code **)(**(int **)(param_1 + 0x36b4) + 8))(*(int **)(param_1 + 0x36b4));
  (**(code **)(**(int **)(param_1 + 14000) + 8))(*(int **)(param_1 + 14000));
  *(undefined4 *)(param_1 + 0x36b4) = 0;
  *(undefined4 *)(param_1 + 14000) = 0;
  FUN_10041587(*(void **)(param_1 + 0x3680),*(int **)(param_1 + 0x36ac));
  *(undefined4 *)(param_1 + 0x36ac) = 0;
  puVar1 = *(undefined4 **)(param_1 + 0x368c);
  if (puVar1 != (undefined4 *)0x0) {
    FUN_1004198a(puVar1);
    FUN_10055686(puVar1);
  }
  puVar1 = *(undefined4 **)(param_1 + 0x36a4);
  *(undefined4 *)(param_1 + 0x368c) = 0;
  if (puVar1 != (undefined4 *)0x0) {
    FUN_1003ea2f(puVar1);
    FUN_10055686(puVar1);
  }
  FUN_10041587(*(void **)(param_1 + 0x3680),*(int **)(param_1 + 0x369c));
  FUN_10041587(*(void **)(param_1 + 0x3680),*(int **)(param_1 + 0x36a0));
  *(undefined4 *)(param_1 + 0x36a4) = 0;
  *(undefined4 *)(param_1 + 0x369c) = 0;
  *(undefined4 *)(param_1 + 0x36a0) = 0;
  FUN_10042298(*(void **)(*(int *)(param_1 + 0x3688) + 0x15dc),*(int **)(param_1 + 0x36b8),2,piVar2,
               uStack_14,unaff_EBX);
  *(undefined4 *)(param_1 + 0x36b8) = 0xffffffff;
  return;
}

