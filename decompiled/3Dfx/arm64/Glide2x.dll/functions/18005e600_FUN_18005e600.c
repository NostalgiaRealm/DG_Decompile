/*
 * FUN_18005e600 at 18005e600
 * undefined4 __cdecl FUN_18005e600(longlong * param_1, undefined8 param_2, undefined8 * param_3)
 * Address ranges: 18005e600-18005e607
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_18005e600(longlong *param_1,byte *param_2,undefined8 *param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_180060310(param_2,&DAT_180061590,0x10);
  if ((iVar1 == 0) || (iVar1 = FUN_180060310(param_2,&DAT_180061560,0x10), iVar1 == 0)) {
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

