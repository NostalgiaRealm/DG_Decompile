/*
 * FUN_10047210 at 10047210
 * undefined FUN_10047210(void)
 * Address ranges: 10047210-100472cb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_10047210(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = FUN_1007e450(param_2,&DAT_10098470,0x10);
  if (iVar1 == 0) {
    piVar2 = (int *)(param_1 + 0x18);
  }
  else {
    iVar1 = FUN_1007e450(param_2,&DAT_10098480,0x10);
    if (iVar1 == 0) {
      piVar2 = (int *)(param_1 + 0x24);
    }
    else {
      iVar1 = FUN_1007e450(param_2,&DAT_10098490,0x10);
      if (iVar1 == 0) {
        piVar2 = (int *)(param_1 + 0x30);
      }
      else {
        iVar1 = FUN_1007e450(param_2,&DAT_100984a0,0x10);
        if (iVar1 != 0) {
          return 0;
        }
        piVar2 = (int *)(param_1 + 0x3c);
      }
    }
  }
  return *(undefined4 *)(*piVar2 + param_3 * 4);
}

