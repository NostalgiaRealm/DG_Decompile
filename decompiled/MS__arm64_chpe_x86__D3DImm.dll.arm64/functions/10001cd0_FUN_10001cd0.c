/*
 * FUN_10001cd0 at 10001cd0
 * undefined FUN_10001cd0(void)
 * Address ranges: 10001cd0-10001d5b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint FUN_10001cd0(int param_1,undefined4 param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  
  switch(param_2) {
  case 0x10:
    uVar2 = FUN_10001b70(param_1,param_3);
    break;
  case 0x11:
    uVar2 = FUN_10001bf0(param_1,param_3);
    break;
  case 0x12:
    uVar2 = FUN_10001c70(param_1,param_3);
    break;
  default:
    uVar2 = param_3;
    break;
  case 0x15:
    uVar1 = *(uint *)(*(int *)(param_1 + 0xc) + 0x7dc);
    uVar2 = uVar1 & 0xff;
    if (0x10 < uVar2 || uVar1 == 0) {
      uVar2 = param_3;
    }
  }
  return uVar2;
}

