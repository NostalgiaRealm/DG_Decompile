/*
 * FUN_100524c0 at 100524c0
 * undefined FUN_100524c0(void)
 * Address ranges: 100524c0-10052597
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * FUN_100524c0(int param_1,undefined4 param_2,int param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  ulonglong uVar4;
  undefined4 *extraout_w11;
  undefined4 *local_30 [4];
  
  puVar3 = (undefined4 *)FUN_101321c0(0x3c);
  if (puVar3 != (undefined4 *)0x0) {
    uVar1 = *(undefined4 *)(param_1 + 200);
    uVar2 = *(undefined4 *)(param_1 + 0xc4);
    *puVar3 = &PTR_FUN_1015eacc;
    FUN_10052830(puVar3 + 1,param_1,uVar2,uVar1,param_2,param_3,0);
    *puVar3 = &PTR_FUN_1015ecd4;
    *extraout_w11 = &PTR_FUN_1015eb98;
    uVar4 = FUN_100535f0(puVar3 + 1);
    if ((uVar4 & 1) != 0) {
      if (param_3 == 1) {
        local_30[0] = puVar3 + 1;
        FUN_10024e68(param_1 + 0xd4,local_30);
      }
      return puVar3;
    }
    FUN_1006f550(puVar3);
    FUN_10132260(puVar3,0x3c);
  }
  return (undefined4 *)0x0;
}

