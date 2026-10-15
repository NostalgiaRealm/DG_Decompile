/*
 * FUN_1003b315 at 1003b315
 * undefined __thiscall FUN_1003b315(void * this, int param_1, undefined4 param_2, undefined4 param_3, undefined4 * param_4)
 * Address ranges: 1003b315-1003b36a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall
FUN_1003b315(void *this,int param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int iVar4;
  
  iVar4 = param_1 * 0x18;
  iVar1 = *(int *)this;
  *(undefined4 *)(iVar4 + iVar1) = param_2;
  *(undefined4 *)(iVar4 + 4 + iVar1) = param_3;
  uVar2 = param_4[1];
  iVar1 = *(int *)this;
  *(undefined4 *)(iVar4 + 8 + iVar1) = *param_4;
  *(undefined4 *)(iVar4 + 0xc + iVar1) = uVar2;
  puVar3 = (undefined4 *)FUN_1005225f(0xc);
  if (puVar3 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    *puVar3 = 0;
    puVar3[1] = 0;
    puVar3[2] = 0;
  }
  *(undefined4 **)(iVar4 + 0x10 + *(int *)this) = puVar3;
  return;
}

