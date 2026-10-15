/*
 * FUN_1800f7fb0 at 1800f7fb0
 * undefined FUN_1800f7fb0(void)
 * Address ranges: 1800f7fb0-1800f802f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_1800f7fb0(longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = func_0x000180222c00(param_2,&DAT_1802296b8,0x10);
  if ((iVar1 == 0) || (iVar1 = func_0x000180222c00(param_2,&DAT_180229678,0x10), iVar1 == 0)) {
    *param_3 = param_1;
    (**(code **)(*param_1 + 8))(param_1);
    uVar2 = 0;
  }
  else {
    *param_3 = 0;
    uVar2 = 0x80004002;
  }
  return uVar2;
}

