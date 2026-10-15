/*
 * FUN_10028b1f at 10028b1f
 * undefined __fastcall FUN_10028b1f(int param_1, int param_2, int param_3)
 * Address ranges: 10028b1f-10028b84
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_10028b1f(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  
  uVar5 = 0;
  do {
    uVar3 = 0;
    iVar4 = uVar5 << 2;
    do {
      iVar1 = uVar3 * 0x10;
      iVar2 = uVar3 * 0x10;
      uVar3 = uVar3 + 1;
      *(float *)(param_3 + iVar2 + iVar4) =
           *(float *)(param_2 + 4 + iVar1) * *(float *)(param_1 + 0x10 + uVar5 * 4) +
           *(float *)(param_2 + iVar1) * *(float *)(param_1 + iVar4) +
           *(float *)(param_2 + 8 + iVar1) * *(float *)(param_1 + 0x20 + uVar5 * 4) +
           *(float *)(param_2 + 0xc + iVar1) * *(float *)(param_1 + 0x30 + uVar5 * 4);
      iVar4 = uVar5 * 4;
    } while (uVar3 < 4);
    uVar5 = uVar5 + 1;
  } while (uVar5 < 4);
  return;
}

