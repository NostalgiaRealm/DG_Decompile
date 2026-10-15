/*
 * FUN_1004bfa0 at 1004bfa0
 * undefined4 __thiscall FUN_1004bfa0(void * this, int param_1, undefined4 * param_2)
 * Address ranges: 1004bfa0-1004c082
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __thiscall FUN_1004bfa0(void *this,int param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar2 = 0;
  do {
    if (*(int *)(param_1 + iVar2 * 4) != (&DAT_1005d2a0)[iVar2]) {
      iVar2 = 0;
      goto LAB_1004bfe5;
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 != 4);
  puVar1 = (undefined4 *)FUN_1005c755(8);
  if (puVar1 == (undefined4 *)0x0) goto LAB_1004c06a;
  *puVar1 = &PTR_FUN_1005fa0c;
  goto LAB_1004c065;
LAB_1004c011:
  if (*(int *)(param_1 + iVar2 * 4) == (&DAT_1005d240)[iVar2]) goto code_r0x1004c021;
  iVar2 = 0;
  do {
    if (*(int *)(param_1 + iVar2 * 4) != (&DAT_1005d250)[iVar2]) {
      return 0x80004002;
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 != 4);
  puVar1 = (undefined4 *)FUN_1005c755(8);
  if (puVar1 == (undefined4 *)0x0) goto LAB_1004c06a;
  *puVar1 = &PTR_FUN_1005f910;
  goto LAB_1004c065;
code_r0x1004c021:
  iVar2 = iVar2 + 1;
  if (iVar2 == 4) goto code_r0x1004c027;
  goto LAB_1004c011;
code_r0x1004c027:
  puVar1 = (undefined4 *)FUN_1005c755(8);
  if (puVar1 == (undefined4 *)0x0) {
LAB_1004c06a:
    puVar1 = (undefined4 *)0x0;
    goto LAB_1004c06c;
  }
  *puVar1 = &PTR_FUN_1005f964;
  goto LAB_1004c065;
  while (iVar2 = iVar2 + 1, iVar2 != 4) {
LAB_1004bfe5:
    if (*(int *)(param_1 + iVar2 * 4) != (&DAT_1005d230)[iVar2]) {
      iVar2 = 0;
      goto LAB_1004c011;
    }
  }
  puVar1 = (undefined4 *)FUN_1005c755(8);
  if (puVar1 == (undefined4 *)0x0) goto LAB_1004c06a;
  *puVar1 = &PTR_FUN_1005f9b8;
LAB_1004c065:
  puVar1[1] = this;
LAB_1004c06c:
  *param_2 = puVar1;
  uVar3 = 0x8007000e;
  if (puVar1 != (undefined4 *)0x0) {
    uVar3 = 0;
  }
  return uVar3;
}

