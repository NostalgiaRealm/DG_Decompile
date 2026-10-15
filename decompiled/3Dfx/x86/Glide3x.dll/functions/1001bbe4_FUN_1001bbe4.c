/*
 * FUN_1001bbe4 at 1001bbe4
 * undefined __fastcall FUN_1001bbe4(int param_1)
 * Address ranges: 1001bbe4-1001bc3c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_1001bbe4(int param_1)

{
  int *piVar1;
  uint uVar2;
  
  uVar2 = 0;
  do {
    piVar1 = *(int **)(param_1 + 0x3058 + uVar2 * 4);
    if (piVar1 != (int *)0x0) {
      FUN_10043f2c(*(void **)(*(int *)(param_1 + 0x3018) + 0x3300),
                   *(int *)(*(int *)(param_1 + 0x3018) + 0x3304),piVar1);
      *(undefined4 *)(param_1 + 0x3058 + uVar2 * 4) = 0;
    }
    piVar1 = *(int **)(param_1 + 0x301c + uVar2 * 4);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 8))(piVar1);
      *(undefined4 *)(param_1 + 0x301c + uVar2 * 4) = 0;
    }
    uVar2 = uVar2 + 1;
  } while (uVar2 < 0xf);
  return;
}

