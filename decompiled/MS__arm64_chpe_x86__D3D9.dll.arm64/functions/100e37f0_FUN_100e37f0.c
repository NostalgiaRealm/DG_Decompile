/*
 * FUN_100e37f0 at 100e37f0
 * undefined FUN_100e37f0(void)
 * Address ranges: 100e37f0-100e38bb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_100e37f0(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  ulonglong uVar2;
  
  uVar1 = 0x8876086c;
  if (param_2 != (undefined4 *)0x0) {
    FUN_101325a0(param_2,*(undefined4 *)(param_1 + 0x50),0x130);
    FUN_100d05d0(*(undefined4 *)(param_1 + 0x44),*(undefined4 *)(param_1 + -0x58f0),param_2);
    *param_2 = *(undefined4 *)(param_1 + -0x58ec);
    param_2[0x32] = *(undefined4 *)(param_1 + -0x58e0);
    uVar2 = FUN_10003950(*(undefined4 *)(param_1 + -0x5924),*(undefined4 *)(param_1 + -0x58c4));
    if ((uVar2 & 1) == 0) {
      param_2[7] = param_2[7] & 0xfeffffff;
      param_2[0x35] = param_2[0x35] & 0xfffffff7;
      param_2[0x36] = 0;
    }
    uVar1 = 0;
  }
  return uVar1;
}

