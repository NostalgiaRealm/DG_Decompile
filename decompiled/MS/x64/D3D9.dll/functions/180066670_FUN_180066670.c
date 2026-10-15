/*
 * FUN_180066670 at 180066670
 * undefined1 __fastcall FUN_180066670(undefined8 param_1, longlong param_2, uint param_3, uint param_4, int param_5, byte param_6)
 * Address ranges: 180066670-180066725
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined1
FUN_180066670(undefined8 param_1,longlong param_2,uint param_3,uint param_4,int param_5,byte param_6
             )

{
  uint uVar1;
  ulonglong uVar2;
  undefined1 uVar3;
  bool bVar4;
  
  uVar3 = 0;
  if (param_4 != 0xffffffff) {
    if ((param_5 == 2) || (bVar4 = false, param_5 == 1)) {
      bVar4 = *(ushort *)(param_2 + 4 + (longlong)(int)param_4 * 0x10) ==
              (ushort)((ushort)param_6 << 8 | 0x30);
    }
    if ((param_5 == 3) &&
       (*(ushort *)(param_2 + 6 + (longlong)(int)param_4 * 0x10) ==
        (ushort)((ushort)param_6 << 8 | 0x30))) {
      bVar4 = true;
    }
    if (bVar4) {
      if ((param_3 & (1 << ((byte)param_4 & 0x1f)) - 1U) == 0) {
        uVar3 = 1;
      }
      else {
        uVar2 = 0;
        uVar1 = 0;
        if (0 < (int)param_4) {
          do {
            if ((*(byte *)(param_2 + uVar2 * 0x10) & 0xf0) == 0x10) {
              return 0;
            }
            uVar1 = (int)uVar2 + 1;
            uVar2 = (ulonglong)uVar1;
          } while ((int)uVar1 < (int)param_4);
        }
        if (uVar1 == param_4) {
          *(undefined2 *)(param_2 + (longlong)(int)uVar1 * 0x10) = 0;
        }
      }
    }
  }
  return uVar3;
}

