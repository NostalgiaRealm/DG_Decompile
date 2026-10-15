/*
 * FUN_18009088c at 18009088c
 * undefined __fastcall FUN_18009088c(longlong param_1, undefined8 * param_2)
 * Address ranges: 18009088c-18009090d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18009088c(longlong param_1,undefined8 *param_2)

{
  uint uVar1;
  uint uVar2;
  
  if (*(longlong *)(param_1 + -0x28) != 0) {
    uVar2 = 0;
    if (*(int *)(param_1 + -0xac) != 0) {
      do {
        uVar1 = 0;
        if (*(int *)(param_1 + -0xb0) != 0) {
          do {
            (**(code **)(*(longlong *)(param_1 + -0xe0) + 8))
                      ((longlong *)(param_1 + -0xe0),uVar1,uVar2,1);
            uVar1 = uVar1 + 1;
          } while (uVar1 < *(uint *)(param_1 + -0xb0));
        }
        uVar2 = uVar2 + 1;
      } while (uVar2 < *(uint *)(param_1 + -0xac));
    }
    FUN_18008e2ec((longlong *)(param_1 + -0x40),1,1);
  }
  FUN_1800ac4fc(param_1 + -0xe0,param_2);
  return;
}

