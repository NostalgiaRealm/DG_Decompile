/*
 * FUN_10069c40 at 10069c40
 * undefined FUN_10069c40(void)
 * Address ranges: 10069c40-10069c93
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_10069c40(int param_1,int param_2,int param_3,undefined4 param_4)

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
  uVar1 = FUN_10060980(*(undefined4 *)(param_1 + 4),uVar2,uVar1,param_4);
  return uVar1;
}

