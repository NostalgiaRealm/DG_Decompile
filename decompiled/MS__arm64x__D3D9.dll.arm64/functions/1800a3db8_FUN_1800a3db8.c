/*
 * FUN_1800a3db8 at 1800a3db8
 * undefined FUN_1800a3db8(void)
 * Address ranges: 1800a3db8-1800a3e43
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_1800a3db8(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  ulonglong uVar4;
  
  uVar2 = *(uint *)(param_1 + 8);
  uVar4 = 0;
  if (uVar2 != 0) {
    do {
      iVar3 = func_0x000180222c00(param_2,param_1 + 0x20 + uVar4 * 0x10,0x10);
      if (iVar3 == 0) {
        FUN_1800015a0(param_1 + 0xc);
        *param_3 = *(undefined8 *)(param_1 + 0x18);
        return 0;
      }
      uVar1 = (int)uVar4 + 1;
      uVar4 = (ulonglong)uVar1;
    } while (uVar1 < uVar2);
  }
  return 0x80004002;
}

