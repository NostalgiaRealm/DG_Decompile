/*
 * FUN_18005f458 at 18005f458
 * undefined4 __cdecl FUN_18005f458(longlong * param_1, byte * param_2, undefined8 * param_3)
 * Address ranges: 18005f458-18005f4cf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_18005f458(longlong *param_1,byte *param_2,undefined8 *param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_180061160(param_2,&DAT_180062590,0x10);
  if ((iVar1 == 0) || (iVar1 = FUN_180061160(param_2,&DAT_180062560,0x10), iVar1 == 0)) {
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

