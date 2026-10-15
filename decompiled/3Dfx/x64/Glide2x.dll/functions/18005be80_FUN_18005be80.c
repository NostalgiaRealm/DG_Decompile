/*
 * FUN_18005be80 at 18005be80
 * undefined8 __fastcall FUN_18005be80(longlong * param_1, byte * param_2, undefined8 * param_3)
 * Address ranges: 18005be80-18005bef5
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_18005be80(longlong *param_1,byte *param_2,undefined8 *param_3)

{
  int iVar1;
  
  iVar1 = FUN_18005f350(param_2,&DAT_180060630,0x10);
  if ((iVar1 != 0) && (iVar1 = FUN_18005f350(param_2,&DAT_180060540,0x10), iVar1 != 0)) {
    *param_3 = 0;
    return 0x80004002;
  }
  *param_3 = param_1;
  (**(code **)(*param_1 + 8))(param_1);
  return 0;
}

