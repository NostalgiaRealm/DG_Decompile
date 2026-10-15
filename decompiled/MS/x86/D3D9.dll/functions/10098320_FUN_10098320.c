/*
 * FUN_10098320 at 10098320
 * undefined4 __stdcall FUN_10098320(int param_1, int param_2)
 * Address ranges: 10098320-10098384
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_10098320(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = param_1;
  uVar2 = 0x8876086c;
  FUN_10003e40((void *)((int)&param_1 + 3),(byte)(*(uint *)(param_1 + -0x58e4) >> 2) & 1);
  if (param_2 == 0) {
    iVar1 = *(int *)(iVar1 + -0x58c4);
    (**(code **)(*(int *)(&DAT_100df2e8)[iVar1 * 0x8a] + 0x58))
              ((&DAT_100df2fc)[iVar1 * 0x8a],*(undefined4 *)(&DAT_100df464 + iVar1 * 0x228),
               *(undefined4 *)(&DAT_100df468 + iVar1 * 0x228),1);
    uVar2 = 0;
  }
  FUN_10003e89((char *)((int)&param_1 + 3));
  return uVar2;
}

