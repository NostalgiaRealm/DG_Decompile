/*
 * FUN_1007f390 at 1007f390
 * undefined FUN_1007f390(void)
 * Address ranges: 1007f390-1007f463
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1007f390(int param_1,uint param_2,uint param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  code *extraout_w11;
  
  (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
  (*extraout_w11)(param_1,0);
  if (param_2 < param_3) {
    iVar3 = 0;
    do {
      *(undefined4 *)(param_1 + (param_2 + 0x634) * 0x10) = *(undefined4 *)(param_4 + iVar3 * 0x10);
      *(undefined4 *)(param_1 + 0x6344 + param_2 * 0x10) =
           *(undefined4 *)(param_4 + 4 + iVar3 * 0x10);
      iVar1 = iVar3 * 0x10;
      iVar3 = iVar3 + 1;
      iVar2 = param_2 * 0x10;
      param_2 = param_2 + 1;
      *(undefined4 *)(param_1 + 0x6348 + iVar2) = *(undefined4 *)(param_4 + 8 + iVar1);
    } while (param_2 < param_3);
  }
  *(undefined1 *)(param_1 + 0xf697) = 1;
  return;
}

