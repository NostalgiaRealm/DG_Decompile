/*
 * FUN_1001f6a8 at 1001f6a8
 * undefined FUN_1001f6a8(void)
 * Address ranges: 1001f6a8-1001f7e7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1001f6a8(int param_1,int param_2)

{
  char cVar1;
  uint uVar2;
  longlong *plVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  char *pcVar9;
  ulonglong uVar10;
  int local_10 [4];
  
  if (param_2 == 0) {
    return;
  }
  uVar2 = *(uint *)(param_1 + 0x1ec8);
  if (uVar2 == 0) {
LAB_1001f734:
    pcVar9 = (char *)0x0;
  }
  else {
    uVar7 = 0;
    uVar6 = uVar2;
    do {
      uVar8 = uVar6 + uVar7 >> 1;
      uVar10 = *(ulonglong *)(*(int *)(param_1 + 0x1ec4) + uVar8 * 0x18);
      uVar5 = uVar8;
      if (uVar10 <= (ulonglong)(longlong)param_2) {
        if ((ulonglong)(longlong)param_2 <= uVar10) break;
        uVar7 = uVar8 + 1;
        uVar8 = uVar7;
        uVar5 = uVar6;
      }
      uVar6 = uVar5;
    } while (uVar6 != uVar7);
    if ((uVar8 == uVar2) ||
       (plVar3 = (longlong *)(*(int *)(param_1 + 0x1ec4) + uVar8 * 0x18),
       pcVar9 = (char *)((int)plVar3 + 0xc), *plVar3 != (longlong)param_2)) goto LAB_1001f734;
  }
  cVar1 = *pcVar9 + -1;
  *pcVar9 = cVar1;
  pcVar9[6] = cVar1 == '\0' | pcVar9[6];
  if (cVar1 == '\0') {
    if (pcVar9[5] == '\0') {
      if ((((pcVar9[1] == '\0') && (pcVar9[2] == '\0')) && (pcVar9[3] == '\0')) &&
         (pcVar9[4] == '\0')) {
        bVar4 = true;
        goto LAB_1001f7cc;
      }
    }
    else if ((pcVar9[1] == '\0') && (pcVar9[2] == '\0')) {
      bVar4 = true;
      goto LAB_1001f7cc;
    }
  }
  bVar4 = false;
LAB_1001f7cc:
  if (bVar4) {
    local_10[0] = param_2;
    FUN_10028518(param_1 + 0x1ec0,local_10);
  }
  return;
}

