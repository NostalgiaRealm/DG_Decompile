/*
 * FUN_1800908f0 at 1800908f0
 * undefined FUN_1800908f0(void)
 * Address ranges: 1800908f0-18009093b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800908f0(longlong param_1,longlong *param_2)

{
  int iVar1;
  
  iVar1 = (**(code **)(*param_2 + 0x10))(param_2);
  if (iVar1 == 1) {
    FUN_1800fdbb0(*(longlong *)(param_1 + 0xc) + 0x18b8,param_2);
  }
  return;
}

