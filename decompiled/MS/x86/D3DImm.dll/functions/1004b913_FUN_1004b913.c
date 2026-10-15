/*
 * FUN_1004b913 at 1004b913
 * undefined4 __thiscall FUN_1004b913(void * this, int param_1, undefined4 * param_2)
 * Address ranges: 1004b913-1004b9bc
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __thiscall FUN_1004b913(void *this,int param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar3 = 0;
  do {
    if (*(int *)(param_1 + iVar3 * 4) != (&DAT_1005d2a0)[iVar3]) {
      iVar3 = 0;
      goto LAB_1004b953;
    }
    iVar3 = iVar3 + 1;
  } while (iVar3 != 4);
  puVar1 = (undefined4 *)FUN_1005c755(8);
  if (puVar1 == (undefined4 *)0x0) goto LAB_1004b9a1;
  *puVar1 = &PTR_FUN_1005f904;
LAB_1004b99c:
  puVar1[1] = this;
LAB_1004b9a3:
  uVar2 = 0x8007000e;
  *param_2 = puVar1;
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = 0;
  }
  return uVar2;
LAB_1004b953:
  if (*(int *)(param_1 + iVar3 * 4) == (&DAT_1005d260)[iVar3]) goto code_r0x1004b95b;
  iVar3 = 0;
  do {
    if (*(int *)(param_1 + iVar3 * 4) != (&DAT_1005d270)[iVar3]) {
      return 0x80004002;
    }
    iVar3 = iVar3 + 1;
  } while (iVar3 != 4);
  puVar1 = (undefined4 *)FUN_1005c755(8);
  if (puVar1 == (undefined4 *)0x0) goto LAB_1004b9a1;
  *puVar1 = &PTR_FUN_1005f8c0;
  goto LAB_1004b99c;
code_r0x1004b95b:
  iVar3 = iVar3 + 1;
  if (iVar3 == 4) goto code_r0x1004b961;
  goto LAB_1004b953;
code_r0x1004b961:
  puVar1 = (undefined4 *)FUN_1005c755(8);
  if (puVar1 == (undefined4 *)0x0) {
LAB_1004b9a1:
    puVar1 = (undefined4 *)0x0;
    goto LAB_1004b9a3;
  }
  *puVar1 = &PTR_FUN_1005f8e4;
  goto LAB_1004b99c;
}

