/*
 * FUN_1003f5ff at 1003f5ff
 * undefined __fastcall FUN_1003f5ff(int param_1)
 * Address ranges: 1003f5ff-1003f640
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_1003f5ff(int param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = *(int *)(param_1 + 0x628);
  *(int *)(param_1 + 0x628) = iVar1 + 1;
  if (((iVar1 == 0) && (*(int *)(param_1 + 0x8e0) != 0)) &&
     (uVar2 = 0, *(int *)(param_1 + 0x958) != 0)) {
    do {
      (**(code **)**(undefined4 **)(*(int *)(param_1 + 0x954) + uVar2 * 4))();
      uVar2 = uVar2 + 1;
    } while (uVar2 < *(uint *)(param_1 + 0x958));
  }
  return;
}

