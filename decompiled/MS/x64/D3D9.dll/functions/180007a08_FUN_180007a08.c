/*
 * FUN_180007a08 at 180007a08
 * undefined __fastcall FUN_180007a08(longlong param_1, longlong param_2)
 * Address ranges: 180007a08-180007abd
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180007a08(longlong param_1,longlong param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  uint uVar4;
  
  if (*(uint *)(param_1 + 0xe38) != 0) {
    uVar3 = 0;
    do {
      if (*(longlong *)(*(longlong *)(param_1 + 0xe30) + uVar3 * 8) == param_2) {
        if ((int)uVar3 != -1) {
          return;
        }
        break;
      }
      uVar2 = (int)uVar3 + 1;
      uVar3 = (ulonglong)uVar2;
    } while (uVar2 < *(uint *)(param_1 + 0xe38));
  }
  if (*(uint *)(param_1 + 0xeb8) != 0) {
    uVar3 = 0;
    while (uVar2 = (uint)uVar3, *(longlong *)(*(longlong *)(param_1 + 0xeb0) + uVar3 * 8) != param_2
          ) {
      uVar3 = (ulonglong)(uVar2 + 1);
      if (*(uint *)(param_1 + 0xeb8) <= uVar2 + 1) {
        return;
      }
    }
    if (uVar2 != 0xffffffff) {
      *(ulonglong *)(&DAT_180112b00 + (ulonglong)*(uint *)(param_1 + 0xea8) * 600) =
           *(longlong *)(&DAT_180112b00 + (ulonglong)*(uint *)(param_1 + 0xea8) * 600) +
           (ulonglong)*(uint *)(param_2 + 0x114);
      uVar1 = *(uint *)(param_1 + 0xeb8);
      if (uVar2 < uVar1) {
        while( true ) {
          uVar4 = uVar2 + 1;
          if (uVar1 <= uVar4) break;
          *(undefined8 *)(*(longlong *)(param_1 + 0xeb0) + (ulonglong)uVar2 * 8) =
               *(undefined8 *)(*(longlong *)(param_1 + 0xeb0) + (ulonglong)uVar4 * 8);
          uVar1 = *(uint *)(param_1 + 0xeb8);
          uVar2 = uVar4;
        }
        *(uint *)(param_1 + 0xeb8) = uVar1 - 1;
      }
    }
  }
  return;
}

