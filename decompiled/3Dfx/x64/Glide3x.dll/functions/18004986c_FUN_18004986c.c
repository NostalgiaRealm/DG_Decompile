/*
 * FUN_18004986c at 18004986c
 * undefined __fastcall FUN_18004986c(longlong param_1)
 * Address ranges: 18004986c-180049901
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18004986c(longlong param_1)

{
  uint uVar1;
  ulonglong uVar2;
  uint uVar3;
  
  uVar1 = *(uint *)(param_1 + 0xb54);
  uVar2 = 0;
  *(undefined4 *)(param_1 + 0xb54) = 0;
  if (uVar1 != 0) {
    do {
      FUN_180045694(*(longlong **)(param_1 + 0xb18),*(ulonglong *)(param_1 + 0x810 + uVar2 * 8),
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
      FUN_1800454f8(*(longlong *)(param_1 + 0xb18),*(ulonglong *)(param_1 + 0x910 + uVar2 * 0x10),
                    *(undefined **)(param_1 + 0x918 + uVar2 * 0x10),'\x01');
      uVar3 = (int)uVar2 + 1;
      uVar2 = (ulonglong)uVar3;
    } while (uVar3 < uVar1);
  }
  return;
}

