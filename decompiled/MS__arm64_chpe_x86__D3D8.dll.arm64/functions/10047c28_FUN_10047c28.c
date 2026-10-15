/*
 * FUN_10047c28 at 10047c28
 * undefined FUN_10047c28(void)
 * Address ranges: 10047c28-10047cfb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10047c28(int param_1,int param_2)

{
  uint uVar1;
  char cVar2;
  longlong *plVar3;
  uint uVar4;
  uint uVar5;
  char *pcVar6;
  uint uVar7;
  uint uVar8;
  ulonglong uVar9;
  ulonglong extraout_x12;
  int local_10 [4];
  
  if (param_2 == 0) {
    return;
  }
  uVar1 = *(uint *)(param_1 + 0xdb40);
  if (uVar1 != 0) {
    uVar8 = 0;
    uVar7 = uVar1;
    do {
      uVar5 = uVar7 + uVar8 >> 1;
      uVar9 = *(ulonglong *)(*(int *)(param_1 + 0xdb3c) + uVar5 * 0x18);
      uVar4 = uVar5;
      if (uVar9 <= (ulonglong)(longlong)param_2) {
        if ((ulonglong)(longlong)param_2 <= uVar9) break;
        uVar8 = uVar5 + 1;
        uVar5 = uVar8;
        uVar4 = uVar7;
      }
      uVar7 = uVar4;
    } while (uVar7 != uVar8);
    if ((uVar5 != uVar1) &&
       (plVar3 = (longlong *)(*(int *)(param_1 + 0xdb3c) + uVar5 * 0x18),
       pcVar6 = (char *)((int)plVar3 + 0xc), *plVar3 == (longlong)param_2)) goto LAB_10047cb8;
  }
  pcVar6 = (char *)0x0;
LAB_10047cb8:
  cVar2 = *pcVar6;
  *pcVar6 = cVar2 + -1;
  pcVar6[6] = (char)(cVar2 + -1) == '\0' | pcVar6[6];
  local_10[0] = param_2;
  uVar9 = FUN_100460f0(pcVar6);
  if ((uVar9 & 1) != 0) {
    FUN_10050590(extraout_x12 & 0xffffffff,local_10);
  }
  return;
}

