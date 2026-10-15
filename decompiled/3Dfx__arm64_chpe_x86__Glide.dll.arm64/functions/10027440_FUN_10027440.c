/*
 * FUN_10027440 at 10027440
 * undefined FUN_10027440(void)
 * Address ranges: 10027440-100274ff
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint FUN_10027440(undefined8 param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  if (*(byte *)(param_2 + 4) < 0xb) {
    uVar3 = (uint)*(byte *)(*(byte *)(param_2 + 4) + 0x10096dc8);
  }
  else {
    uVar3 = 0;
  }
  if (*(byte *)(param_2 + 6) < 0xb) {
    uVar2 = (uint)*(byte *)(*(byte *)(param_2 + 6) + 0x10096dc8);
  }
  else {
    uVar2 = 0;
  }
  uVar1 = (uVar2 | uVar3) & 1;
  if ((uVar3 >> 1 & 1) != 0) {
    if (*(byte *)(param_2 + 5) < 0xd) {
      uVar3 = (uint)*(byte *)(*(byte *)(param_2 + 5) + 0x10096db8);
    }
    else {
      uVar3 = 0;
    }
    uVar1 = uVar3 & 1 | uVar1;
  }
  if ((uVar2 >> 1 & 1) != 0) {
    if (*(byte *)(param_2 + 7) < 0xd) {
      uVar3 = (uint)*(byte *)(*(byte *)(param_2 + 7) + 0x10096db8);
    }
    else {
      uVar3 = 0;
    }
    uVar1 = uVar3 & 1 | uVar1;
  }
  return uVar1;
}

