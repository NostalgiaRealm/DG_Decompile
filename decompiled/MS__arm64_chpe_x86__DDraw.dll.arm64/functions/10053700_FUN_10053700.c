/*
 * FUN_10053700 at 10053700
 * undefined FUN_10053700(void)
 * Address ranges: 10053700-100537a7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4
FUN_10053700(int param_1,ulonglong param_2,int param_3,undefined4 param_4,undefined4 param_5,
            undefined4 param_6)

{
  undefined4 uVar1;
  ulonglong uVar2;
  undefined4 uVar3;
  
  uVar1 = 0;
  if (param_3 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *(undefined4 *)(param_3 + 4);
  }
  uVar2 = FUN_10055000(*(undefined4 *)(param_1 + 4),param_2,uVar3);
  if ((uVar2 & 1) == 0) {
    if (param_3 == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = *(undefined4 *)(param_3 + 4);
    }
    uVar1 = FUN_1004b060(*(undefined4 *)(param_1 + 4),param_2 & 0xffffffff,uVar1,param_4,param_5,
                         param_6);
  }
  return uVar1;
}

