/*
 * FUN_10015a00 at 10015a00
 * undefined FUN_10015a00(void)
 * Address ranges: 10015a00-10015b53
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_10015a00(uint *param_1,undefined4 param_2,int param_3)

{
  undefined4 uVar1;
  ulonglong uVar2;
  uint uVar3;
  
  uVar2 = FUN_10014800(param_1,param_2,*(undefined2 *)(param_3 + 1),*(undefined1 *)(param_3 + 7),
                       *(undefined1 *)(param_3 + 10),*(undefined1 *)(param_3 + 0xd),0,0);
  FUN_10014c78(param_1,uVar2 & 0xffffffff);
  uVar1 = FUN_10014618(param_1,param_2,0xffff);
  FUN_10002470(param_2,0x10ae0200100000,param_1[1] | 0x80000000,0xffffffff,0x1c0,0);
  FUN_10002470(param_2,0x5b0201400700,uVar1,uVar2 & 0xffffffff,uVar2 >> 0x20,0);
  FUN_10002470(param_2,0x10ae0200100000,param_1[1] | 0x80000000,0xffffffff,0x1b0,0);
  FUN_10002470(param_2,0x290200100100,*param_1 | 0x80000000,uVar1,0x4290,0);
  uVar3 = 0;
  do {
    if (param_1[uVar3 + 0x16] - 0x429 < 4) {
      param_1[uVar3 + 0x16] = 0xffffffff;
    }
    uVar3 = uVar3 + 1;
  } while (uVar3 < 0x10);
  FUN_10014c48(param_1,uVar2 & 0xffffffff);
  return 0xffffffff;
}

