/*
 * FUN_1801a9318 at 1801a9318
 * undefined FUN_1801a9318(void)
 * Address ranges: 1801a9318-1801a93bf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1801a9318(longlong param_1)

{
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = 0;
  if (*(int *)(param_1 + 0x34) != 0) {
    do {
      uVar2 = 0;
      if (*(int *)(param_1 + 0x30) != 0) {
        do {
          FUN_1801bb190(param_1,*(undefined4 *)(param_1 + 0x28),uVar2);
          uVar1 = FUN_1801bb148(param_1,*(undefined4 *)(param_1 + 0x24));
          thunk_FUN_180223c20(((ulonglong)(uVar2 + *(int *)(param_1 + 0x3c) * uVar3) << 5 | 0x10) +
                              *(longlong *)(param_1 + 0x164),0,0,uVar1);
          uVar2 = uVar2 + 1;
        } while (uVar2 < *(uint *)(param_1 + 0x30));
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < *(uint *)(param_1 + 0x34));
  }
  return;
}

