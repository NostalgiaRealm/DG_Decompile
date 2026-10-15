/*
 * FUN_1004fc90 at 1004fc90
 * undefined FUN_1004fc90(void)
 * Address ranges: 1004fc90-1004fdb7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1004fc90(int param_1,ulonglong param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  iVar1 = *(int *)(param_1 + 4);
  uVar2 = *(uint *)(iVar1 + 200);
  uVar3 = *(uint *)(param_1 + 0x1b8) >> 0xf & 0xff;
  *(uint *)(iVar1 + 200) = (uVar2 | uVar3 << 5) & 0x20 ^ uVar2 & 0xffffffdf;
  if ((*(char *)(*(int *)(param_1 + 0xfc) + 0x151) == '\0') &&
     (*(char *)(DAT_100be0c0 + 0x75d) == '\0')) {
    if (((*(char *)(DAT_100be0c0 + 0x95b) == '\0' & uVar3) != 0) &&
       ((*(uint *)(*(int *)(param_1 + 4) + 200) >> 8 & 1) == 0)) {
      if ((param_2 & 1) != 0) {
        FUN_1004c620(param_1);
      }
      FUN_1004f930(param_1,*(undefined4 *)(iVar1 + 0x6c),*(undefined4 *)(iVar1 + 0x70),0);
    }
  }
  else {
    if ((param_2 & 1) != 0) {
      FUN_1004c620(param_1);
    }
    FUN_1004f930(param_1,*(undefined4 *)(iVar1 + 0x6c),*(undefined4 *)(iVar1 + 0x70),0);
    FUN_1004f930(param_1,*(undefined4 *)(iVar1 + 0x6c),*(undefined4 *)(iVar1 + 0x70),0);
    if (*(char *)(DAT_100be0c0 + 0x75f) != '\0') {
      (*(code *)PTR_FUN_100ba090)();
    }
  }
  return;
}

