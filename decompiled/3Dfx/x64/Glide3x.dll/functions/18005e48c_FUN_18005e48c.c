/*
 * FUN_18005e48c at 18005e48c
 * undefined8 __fastcall FUN_18005e48c(longlong * param_1, byte * param_2, undefined8 * param_3)
 * Address ranges: 18005e48c-18005e501
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_18005e48c(longlong *param_1,byte *param_2,undefined8 *param_3)

{
  int iVar1;
  
  iVar1 = FUN_180060f70(param_2,&DAT_180062630,0x10);
  if ((iVar1 != 0) && (iVar1 = FUN_180060f70(param_2,&DAT_180062540,0x10), iVar1 != 0)) {
    *param_3 = 0;
    return 0x80004002;
  }
  *param_3 = param_1;
  (**(code **)(*param_1 + 8))(param_1);
  return 0;
}

