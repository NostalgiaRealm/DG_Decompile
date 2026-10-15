/*
 * FUN_1004b32d at 1004b32d
 * undefined4 __thiscall FUN_1004b32d(void * this, int param_1, undefined4 * param_2)
 * Address ranges: 1004b32d-1004b3d6
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __thiscall FUN_1004b32d(void *this,int param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar3 = 0;
  do {
    if (*(int *)(param_1 + iVar3 * 4) != (&DAT_1005d2a0)[iVar3]) {
      iVar3 = 0;
      goto LAB_1004b36d;
    }
    iVar3 = iVar3 + 1;
  } while (iVar3 != 4);
  puVar1 = (undefined4 *)FUN_1005c755(8);
  if (puVar1 == (undefined4 *)0x0) goto LAB_1004b3bb;
  *puVar1 = &PTR_FUN_1005f8b4;
LAB_1004b3b6:
  puVar1[1] = this;
LAB_1004b3bd:
  uVar2 = 0x8007000e;
  *param_2 = puVar1;
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = 0;
  }
  return uVar2;
LAB_1004b36d:
  if (*(int *)(param_1 + iVar3 * 4) == (&DAT_1005d1c0)[iVar3]) goto code_r0x1004b375;
  iVar3 = 0;
  do {
    if (*(int *)(param_1 + iVar3 * 4) != (&DAT_1005d1d0)[iVar3]) {
      return 0x80004002;
    }
    iVar3 = iVar3 + 1;
  } while (iVar3 != 4);
  puVar1 = (undefined4 *)FUN_1005c755(8);
  if (puVar1 == (undefined4 *)0x0) goto LAB_1004b3bb;
  *puVar1 = &PTR_FUN_1005f87c;
  goto LAB_1004b3b6;
code_r0x1004b375:
  iVar3 = iVar3 + 1;
  if (iVar3 == 4) goto code_r0x1004b37b;
  goto LAB_1004b36d;
code_r0x1004b37b:
  puVar1 = (undefined4 *)FUN_1005c755(8);
  if (puVar1 == (undefined4 *)0x0) {
LAB_1004b3bb:
    puVar1 = (undefined4 *)0x0;
    goto LAB_1004b3bd;
  }
  *puVar1 = &PTR_FUN_1005f894;
  goto LAB_1004b3b6;
}

