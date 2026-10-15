/*
 * FUN_100485e8 at 100485e8
 * undefined FUN_100485e8(void)
 * Address ranges: 100485e8-100486b3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100485e8(int param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar1 = 0x30;
  if (*(char *)(param_1 + 0x315b) == '\0') {
    uVar1 = 0;
  }
  uVar2 = 0xc;
  if (*(char *)(param_1 + 0x315a) == '\0') {
    uVar2 = 0;
  }
  uVar3 = 3;
  if (*(char *)(param_1 + 0x3159) == '\0') {
    uVar3 = 0;
  }
  uVar4 = uVar1 | uVar2 | uVar3;
  if (((uVar4 & 5) == 5) && ((param_2 & 0x10) == 0)) {
    uVar4 = uVar1 | uVar2 & 0xfffffffb | uVar3;
  }
  if ((((uVar4 & 5) != 0) && ((uVar4 >> 4 & 1) != 0)) && ((param_2 >> 6 & 1) == 0)) {
    uVar4 = uVar4 & 0xffffffef;
  }
  if (((uVar4 >> 1 & 1) != 0) && ((param_2 & 2) == 0)) {
    uVar4 = uVar4 & 0xfffffffd;
  }
  if (((uVar4 >> 3 & 1) != 0) && ((param_2 & 8) == 0)) {
    uVar4 = uVar4 & 0xfffffff7;
  }
  if ((uVar4 >> 5 != 0) && ((param_2 & 0x20) == 0)) {
    uVar4 = uVar4 & 0xffffffdf;
  }
  *(uint *)(param_1 + 0x2bdc) = uVar4;
  return;
}

