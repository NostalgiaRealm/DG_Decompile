/*
 * FUN_1001407d at 1001407d
 * undefined __fastcall FUN_1001407d(int * param_1)
 * Address ranges: 1001407d-100140ac
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_1001407d(int *param_1)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = param_1[0x19];
  while (iVar2 != 0) {
    uVar1 = (uint)*(ushort *)(param_1 + 0xc);
    iVar2 = iVar2 + -1;
    while (uVar1 != 0) {
      uVar1 = uVar1 - 1;
      (**(code **)(*param_1 + 0x18))(iVar2,uVar1);
    }
  }
  param_1[0x11] = 0;
  return;
}

