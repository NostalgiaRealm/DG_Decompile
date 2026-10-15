/*
 * FUN_10009950 at 10009950
 * undefined FUN_10009950(void)
 * Address ranges: 10009950-100099fb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_10009950(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_1007a730(param_2,&DAT_100945f0,0x10);
  if (iVar1 == 0) {
    iVar1 = param_1 + 0x18;
  }
  else {
    iVar1 = FUN_1007a730(param_2,&DAT_10094600,0x10);
    if (iVar1 == 0) {
      iVar1 = param_1 + 0x24;
    }
    else {
      iVar1 = FUN_1007a730(param_2,&DAT_10094610,0x10);
      if (iVar1 == 0) {
        iVar1 = param_1 + 0x30;
      }
      else {
        iVar1 = 0;
        iVar2 = FUN_1007a730(param_2,&DAT_10094620,0x10);
        if (iVar2 == 0) {
          iVar1 = param_1 + 0x3c;
        }
      }
    }
  }
  return iVar1;
}

