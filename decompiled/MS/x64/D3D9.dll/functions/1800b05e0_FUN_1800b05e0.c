/*
 * FUN_1800b05e0 at 1800b05e0
 * undefined __fastcall FUN_1800b05e0(longlong param_1, longlong param_2)
 * Address ranges: 1800b05e0-1800b0662
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800b05e0(longlong param_1,longlong param_2)

{
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  uint uVar4;
  
  (**(code **)(**(longlong **)(param_1 + 0x28) + 0x1d0))
            (*(longlong **)(param_1 + 0x28),*(undefined8 *)(param_2 + 0x30));
  uVar2 = *(uint *)(param_1 + 0x6988);
  if (uVar2 != 0) {
    uVar3 = 0;
    do {
      iVar1 = (int)uVar3;
      if (*(longlong *)(*(longlong *)(param_1 + 0x6980) + uVar3 * 8) == param_2) {
        if (iVar1 == -1) {
          return;
        }
        uVar4 = iVar1 + 1;
        if (uVar4 < uVar2) {
          do {
            uVar3 = (ulonglong)uVar4;
            uVar2 = uVar4 - 1;
            uVar4 = uVar4 + 1;
            *(undefined8 *)(*(longlong *)(param_1 + 0x6980) + (ulonglong)uVar2 * 8) =
                 *(undefined8 *)(*(longlong *)(param_1 + 0x6980) + uVar3 * 8);
          } while (uVar4 < *(uint *)(param_1 + 0x6988));
        }
        *(int *)(param_1 + 0x6988) = *(int *)(param_1 + 0x6988) + -1;
        return;
      }
      uVar3 = (ulonglong)(iVar1 + 1U);
    } while (iVar1 + 1U < uVar2);
  }
  return;
}

