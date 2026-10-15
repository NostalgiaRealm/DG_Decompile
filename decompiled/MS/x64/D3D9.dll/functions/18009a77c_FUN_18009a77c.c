/*
 * FUN_18009a77c at 18009a77c
 * undefined8 __fastcall FUN_18009a77c(longlong param_1, uint param_2)
 * Address ranges: 18009a77c-18009a7d5
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_18009a77c(longlong param_1,uint param_2)

{
  byte bVar1;
  byte extraout_var;
  longlong lVar2;
  
  lVar2 = *(longlong *)(param_1 + 0x24);
  bVar1 = 1;
  if (*(char *)((ulonglong)param_2 * 0x20 + 0xc + lVar2) == '\0') {
    (**(code **)(**(longlong **)(param_1 + 0x14) + 0x40))
              (*(longlong **)(param_1 + 0x14),param_2,0,0);
    bVar1 = extraout_var >> 7 ^ 1;
    lVar2 = 0;
    *(byte *)((ulonglong)param_2 * 0x20 + 0xc + *(longlong *)(param_1 + 0x24)) = bVar1;
  }
  return CONCAT71((int7)((ulonglong)lVar2 >> 8),bVar1);
}

