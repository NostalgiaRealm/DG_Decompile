/*
 * FUN_100101a8 at 100101a8
 * undefined FUN_100101a8(void)
 * Address ranges: 100101a8-1001024f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100101a8(int param_1,int param_2,uint param_3,int param_4,int param_5)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  
  uVar7 = 0;
  if (*(uint *)(param_2 + 8) != 0) {
    do {
      piVar1 = (int *)(param_5 + uVar7 * 0xc);
      uVar6 = (uint)*(byte *)(param_2 + 0x214 + uVar7);
      uVar4 = (uint)*(char *)(param_2 + 0x14 + uVar6 * 8);
      if ((1 << (ulonglong)(uVar4 & 0x1f) & param_3) == 0) {
        iVar5 = 0;
      }
      else {
        iVar5 = param_1 + uVar4 * 4;
        iVar2 = *(int *)(iVar5 + 0x65d0);
        iVar3 = *(int *)(iVar5 + 26000);
        piVar1[1] = iVar2;
        iVar5 = iVar2 * param_4 + (uint)*(byte *)(param_2 + uVar6 * 8 + 0x17) * 4 +
                *(int *)(iVar3 + 4) + *(int *)(iVar5 + 0x6610);
        piVar1[2] = 1;
      }
      *piVar1 = iVar5;
      uVar7 = uVar7 + 1;
    } while (uVar7 < *(uint *)(param_2 + 8));
  }
  return;
}

