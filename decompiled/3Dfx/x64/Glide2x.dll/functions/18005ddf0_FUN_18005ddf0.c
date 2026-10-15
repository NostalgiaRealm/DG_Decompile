/*
 * FUN_18005ddf0 at 18005ddf0
 * ulonglong __fastcall FUN_18005ddf0(byte * param_1, undefined4 * param_2)
 * Address ranges: 18005ddf0-18005de2d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

ulonglong FUN_18005ddf0(byte *param_1,undefined4 *param_2)

{
  uint uVar1;
  ulonglong uVar2;
  int local_res18 [4];
  
  uVar2 = FUN_18005eb50(param_1,local_res18);
  if ((char)uVar2 != '\0') {
    uVar1 = SUB84(local_res18._0_8_,4) + 1;
    uVar2 = (ulonglong)uVar1;
    if ((uVar1 & 0xfffffffe) == 0) {
      *param_2 = (int)local_res18._0_8_;
      return CONCAT71((uint7)(uint3)(uVar1 >> 8),1);
    }
  }
  return uVar2 & 0xffffffffffffff00;
}

