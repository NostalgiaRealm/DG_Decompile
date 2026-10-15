/*
 * FUN_100594a0 at 100594a0
 * undefined FUN_100594a0(void)
 * Address ranges: 100594a0-10059523
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_100594a0(int param_1,int *param_2)

{
  longlong *plVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  uint uVar7;
  uint uVar8;
  
  uVar2 = *(uint *)(param_1 + 8);
  if (uVar2 != 0) {
    iVar3 = *param_2;
    uVar8 = 0;
    uVar7 = uVar2;
    do {
      uVar5 = uVar7 + uVar8 >> 1;
      uVar6 = *(ulonglong *)(*(int *)(param_1 + 4) + uVar5 * 0x10);
      uVar4 = uVar5;
      if (uVar6 <= (ulonglong)(longlong)iVar3) {
        if ((ulonglong)(longlong)iVar3 <= uVar6) break;
        uVar8 = uVar5 + 1;
        uVar5 = uVar8;
        uVar4 = uVar7;
      }
      uVar7 = uVar4;
    } while (uVar7 != uVar8);
    if (uVar5 != uVar2) {
      plVar1 = (longlong *)(*(int *)(param_1 + 4) + uVar5 * 0x10);
      if (*plVar1 == (longlong)iVar3) {
        return (int)plVar1 + 0xc;
      }
      return 0;
    }
  }
  return 0;
}

