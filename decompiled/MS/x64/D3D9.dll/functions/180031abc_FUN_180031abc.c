/*
 * FUN_180031abc at 180031abc
 * undefined __fastcall FUN_180031abc(longlong param_1, longlong param_2, ulonglong param_3)
 * Address ranges: 180031abc-180031b97
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180031abc(longlong param_1,longlong param_2,ulonglong param_3)

{
  LPVOID lpAddress;
  ulonglong uVar1;
  uint uVar2;
  
  if ((*(longlong *)(param_1 + 0x28) != 0) && ((*(byte *)(param_1 + 0x48) & 8) == 0)) {
    FUN_1800fbcf0(*(LPVOID *)(param_1 + 0x30));
    FUN_1800fbcf0(*(LPVOID *)(param_1 + 0x38));
    lpAddress = (LPVOID)(*(longlong *)(param_1 + 0x28) - (param_3 & 0xffffffff));
    if (param_2 == 0) {
      VirtualFree(lpAddress,0,0x8000);
    }
    else {
      UnmapViewOfFile(lpAddress);
    }
    *(undefined8 *)(param_1 + 0x28) = 0;
    *(undefined8 *)(param_1 + 0x30) = 0;
    *(undefined8 *)(param_1 + 0x38) = 0;
    *(undefined8 *)(param_1 + 0x40) = 0;
    *(undefined8 *)(param_1 + 0x48) = 0;
  }
  uVar1 = 0;
  if (DAT_1801128d8 != 0) {
    do {
      uVar2 = (uint)uVar1;
      if (*(longlong *)(DAT_1801128d0 + uVar1 * 8) == param_1) {
        if ((uVar2 != 0xffffffff) && (uVar2 < DAT_1801128d8)) {
          uVar2 = uVar2 + 1;
          if (uVar2 < DAT_1801128d8) {
            do {
              *(undefined8 *)(DAT_1801128d0 + (ulonglong)(uVar2 - 1) * 8) =
                   *(undefined8 *)(DAT_1801128d0 + (ulonglong)uVar2 * 8);
              uVar2 = uVar2 + 1;
            } while (uVar2 < DAT_1801128d8);
          }
          DAT_1801128d8 = DAT_1801128d8 - 1;
        }
        break;
      }
      uVar1 = (ulonglong)(uVar2 + 1);
    } while (uVar2 + 1 < DAT_1801128d8);
  }
  *(uint *)(param_1 + 0x48) = *(uint *)(param_1 + 0x48) & 0xffffffce;
  return;
}

