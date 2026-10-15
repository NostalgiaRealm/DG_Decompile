/*
 * FUN_1009ec30 at 1009ec30
 * undefined FUN_1009ec30(void)
 * Address ranges: 1009ec30-1009eceb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool FUN_1009ec30(undefined4 param_1,int param_2,undefined4 param_3,uint param_4,undefined1 param_5,
                 undefined4 param_6)

{
  uint uVar1;
  undefined1 uVar2;
  
  if (((*(char *)(param_2 + param_4 + 0xca) != '\x02' || param_4 != 7) ||
      (*(char *)(*(int *)(param_2 + 0x10) + 0x4a6c) != '\x01')) ||
     (uVar2 = 1, *(char *)(*(int *)(param_2 + 0x10) + 0x4a6d) != '\x01')) {
    uVar2 = 0;
  }
  uVar1 = FUN_10094c48(param_1,param_3,param_2,param_4 | 0x410100,param_5,param_6,
                       *(undefined1 *)(param_2 + param_4 + 0xda),0,uVar2);
  *(uint *)(param_2 + param_4 * 4 + 0xec) = uVar1;
  return uVar1 == (param_4 | 0x410100);
}

