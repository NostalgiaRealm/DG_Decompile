/*
 * FUN_18003fab8 at 18003fab8
 * undefined __fastcall FUN_18003fab8(longlong param_1)
 * Address ranges: 18003fab8-18003fb1d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18003fab8(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = (ulonglong)*(uint *)(param_1 + 400) * 0x1ac0;
  *(longlong *)(param_1 + 0x198) = *(longlong *)(param_1 + 0x188) + 0x900 + lVar1;
  FUN_1800e78b0((longlong *)(*(longlong *)(param_1 + 0x188) + 0x22d8 + lVar1),
                *(longlong *)(param_1 + 0x158));
  FUN_1800fbcf0(*(LPVOID *)(param_1 + 0x158));
  *(undefined8 *)(param_1 + 0x158) = 0;
  return;
}

