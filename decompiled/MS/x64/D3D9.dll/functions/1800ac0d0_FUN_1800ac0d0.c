/*
 * FUN_1800ac0d0 at 1800ac0d0
 * undefined8 __fastcall FUN_1800ac0d0(longlong param_1)
 * Address ranges: 1800ac0d0-1800ac11c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_1800ac0d0(longlong param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = (**(code **)(**(longlong **)(param_1 + 0x20) + 0x50))
                    (*(longlong **)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x28));
  if (iVar1 == -0x7785fffb) {
    uVar2 = 2;
  }
  else if (iVar1 == -0x7785fffa) {
    uVar2 = 1;
  }
  else if (iVar1 == -0x7785fff9) {
    uVar2 = 3;
  }
  else {
    uVar2 = 4;
    if (iVar1 == 0) {
      uVar2 = 0;
    }
  }
  return uVar2;
}

