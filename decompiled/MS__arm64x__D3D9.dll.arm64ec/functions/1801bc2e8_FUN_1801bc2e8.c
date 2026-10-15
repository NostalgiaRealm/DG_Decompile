/*
 * FUN_1801bc2e8 at 1801bc2e8
 * undefined FUN_1801bc2e8(void)
 * Address ranges: 1801bc2e8-1801bc373
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_1801bc2e8(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  ulonglong uVar4;
  
  uVar2 = *(uint *)(param_1 + 8);
  uVar4 = 0;
  if (uVar2 != 0) {
    do {
      iVar3 = FUN_180222c00(param_2,param_1 + 0x20 + uVar4 * 0x10,0x10);
      if (iVar3 == 0) {
        FUN_1801042e0(param_1 + 0xc);
        *param_3 = *(undefined8 *)(param_1 + 0x18);
        return 0;
      }
      uVar1 = (int)uVar4 + 1;
      uVar4 = (ulonglong)uVar1;
    } while (uVar1 < uVar2);
  }
  return 0x80004002;
}

