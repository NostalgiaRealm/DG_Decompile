/*
 * FUN_10040dc0 at 10040dc0
 * undefined __fastcall FUN_10040dc0(int param_1)
 * Address ranges: 10040dc0-10040e15
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_10040dc0(int param_1)

{
  int *piVar1;
  uint uVar2;
  
  uVar2 = 0;
  do {
    piVar1 = *(int **)(param_1 + 0xfa80 + uVar2 * 4);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 4))
                (*(undefined4 *)(param_1 + 0xfa94 + uVar2 * 4),
                 *(undefined4 *)(param_1 + 0xfaa4 + uVar2 * 4),0);
    }
    uVar2 = uVar2 + 1;
  } while (uVar2 < 4);
  if (*(int **)(param_1 + 0xfa90) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0xfa90) + 4))
              (*(undefined4 *)(param_1 + 0xfab4),*(undefined4 *)(param_1 + 0xfab8),0);
  }
  return;
}

