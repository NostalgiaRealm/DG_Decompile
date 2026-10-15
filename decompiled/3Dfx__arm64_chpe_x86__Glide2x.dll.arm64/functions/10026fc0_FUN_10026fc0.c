/*
 * FUN_10026fc0 at 10026fc0
 * undefined FUN_10026fc0(void)
 * Address ranges: 10026fc0-1002707f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint FUN_10026fc0(undefined8 param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  if (*(byte *)(param_2 + 4) < 0xb) {
    uVar3 = (uint)*(byte *)(*(byte *)(param_2 + 4) + 0x10096d98);
  }
  else {
    uVar3 = 0;
  }
  if (*(byte *)(param_2 + 6) < 0xb) {
    uVar2 = (uint)*(byte *)(*(byte *)(param_2 + 6) + 0x10096d98);
  }
  else {
    uVar2 = 0;
  }
  uVar1 = (uVar2 | uVar3) & 1;
  if ((uVar3 >> 1 & 1) != 0) {
    if (*(byte *)(param_2 + 5) < 0xd) {
      uVar3 = (uint)*(byte *)(*(byte *)(param_2 + 5) + 0x10096d88);
    }
    else {
      uVar3 = 0;
    }
    uVar1 = uVar3 & 1 | uVar1;
  }
  if ((uVar2 >> 1 & 1) != 0) {
    if (*(byte *)(param_2 + 7) < 0xd) {
      uVar3 = (uint)*(byte *)(*(byte *)(param_2 + 7) + 0x10096d88);
    }
    else {
      uVar3 = 0;
    }
    uVar1 = uVar3 & 1 | uVar1;
  }
  return uVar1;
}

