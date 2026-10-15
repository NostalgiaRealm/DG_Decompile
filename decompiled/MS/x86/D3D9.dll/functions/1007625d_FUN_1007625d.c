/*
 * FUN_1007625d at 1007625d
 * uint __stdcall FUN_1007625d(int param_1, int param_2)
 * Address ranges: 1007625d-100762b9
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint FUN_1007625d(int param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = -(uint)(param_1 != 0) & param_1 - 0x88U;
  uVar1 = param_2 - 0x88;
  uVar2 = -(uint)(param_2 != 0) & uVar1;
  if ((param_1 == 0) ||
     (((uVar1 = *(uint *)(uVar3 + 0xdc), uVar1 == *(uint *)(uVar2 + 0xdc) &&
       (uVar1 = *(uint *)(uVar3 + 0xe0), uVar1 == *(uint *)(uVar2 + 0xe0))) &&
      (uVar1 = *(uint *)(uVar3 + 0xe4), uVar1 == *(uint *)(uVar2 + 0xe4))))) {
    uVar1 = CONCAT31((int3)(uVar1 >> 8),1);
  }
  else {
    uVar1 = uVar1 & 0xffffff00;
  }
  return uVar1;
}

