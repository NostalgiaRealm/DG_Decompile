/*
 * FUN_18005c328 at 18005c328
 * undefined8 __fastcall FUN_18005c328(longlong * param_1, byte * param_2, undefined8 * param_3)
 * Address ranges: 18005c328-18005c39d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_18005c328(longlong *param_1,byte *param_2,undefined8 *param_3)

{
  int iVar1;
  
  iVar1 = FUN_18005f7f0(param_2,&DAT_180060630,0x10);
  if ((iVar1 != 0) && (iVar1 = FUN_18005f7f0(param_2,&DAT_180060540,0x10), iVar1 != 0)) {
    *param_3 = 0;
    return 0x80004002;
  }
  *param_3 = param_1;
  (**(code **)(*param_1 + 8))(param_1);
  return 0;
}

