/*
 * FUN_10025ff8 at 10025ff8
 * undefined FUN_10025ff8(void)
 * Address ranges: 10025ff8-10026067
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_10025ff8(int param_1)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = *(uint *)(*(int *)(param_1 + 0xe0) + 0xcef4);
  iVar2 = *(int *)(param_1 + 0x1c);
  if (*(uint *)(&DAT_100b35b0 + iVar2 * 4) < uVar1) {
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

