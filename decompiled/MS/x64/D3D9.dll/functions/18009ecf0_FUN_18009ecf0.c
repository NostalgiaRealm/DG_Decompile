/*
 * FUN_18009ecf0 at 18009ecf0
 * undefined __fastcall FUN_18009ecf0(longlong param_1, undefined8 * param_2)
 * Address ranges: 18009ecf0-18009ed84
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18009ecf0(longlong param_1,undefined8 *param_2)

{
  uint uVar1;
  uint uVar2;
  
  FUN_1800fb1f0(*(longlong *)(param_1 + -0xa8) + 0x12c0);
  if (*(longlong *)(param_1 + -0x3c) != 0) {
    uVar2 = 0;
    if (*(int *)(param_1 + -0xcc) != 0) {
      do {
        uVar1 = 0;
        if (*(int *)(param_1 + -0xd0) != 0) {
          do {
            (**(code **)(*(longlong *)(param_1 + -0x100) + 8))
                      ((longlong *)(param_1 + -0x100),uVar1,uVar2,1);
            uVar1 = uVar1 + 1;
          } while (uVar1 < *(uint *)(param_1 + -0xd0));
        }
        uVar2 = uVar2 + 1;
      } while (uVar2 < *(uint *)(param_1 + -0xcc));
    }
    FUN_18009ac8c(param_1 + -0x50,1,1);
  }
  FUN_1800ac4fc(param_1 + -0x100,param_2);
  return;
}

