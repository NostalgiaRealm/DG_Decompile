/*
 * FUN_1800b7380 at 1800b7380
 * uint __fastcall FUN_1800b7380(longlong param_1, byte param_2, byte param_3)
 * Address ranges: 1800b7380-1800b73e2
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint FUN_1800b7380(longlong param_1,byte param_2,byte param_3)

{
  longlong lVar1;
  longlong lVar2;
  uint uVar3;
  
  uVar3 = 3;
  if (((param_2 == 0) || (param_3 == 0)) && (*(longlong *)(param_1 + 0x50) != 0)) {
    lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x50) + 8);
    lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x30) + 8);
    if (((*(int *)(lVar1 + 0x8c) != *(int *)(lVar2 + 0x8c)) ||
        (*(int *)(lVar1 + 0x90) != *(int *)(lVar2 + 0x90))) ||
       (*(int *)(lVar1 + 0x9c) != *(int *)(lVar2 + 0x9c))) {
      uVar3 = (uint)param_3 * 2 | (uint)param_2;
    }
  }
  return uVar3;
}

