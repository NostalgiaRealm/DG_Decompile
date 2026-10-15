/*
 * FUN_100af550 at 100af550
 * undefined FUN_100af550(void)
 * Address ranges: 100af550-100af5df
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_100af550(int param_1)

{
  int iVar1;
  ulonglong uVar2;
  undefined4 local_20 [4];
  
  local_20[0] = 0;
  uVar2 = FUN_100afc10(param_1 + 4,local_20);
  if ((uVar2 & 1) != 0) {
    iVar1 = (*(code *)PTR_FUN_10134120)(DAT_1013d014);
    if (iVar1 == 0) {
      FUN_10006560(0);
    }
    param_1 = param_1 + -0x70;
    FUN_100018c0(param_1);
    FUN_10005740(param_1);
    if (param_1 != 0) {
      FUN_100af1e0(param_1);
      FUN_100fec90(param_1,0x8c);
    }
    (*(code *)PTR_FUN_101340bc)(DAT_1013d014);
  }
  return local_20[0];
}

