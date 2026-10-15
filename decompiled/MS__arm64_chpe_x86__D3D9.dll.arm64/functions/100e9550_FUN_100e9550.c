/*
 * FUN_100e9550 at 100e9550
 * undefined FUN_100e9550(void)
 * Address ranges: 100e9550-100e95cf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100e9550(int param_1)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_FUN_1016c120)(DAT_10175b54);
  if (iVar1 == 0) {
    FUN_100071d0(0);
  }
  iVar1 = 0;
  if (param_1 != 0) {
    iVar1 = param_1 + 8;
  }
  FUN_1000cf90(*(undefined4 *)(param_1 + 0x120),iVar1);
  FUN_100e95d0(param_1);
  FUN_100e92c0(param_1);
  FUN_10132260(param_1,0x128);
  (*(code *)PTR_FUN_1016c0c0)(DAT_10175b54);
  return;
}

