/*
 * FUN_1800c3188 at 1800c3188
 * undefined FUN_1800c3188(void)
 * Address ranges: 1800c3188-1800c321b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_1800c3188(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  
  uVar3 = 0;
  do {
    iVar2 = func_0x000180222c00(param_2,&DAT_180231d98 + uVar3 * 0x10,0x10);
    if (iVar2 == 0) {
      iVar2 = FUN_1800015a0(param_1 + 8);
      *param_3 = *(undefined8 *)(param_1 + 0x10);
      if (iVar2 == 1) {
        FUN_1800015a0(*(longlong *)(param_1 + 0x18) + 0x6844);
      }
      return 0;
    }
    uVar1 = (int)uVar3 + 1;
    uVar3 = (ulonglong)uVar1;
  } while (uVar1 < 2);
  return 0x80004002;
}

