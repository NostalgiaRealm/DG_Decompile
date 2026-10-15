/*
 * FUN_10062550 at 10062550
 * undefined FUN_10062550(void)
 * Address ranges: 10062550-1006267b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_10062550(undefined4 param_1,undefined4 param_2,int *param_3)

{
  int iVar1;
  ulonglong uVar2;
  undefined4 uVar3;
  
  iVar1 = FUN_10081e90(param_2,&DAT_1009c5d0,0x10);
  if (iVar1 == 0) {
    iVar1 = FUN_1004f4f0(param_1);
  }
  else {
    uVar2 = FUN_10062e80(param_1);
    if (((uVar2 & 1) == 0) || (iVar1 = FUN_10081e90(param_2,&DAT_1009c3f0,0x10), iVar1 != 0)) {
      uVar2 = FUN_10062e80(param_1);
      if (((uVar2 & 1) == 0) || (iVar1 = FUN_10081e90(param_2,&DAT_1009c400,0x10), iVar1 != 0)) {
        uVar2 = FUN_10062e80(param_1);
        if (((uVar2 & 1) == 0) || (iVar1 = FUN_10081e90(param_2,&DAT_1009c410,0x10), iVar1 != 0)) {
          uVar2 = FUN_10062e80(param_1);
          if ((uVar2 & 1) != 0) {
            return 0x80004002;
          }
          iVar1 = FUN_10081e90(param_2,&DAT_1009c420,0x10);
          if (iVar1 != 0) {
            return 0x80004002;
          }
          iVar1 = FUN_1004f670(param_1);
        }
        else {
          iVar1 = FUN_1004f610(param_1);
        }
      }
      else {
        iVar1 = FUN_1004f5b0(param_1);
      }
    }
    else {
      iVar1 = FUN_1004f550(param_1);
    }
  }
  *param_3 = iVar1;
  uVar3 = 0;
  if (iVar1 == 0) {
    uVar3 = 0x8007000e;
  }
  return uVar3;
}

