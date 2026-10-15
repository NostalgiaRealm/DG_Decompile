/*
 * FUN_100884d8 at 100884d8
 * undefined FUN_100884d8(void)
 * Address ranges: 100884d8-10088567
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int * FUN_100884d8(undefined8 param_1,int *param_2,int param_3,uint param_4,undefined1 param_5)

{
  int iVar1;
  uint uVar2;
  
  if ((param_4 & 0xe000000) == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = FUN_10121590(param_3,4,1);
    if (iVar1 != 0) {
      uVar2 = 0;
      do {
        if (*(int *)(param_3 + 0x3b0 + uVar2 * 4) == 0) {
          *(int *)(param_3 + uVar2 * 4 + 0x3b0) = iVar1;
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

