/*
 * FUN_10132020 at 10132020
 * undefined FUN_10132020(void)
 * Address ranges: 10132020-101320db
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_10132020(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = FUN_10132550(param_2,&DAT_1015e3c0,0x10);
  if (iVar1 == 0) {
    piVar2 = (int *)(param_1 + 0x18);
  }
  else {
    iVar1 = FUN_10132550(param_2,&DAT_1015e3d0,0x10);
    if (iVar1 == 0) {
      piVar2 = (int *)(param_1 + 0x24);
    }
    else {
      iVar1 = FUN_10132550(param_2,&DAT_1015e3e0,0x10);
      if (iVar1 == 0) {
        piVar2 = (int *)(param_1 + 0x30);
      }
      else {
        iVar1 = FUN_10132550(param_2,&DAT_1015e3f0,0x10);
        if (iVar1 != 0) {
          return 0;
        }
        piVar2 = (int *)(param_1 + 0x3c);
      }
    }
  }
  return *(undefined4 *)(*piVar2 + param_3 * 4);
}

