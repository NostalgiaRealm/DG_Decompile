/*
 * FUN_10016108 at 10016108
 * undefined __fastcall FUN_10016108(int param_1)
 * Address ranges: 10016108-100162a1
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_10016108(int param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  undefined4 unaff_EBX;
  undefined4 uStack_14;
  
  FUN_10036a10(*(int *)(param_1 + 0x3188) + 0x11c0);
  puVar1 = *(undefined4 **)(param_1 + 0x3194);
  piVar2 = *(int **)(*(int *)(*(int *)(param_1 + 0x3188) + 0x1300) + 0xc);
  if (puVar1 != (undefined4 *)0x0) {
    FUN_10038ecc(puVar1);
    FUN_1004f9b6(puVar1);
  }
  FUN_1003ba29(*(void **)(param_1 + 0x3180),*(int **)(param_1 + 0x3198));
  FUN_1003ba29(*(void **)(param_1 + 0x3180),*(int **)(param_1 + 0x31a8));
  *(undefined4 *)(param_1 + 0x31a8) = 0;
  FUN_1003ba4d(*(void **)(param_1 + 0x3180),*(uint *)(param_1 + 0x31b4));
  FUN_1003ba4d(*(void **)(param_1 + 0x3180),*(uint *)(param_1 + 0x31b0));
  (**(code **)(**(int **)(param_1 + 0x31b4) + 8))(*(int **)(param_1 + 0x31b4));
  (**(code **)(**(int **)(param_1 + 0x31b0) + 8))(*(int **)(param_1 + 0x31b0));
  *(undefined4 *)(param_1 + 0x31b4) = 0;
  *(undefined4 *)(param_1 + 0x31b0) = 0;
  FUN_1003ba29(*(void **)(param_1 + 0x3180),*(int **)(param_1 + 0x31ac));
  *(undefined4 *)(param_1 + 0x31ac) = 0;
  puVar1 = *(undefined4 **)(param_1 + 0x318c);
  if (puVar1 != (undefined4 *)0x0) {
    FUN_1003be2c(puVar1);
    FUN_1004f9b6(puVar1);
  }
  puVar1 = *(undefined4 **)(param_1 + 0x31a4);
  *(undefined4 *)(param_1 + 0x318c) = 0;
  if (puVar1 != (undefined4 *)0x0) {
    FUN_10038ecc(puVar1);
    FUN_1004f9b6(puVar1);
  }
  FUN_1003ba29(*(void **)(param_1 + 0x3180),*(int **)(param_1 + 0x319c));
  FUN_1003ba29(*(void **)(param_1 + 0x3180),*(int **)(param_1 + 0x31a0));
  *(undefined4 *)(param_1 + 0x31a4) = 0;
  *(undefined4 *)(param_1 + 0x319c) = 0;
  *(undefined4 *)(param_1 + 0x31a0) = 0;
  FUN_1003c73a(*(void **)(*(int *)(param_1 + 0x3188) + 0x15dc),*(int **)(param_1 + 0x31b8),2,piVar2,
               uStack_14,unaff_EBX);
  *(undefined4 *)(param_1 + 0x31b8) = 0xffffffff;
  return;
}

