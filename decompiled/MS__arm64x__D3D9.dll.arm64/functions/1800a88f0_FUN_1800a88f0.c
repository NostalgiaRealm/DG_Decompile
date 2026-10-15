/*
 * FUN_1800a88f0 at 1800a88f0
 * undefined FUN_1800a88f0(void)
 * Address ranges: 1800a88f0-1800a8953
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800a88f0(longlong *param_1)

{
  int iVar1;
  uint uVar2;
  
  FUN_18000ece0();
  for (iVar1 = (int)param_1[0x10]; iVar1 != 0; iVar1 = iVar1 + -1) {
    uVar2 = (uint)*(ushort *)((longlong)param_1 + 0x3c);
    if (*(ushort *)((longlong)param_1 + 0x3c) != 0) {
      do {
        (**(code **)(*param_1 + 0x30))(param_1,iVar1 + -1,uVar2 - 1);
        uVar2 = uVar2 - 1;
      } while (uVar2 != 0);
    }
  }
  param_1[0xb] = 0;
  return;
}

