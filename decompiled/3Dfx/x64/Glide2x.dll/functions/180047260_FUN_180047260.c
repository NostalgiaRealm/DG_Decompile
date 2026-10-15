/*
 * FUN_180047260 at 180047260
 * undefined __fastcall FUN_180047260(longlong param_1)
 * Address ranges: 180047260-1800472f5
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180047260(longlong param_1)

{
  uint uVar1;
  ulonglong uVar2;
  uint uVar3;
  
  uVar1 = *(uint *)(param_1 + 0xb54);
  uVar2 = 0;
  *(undefined4 *)(param_1 + 0xb54) = 0;
  if (uVar1 != 0) {
    do {
      FUN_180043088(*(longlong **)(param_1 + 0xb18),*(ulonglong *)(param_1 + 0x810 + uVar2 * 8),
                    '\x01');
      (**(code **)(**(longlong **)(param_1 + 0x810 + uVar2 * 8) + 0x10))();
      uVar3 = (int)uVar2 + 1;
      uVar2 = (ulonglong)uVar3;
    } while (uVar3 < uVar1);
  }
  uVar1 = *(uint *)(param_1 + 0xb58);
  uVar2 = 0;
  *(undefined4 *)(param_1 + 0xb58) = 0;
  if (uVar1 != 0) {
    do {
      FUN_180042eec(*(longlong *)(param_1 + 0xb18),*(ulonglong *)(param_1 + 0x910 + uVar2 * 0x10),
                    *(undefined **)(param_1 + 0x918 + uVar2 * 0x10),'\x01');
      uVar3 = (int)uVar2 + 1;
      uVar2 = (ulonglong)uVar3;
    } while (uVar3 < uVar1);
  }
  return;
}

