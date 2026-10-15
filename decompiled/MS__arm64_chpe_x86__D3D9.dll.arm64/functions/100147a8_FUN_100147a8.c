/*
 * FUN_100147a8 at 100147a8
 * undefined FUN_100147a8(void)
 * Address ranges: 100147a8-100147fb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4
FUN_100147a8(undefined4 param_1,undefined4 param_2,undefined2 param_3,char param_4,char param_5)

{
  bool bVar1;
  undefined4 uVar2;
  
  if ((param_5 != -0x3d) || (bVar1 = true, param_4 != '\0' && param_4 != '\x0f')) {
    bVar1 = false;
  }
  if (!bVar1) {
    param_3 = 0xffff;
  }
  uVar2 = FUN_10014618(param_1,param_2,param_3);
  return uVar2;
}

