/*
 * FUN_100daba0 at 100daba0
 * undefined FUN_100daba0(void)
 * Address ranges: 100daba0-100dac6b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100daba0(int param_1,int param_2,int param_3,int param_4,int param_5)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  char cVar4;
  uint uVar5;
  uint uVar6;
  
  if (*(uint *)(param_2 + 8) != 0) {
    uVar6 = 0;
    do {
      uVar1 = uVar6 + 1;
      uVar5 = (uint)*(byte *)(param_2 + 0x214 + uVar6);
      cVar4 = *(char *)(param_2 + 0x14 + uVar5 * 8);
      iVar2 = *(int *)(param_1 + 26000 + cVar4 * 4);
      iVar3 = *(int *)(param_1 + 0x65d0 + cVar4 * 4);
      *(int *)(param_5 + 4 + uVar6 * 0xc) = iVar3;
      *(uint *)(param_5 + uVar6 * 0xc) =
           *(int *)(param_1 + 0x6610 + cVar4 * 4) + (uint)*(byte *)(param_2 + 0x17 + uVar5 * 8) * 4
           + iVar3 * param_4 + *(int *)(iVar2 + 4);
      *(uint *)(param_5 + 8 + uVar6 * 0xc) = *(uint *)(param_3 + cVar4 * 4) & 0x3fffffff;
      uVar6 = uVar1;
    } while (uVar1 < *(uint *)(param_2 + 8));
  }
  return;
}

