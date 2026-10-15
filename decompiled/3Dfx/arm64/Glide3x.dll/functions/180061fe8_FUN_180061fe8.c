/*
 * FUN_180061fe8 at 180061fe8
 * undefined4 __cdecl FUN_180061fe8(longlong * param_1, byte * param_2, undefined8 * param_3)
 * Address ranges: 180061fe8-18006205f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_180061fe8(longlong *param_1,byte *param_2,undefined8 *param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_180063e48(param_2,&DAT_180065590,0x10);
  if ((iVar1 == 0) || (iVar1 = FUN_180063e48(param_2,&DAT_180065560,0x10), iVar1 == 0)) {
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

