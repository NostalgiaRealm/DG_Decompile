/*
 * FUN_100c0968 at 100c0968
 * undefined FUN_100c0968(void)
 * Address ranges: 100c0968-100c09d7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_100c0968(int param_1)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = *(uint *)(*(int *)(param_1 + 0xe0) + 0x1cef4);
  iVar2 = *(int *)(param_1 + 0x1c);
  if (*(uint *)(&DAT_10162c20 + iVar2 * 4) < uVar1) {
    switch(uVar1) {
    case 0x10:
      iVar2 = 0x22;
      break;
    case 0x18:
      iVar2 = 0x23;
      break;
    case 0x20:
      iVar2 = 0x26;
    }
  }
  return iVar2;
}

