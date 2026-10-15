/*
 * FUN_1008ce43 at 1008ce43
 * undefined4 __stdcall FUN_1008ce43(int param_1, uint param_2)
 * Address ranges: 1008ce43-1008ce6c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_1008ce43(int param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  undefined1 uVar3;
  
  uVar3 = 0;
  uVar1 = *(uint *)(&DAT_100dcd84 + param_1 * 0x2c);
  if (uVar1 != 0) {
    iVar2 = 0;
    if (uVar1 != 0) {
      for (; (uVar1 >> iVar2 & 1) == 0; iVar2 = iVar2 + 1) {
      }
    }
    uVar3 = (undefined1)((uVar1 & param_2) >> ((byte)iVar2 & 0x1f));
  }
  return CONCAT31((int3)(uVar1 >> 8),uVar3);
}

