/*
 * FUN_1800c2df0 at 1800c2df0
 * undefined FUN_1800c2df0(void)
 * Address ranges: 1800c2df0-1800c2e6b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_1800c2df0(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  
  uVar3 = 0;
  do {
    iVar2 = func_0x000180222c00(param_2,&DAT_18024c3c0 + uVar3 * 0x10,0x10);
    if (iVar2 == 0) {
      FUN_1800015a0(param_1 + 8);
      *param_3 = *(undefined8 *)(param_1 + 0x10);
      return 0;
    }
    uVar1 = (int)uVar3 + 1;
    uVar3 = (ulonglong)uVar1;
  } while (uVar1 < 2);
  return 0x80004002;
}

