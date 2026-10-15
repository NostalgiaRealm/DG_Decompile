/*
 * FUN_100d44a8 at 100d44a8
 * undefined FUN_100d44a8(void)
 * Address ranges: 100d44a8-100d45bb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_100d44a8(int param_1,int param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  ulonglong uVar4;
  undefined4 uVar5;
  
  uVar5 = 0x8876086c;
  if ((param_2 != 0) || (param_3 != 0)) {
    if (param_3 != 0) {
      uVar4 = FUN_1000b520(param_1,param_3);
      if ((uVar4 & 1) == 0) {
        return 0x8876086c;
      }
      FUN_1000b5c0(param_1,param_3);
    }
    piVar1 = (int *)(param_1 + (param_2 + 6) * 4);
    iVar2 = *piVar1;
    if (iVar2 != 0) {
      FUN_1000b640(param_1,iVar2);
    }
    if (param_2 == 0) {
      iVar2 = *(int *)(param_3 + 4);
      *(undefined8 *)(param_1 + 0x2c) = 0;
      *(undefined4 *)(param_1 + 0x34) = *(undefined4 *)(iVar2 + 100);
      uVar5 = *(undefined4 *)(iVar2 + 0x68);
      *(undefined1 *)(param_1 + 0xc2ef) = 1;
      *(undefined4 *)(param_1 + 0x38) = uVar5;
      *(undefined4 *)(param_1 + 0x3c) = 0;
      *(undefined4 *)(param_1 + 0x40) = 0x3f800000;
      iVar2 = *(int *)(param_3 + 4);
      uVar5 = *(undefined4 *)(iVar2 + 100);
      uVar3 = *(undefined4 *)(iVar2 + 0x68);
      *(undefined8 *)(param_1 + 0x6d80) = 0;
      *(undefined4 *)(param_1 + 0x6d88) = uVar5;
      *(undefined4 *)(param_1 + 0x6d8c) = uVar3;
      *(undefined1 *)(param_1 + 0xc2f0) = 1;
    }
    *piVar1 = param_3;
    uVar5 = 0;
    *(undefined1 *)(param_1 + 0xc2ed) = 1;
  }
  return uVar5;
}

