/*
 * FUN_180056578 at 180056578
 * undefined __fastcall FUN_180056578(longlong param_1)
 * Address ranges: 180056578-180056606
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180056578(longlong param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  uint uVar3;
  
  if (*(int *)(param_1 + 0x28) != 0) {
    uVar3 = 0;
    if (*(int *)(param_1 + 0x28) == 0) {
      lVar2 = 0;
      goto LAB_1800565a5;
    }
    do {
      lVar2 = (ulonglong)uVar3 * 0x40 + *(longlong *)(param_1 + 0x20);
LAB_1800565a5:
      puVar1 = *(undefined8 **)(lVar2 + 0x38);
      if (puVar1 != (undefined8 *)0x0) {
        *puVar1 = &PTR_FUN_180102348;
        FUN_180056008(puVar1);
        FUN_1800fbcf0(puVar1);
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < *(uint *)(param_1 + 0x28));
  }
  FUN_1800fbcf0(*(LPVOID *)(param_1 + 0x18));
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  return;
}

