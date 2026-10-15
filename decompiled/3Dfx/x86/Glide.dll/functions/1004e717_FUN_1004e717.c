/*
 * FUN_1004e717 at 1004e717
 * undefined4 __stdcall FUN_1004e717(int * param_1, byte * param_2, undefined4 * param_3)
 * Address ranges: 1004e717-1004e769
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_1004e717(int *param_1,byte *param_2,undefined4 *param_3)

{
  int iVar1;
  
  iVar1 = FUN_10050532(param_2,&DAT_10051370,0x10);
  if ((iVar1 != 0) && (iVar1 = FUN_10050532(param_2,&DAT_10051260,0x10), iVar1 != 0)) {
    *param_3 = 0;
    return 0x80004002;
  }
  *param_3 = param_1;
  (**(code **)(*param_1 + 4))(param_1);
  return 0;
}

