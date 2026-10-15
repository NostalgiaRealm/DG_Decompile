/*
 * FUN_18010b348 at 18010b348
 * undefined FUN_18010b348(void)
 * Address ranges: 18010b348-18010b40f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18010b348(longlong param_1,longlong param_2)

{
  ulonglong uVar1;
  undefined8 *puVar2;
  uint uVar3;
  ulonglong uVar4;
  uint uVar5;
  uint uVar6;
  longlong extraout_x15;
  
  if (*(uint *)(param_1 + 0xef8) != 0) {
    uVar4 = 0;
    do {
      if (*(longlong *)(*(longlong *)(param_1 + 0xef0) + uVar4 * 8) == param_2) {
        if ((int)uVar4 == -1) {
          return;
        }
        if ((*(int *)(param_2 + 0x54) == 0) && (*(int *)(param_1 + 0xe68) == 1)) {
          puVar2 = &DAT_18024e840 + (ulonglong)*(uint *)(param_1 + 0xea8) * 0x4b;
          uVar1 = FUN_180116ed0(*(undefined4 *)(param_2 + 0x60),*(undefined4 *)(param_2 + 100),
                                *(undefined4 *)(param_2 + 0x48));
          puVar2[0x44] = puVar2[0x44] + (uVar1 & 0xffffffff);
          param_1 = extraout_x15;
        }
        uVar6 = *(uint *)(param_1 + 0xef8);
        uVar3 = (uint)uVar4;
        if (uVar6 <= uVar3) {
          return;
        }
        while (uVar5 = uVar3 + 1, uVar5 < uVar6) {
          *(undefined8 *)(*(longlong *)(param_1 + 0xef0) + (ulonglong)uVar3 * 8) =
               *(undefined8 *)(*(longlong *)(param_1 + 0xef0) + (ulonglong)uVar5 * 8);
          uVar3 = uVar5;
          uVar6 = *(uint *)(param_1 + 0xef8);
        }
        *(uint *)(param_1 + 0xef8) = uVar6 - 1;
        return;
      }
      uVar6 = (int)uVar4 + 1;
      uVar4 = (ulonglong)uVar6;
    } while (uVar6 < *(uint *)(param_1 + 0xef8));
  }
  return;
}

