/*
 * FUN_180017480 at 180017480
 * undefined __fastcall FUN_180017480(longlong * param_1)
 * Address ranges: 180017480-1800174c5
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180017480(longlong *param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = (int)param_1[0x10];
  while (iVar1 != 0) {
    uVar2 = (uint)*(ushort *)((longlong)param_1 + 0x3c);
    iVar1 = iVar1 + -1;
    if (*(ushort *)((longlong)param_1 + 0x3c) != 0) {
      do {
        uVar2 = uVar2 - 1;
        (**(code **)(*param_1 + 0x30))(param_1,iVar1,uVar2);
      } while (uVar2 != 0);
    }
  }
  param_1[0xb] = 0;
  return;
}

