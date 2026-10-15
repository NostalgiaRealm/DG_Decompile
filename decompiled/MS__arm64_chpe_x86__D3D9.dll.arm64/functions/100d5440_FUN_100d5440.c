/*
 * FUN_100d5440 at 100d5440
 * undefined FUN_100d5440(void)
 * Address ranges: 100d5440-100d54ef
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_100d5440(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                undefined4 param_5)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  iVar2 = -0x7789f795;
  if (*(char *)(param_1 + 0x2a4) != '\0') {
    iVar2 = 0;
    uVar3 = 0;
    do {
      if (*(uint *)(param_1 + 0xd98) <= uVar3) {
        return iVar2;
      }
      iVar1 = *(int *)(*(int *)(param_1 + 0xd94) + uVar3 * 4);
      iVar2 = 0;
      if (iVar1 != 0) {
        iVar2 = iVar1 + -8;
      }
      iVar2 = FUN_100e9cd0(iVar2,param_2,param_3,param_4,param_5,0);
      uVar3 = uVar3 + 1;
    } while (-1 < iVar2);
  }
  return iVar2;
}

