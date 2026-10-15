/*
 * FUN_10054350 at 10054350
 * undefined FUN_10054350(void)
 * Address ranges: 10054350-100543c7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_10054350(int param_1,int *param_2,ulonglong param_3)

{
  undefined4 uVar1;
  ulonglong uVar2;
  undefined4 extraout_w10;
  undefined4 *extraout_w11;
  undefined1 auStack_80 [128];
  
  uVar1 = 0x80070057;
  if (param_2 != (int *)0x0) {
    if (*param_2 == 0x6c) {
      uVar2 = FUN_1004ca20(param_2,auStack_80);
      uVar1 = extraout_w10;
      if ((uVar2 & 1) != 0) {
        uVar1 = FUN_100448a0(*extraout_w11,auStack_80,param_3 & 0xffffffff);
      }
    }
    else {
      uVar1 = FUN_100448a0(*(undefined4 *)(param_1 + 4),param_2,param_3 & 0xffffffff);
    }
  }
  return uVar1;
}

