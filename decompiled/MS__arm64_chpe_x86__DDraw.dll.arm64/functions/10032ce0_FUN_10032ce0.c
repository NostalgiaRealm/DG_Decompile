/*
 * FUN_10032ce0 at 10032ce0
 * undefined FUN_10032ce0(void)
 * Address ranges: 10032ce0-10032d5f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10032ce0(float param_1,int param_2,int param_3,int param_4,int param_5,int param_6)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = 0;
  do {
    *(short *)(param_4 + uVar3 * 2) =
         (short)(int)(*(float *)(param_2 + (param_3 * 0x102 + 0xe + uVar3) * 0xc) * param_1);
    iVar2 = param_3 * 0x102 + uVar3;
    *(short *)(param_5 + uVar3 * 2) =
         (short)(int)(*(float *)(param_2 + 0xac + iVar2 * 0xc) * param_1);
    iVar1 = uVar3 * 2;
    uVar3 = uVar3 + 1;
    *(short *)(param_6 + iVar1) = (short)(int)(*(float *)(param_2 + 0xb0 + iVar2 * 0xc) * param_1);
  } while (uVar3 < 0x100);
  return;
}

