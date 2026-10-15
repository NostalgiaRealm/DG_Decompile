/*
 * FUN_18010b140 at 18010b140
 * undefined FUN_18010b140(void)
 * Address ranges: 18010b140-18010b1e3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18010b140(longlong param_1,longlong param_2)

{
  longlong lVar1;
  uint uVar2;
  ulonglong uVar3;
  uint uVar4;
  
  if (*(uint *)(param_1 + 0xec8) != 0) {
    uVar3 = 0;
    do {
      uVar2 = (uint)uVar3;
      if (*(longlong *)(*(longlong *)(param_1 + 0xec0) + uVar3 * 8) == param_2) {
        if (uVar2 == 0xffffffff) {
          return;
        }
        (&DAT_18024ea60)[(ulonglong)*(uint *)(param_1 + 0xea8) * 0x4b] =
             (&DAT_18024ea60)[(ulonglong)*(uint *)(param_1 + 0xea8) * 0x4b] +
             (ulonglong)*(uint *)(param_2 + 0x84);
        uVar4 = *(uint *)(param_1 + 0xec8);
        if (uVar2 < uVar4) {
          while (uVar2 = (int)uVar3 + 1, uVar2 < uVar4) {
            *(undefined8 *)(*(longlong *)(param_1 + 0xec0) + uVar3 * 8) =
                 *(undefined8 *)(*(longlong *)(param_1 + 0xec0) + (ulonglong)uVar2 * 8);
            uVar3 = (ulonglong)uVar2;
            uVar4 = *(uint *)(param_1 + 0xec8);
          }
          *(uint *)(param_1 + 0xec8) = uVar4 - 1;
        }
        lVar1 = 0;
        if (param_2 != 0) {
          lVar1 = param_2 + 0x90;
        }
        FUN_180105cb0(param_1,lVar1);
        return;
      }
      uVar3 = (ulonglong)(uVar2 + 1);
    } while (uVar2 + 1 < *(uint *)(param_1 + 0xec8));
  }
  return;
}

