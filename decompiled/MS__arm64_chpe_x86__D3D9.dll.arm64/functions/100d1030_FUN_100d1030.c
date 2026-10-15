/*
 * FUN_100d1030 at 100d1030
 * undefined FUN_100d1030(void)
 * Address ranges: 100d1030-100d1103
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_100d1030(int param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4)

{
  int iVar1;
  undefined4 uVar2;
  ulonglong uVar3;
  
  param_1 = param_1 + -0x70;
  iVar1 = FUN_10006e00(param_1,param_2,param_3,param_4);
  if (-1 < iVar1) {
    uVar2 = FUN_10004ff0(param_1,param_3);
    FUN_101325a0(param_4,uVar2,0x130);
    FUN_100d05d0(param_1,param_2,param_4);
    *param_4 = param_3;
    uVar2 = FUN_10003a00(param_1,param_3);
    param_4[0x32] = uVar2;
    uVar3 = FUN_10003950(param_1,param_2);
    if ((uVar3 & 1) == 0) {
      param_4[7] = param_4[7] & 0xfeffffff;
      param_4[0x35] = param_4[0x35] & 0xfffffff7;
      param_4[0x36] = 0;
    }
  }
  return iVar1;
}

