/*
 * FUN_10009cf0 at 10009cf0
 * undefined FUN_10009cf0(void)
 * Address ranges: 10009cf0-10009dab
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_10009cf0(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = FUN_1007abb0(param_2,&DAT_10094620,0x10);
  if (iVar1 == 0) {
    piVar2 = (int *)(param_1 + 0x18);
  }
  else {
    iVar1 = FUN_1007abb0(param_2,&DAT_10094630,0x10);
    if (iVar1 == 0) {
      piVar2 = (int *)(param_1 + 0x24);
    }
    else {
      iVar1 = FUN_1007abb0(param_2,&DAT_10094640,0x10);
      if (iVar1 == 0) {
        piVar2 = (int *)(param_1 + 0x30);
      }
      else {
        iVar1 = FUN_1007abb0(param_2,&DAT_10094650,0x10);
        if (iVar1 != 0) {
          return 0;
        }
        piVar2 = (int *)(param_1 + 0x3c);
      }
    }
  }
  return *(undefined4 *)(*piVar2 + param_3 * 4);
}

