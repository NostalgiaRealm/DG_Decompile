/*
 * FUN_1004c8d0 at 1004c8d0
 * undefined FUN_1004c8d0(void)
 * Address ranges: 1004c8d0-1004c98b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_1004c8d0(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = FUN_10083af0(param_2,&DAT_1009e7b0,0x10);
  if (iVar1 == 0) {
    piVar2 = (int *)(param_1 + 0x18);
  }
  else {
    iVar1 = FUN_10083af0(param_2,&DAT_1009e7c0,0x10);
    if (iVar1 == 0) {
      piVar2 = (int *)(param_1 + 0x24);
    }
    else {
      iVar1 = FUN_10083af0(param_2,&DAT_1009e7d0,0x10);
      if (iVar1 == 0) {
        piVar2 = (int *)(param_1 + 0x30);
      }
      else {
        iVar1 = FUN_10083af0(param_2,&DAT_1009e7e0,0x10);
        if (iVar1 != 0) {
          return 0;
        }
        piVar2 = (int *)(param_1 + 0x3c);
      }
    }
  }
  return *(undefined4 *)(*piVar2 + param_3 * 4);
}

