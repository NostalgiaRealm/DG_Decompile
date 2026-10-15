/*
 * FUN_180043224 at 180043224
 * undefined __fastcall FUN_180043224(longlong param_1, longlong * param_2)
 * Address ranges: 180043224-180043288
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180043224(longlong param_1,longlong *param_2)

{
  uint uVar1;
  ulonglong uVar2;
  
  uVar2 = 0;
  if ((int)param_2[1] != 0) {
    do {
      FUN_1800441c0(*(longlong **)(param_1 + 0x10),*(longlong *)(*param_2 + uVar2 * 8));
      FUN_180060ac0((LPVOID)**(undefined8 **)(*param_2 + uVar2 * 8));
      FUN_180060ac0(*(LPVOID *)(*param_2 + uVar2 * 8));
      uVar1 = (int)uVar2 + 1;
      uVar2 = (ulonglong)uVar1;
    } while (uVar1 < *(uint *)(param_2 + 1));
  }
  FUN_180060ac0((LPVOID)*param_2);
  FUN_180060ac0(param_2);
  return;
}

