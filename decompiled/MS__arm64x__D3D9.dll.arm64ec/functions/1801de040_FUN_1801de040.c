/*
 * FUN_1801de040 at 1801de040
 * undefined FUN_1801de040(void)
 * Address ranges: 1801de040-1801de0bb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_1801de040(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  
  uVar3 = 0;
  do {
    iVar2 = FUN_180222c00(param_2,&DAT_18024d880 + uVar3 * 0x10,0x10);
    if (iVar2 == 0) {
      FUN_1801042e0(param_1 + 8);
      *param_3 = *(undefined8 *)(param_1 + 0x10);
      return 0;
    }
    uVar1 = (int)uVar3 + 1;
    uVar3 = (ulonglong)uVar1;
  } while (uVar1 < 2);
  return 0x80004002;
}

