/*
 * FUN_1002e6d2 at 1002e6d2
 * undefined4 * __fastcall FUN_1002e6d2(int param_1, int param_2, undefined4 * param_3, undefined4 param_4, int param_5, undefined4 param_6, undefined1 param_7)
 * Address ranges: 1002e6d2-1002e769
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * __fastcall
FUN_1002e6d2(int param_1,int param_2,undefined4 *param_3,undefined4 param_4,int param_5,
            undefined4 param_6,undefined1 param_7)

{
  char cVar1;
  undefined4 *this;
  undefined4 local_c;
  
  local_c = CONCAT31(CONCAT21(local_c._2_2_,param_7),*(char *)(param_5 + 0x443) != '\0');
  this = (undefined4 *)FUN_100ad475(0x34);
  if (this != (undefined4 *)0x0) {
    this[4] = &PTR_FUN_100b278c;
    this[8] = param_4;
    this[1] = 0;
    this[2] = 0;
    this[3] = 0;
    this[9] = param_6;
    this[10] = local_c;
    *this = &PTR_FUN_100b218c;
    this[6] = &PTR_LAB_100b2188;
    this[0xb] = 0;
    this[0xc] = 0;
    this[7] = param_5;
    cVar1 = FUN_1002e5f8(this,param_1,param_2,param_3);
    if (cVar1 != '\0') {
      return this;
    }
    FUN_1002e35d(this);
    FUN_100ad48c(this);
  }
  return (undefined4 *)0x0;
}

