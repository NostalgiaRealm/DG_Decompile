/*
 * FUN_1009a8d6 at 1009a8d6
 * undefined4 __stdcall FUN_1009a8d6(int param_1, uint param_2, undefined4 * param_3)
 * Address ranges: 1009a8d6-1009a945
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_1009a8d6(int param_1,uint param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = param_1;
  uVar2 = 0x8876086c;
  FUN_10003e40((void *)((int)&param_1 + 3),(byte)(*(uint *)(param_1 + -0x58e4) >> 2) & 1);
  if (param_2 < *(uint *)(*(int *)(iVar1 + 0x50) + 0xf0)) {
    iVar1 = *(int *)(iVar1 + -0x669c + param_2 * 4);
    if (iVar1 == 0) {
      uVar2 = 0x88760866;
      *param_3 = 0;
    }
    else {
      uVar2 = FUN_1009d053(iVar1 + 0x5c,0x100d1370,param_3);
    }
  }
  FUN_10003e89((char *)((int)&param_1 + 3));
  return uVar2;
}

