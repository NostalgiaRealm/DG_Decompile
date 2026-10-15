/*
 * FUN_100312b0 at 100312b0
 * undefined FUN_100312b0(void)
 * Address ranges: 100312b0-10031347
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100312b0(undefined8 param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  if (param_2 != 0) {
    uVar3 = 0;
    do {
      *(float *)(param_3 + uVar3 * 0x10) = (float)*(byte *)(param_2 + 2 + uVar3 * 4);
      *(float *)(param_3 + 4 + uVar3 * 0x10) = (float)*(byte *)(param_2 + 1 + uVar3 * 4);
      *(float *)(param_3 + 8 + uVar3 * 0x10) = (float)*(byte *)(param_2 + uVar3 * 4);
      iVar1 = uVar3 * 4;
      iVar2 = uVar3 * 0x10;
      uVar3 = uVar3 + 1;
      *(float *)(param_3 + 0xc + iVar2) = (float)*(byte *)(param_2 + 3 + iVar1);
    } while (uVar3 < 0x100);
    return;
  }
  FUN_100917d0(param_3,0,0x1000);
  return;
}

