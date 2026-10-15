/*
 * FUN_1001b518 at 1001b518
 * undefined FUN_1001b518(void)
 * Address ranges: 1001b518-1001b56f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_1001b518(uint param_1,byte param_2)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = 0;
  if (param_1 < 0x10) {
    uVar2 = (uint)param_2;
    switch(param_1) {
    case 0:
    case 1:
    case 2:
      iVar1 = (uVar2 ^ 1) << 4;
      break;
    case 4:
    case 5:
      iVar1 = (uVar2 ^ 1) << 5;
      break;
    case 8:
      iVar1 = 0x20;
      if (uVar2 == 0) {
        iVar1 = 0;
      }
      break;
    case 0xf:
      iVar1 = uVar2 << 4;
    }
  }
  return iVar1;
}

