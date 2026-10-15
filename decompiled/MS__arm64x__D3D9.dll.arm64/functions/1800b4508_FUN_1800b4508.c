/*
 * FUN_1800b4508 at 1800b4508
 * undefined FUN_1800b4508(void)
 * Address ranges: 1800b4508-1800b456b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint FUN_1800b4508(longlong param_1,byte param_2,byte param_3)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  
  uVar1 = 3;
  if ((((param_2 & 1) == 0) || ((param_3 & 1) == 0)) && (*(longlong *)(param_1 + 0x50) != 0)) {
    lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x50) + 8);
    lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x30) + 8);
    if (((*(int *)(lVar3 + 0x8c) != *(int *)(lVar2 + 0x8c)) ||
        (*(int *)(lVar3 + 0x90) != *(int *)(lVar2 + 0x90))) ||
       (*(int *)(lVar3 + 0x9c) != *(int *)(lVar2 + 0x9c))) {
      uVar1 = (uint)param_2 | (uint)param_3 << 1;
    }
  }
  return uVar1;
}

