/*
 * FUN_1800330e4 at 1800330e4
 * undefined __fastcall FUN_1800330e4(longlong param_1)
 * Address ranges: 1800330e4-18003319f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800330e4(longlong param_1)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  if ((*(char *)(param_1 + 0xee) == '\0') && (*(char *)(param_1 + 0xec) == '\0')) {
    puVar3 = *(undefined8 **)(param_1 + 0xd0);
    puVar2 = *(undefined8 **)(param_1 + 0xe0);
    if (*(int *)(param_1 + 0xe8) == *(int *)(param_1 + 0xd8)) {
      FUN_1800fbec0(puVar2,puVar3,
                    (ulonglong)
                    ((*(uint *)(param_1 + 0xa8) >> 3) * *(int *)(param_1 + 0x90) *
                    *(int *)(param_1 + 0x8c)));
    }
    else {
      uVar1 = 0;
      if (*(int *)(param_1 + 0x90) != 0) {
        do {
          FUN_1800fbec0(puVar2,puVar3,
                        (ulonglong)
                        ((uint)(*(int *)(param_1 + 0xa8) * *(int *)(param_1 + 0x8c)) >> 3));
          uVar1 = uVar1 + 1;
          puVar3 = (undefined8 *)((longlong)puVar3 + (ulonglong)*(uint *)(param_1 + 0xd8));
          puVar2 = (undefined8 *)((longlong)puVar2 + (ulonglong)*(uint *)(param_1 + 0xe8));
        } while (uVar1 < *(uint *)(param_1 + 0x90));
      }
    }
  }
  *(undefined1 *)(param_1 + 0xee) = 1;
  return;
}

