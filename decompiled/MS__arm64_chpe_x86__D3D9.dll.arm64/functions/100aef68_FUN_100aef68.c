/*
 * FUN_100aef68 at 100aef68
 * undefined FUN_100aef68(void)
 * Address ranges: 100aef68-100aefd7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_100aef68(int param_1)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = *(uint *)(*(int *)(param_1 + 0xa8) + 0x1cef4);
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

