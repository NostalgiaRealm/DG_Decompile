/*
 * FUN_10040c00 at 10040c00
 * undefined FUN_10040c00(void)
 * Address ranges: 10040c00-10040c9b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10040c00(int param_1,int param_2,char param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  FUN_1003c678(param_1,0,0,0);
  if (*(int *)(param_1 + 0xdbd4) == *(int *)(param_1 + 0xdbcc)) {
    *(undefined4 *)(param_1 + 0xdbcc) = 0;
  }
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined4 *)(param_2 + 0x10);
  }
  *(int *)(param_1 + 0xdbdc) = param_2;
  uVar1 = 0x2a;
  if (param_3 == '\0') {
    uVar1 = 0x39;
  }
  *(undefined4 *)(param_1 + 0xdbd4) = uVar2;
  *(undefined4 *)(param_1 + 0xdbd8) = uVar1;
  *(undefined1 *)(param_1 + 0xd980) = 1;
  return;
}

