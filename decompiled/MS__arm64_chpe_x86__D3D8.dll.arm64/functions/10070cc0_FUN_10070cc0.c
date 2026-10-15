/*
 * FUN_10070cc0 at 10070cc0
 * undefined FUN_10070cc0(void)
 * Address ranges: 10070cc0-10070d4f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int * FUN_10070cc0(undefined8 param_1,int *param_2,int param_3,uint param_4,undefined1 param_5)

{
  int iVar1;
  uint uVar2;
  
  if ((param_4 & 0xe000000) == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = FUN_100ee580(param_3,4,1);
    if (iVar1 != 0) {
      uVar2 = 0;
      do {
        if (*(int *)(param_3 + 0x2c0 + uVar2 * 4) == 0) {
          *(int *)(param_3 + uVar2 * 4 + 0x2c0) = iVar1;
          break;
        }
        uVar2 = uVar2 + 1;
      } while (uVar2 < 4);
    }
  }
  *param_2 = iVar1;
  *(undefined1 *)(param_2 + 1) = param_5;
  return param_2;
}

