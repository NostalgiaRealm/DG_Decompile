/*
 * FUN_10028693 at 10028693
 * undefined __fastcall FUN_10028693(int param_1)
 * Address ranges: 10028693-100286eb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_10028693(int param_1)

{
  int *piVar1;
  uint uVar2;
  
  uVar2 = 0;
  do {
    piVar1 = *(int **)(param_1 + 0x3058 + uVar2 * 4);
    if (piVar1 != (int *)0x0) {
      FUN_100417d4(*(void **)(*(int *)(param_1 + 0x3018) + 0x3180),
                   *(int *)(*(int *)(param_1 + 0x3018) + 0x3184),piVar1);
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

