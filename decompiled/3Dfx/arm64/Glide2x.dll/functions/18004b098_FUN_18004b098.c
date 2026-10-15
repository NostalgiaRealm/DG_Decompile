/*
 * FUN_18004b098 at 18004b098
 * undefined __cdecl FUN_18004b098(ulonglong param_1, ulonglong param_2, uint param_3, uint param_4, uint param_5)
 * Address ranges: 18004b098-18004b12b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18004b098(ulonglong param_1,ulonglong param_2,uint param_3,uint param_4,uint param_5)

{
  uint uVar1;
  ulonglong uVar2;
  
  if ((((*(ulonglong *)(param_1 + 0xb10) != 0) && (param_2 != 0)) &&
      (uVar1 = FUN_180046350(*(longlong **)(param_1 + 0xb18),param_2,param_3,param_4,
                             *(ulonglong *)(param_1 + 0xb10),param_1,param_5,
                             *(ulonglong *)(param_1 + 0xb78)),
      *(int *)(*(longlong *)(param_1 + 0xb10) + 0x30) != 3)) &&
     (uVar2 = FUN_180045be8(uVar1,param_5,param_4), (uVar2 & 1) != 0)) {
    FUN_18004a6d8(param_1,param_2,param_3,uVar1,param_5);
  }
  return;
}

