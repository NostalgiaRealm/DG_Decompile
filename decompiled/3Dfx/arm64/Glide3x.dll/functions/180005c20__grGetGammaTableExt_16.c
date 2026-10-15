/*
 * _grGetGammaTableExt@16 at 180005c20
 * undefined __cdecl _grGetGammaTableExt@16(uint param_1, longlong param_2, longlong param_3, longlong param_4)
 * Address ranges: 180005c20-180005ce7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void _grGetGammaTableExt_16(uint param_1,longlong param_2,longlong param_3,longlong param_4)

{
  uint uVar1;
  longlong lVar2;
  ulonglong uVar3;
  
                    /* 0x5c20  41  _grGetGammaTableExt@16
                       0x5c20  141  grGetGammaTableExt */
  lVar2 = FUN_180008ce0();
  if (*(char *)(lVar2 + 100) != '\0') {
    FUN_1800643e0((uint *)(lVar2 + 0x60));
    uVar3 = 0;
    if (param_1 != 0) {
      do {
        uVar1 = (int)uVar3 + 1;
        *(int *)(param_2 + uVar3 * 4) =
             (int)*(float *)(*(longlong *)(lVar2 + 0x18) + uVar3 * 0xc + 0x11e8) * 0xff;
        *(int *)(param_3 + uVar3 * 4) =
             (int)*(float *)(*(longlong *)(lVar2 + 0x18) + uVar3 * 0xc + 0x11ec) * 0xff;
        *(int *)(param_4 + uVar3 * 4) =
             (int)*(float *)(*(longlong *)(lVar2 + 0x18) + uVar3 * 0xc + 0x11f0) * 0xff;
        uVar3 = (ulonglong)uVar1;
      } while (uVar1 < param_1);
    }
    FUN_1800643d0((uint *)(lVar2 + 0x60));
  }
  return;
}

