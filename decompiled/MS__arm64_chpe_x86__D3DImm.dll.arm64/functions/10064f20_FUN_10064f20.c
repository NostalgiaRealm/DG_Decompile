/*
 * FUN_10064f20 at 10064f20
 * undefined FUN_10064f20(void)
 * Address ranges: 10064f20-10064f9b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10064f20(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  uVar4 = 0;
  do {
    iVar3 = *(int *)(param_1 + 0x20 + uVar4 * 0x1c);
    if (iVar3 != 0) {
      iVar1 = param_1 + 8 + uVar4 * 0x1c;
      iVar2 = 0;
      if (param_1 != 0) {
        iVar2 = param_1 + -4;
      }
      FUN_10062690(iVar2,iVar1,iVar3);
      *(undefined4 *)(iVar1 + 0x18) = 0;
    }
    uVar4 = uVar4 + 1;
  } while (uVar4 < 4);
  return;
}

