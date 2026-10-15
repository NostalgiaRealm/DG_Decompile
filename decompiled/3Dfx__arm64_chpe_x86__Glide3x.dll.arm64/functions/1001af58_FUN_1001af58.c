/*
 * FUN_1001af58 at 1001af58
 * undefined FUN_1001af58(void)
 * Address ranges: 1001af58-1001afa7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_1001af58(uint param_1,byte param_2)

{
  int iVar1;
  
  iVar1 = 0;
  if (param_1 < 0x10) {
    switch(param_1) {
    case 0:
    case 1:
    case 2:
      iVar1 = (param_2 ^ 1) << 4;
      break;
    case 4:
    case 5:
      iVar1 = (param_2 ^ 1) << 5;
      break;
    case 0xf:
      iVar1 = 0x10;
      if (param_2 == 0) {
        iVar1 = 0;
      }
    }
  }
  return iVar1;
}

