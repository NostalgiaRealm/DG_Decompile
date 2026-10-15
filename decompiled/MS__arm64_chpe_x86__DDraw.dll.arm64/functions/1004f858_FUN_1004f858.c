/*
 * FUN_1004f858 at 1004f858
 * undefined FUN_1004f858(void)
 * Address ranges: 1004f858-1004f91f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1004f858(int param_1)

{
  uint *puVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  
  if (param_1 != 0) {
    puVar1 = (uint *)(param_1 + 0x1b8);
    piVar2 = (int *)(param_1 + 0xfc);
    piVar3 = (int *)(param_1 + 4);
    do {
      iVar4 = *(int *)(*(int *)(param_1 + 4) + 0x94);
      if (iVar4 == 0) {
        FUN_1004eac8(param_1);
      }
      else {
        FUN_1004f220(param_1,iVar4);
      }
      *(undefined1 *)(param_1 + 8) = 1;
      if (((*puVar1 >> 9 & 1) != 0) &&
         (iVar4 = *(int *)(*piVar2 + 0x11c) * 0x228, *piVar3 == *(int *)(&DAT_100be324 + iVar4))) {
        *(undefined4 *)(&DAT_100be324 + iVar4) = 0;
      }
    } while (((*(uint *)(param_1 + 0x1b8) >> 3 & 1) != 0) &&
            (param_1 = *(int *)(param_1 + 0x110), param_1 != 0));
  }
  return;
}

