/*
 * FUN_180083f10 at 180083f10
 * undefined FUN_180083f10(void)
 * Address ranges: 180083f10-180083fbb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180083f10(longlong param_1)

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
          FUN_1800a2b98(param_1,*(undefined4 *)(param_1 + 0x28),uVar2);
          uVar1 = FUN_1800a2b50(param_1,*(undefined4 *)(param_1 + 0x24));
          (*__imp_USER32_dll_SetRect)
                    (*(longlong *)(param_1 + 0x148) +
                     (ulonglong)(uVar2 + *(int *)(param_1 + 0x3c) * uVar3) * 0x28 + 0x18,0,0,uVar1);
          uVar2 = uVar2 + 1;
        } while (uVar2 < *(uint *)(param_1 + 0x30));
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < *(uint *)(param_1 + 0x34));
  }
  return;
}

