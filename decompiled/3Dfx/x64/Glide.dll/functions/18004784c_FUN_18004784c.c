/*
 * FUN_18004784c at 18004784c
 * undefined8 __fastcall FUN_18004784c(longlong param_1)
 * Address ranges: 18004784c-180047943
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_18004784c(longlong param_1)

{
  uint uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  
  *(uint *)(param_1 + 0xb70) = (*(int *)(param_1 + 0xb70) + 1U) % *(uint *)(param_1 + 0xb64);
  uVar2 = *(ulonglong *)(param_1 + 0x750 + (ulonglong)*(uint *)(param_1 + 0xb6c) * 8);
  uVar3 = (**(code **)(**(longlong **)(*(longlong *)(param_1 + 0xb10) + 0x18) + 0x40))();
  uVar1 = *(uint *)(param_1 + 0xb6c);
  if (uVar3 < uVar2) {
    if (*(uint *)(param_1 + 0xb70) == uVar1) {
      *(uint *)(param_1 + 0xb6c) = (uVar1 + 1) % *(uint *)(param_1 + 0xb64);
    }
    FUN_180040e04(*(longlong *)(param_1 + 0xb10),
                  *(ulonglong *)(param_1 + 0x750 + (ulonglong)*(uint *)(param_1 + 0xb70) * 8));
    uVar4 = *(undefined8 *)(param_1 + 0x690 + (ulonglong)*(uint *)(param_1 + 0xb70) * 8);
  }
  else {
    uVar4 = *(undefined8 *)(param_1 + 0x690 + (ulonglong)uVar1 * 8);
    *(undefined8 *)(param_1 + 0x690 + (ulonglong)uVar1 * 8) =
         *(undefined8 *)(param_1 + 0x690 + (ulonglong)*(uint *)(param_1 + 0xb70) * 8);
    *(undefined8 *)(param_1 + 0x690 + (ulonglong)*(uint *)(param_1 + 0xb70) * 8) = uVar4;
    *(undefined8 *)(param_1 + 0x750 + (ulonglong)*(uint *)(param_1 + 0xb6c) * 8) =
         *(undefined8 *)(param_1 + 0x750 + (ulonglong)*(uint *)(param_1 + 0xb70) * 8);
    *(uint *)(param_1 + 0xb6c) = (*(int *)(param_1 + 0xb6c) + 1U) % *(uint *)(param_1 + 0xb64);
  }
  return uVar4;
}

