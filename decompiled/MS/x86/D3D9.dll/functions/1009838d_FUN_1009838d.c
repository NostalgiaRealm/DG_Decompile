/*
 * FUN_1009838d at 1009838d
 * undefined4 __stdcall FUN_1009838d(int param_1)
 * Address ranges: 1009838d-100983fc
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_1009838d(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = param_1;
  uVar2 = 0;
  FUN_10003e40((void *)((int)&param_1 + 3),(byte)(*(uint *)(param_1 + -0x58e4) >> 2) & 1);
  iVar1 = (**(code **)(*(int *)(&DAT_100df2e8)[*(int *)(iVar1 + -0x58c4) * 0x8a] + 0x98))();
  if (iVar1 != 1) {
    if (iVar1 == 2) {
      uVar2 = 0x88760870;
      goto LAB_100983df;
    }
    if (iVar1 == 3) {
      uVar2 = 0x88760868;
      goto LAB_100983df;
    }
    if (iVar1 != 4) goto LAB_100983df;
  }
  uVar2 = 0x88760874;
LAB_100983df:
  FUN_10003e89((char *)((int)&param_1 + 3));
  return uVar2;
}

