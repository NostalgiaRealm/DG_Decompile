/*
 * FUN_10009890 at 10009890
 * undefined FUN_10009890(void)
 * Address ranges: 10009890-1000994b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_10009890(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = FUN_1007a730(param_2,&DAT_100945f0,0x10);
  if (iVar1 == 0) {
    piVar2 = (int *)(param_1 + 0x18);
  }
  else {
    iVar1 = FUN_1007a730(param_2,&DAT_10094600,0x10);
    if (iVar1 == 0) {
      piVar2 = (int *)(param_1 + 0x24);
    }
    else {
      iVar1 = FUN_1007a730(param_2,&DAT_10094610,0x10);
      if (iVar1 == 0) {
        piVar2 = (int *)(param_1 + 0x30);
      }
      else {
        iVar1 = FUN_1007a730(param_2,&DAT_10094620,0x10);
        if (iVar1 != 0) {
          return 0;
        }
        piVar2 = (int *)(param_1 + 0x3c);
      }
    }
  }
  return *(undefined4 *)(*piVar2 + param_3 * 4);
}

