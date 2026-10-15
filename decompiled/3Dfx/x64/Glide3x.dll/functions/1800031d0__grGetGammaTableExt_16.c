/*
 * _grGetGammaTableExt@16 at 1800031d0
 * undefined __fastcall _grGetGammaTableExt@16(uint param_1, longlong param_2, longlong param_3, longlong param_4)
 * Address ranges: 1800031d0-180003269
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void _grGetGammaTableExt_16(uint param_1,longlong param_2,longlong param_3,longlong param_4)

{
  undefined *puVar1;
  uint uVar2;
  ulonglong uVar3;
  uint uVar4;
  
  uVar4 = param_1;
                    /* 0x31d0  41  _grGetGammaTableExt@16
                       0x31d0  141  grGetGammaTableExt */
  puVar1 = FUN_1800069ac();
  if (puVar1[100] != '\0') {
    LOCK();
    *(int *)(puVar1 + 0x60) = *(int *)(puVar1 + 0x60) + 1;
    UNLOCK();
    uVar3 = 0;
    if (param_1 != 0) {
      do {
        *(int *)(param_2 + uVar3 * 4) =
             (int)(longlong)*(float *)(*(longlong *)(puVar1 + 0x18) + 0x11e8 + uVar3 * 0xc) * 0xff;
        *(int *)(param_3 + uVar3 * 4) =
             (int)(longlong)*(float *)(*(longlong *)(puVar1 + 0x18) + 0x11ec + uVar3 * 0xc) * 0xff;
        *(int *)(param_4 + uVar3 * 4) =
             (int)(longlong)*(float *)(*(longlong *)(puVar1 + 0x18) + 0x11f0 + uVar3 * 0xc) * 0xff;
        uVar2 = (int)uVar3 + 1;
        uVar3 = (ulonglong)uVar2;
      } while (uVar2 < uVar4);
    }
    LOCK();
    *(int *)(puVar1 + 0x60) = *(int *)(puVar1 + 0x60) + -1;
    UNLOCK();
  }
  return;
}

