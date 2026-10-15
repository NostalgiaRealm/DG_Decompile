/*
 * FUN_1800c4790 at 1800c4790
 * undefined FUN_1800c4790(void)
 * Address ranges: 1800c4790-1800c4843
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_1800c4790(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  
  uVar3 = 0;
  while (iVar2 = func_0x000180222c00(param_2,&DAT_180231db8 + uVar3 * 0x10,0x10), iVar2 != 0) {
    uVar1 = (int)uVar3 + 1;
    uVar3 = (ulonglong)uVar1;
    if (2 < uVar1) {
      return 0x80004002;
    }
  }
  iVar2 = FUN_1800015a0(param_1 + 0x28);
  *param_3 = *(undefined8 *)(param_1 + 0x30);
  if (*(longlong **)(param_1 + 0x40) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x40) + 8))();
    return 0;
  }
  if (iVar2 != 1) {
    return 0;
  }
  FUN_1800015a0(*(longlong *)(param_1 + 0x38) + 0x6844);
  return 0;
}

