/*
 * FUN_180036254 at 180036254
 * undefined __fastcall FUN_180036254(longlong param_1, uint param_2)
 * Address ranges: 180036254-1800362f9
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180036254(longlong param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  uVar4 = -(uint)(*(char *)(param_1 + 0x317b) != '\0') & 0x30;
  uVar1 = -(uint)(*(char *)(param_1 + 0x317a) != '\0');
  uVar2 = -(uint)(*(char *)(param_1 + 0x3179) != '\0') & 3;
  uVar5 = uVar4 | uVar1 & 0xc | uVar2;
  uVar3 = uVar5;
  if ((((byte)uVar5 & 5) == 5) && (uVar3 = uVar4 | uVar1 & 8 | uVar2, (param_2 & 0x10) != 0)) {
    uVar3 = uVar5;
  }
  uVar1 = uVar3;
  if (((uVar3 & 0x10) != 0 && (uVar3 & 5) != 0) &&
     (uVar1 = uVar3 & 0xffffffef, (param_2 & 0x40) != 0)) {
    uVar1 = uVar3;
  }
  uVar3 = uVar1;
  if (((uVar1 & 2) != 0) && (uVar3 = uVar1 & 0xfffffffd, (param_2 & 2) != 0)) {
    uVar3 = uVar1;
  }
  uVar1 = uVar3;
  if (((uVar3 & 8) != 0) && (uVar1 = uVar3 & 0xfffffff7, (param_2 & 8) != 0)) {
    uVar1 = uVar3;
  }
  uVar3 = uVar1;
  if (((uVar1 & 0x20) != 0) && (uVar3 = uVar1 & 0xffffffdf, (param_2 & 0x20) != 0)) {
    uVar3 = uVar1;
  }
  *(uint *)(param_1 + 0x2bfc) = uVar3;
  return;
}

