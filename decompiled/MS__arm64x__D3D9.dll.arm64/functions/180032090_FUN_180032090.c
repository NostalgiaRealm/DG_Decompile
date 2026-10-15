/*
 * FUN_180032090 at 180032090
 * undefined FUN_180032090(void)
 * Address ranges: 180032090-180032133
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180032090(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  ulonglong uVar3;
  undefined8 *puVar4;
  
  if (*(int *)(param_1 + 0x20) != 0) {
    uVar3 = 0;
    if (*(int *)(param_1 + 0x20) == 0) {
      lVar2 = 0;
      goto LAB_1800320d4;
    }
    do {
      lVar2 = *(longlong *)(param_1 + 0x18) + uVar3 * 0x40;
LAB_1800320d4:
      puVar4 = *(undefined8 **)(lVar2 + 0x38);
      if (puVar4 != (undefined8 *)0x0) {
        *puVar4 = &PTR_D3DPERF_GetStatus_180233fa0;
        FUN_180031cc0(puVar4 + 2);
        FUN_180102fc0(puVar4,0x88);
      }
      uVar1 = (int)uVar3 + 1;
      uVar3 = (ulonglong)uVar1;
    } while (uVar1 < *(uint *)(param_1 + 0x20));
  }
  thunk_FUN_180102fc0(*(undefined8 *)(param_1 + 0x10));
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  thunk_FUN_180102fc0(0);
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  return;
}

