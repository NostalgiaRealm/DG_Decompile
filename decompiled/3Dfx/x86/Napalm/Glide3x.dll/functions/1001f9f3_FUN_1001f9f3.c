/*
 * FUN_1001f9f3 at 1001f9f3
 * undefined __thiscall FUN_1001f9f3(void * this, int param_1)
 * Address ranges: 1001f9f3-1001fa62
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_1001f9f3(void *this,int param_1)

{
  byte bVar1;
  int iVar2;
  byte bVar3;
  
  iVar2 = param_1 * 0x250;
  bVar1 = 1;
  if (((((*(byte *)(iVar2 + 12000 + (int)this) & 1) == 0) &&
       ((*(byte *)(iVar2 + 0x2ee4 + (int)this) & 1) == 0)) &&
      ((*(byte *)(iVar2 + 0x2ee8 + (int)this) & 1) == 0)) &&
     ((*(byte *)(iVar2 + 0x2eec + (int)this) & 1) == 0)) {
    bVar3 = 0;
  }
  else {
    bVar3 = 1;
  }
  if ((((*(byte *)(iVar2 + 0x2f10 + (int)this) & 1) == 0) &&
      ((*(byte *)(iVar2 + 0x2f14 + (int)this) & 1) == 0)) &&
     (((*(byte *)(iVar2 + 0x2f18 + (int)this) & 1) == 0 &&
      ((*(byte *)(iVar2 + 0x2f1c + (int)this) & 1) == 0)))) {
    bVar1 = 0;
  }
  *(byte *)(param_1 + 0x3659 + (int)this) = bVar1 | bVar3;
  return;
}

