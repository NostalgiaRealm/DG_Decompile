/*
 * FUN_100982a2 at 100982a2
 * undefined4 __stdcall FUN_100982a2(int param_1, int param_2)
 * Address ranges: 100982a2-1009831f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_100982a2(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar1 = param_2;
  uVar3 = 0x8876086c;
  if (param_2 + 7U < 0xf) {
    FUN_10003e40((void *)((int)&param_2 + 3),(byte)(*(uint *)(param_1 + -0x58e4) >> 2) & 1);
    iVar2 = (**(code **)(*(int *)(&DAT_100df2e8)[*(int *)(param_1 + -0x58c4) * 0x8a] + 0x98))();
    if (iVar2 == 2) {
      uVar3 = 0x88760870;
    }
    else {
      (**(code **)(*(int *)(&DAT_100df2e8)[*(int *)(param_1 + -0x58c4) * 0x8a] + 0xa0))(iVar1);
      uVar3 = 0;
    }
    FUN_10003e89((char *)((int)&param_2 + 3));
  }
  return uVar3;
}

