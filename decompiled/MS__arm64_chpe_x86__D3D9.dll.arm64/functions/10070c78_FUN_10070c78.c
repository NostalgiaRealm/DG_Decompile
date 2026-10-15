/*
 * FUN_10070c78 at 10070c78
 * undefined FUN_10070c78(void)
 * Address ranges: 10070c78-10070d47
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool FUN_10070c78(int param_1,int param_2)

{
  longlong *plVar1;
  uint uVar2;
  uint uVar3;
  int *piVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  ulonglong uVar8;
  int local_10 [4];
  
  uVar2 = *(uint *)(param_1 + 0x58);
  if (uVar2 != 0) {
    uVar6 = 0;
    uVar5 = uVar2;
    do {
      uVar7 = uVar5 + uVar6 >> 1;
      uVar8 = *(ulonglong *)(*(int *)(param_1 + 0x54) + uVar7 * 0x10);
      uVar3 = uVar7;
      if (uVar8 <= (ulonglong)(longlong)param_2) {
        if ((ulonglong)(longlong)param_2 <= uVar8) break;
        uVar6 = uVar7 + 1;
        uVar7 = uVar6;
        uVar3 = uVar5;
      }
      uVar5 = uVar3;
    } while (uVar5 != uVar6);
    if ((uVar7 != uVar2) &&
       (plVar1 = (longlong *)(*(int *)(param_1 + 0x54) + uVar7 * 0x10), *plVar1 == (longlong)param_2
       )) {
      piVar4 = (int *)((int)plVar1 + 0xc);
      if (piVar4 != (int *)0x0) {
        *(undefined1 *)(*(int *)(param_1 + 0x28) + *piVar4 * 0x30 + 0x2d) = 1;
        local_10[0] = param_2;
        FUN_10071470(param_1 + 0x50,local_10);
      }
      goto LAB_10070d38;
    }
  }
  piVar4 = (int *)0x0;
LAB_10070d38:
  return piVar4 != (int *)0x0;
}

