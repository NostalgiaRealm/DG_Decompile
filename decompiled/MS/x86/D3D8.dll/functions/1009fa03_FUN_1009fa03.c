/*
 * FUN_1009fa03 at 1009fa03
 * undefined __thiscall FUN_1009fa03(void * this, int param_1, undefined4 param_2, undefined4 param_3, undefined4 * param_4)
 * Address ranges: 1009fa03-1009fa58
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall
FUN_1009fa03(void *this,int param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = *(int *)this;
  *(undefined4 *)(iVar1 + param_1 * 0x10) = param_2;
  *(undefined4 *)(iVar1 + 4 + param_1 * 0x10) = param_3;
  *(undefined4 *)(*(int *)this + 8 + param_1 * 0x10) = *param_4;
  puVar2 = (undefined4 *)FUN_100ad475(0x14);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    *puVar2 = 0;
    puVar2[1] = 0;
    puVar2[2] = 0;
    puVar2[3] = 0;
    puVar2[4] = 0;
  }
  *(undefined4 **)(*(int *)this + 0xc + param_1 * 0x10) = puVar2;
  return;
}

