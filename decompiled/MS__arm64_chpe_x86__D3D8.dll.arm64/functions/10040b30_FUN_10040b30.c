/*
 * FUN_10040b30 at 10040b30
 * undefined FUN_10040b30(void)
 * Address ranges: 10040b30-10040bf7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10040b30(int param_1,int param_2,int param_3,undefined4 param_4,undefined4 param_5)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  
  FUN_1003c678(param_1,0,0,0);
  if (param_2 == 0) {
    if (param_3 == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = *(undefined4 *)(param_3 + 0xc);
    }
    *(undefined4 *)(param_1 + 0xdbd0) = uVar3;
    *(undefined4 *)(param_1 + 0x72c) = param_4;
    puVar1 = (undefined4 *)(param_1 + 0x6e8);
  }
  else {
    if (param_3 == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = *(undefined4 *)(param_3 + 0xc);
    }
    iVar2 = param_1 + param_2 * 4;
    *(undefined4 *)(iVar2 + 0xdb8c) = uVar3;
    *(undefined4 *)(iVar2 + 0x6ec) = param_4;
    puVar1 = (undefined4 *)(iVar2 + 0x6a8);
  }
  *puVar1 = param_5;
  *(undefined1 *)(param_1 + 0xd97f) = 1;
  return;
}

