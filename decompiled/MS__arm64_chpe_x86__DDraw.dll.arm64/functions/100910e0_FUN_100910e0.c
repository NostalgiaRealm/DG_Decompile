/*
 * FUN_100910e0 at 100910e0
 * undefined FUN_100910e0(void)
 * Address ranges: 100910e0-1009119b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_100910e0(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = FUN_10091750(param_2,&DAT_100b17a0,0x10);
  if (iVar1 == 0) {
    piVar2 = (int *)(param_1 + 0x18);
  }
  else {
    iVar1 = FUN_10091750(param_2,&DAT_100b17b0,0x10);
    if (iVar1 == 0) {
      piVar2 = (int *)(param_1 + 0x24);
    }
    else {
      iVar1 = FUN_10091750(param_2,&DAT_100b17c0,0x10);
      if (iVar1 == 0) {
        piVar2 = (int *)(param_1 + 0x30);
      }
      else {
        iVar1 = FUN_10091750(param_2,&DAT_100b17d0,0x10);
        if (iVar1 != 0) {
          return 0;
        }
        piVar2 = (int *)(param_1 + 0x3c);
      }
    }
  }
  return *(undefined4 *)(*piVar2 + param_3 * 4);
}

