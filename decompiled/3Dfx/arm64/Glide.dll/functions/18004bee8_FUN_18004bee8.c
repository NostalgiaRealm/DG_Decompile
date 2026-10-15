/*
 * FUN_18004bee8 at 18004bee8
 * undefined __cdecl FUN_18004bee8(ulonglong param_1, ulonglong param_2, uint param_3, uint param_4, uint param_5)
 * Address ranges: 18004bee8-18004bf7b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18004bee8(ulonglong param_1,ulonglong param_2,uint param_3,uint param_4,uint param_5)

{
  uint uVar1;
  ulonglong uVar2;
  
  if ((((*(ulonglong *)(param_1 + 0xb10) != 0) && (param_2 != 0)) &&
      (uVar1 = FUN_1800471a0(*(longlong **)(param_1 + 0xb18),param_2,param_3,param_4,
                             *(ulonglong *)(param_1 + 0xb10),param_1,param_5,
                             *(ulonglong *)(param_1 + 0xb78)),
      *(int *)(*(longlong *)(param_1 + 0xb10) + 0x30) != 3)) &&
     (uVar2 = FUN_180046a38(uVar1,param_5,param_4), (uVar2 & 1) != 0)) {
    FUN_18004b528(param_1,param_2,param_3,uVar1,param_5);
  }
  return;
}

