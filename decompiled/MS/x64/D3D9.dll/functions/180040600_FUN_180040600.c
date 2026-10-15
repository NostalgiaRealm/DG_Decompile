/*
 * FUN_180040600 at 180040600
 * undefined __fastcall FUN_180040600(longlong param_1)
 * Address ranges: 180040600-180040688
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180040600(longlong param_1)

{
  uint uVar1;
  ulonglong uVar2;
  undefined8 *puVar3;
  
  uVar1 = *(uint *)(param_1 + 0x40);
  while (uVar1 = uVar1 - 1, uVar1 != 0) {
    uVar2 = *(ulonglong *)(*(longlong *)(param_1 + 0x38) + (ulonglong)uVar1 * 0x10);
    if (uVar2 != 0) {
      FUN_1800ea030(*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x1b500),uVar2,(undefined *)0x0,
                    '\0');
    }
    puVar3 = *(undefined8 **)(*(longlong *)(param_1 + 0x38) + (ulonglong)uVar1 * 0x10);
    if (puVar3 != (undefined8 *)0x0) {
      (**(code **)*puVar3)(puVar3,1);
    }
    if (*(int *)(param_1 + 0x40) != 0) {
      *(int *)(param_1 + 0x40) = *(int *)(param_1 + 0x40) + -1;
    }
  }
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0xffffffff;
  return;
}

