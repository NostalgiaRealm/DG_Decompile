/*
 * FUN_10098227 at 10098227
 * undefined4 __stdcall FUN_10098227(int param_1, int param_2)
 * Address ranges: 10098227-100982a1
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_10098227(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar1 = param_1;
  uVar3 = 0x8876086c;
  FUN_10003e40((void *)((int)&param_1 + 3),(byte)(*(uint *)(param_1 + -0x58e4) >> 2) & 1);
  iVar2 = (**(code **)(*(int *)(&DAT_100df2e8)[*(int *)(iVar1 + -0x58c4) * 0x8a] + 0x98))();
  if (iVar2 == 2) {
    uVar3 = 0x88760870;
  }
  else if (param_2 != 0) {
    (**(code **)(*(int *)(&DAT_100df2e8)[*(int *)(iVar1 + -0x58c4) * 0x8a] + 0x9c))(param_2);
    uVar3 = 0;
  }
  FUN_10003e89((char *)((int)&param_1 + 3));
  return uVar3;
}

