/*
 * FUN_180007df4 at 180007df4
 * undefined __fastcall FUN_180007df4(longlong param_1, longlong param_2)
 * Address ranges: 180007df4-180007e8d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180007df4(longlong param_1,longlong param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  uint uVar4;
  
  if (*(uint *)(param_1 + 0xf08) != 0) {
    uVar3 = 0;
    while (uVar2 = (uint)uVar3, *(longlong *)(*(longlong *)(param_1 + 0xf00) + uVar3 * 8) != param_2
          ) {
      uVar3 = (ulonglong)(uVar2 + 1);
      if (*(uint *)(param_1 + 0xf08) <= uVar2 + 1) {
        return;
      }
    }
    if (uVar2 != 0xffffffff) {
      if ((*(int *)(param_2 + 0x5c) == 0) && (*(int *)(param_1 + 0xe68) == 1)) {
        *(ulonglong *)(&DAT_180112b00 + (ulonglong)*(uint *)(param_1 + 0xea8) * 600) =
             *(longlong *)(&DAT_180112b00 + (ulonglong)*(uint *)(param_1 + 0xea8) * 600) +
             (ulonglong)*(uint *)(param_2 + 0x20);
      }
      uVar1 = *(uint *)(param_1 + 0xf08);
      if (uVar2 < uVar1) {
        while( true ) {
          uVar4 = uVar2 + 1;
          if (uVar1 <= uVar4) break;
          *(undefined8 *)(*(longlong *)(param_1 + 0xf00) + (ulonglong)uVar2 * 8) =
               *(undefined8 *)(*(longlong *)(param_1 + 0xf00) + (ulonglong)uVar4 * 8);
          uVar1 = *(uint *)(param_1 + 0xf08);
          uVar2 = uVar4;
        }
        *(uint *)(param_1 + 0xf08) = uVar1 - 1;
      }
    }
  }
  return;
}

