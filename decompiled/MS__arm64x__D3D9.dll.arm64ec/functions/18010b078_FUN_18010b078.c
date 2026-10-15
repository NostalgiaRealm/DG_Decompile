/*
 * FUN_18010b078 at 18010b078
 * undefined FUN_18010b078(void)
 * Address ranges: 18010b078-18010b13f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18010b078(longlong param_1,longlong param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  
  if (*(uint *)(param_1 + 0xe38) != 0) {
    uVar3 = 0;
    do {
      if (*(longlong *)(*(longlong *)(param_1 + 0xe30) + uVar3 * 8) == param_2) {
        if ((int)uVar3 != -1) {
          return;
        }
        break;
      }
      uVar2 = (int)uVar3 + 1;
      uVar3 = (ulonglong)uVar2;
    } while (uVar2 < *(uint *)(param_1 + 0xe38));
  }
  if (*(uint *)(param_1 + 0xeb8) != 0) {
    uVar3 = 0;
    do {
      uVar2 = (uint)uVar3;
      if (*(longlong *)(*(longlong *)(param_1 + 0xeb0) + uVar3 * 8) == param_2) {
        if (uVar2 == 0xffffffff) {
          return;
        }
        (&DAT_18024ea60)[(ulonglong)*(uint *)(param_1 + 0xea8) * 0x4b] =
             (&DAT_18024ea60)[(ulonglong)*(uint *)(param_1 + 0xea8) * 0x4b] +
             (ulonglong)*(uint *)(param_2 + 0x114);
        uVar1 = *(uint *)(param_1 + 0xeb8);
        if (uVar1 <= uVar2) {
          return;
        }
        while (uVar2 = (int)uVar3 + 1, uVar2 < uVar1) {
          *(undefined8 *)(*(longlong *)(param_1 + 0xeb0) + uVar3 * 8) =
               *(undefined8 *)(*(longlong *)(param_1 + 0xeb0) + (ulonglong)uVar2 * 8);
          uVar3 = (ulonglong)uVar2;
          uVar1 = *(uint *)(param_1 + 0xeb8);
        }
        *(uint *)(param_1 + 0xeb8) = uVar1 - 1;
        return;
      }
      uVar3 = (ulonglong)(uVar2 + 1);
    } while (uVar2 + 1 < *(uint *)(param_1 + 0xeb8));
  }
  return;
}

