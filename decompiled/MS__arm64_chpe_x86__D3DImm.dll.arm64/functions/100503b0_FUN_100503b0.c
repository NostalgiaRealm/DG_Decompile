/*
 * FUN_100503b0 at 100503b0
 * undefined FUN_100503b0(void)
 * Address ranges: 100503b0-10050413
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100503b0(int *param_1,undefined4 *param_2,char param_3)

{
  int iVar1;
  
  iVar1 = *param_1;
  if (iVar1 == 0x16c) {
    iVar1 = 0xc0;
  }
  else if (iVar1 == 0x1ac) {
    iVar1 = 0xe0;
  }
  else {
    if (iVar1 != 0x20c) {
      return;
    }
    iVar1 = 0x110;
  }
  if (param_3 == '\0') {
    iVar1 = 0x14;
  }
  FUN_10081ee0(iVar1 + (int)param_1,param_2,*param_2);
  return;
}

