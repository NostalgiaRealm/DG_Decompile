/*
 * FUN_180023734 at 180023734
 * undefined8 __fastcall FUN_180023734(longlong param_1, longlong param_2, uint * param_3)
 * Address ranges: 180023734-180023792
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_180023734(longlong param_1,longlong param_2,uint *param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  
  uVar2 = (ulonglong)*param_3;
  if ((((*(uint *)(param_1 + 0xb0) == *param_3) &&
       (uVar2 = (ulonglong)param_3[1], *(uint *)(param_1 + 0xb4) == param_3[1])) &&
      (uVar2 = (ulonglong)param_3[4], *(uint *)(param_1 + 0xc4) == param_3[4])) &&
     (uVar2 = (ulonglong)param_3[5], *(uint *)(param_1 + 200) == param_3[5])) {
    lVar1 = *(longlong *)(param_1 + 8);
    uVar2 = (ulonglong)*(uint *)(param_2 + 0x1c);
    if (((*(uint *)(lVar1 + 0x1c) == *(uint *)(param_2 + 0x1c)) &&
        (uVar2 = (ulonglong)*(uint *)(param_2 + 0x18),
        *(uint *)(lVar1 + 0x18) == *(uint *)(param_2 + 0x18))) &&
       (uVar2 = 0,
       ((byte)*(undefined4 *)(lVar1 + 0xc2) & 4) == ((byte)*(undefined4 *)(param_2 + 0xc2) & 4))) {
      return 0;
    }
  }
  return CONCAT71((int7)(uVar2 >> 8),1);
}

