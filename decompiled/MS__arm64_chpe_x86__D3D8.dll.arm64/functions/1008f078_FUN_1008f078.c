/*
 * FUN_1008f078 at 1008f078
 * undefined FUN_1008f078(void)
 * Address ranges: 1008f078-1008f0e7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_1008f078(int param_1)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = *(uint *)(*(int *)(param_1 + 0xa8) + 0x1cef4);
  iVar2 = *(int *)(param_1 + 0x1c);
  if (*(uint *)(&DAT_1012cda0 + iVar2 * 4) < uVar1) {
    switch(uVar1) {
    case 0x10:
      iVar2 = 0x17;
      break;
    case 0x18:
      iVar2 = 0x18;
      break;
    case 0x20:
      iVar2 = 0x1b;
    }
  }
  return iVar2;
}

