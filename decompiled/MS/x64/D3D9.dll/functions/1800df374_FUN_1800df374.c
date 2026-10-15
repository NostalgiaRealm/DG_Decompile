/*
 * FUN_1800df374 at 1800df374
 * undefined __fastcall FUN_1800df374(longlong param_1, LPVOID param_2)
 * Address ranges: 1800df374-1800df3de
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800df374(longlong param_1,LPVOID param_2)

{
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  uint uVar4;
  
  uVar2 = *(uint *)(param_1 + 0x650);
  if (uVar2 != 0) {
    uVar3 = 0;
    do {
      iVar1 = (int)uVar3;
      if (*(LPVOID *)(*(longlong *)(param_1 + 0x648) + uVar3 * 8) == param_2) {
        if (iVar1 != -1) {
          uVar4 = iVar1 + 1;
          if (uVar4 < uVar2) {
            do {
              uVar3 = (ulonglong)uVar4;
              uVar2 = uVar4 - 1;
              uVar4 = uVar4 + 1;
              *(undefined8 *)(*(longlong *)(param_1 + 0x648) + (ulonglong)uVar2 * 8) =
                   *(undefined8 *)(*(longlong *)(param_1 + 0x648) + uVar3 * 8);
            } while (uVar4 < *(uint *)(param_1 + 0x650));
          }
          *(int *)(param_1 + 0x650) = *(int *)(param_1 + 0x650) + -1;
        }
        break;
      }
      uVar3 = (ulonglong)(iVar1 + 1U);
    } while (iVar1 + 1U < uVar2);
  }
  FUN_1800fbcf0(param_2);
  return;
}

