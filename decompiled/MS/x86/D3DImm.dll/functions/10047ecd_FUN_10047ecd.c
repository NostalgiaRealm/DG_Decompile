/*
 * FUN_10047ecd at 10047ecd
 * undefined4 __thiscall FUN_10047ecd(void * this, int param_1, undefined4 * param_2)
 * Address ranges: 10047ecd-10047f4d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __thiscall FUN_10047ecd(void *this,int param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar3 = 0;
LAB_10047ee4:
  if (*(int *)(param_1 + iVar3 * 4) == (&DAT_1005d2a0)[iVar3]) goto code_r0x10047eec;
  iVar3 = 0;
  do {
    if (*(int *)(param_1 + iVar3 * 4) != (&DAT_1005d220)[iVar3]) {
      return 0x80004002;
    }
    iVar3 = iVar3 + 1;
  } while (iVar3 != 4);
  puVar1 = (undefined4 *)FUN_1005c755(8);
  if (puVar1 == (undefined4 *)0x0) goto LAB_10047f32;
  *puVar1 = &PTR_FUN_1005f7e8;
  goto LAB_10047f2d;
code_r0x10047eec:
  iVar3 = iVar3 + 1;
  if (iVar3 == 4) {
    puVar1 = (undefined4 *)FUN_1005c755(8);
    if (puVar1 == (undefined4 *)0x0) {
LAB_10047f32:
      puVar1 = (undefined4 *)0x0;
    }
    else {
      *puVar1 = &PTR_FUN_1005f810;
LAB_10047f2d:
      puVar1[1] = this;
    }
    uVar2 = 0x8007000e;
    *param_2 = puVar1;
    if (puVar1 != (undefined4 *)0x0) {
      uVar2 = 0;
    }
    return uVar2;
  }
  goto LAB_10047ee4;
}

