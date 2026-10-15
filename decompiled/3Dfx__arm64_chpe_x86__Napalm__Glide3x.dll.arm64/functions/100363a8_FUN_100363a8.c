/*
 * FUN_100363a8 at 100363a8
 * undefined FUN_100363a8(void)
 * Address ranges: 100363a8-10036447
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100363a8(int param_1,int param_2)

{
  int iVar1;
  byte bVar2;
  byte bVar3;
  
  iVar1 = param_1 + param_2 * 0x250;
  if (((((*(uint *)(iVar1 + 12000) & 1) == 0) && ((*(uint *)(iVar1 + 0x2ee4) & 1) == 0)) &&
      ((*(uint *)(iVar1 + 0x2ee8) & 1) == 0)) && ((*(uint *)(iVar1 + 0x2eec) & 1) == 0)) {
    bVar3 = 0;
  }
  else {
    bVar3 = 1;
  }
  if ((((*(uint *)(iVar1 + 0x2f10) & 1) == 0) && ((*(uint *)(iVar1 + 0x2f14) & 1) == 0)) &&
     (((*(uint *)(iVar1 + 0x2f18) & 1) == 0 && ((*(uint *)(iVar1 + 0x2f1c) & 1) == 0)))) {
    bVar2 = 0;
  }
  else {
    bVar2 = 1;
  }
  *(byte *)(param_2 + param_1 + 0x3659) = bVar2 | bVar3;
  return;
}

