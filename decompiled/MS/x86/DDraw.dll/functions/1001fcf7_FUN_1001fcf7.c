/*
 * FUN_1001fcf7 at 1001fcf7
 * undefined4 __stdcall FUN_1001fcf7(int param_1, uint param_2)
 * Address ranges: 1001fcf7-1001fd20
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_1001fcf7(int param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  undefined1 uVar3;
  
  uVar3 = 0;
  uVar1 = *(uint *)(&DAT_100693f4 + param_1 * 0x2c);
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

