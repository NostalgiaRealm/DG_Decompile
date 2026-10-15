/*
 * FUN_1004d9a0 at 1004d9a0
 * undefined FUN_1004d9a0(void)
 * Address ranges: 1004d9a0-1004da3b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1004d9a0(int param_1,int param_2,char param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  FUN_10047f98(param_1,0,0,0);
  if (*(int *)(param_1 + 0xfa20) == *(int *)(param_1 + 0xfa18)) {
    *(undefined4 *)(param_1 + 0xfa18) = 0;
  }
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined4 *)(param_2 + 0x10);
  }
  *(int *)(param_1 + 0xfa28) = param_2;
  uVar1 = 0x2a;
  if (param_3 == '\0') {
    uVar1 = 0x39;
  }
  *(undefined4 *)(param_1 + 0xfa20) = uVar2;
  *(undefined4 *)(param_1 + 0xfa24) = uVar1;
  *(undefined1 *)(param_1 + 0xf670) = 1;
  return;
}

