/*
 * FUN_100cd8f0 at 100cd8f0
 * undefined FUN_100cd8f0(void)
 * Address ranges: 100cd8f0-100cd977
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100cd8f0(float param_1,int param_2,int param_3,int param_4,int param_5,int param_6)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = 0;
  do {
    iVar1 = uVar3 + param_3 * 0x102;
    *(short *)(param_4 + uVar3 * 2) =
         (short)(int)(*(float *)(param_2 + 0x100a8 + iVar1 * 0xc) * param_1);
    *(short *)(param_5 + uVar3 * 2) =
         (short)(int)(*(float *)(param_2 + 0x100ac + iVar1 * 0xc) * param_1);
    iVar2 = param_3 * 0x102 + 0x1564 + uVar3;
    iVar1 = uVar3 * 2;
    uVar3 = uVar3 + 1;
    *(short *)(param_6 + iVar1) = (short)(int)(*(float *)(param_2 + iVar2 * 0xc) * param_1);
  } while (uVar3 < 0x100);
  return;
}

