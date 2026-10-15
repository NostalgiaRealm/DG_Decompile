/*
 * FUN_100401c7 at 100401c7
 * undefined4 * __fastcall FUN_100401c7(undefined4 param_1, undefined4 param_2, undefined4 * param_3, undefined4 param_4, int param_5, undefined4 param_6, undefined1 param_7)
 * Address ranges: 100401c7-1004026a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * __fastcall
FUN_100401c7(undefined4 param_1,undefined4 param_2,undefined4 *param_3,undefined4 param_4,
            int param_5,undefined4 param_6,undefined1 param_7)

{
  undefined4 *this;
  undefined4 uVar1;
  undefined4 local_c;
  
  local_c = CONCAT31(CONCAT21(local_c._2_2_,param_7),*(char *)(param_5 + 0x443) != '\0');
  this = (undefined4 *)FUN_100ad475(0x3c);
  if (this != (undefined4 *)0x0) {
    this[1] = 0;
    this[2] = 0;
    this[3] = 0;
    this[4] = &PTR_FUN_100b278c;
    this[8] = param_4;
    this[9] = param_6;
    this[10] = local_c;
    *this = &PTR_FUN_100b2418;
    this[6] = &PTR_LAB_100b2414;
    this[0xb] = 0;
    this[0xc] = 0;
    this[0xd] = &PTR_FUN_100b278c;
    this[7] = param_5;
    uVar1 = FUN_10040121(this,param_1,param_2,param_3);
    if ((char)uVar1 != '\0') {
      return this;
    }
    FUN_1003feec(this);
    FUN_100ad48c(this);
  }
  return (undefined4 *)0x0;
}

