/*
 * FUN_1004d8c0 at 1004d8c0
 * undefined FUN_1004d8c0(void)
 * Address ranges: 1004d8c0-1004d993
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1004d8c0(int param_1,int param_2,int param_3,undefined4 param_4,undefined4 param_5)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  
  FUN_10047f98(param_1,0,0,0);
  if (param_2 == 0) {
    if (param_3 == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = *(undefined4 *)(param_3 + 0xc);
    }
    *(undefined4 *)(param_1 + 0xfa1c) = uVar3;
    *(undefined4 *)(param_1 + 0x104c) = param_4;
    puVar1 = (undefined4 *)(param_1 + 0x1008);
  }
  else {
    if (param_3 == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = *(undefined4 *)(param_3 + 0xc);
    }
    iVar2 = param_1 + param_2 * 4;
    *(undefined4 *)(iVar2 + 0xf9d8) = uVar3;
    *(undefined4 *)(iVar2 + 0x100c) = param_4;
    puVar1 = (undefined4 *)(iVar2 + 0xfc8);
  }
  *puVar1 = param_5;
  *(undefined1 *)(param_1 + 0xf66f) = 1;
  return;
}

