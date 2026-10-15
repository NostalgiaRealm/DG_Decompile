/*
 * FUN_10056a90 at 10056a90
 * undefined FUN_10056a90(void)
 * Address ranges: 10056a90-10056b67
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10056a90(int param_1,int param_2)

{
  char cVar1;
  uint uVar2;
  longlong *plVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  ulonglong uVar9;
  ulonglong extraout_x12;
  int local_10 [4];
  
  if (param_2 == 0) {
    return;
  }
  uVar2 = *(uint *)(param_1 + 0xf8f8);
  if (uVar2 != 0) {
    uVar8 = 0;
    uVar7 = uVar2;
    do {
      uVar5 = uVar7 + uVar8 >> 1;
      uVar9 = *(ulonglong *)(*(int *)(param_1 + 0xf8f4) + uVar5 * 0x18);
      uVar4 = uVar5;
      if (uVar9 <= (ulonglong)(longlong)param_2) {
        if ((ulonglong)(longlong)param_2 <= uVar9) break;
        uVar8 = uVar5 + 1;
        uVar5 = uVar8;
        uVar4 = uVar7;
      }
      uVar7 = uVar4;
    } while (uVar7 != uVar8);
    if ((uVar5 != uVar2) &&
       (plVar3 = (longlong *)(*(int *)(param_1 + 0xf8f4) + uVar5 * 0x18), iVar6 = (int)plVar3 + 0xc,
       *plVar3 == (longlong)param_2)) goto LAB_10056b20;
  }
  iVar6 = 0;
LAB_10056b20:
  cVar1 = *(char *)(iVar6 + 1) + -1;
  *(char *)(iVar6 + 1) = cVar1;
  *(byte *)(iVar6 + 7) = cVar1 == '\0' | *(byte *)(iVar6 + 7);
  local_10[0] = param_2;
  uVar9 = FUN_10054490(iVar6);
  if ((uVar9 & 1) != 0) {
    FUN_10060958(extraout_x12 & 0xffffffff,local_10);
  }
  return;
}

