/*
 * FUN_180005bd0 at 180005bd0
 * undefined FUN_180005bd0(void)
 * Address ranges: 180005bd0-180005c73
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180005bd0(longlong param_1,longlong param_2)

{
  longlong lVar1;
  uint uVar2;
  ulonglong uVar3;
  uint uVar4;
  
  if (*(uint *)(param_1 + 0xed8) != 0) {
    uVar3 = 0;
    do {
      uVar2 = (uint)uVar3;
      if (*(longlong *)(*(longlong *)(param_1 + 0xed0) + uVar3 * 8) == param_2) {
        if (uVar2 == 0xffffffff) {
          return;
        }
        (&DAT_180253a70)[(ulonglong)*(uint *)(param_1 + 0xea8) * 0x4b] =
             (&DAT_180253a70)[(ulonglong)*(uint *)(param_1 + 0xea8) * 0x4b] +
             (ulonglong)*(uint *)(param_2 + 0x84);
        uVar4 = *(uint *)(param_1 + 0xed8);
        if (uVar2 < uVar4) {
          while (uVar2 = (int)uVar3 + 1, uVar2 < uVar4) {
            *(undefined8 *)(*(longlong *)(param_1 + 0xed0) + uVar3 * 8) =
                 *(undefined8 *)(*(longlong *)(param_1 + 0xed0) + (ulonglong)uVar2 * 8);
            uVar3 = (ulonglong)uVar2;
            uVar4 = *(uint *)(param_1 + 0xed8);
          }
          *(uint *)(param_1 + 0xed8) = uVar4 - 1;
        }
        lVar1 = 0;
        if (param_2 != 0) {
          lVar1 = param_2 + 0x90;
        }
        FUN_180001b20(param_1,lVar1);
        return;
      }
      uVar3 = (ulonglong)(uVar2 + 1);
    } while (uVar2 + 1 < *(uint *)(param_1 + 0xed8));
  }
  return;
}

