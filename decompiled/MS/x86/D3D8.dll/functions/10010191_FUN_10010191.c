/*
 * FUN_10010191 at 10010191
 * undefined __fastcall FUN_10010191(int * param_1)
 * Address ranges: 10010191-100101c0
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_10010191(int *param_1)

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

