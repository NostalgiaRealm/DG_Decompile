/*
 * FUN_1800a2030 at 1800a2030
 * undefined1 __fastcall FUN_1800a2030(longlong param_1)
 * Address ranges: 1800a2030-1800a20a4
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined1 FUN_1800a2030(longlong param_1)

{
  byte *pbVar1;
  undefined1 uVar2;
  uint uVar3;
  ulonglong uVar4;
  uint uVar5;
  uint uVar6;
  
  if (*(char *)(param_1 + 0x24d) == '\0') {
    FUN_1800fb1f0(*(longlong *)(param_1 + 0x58) + 0x12c0);
    uVar5 = 0;
    if (*(int *)(param_1 + 0x34) != 0) {
      do {
        uVar6 = 0;
        if (*(int *)(param_1 + 0x30) != 0) {
          do {
            uVar3 = uVar5 * *(int *)(param_1 + 0x3c) + uVar6;
            uVar6 = uVar6 + 1;
            uVar4 = (ulonglong)(uVar3 & 0x3f);
            pbVar1 = (byte *)(param_1 + 0x110 + (ulonglong)(uVar3 >> 6) * 8 + ((longlong)uVar4 >> 3)
                             );
            *pbVar1 = *pbVar1 | '\x01' << (uVar4 & 7);
          } while (uVar6 < *(uint *)(param_1 + 0x30));
        }
        uVar5 = uVar5 + 1;
      } while (uVar5 < *(uint *)(param_1 + 0x34));
    }
    uVar2 = FUN_18009fb60(param_1);
    *(undefined1 *)(param_1 + 0x24d) = uVar2;
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}

