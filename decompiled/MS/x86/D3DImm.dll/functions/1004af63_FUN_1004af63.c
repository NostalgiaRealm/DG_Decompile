/*
 * FUN_1004af63 at 1004af63
 * undefined4 __thiscall FUN_1004af63(void * this, int param_1, undefined4 * param_2)
 * Address ranges: 1004af63-1004b045
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __thiscall FUN_1004af63(void *this,int param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar2 = 0;
  do {
    if (*(int *)(param_1 + iVar2 * 4) != (&DAT_1005d2a0)[iVar2]) {
      iVar2 = 0;
      goto LAB_1004afa8;
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 != 4);
  puVar1 = (undefined4 *)FUN_1005c755(8);
  if (puVar1 == (undefined4 *)0x0) goto LAB_1004b02d;
  *puVar1 = &PTR_FUN_1005f870;
  goto LAB_1004b028;
LAB_1004afd4:
  if (*(int *)(param_1 + iVar2 * 4) == (&DAT_1005d200)[iVar2]) goto code_r0x1004afe4;
  iVar2 = 0;
  do {
    if (*(int *)(param_1 + iVar2 * 4) != (&DAT_1005d210)[iVar2]) {
      return 0x80004002;
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 != 4);
  puVar1 = (undefined4 *)FUN_1005c755(8);
  if (puVar1 == (undefined4 *)0x0) goto LAB_1004b02d;
  *puVar1 = &PTR_FUN_1005f81c;
  goto LAB_1004b028;
code_r0x1004afe4:
  iVar2 = iVar2 + 1;
  if (iVar2 == 4) goto code_r0x1004afea;
  goto LAB_1004afd4;
code_r0x1004afea:
  puVar1 = (undefined4 *)FUN_1005c755(8);
  if (puVar1 == (undefined4 *)0x0) {
LAB_1004b02d:
    puVar1 = (undefined4 *)0x0;
    goto LAB_1004b02f;
  }
  *puVar1 = &PTR_FUN_1005f834;
  goto LAB_1004b028;
  while (iVar2 = iVar2 + 1, iVar2 != 4) {
LAB_1004afa8:
    if (*(int *)(param_1 + iVar2 * 4) != (&DAT_1005d1f0)[iVar2]) {
      iVar2 = 0;
      goto LAB_1004afd4;
    }
  }
  puVar1 = (undefined4 *)FUN_1005c755(8);
  if (puVar1 == (undefined4 *)0x0) goto LAB_1004b02d;
  *puVar1 = &PTR_FUN_1005f84c;
LAB_1004b028:
  puVar1[1] = this;
LAB_1004b02f:
  *param_2 = puVar1;
  uVar3 = 0x8007000e;
  if (puVar1 != (undefined4 *)0x0) {
    uVar3 = 0;
  }
  return uVar3;
}

