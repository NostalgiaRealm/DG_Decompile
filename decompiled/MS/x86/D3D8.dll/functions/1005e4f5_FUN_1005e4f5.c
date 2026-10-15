/*
 * FUN_1005e4f5 at 1005e4f5
 * undefined __fastcall FUN_1005e4f5(int param_1)
 * Address ranges: 1005e4f5-1005e544
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_1005e4f5(int param_1)

{
  int *piVar1;
  uint uVar2;
  
  uVar2 = 0;
  do {
    piVar1 = *(int **)(param_1 + 0x1d0dc + uVar2 * 4);
    if (piVar1 != (int *)0x0) {
      FUN_100929d5(*(void **)(param_1 + 0x1cf00),*(int *)(param_1 + 0x14),piVar1);
      *(undefined4 *)(param_1 + 0x1d0dc + uVar2 * 4) = 0;
    }
    piVar1 = *(int **)(param_1 + 0x1cfdc + uVar2 * 4);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 8))(piVar1);
      *(undefined4 *)(param_1 + 0x1cfdc + uVar2 * 4) = 0;
    }
    uVar2 = uVar2 + 1;
  } while (uVar2 < 0x40);
  return;
}

