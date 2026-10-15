/*
 * FUN_100415b0 at 100415b0
 * undefined FUN_100415b0(void)
 * Address ranges: 100415b0-1004160b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_100415b0(int param_1,uint *param_2)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  
  uVar1 = 0x80070057;
  if (param_2 != (uint *)0x0) {
    iVar2 = *(int *)(*(int *)(param_1 + 0xc) + 0xf4);
    if (iVar2 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = *(int *)(iVar2 + 0x108);
    }
    uVar1 = 0;
    uVar3 = 0x10;
    if (iVar2 != param_1) {
      uVar3 = 0;
    }
    *param_2 = uVar3 | *(uint *)(param_1 + 0x10);
  }
  return uVar1;
}

