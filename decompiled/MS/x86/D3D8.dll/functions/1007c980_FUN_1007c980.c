/*
 * FUN_1007c980 at 1007c980
 * undefined4 __stdcall FUN_1007c980(int param_1, uint param_2, undefined4 * param_3, uint * param_4)
 * Address ranges: 1007c980-1007c9ee
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_1007c980(int param_1,uint param_2,undefined4 *param_3,uint *param_4)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  
  iVar1 = param_1;
  uVar3 = 0x8876086c;
  FUN_10003838((void *)((int)&param_1 + 3),(byte)(*(uint *)(param_1 + -0x4dd4) >> 2) & 1);
  iVar1 = FUN_10080572((void *)(iVar1 + 0x3c),param_2);
  if (iVar1 == 0) goto LAB_1007c9df;
  if (param_3 == (undefined4 *)0x0) {
LAB_1007c9d1:
    uVar3 = 0;
  }
  else {
    iVar2 = *(int *)(iVar1 + 0x20);
    if ((uint)(iVar2 << 2) <= *param_4) {
      puVar4 = *(undefined4 **)(iVar1 + 0x24);
      puVar5 = param_3;
      for (; iVar2 != 0; iVar2 = iVar2 + -1) {
        *puVar5 = *puVar4;
        puVar4 = puVar4 + 1;
        puVar5 = puVar5 + 1;
      }
      goto LAB_1007c9d1;
    }
  }
  *param_4 = *(int *)(iVar1 + 0x20) << 2;
LAB_1007c9df:
  FUN_10003881((char *)((int)&param_1 + 3));
  return uVar3;
}

