/*
 * FUN_180033020 at 180033020
 * undefined __fastcall FUN_180033020(longlong param_1)
 * Address ranges: 180033020-1800330e0
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180033020(longlong param_1)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  if (((*(char *)(param_1 + 0xed) != '\0') &&
      (puVar3 = *(undefined8 **)(param_1 + 0xd0), puVar3 != (undefined8 *)0x0)) &&
     (*(char *)(param_1 + 0xec) == '\0')) {
    puVar2 = *(undefined8 **)(param_1 + 0xe0);
    if (*(int *)(param_1 + 0xe8) == *(int *)(param_1 + 0xd8)) {
      FUN_1800fbec0(puVar3,puVar2,
                    (ulonglong)
                    ((*(uint *)(param_1 + 0xa8) >> 3) * *(int *)(param_1 + 0x90) *
                    *(int *)(param_1 + 0x8c)));
    }
    else {
      uVar1 = 0;
      if (*(int *)(param_1 + 0x90) != 0) {
        do {
          FUN_1800fbec0(puVar3,puVar2,
                        (ulonglong)
                        ((uint)(*(int *)(param_1 + 0xa8) * *(int *)(param_1 + 0x8c)) >> 3));
          uVar1 = uVar1 + 1;
          puVar2 = (undefined8 *)((longlong)puVar2 + (ulonglong)*(uint *)(param_1 + 0xe8));
          puVar3 = (undefined8 *)((longlong)puVar3 + (ulonglong)*(uint *)(param_1 + 0xd8));
        } while (uVar1 < *(uint *)(param_1 + 0x90));
      }
    }
  }
  *(undefined1 *)(param_1 + 0xed) = 0;
  return;
}

