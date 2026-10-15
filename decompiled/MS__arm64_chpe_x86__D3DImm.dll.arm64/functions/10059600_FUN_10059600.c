/*
 * FUN_10059600 at 10059600
 * undefined FUN_10059600(void)
 * Address ranges: 10059600-100596cb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_10059600(int param_1,int *param_2,undefined4 *param_3)

{
  longlong *plVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  ulonglong uVar7;
  uint uVar8;
  
  uVar2 = *(uint *)(param_1 + 8);
  iVar3 = *param_2;
  uVar8 = 0;
  if (uVar2 != 0) {
    uVar6 = 0;
    uVar5 = uVar2;
    do {
      uVar8 = uVar5 + uVar6 >> 1;
      uVar7 = *(ulonglong *)(*(int *)(param_1 + 4) + uVar8 * 0x10);
      uVar4 = uVar8;
      if (uVar7 <= (ulonglong)(longlong)iVar3) {
        if ((ulonglong)(longlong)iVar3 <= uVar7) break;
        uVar6 = uVar8 + 1;
        uVar8 = uVar6;
        uVar4 = uVar5;
      }
      uVar5 = uVar4;
    } while (uVar5 != uVar6);
  }
  if ((uVar8 == uVar2) ||
     (plVar1 = (longlong *)(*(int *)(param_1 + 4) + uVar8 * 0x10), *plVar1 != (longlong)iVar3)) {
    FUN_100599a0(param_1,uVar8,iVar3,param_2,param_3);
  }
  else {
    *(undefined4 *)((int)plVar1 + 0xc) = *param_3;
  }
  return *(int *)(param_1 + 4) + uVar8 * 0x10 + 8;
}

