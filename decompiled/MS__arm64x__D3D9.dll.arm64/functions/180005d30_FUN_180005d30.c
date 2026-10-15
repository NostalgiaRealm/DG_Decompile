/*
 * FUN_180005d30 at 180005d30
 * undefined FUN_180005d30(void)
 * Address ranges: 180005d30-180005df7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180005d30(longlong param_1,longlong param_2)

{
  uint uVar1;
  uint uVar2;
  longlong extraout_x13;
  uint uVar3;
  uint extraout_w14;
  ulonglong uVar4;
  longlong extraout_x15;
  
  if (*(uint *)(param_1 + 0xef8) != 0) {
    uVar4 = 0;
    do {
      uVar3 = (uint)uVar4;
      if (*(longlong *)(*(longlong *)(param_1 + 0xef0) + uVar4 * 8) == param_2) {
        if (uVar3 == 0xffffffff) {
          return;
        }
        if ((*(int *)(param_2 + 0x54) == 0) && (*(int *)(param_1 + 0xe68) == 1)) {
          uVar4 = func_0x000180116ed0(&DAT_180253850,*(undefined4 *)(param_2 + 0x60),
                                      *(undefined4 *)(param_2 + 100),*(undefined4 *)(param_2 + 0x48)
                                     );
          *(ulonglong *)(extraout_x15 + 0x220) =
               *(longlong *)(extraout_x15 + 0x220) + (uVar4 & 0xffffffff);
          param_1 = extraout_x13;
          uVar3 = extraout_w14;
        }
        uVar2 = *(uint *)(param_1 + 0xef8);
        if (uVar2 <= uVar3) {
          return;
        }
        while (uVar1 = uVar3 + 1, uVar1 < uVar2) {
          *(undefined8 *)(*(longlong *)(param_1 + 0xef0) + (ulonglong)uVar3 * 8) =
               *(undefined8 *)(*(longlong *)(param_1 + 0xef0) + (ulonglong)uVar1 * 8);
          uVar3 = uVar1;
          uVar2 = *(uint *)(param_1 + 0xef8);
        }
        *(uint *)(param_1 + 0xef8) = uVar2 - 1;
        return;
      }
      uVar4 = (ulonglong)(uVar3 + 1);
    } while (uVar3 + 1 < *(uint *)(param_1 + 0xef8));
  }
  return;
}

