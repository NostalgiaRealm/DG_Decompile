/*
 * FUN_18016f668 at 18016f668
 * undefined FUN_18016f668(void)
 * Address ranges: 18016f668-18016f793
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18016f668(undefined8 param_1,longlong param_2,uint param_3,uint param_4)

{
  uint uVar1;
  byte bVar2;
  
  uVar1 = param_4 & 0xf0;
  if ((uVar1 - 0x50 & 0xffffffef) == 0) {
    *(undefined1 *)(param_2 + 0x20c) = 1;
  }
  else if (uVar1 == 0x10) {
    bVar2 = 7;
    if ((param_4 & 0x100) != 0) {
      bVar2 = 8;
    }
    *(byte *)(param_2 + 0x20a) = *(byte *)(param_2 + 0x20a) | bVar2;
  }
  else {
    if (uVar1 == 0x20) {
      bVar2 = 7;
      if ((param_4 & 0x100) != 0) {
        bVar2 = 8;
      }
      *(byte *)(param_2 + 0x20b) = *(byte *)(param_2 + 0x20b) | bVar2;
      param_3 = param_3 + 0x18;
    }
    else if (uVar1 == 0x30) {
      bVar2 = 7;
      if ((param_4 & 0x100) != 0) {
        bVar2 = 8;
      }
      *(byte *)(param_2 + 0x200) = *(byte *)(param_2 + 0x200) | bVar2;
    }
    else if (uVar1 == 0x40) {
      bVar2 = 7;
      if ((param_4 & 0x100) != 0) {
        bVar2 = 8;
      }
      *(byte *)(param_2 + 0x201) = *(byte *)(param_2 + 0x201) | bVar2;
      param_3 = param_3 + 8;
    }
    else {
      if (uVar1 == 0x70) {
        param_2 = param_2 + (ulonglong)(param_4 & 7);
        bVar2 = 7;
        if ((param_4 & 0x100) != 0) {
          bVar2 = 8;
        }
        *(byte *)(param_2 + 0x202) = *(byte *)(param_2 + 0x202) | bVar2;
        return;
      }
      if (uVar1 != 0x90) {
        return;
      }
      param_3 = param_3 + 0x10;
      *(undefined1 *)(param_2 + 0x20d) = 1;
    }
    *(byte *)(param_2 + 0x210 + (longlong)((int)param_3 >> 3)) =
         *(byte *)(param_2 + 0x210 + (longlong)((int)param_3 >> 3)) |
         (byte)(1 << (ulonglong)(param_3 & 7));
  }
  return;
}

