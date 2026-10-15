/*
 * FUN_180092580 at 180092580
 * undefined FUN_180092580(void)
 * Address ranges: 180092580-180092637
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180092580(longlong param_1)

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
                    (((ulonglong)(uVar2 + *(int *)(param_1 + 0x3c) * uVar3) << 5 | 0x10) +
                     *(longlong *)(param_1 + 0x164),0,0,uVar1);
          uVar2 = uVar2 + 1;
        } while (uVar2 < *(uint *)(param_1 + 0x30));
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < *(uint *)(param_1 + 0x34));
  }
  return;
}

