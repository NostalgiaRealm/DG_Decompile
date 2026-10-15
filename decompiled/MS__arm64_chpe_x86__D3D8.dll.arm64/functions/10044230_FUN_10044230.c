/*
 * FUN_10044230 at 10044230
 * undefined FUN_10044230(void)
 * Address ranges: 10044230-10044307
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * FUN_10044230(int param_1,undefined4 param_2,int param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  ulonglong uVar4;
  undefined4 *extraout_w11;
  undefined4 *local_30 [4];
  
  puVar3 = (undefined4 *)FUN_100febf0(0x3c);
  if (puVar3 != (undefined4 *)0x0) {
    uVar1 = *(undefined4 *)(param_1 + 200);
    uVar2 = *(undefined4 *)(param_1 + 0xc4);
    *puVar3 = &PTR_FUN_10129680;
    FUN_10044490(puVar3 + 1,param_1,uVar2,uVar1,param_2,param_3,0);
    *puVar3 = &PTR_FUN_1012980c;
    *extraout_w11 = &PTR_FUN_10129710;
    uVar4 = FUN_10045250(puVar3 + 1);
    if ((uVar4 & 1) != 0) {
      if (param_3 == 1) {
        local_30[0] = puVar3 + 1;
        FUN_10006490(param_1 + 0xd4,local_30);
      }
      return puVar3;
    }
    FUN_1005d120(puVar3);
    FUN_100fec90(puVar3,0x3c);
  }
  return (undefined4 *)0x0;
}

