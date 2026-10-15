/*
 * FUN_1007b09f at 1007b09f
 * undefined __fastcall FUN_1007b09f(int param_1)
 * Address ranges: 1007b09f-1007b11a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_1007b09f(int param_1)

{
  bool bVar1;
  uint *puVar2;
  uint local_8;
  
  if ((*(int *)(param_1 + 0xb04) == 3) || ((*(byte *)(param_1 + 0xb0c) & 0x20) != 0)) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  if (bVar1) {
    *(undefined1 *)(param_1 + 0x58bf) = 1;
  }
  else if ((*(byte *)(param_1 + 0xb0c) & 0x80) == 0) {
    *(undefined1 *)(param_1 + 0x58bf) = 0;
  }
  else {
    *(bool *)(param_1 + 0x58bf) = *(int *)(param_1 + 0x4f0) != 0;
    local_8 = *(uint *)(param_1 + 0x5940);
    if ((local_8 & 1) != 0) {
      puVar2 = (uint *)FUN_100809ad((void *)(param_1 + 0x590c),&local_8);
      if (puVar2 != (uint *)0x0) {
        *(byte *)(param_1 + 0x58bf) = (byte)(*puVar2 >> 4) & 1;
      }
    }
  }
  return;
}

