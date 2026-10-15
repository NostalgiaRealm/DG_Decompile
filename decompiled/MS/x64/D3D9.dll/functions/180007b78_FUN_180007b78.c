/*
 * FUN_180007b78 at 180007b78
 * undefined __fastcall FUN_180007b78(longlong param_1, longlong param_2)
 * Address ranges: 180007b78-180007c2c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180007b78(longlong param_1,longlong param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  uint uVar4;
  
  if (*(uint *)(param_1 + 0xed8) != 0) {
    uVar3 = 0;
    while (uVar2 = (uint)uVar3, *(longlong *)(*(longlong *)(param_1 + 0xed0) + uVar3 * 8) != param_2
          ) {
      uVar3 = (ulonglong)(uVar2 + 1);
      if (*(uint *)(param_1 + 0xed8) <= uVar2 + 1) {
        return;
      }
    }
    if (uVar2 != 0xffffffff) {
      *(ulonglong *)(&DAT_180112b00 + (ulonglong)*(uint *)(param_1 + 0xea8) * 600) =
           *(longlong *)(&DAT_180112b00 + (ulonglong)*(uint *)(param_1 + 0xea8) * 600) +
           (ulonglong)*(uint *)(param_2 + 0x84);
      uVar1 = *(uint *)(param_1 + 0xed8);
      if (uVar2 < uVar1) {
        while( true ) {
          uVar4 = uVar2 + 1;
          if (uVar1 <= uVar4) break;
          *(undefined8 *)(*(longlong *)(param_1 + 0xed0) + (ulonglong)uVar2 * 8) =
               *(undefined8 *)(*(longlong *)(param_1 + 0xed0) + (ulonglong)uVar4 * 8);
          uVar1 = *(uint *)(param_1 + 0xed8);
          uVar2 = uVar4;
        }
        *(uint *)(param_1 + 0xed8) = uVar1 - 1;
      }
      FUN_1800016bc(param_1,(undefined8 *)(-(ulonglong)(param_2 != 0) & param_2 + 0x90U));
    }
  }
  return;
}

