/*
 * FUN_10069d70 at 10069d70
 * undefined FUN_10069d70(void)
 * Address ranges: 10069d70-10069dc7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_10069d70(int param_1,int param_2,int param_3,undefined4 param_4,undefined4 param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  if (param_3 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined4 *)(param_3 + 4);
  }
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined4 *)(param_2 + 4);
  }
  uVar1 = FUN_10060aa0(*(undefined4 *)(param_1 + 4),uVar2,uVar1,param_4,param_5);
  return uVar1;
}

