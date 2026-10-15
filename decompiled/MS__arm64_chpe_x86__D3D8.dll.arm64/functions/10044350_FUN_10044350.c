/*
 * FUN_10044350 at 10044350
 * undefined FUN_10044350(void)
 * Address ranges: 10044350-10044443
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * FUN_10044350(int param_1,undefined4 param_2,int param_3,undefined1 param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  ulonglong uVar4;
  undefined4 *extraout_w11;
  undefined4 *local_40 [4];
  
  puVar3 = (undefined4 *)FUN_100febf0(0x44);
  if (puVar3 != (undefined4 *)0x0) {
    uVar1 = *(undefined4 *)(param_1 + 200);
    uVar2 = *(undefined4 *)(param_1 + 0xc4);
    *puVar3 = &PTR_FUN_10129680;
    FUN_10044490(puVar3 + 1,param_1,uVar2,uVar1,param_2,param_3,1);
    *puVar3 = &PTR_FUN_101297f4;
    *extraout_w11 = &PTR_FUN_10129710;
    puVar3[0xf] = 0;
    *(undefined1 *)(puVar3 + 0x10) = param_4;
    uVar4 = FUN_10045250(puVar3 + 1);
    if ((uVar4 & 1) != 0) {
      if (param_3 == 1) {
        local_40[0] = puVar3 + 1;
        FUN_10006490(param_1 + 0xe0,local_40);
      }
      return puVar3;
    }
    FUN_1005cff0(puVar3);
    FUN_100fec90(puVar3,0x44);
  }
  return (undefined4 *)0x0;
}

