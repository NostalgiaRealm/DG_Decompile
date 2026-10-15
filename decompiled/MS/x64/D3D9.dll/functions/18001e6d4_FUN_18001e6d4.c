/*
 * FUN_18001e6d4 at 18001e6d4
 * bool __fastcall FUN_18001e6d4(longlong param_1, int param_2, int param_3)
 * Address ranges: 18001e6d4-18001e72f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool FUN_18001e6d4(longlong param_1,int param_2,int param_3)

{
  undefined8 uVar1;
  uint uVar2;
  
  uVar2 = param_2 * param_3;
  if (*(uint *)(param_1 + 0xdf0) < uVar2) {
    FUN_1800fbcf0(*(LPVOID *)(param_1 + 0xde8));
    *(undefined8 *)(param_1 + 0xde8) = 0;
    *(uint *)(param_1 + 0xdf0) = uVar2;
    uVar1 = thunk_FUN_1800fbccc((ulonglong)uVar2);
    *(undefined8 *)(param_1 + 0xde8) = uVar1;
  }
  return *(longlong *)(param_1 + 0xde8) != 0;
}

