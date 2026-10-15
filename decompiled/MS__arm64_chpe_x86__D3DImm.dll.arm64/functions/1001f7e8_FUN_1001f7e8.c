/*
 * FUN_1001f7e8 at 1001f7e8
 * undefined FUN_1001f7e8(void)
 * Address ranges: 1001f7e8-1001f94b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1001f7e8(int param_1,int param_2,char param_3)

{
  char *pcVar1;
  uint uVar2;
  longlong *plVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  char cVar7;
  uint uVar8;
  uint uVar9;
  char *pcVar10;
  char *pcVar11;
  ulonglong uVar12;
  int local_10 [4];
  
  uVar2 = *(uint *)(param_1 + 0x1ec8);
  if (uVar2 == 0) {
LAB_1001f870:
    pcVar11 = (char *)0x0;
  }
  else {
    uVar8 = 0;
    uVar6 = uVar2;
    do {
      uVar9 = uVar6 + uVar8 >> 1;
      uVar12 = *(ulonglong *)(*(int *)(param_1 + 0x1ec4) + uVar9 * 0x18);
      uVar5 = uVar9;
      if (uVar12 <= (ulonglong)(longlong)param_2) {
        if ((ulonglong)(longlong)param_2 <= uVar12) break;
        uVar8 = uVar9 + 1;
        uVar9 = uVar8;
        uVar5 = uVar6;
      }
      uVar6 = uVar5;
    } while (uVar6 != uVar8);
    if ((uVar9 == uVar2) ||
       (plVar3 = (longlong *)(*(int *)(param_1 + 0x1ec4) + uVar9 * 0x18),
       pcVar11 = (char *)((int)plVar3 + 0xc), *plVar3 != (longlong)param_2)) goto LAB_1001f870;
  }
  cVar7 = pcVar11[1];
  param_3 = param_3 + '\x01';
  pcVar1 = pcVar11 + 2;
  if (cVar7 == param_3) {
    pcVar11[1] = '\0';
    cVar7 = '\0';
  }
  else if (*pcVar1 == param_3) {
    *pcVar1 = '\0';
  }
  else {
    pcVar10 = pcVar11 + 3;
    if ((*pcVar10 == param_3) || (pcVar10 = pcVar11 + 4, *pcVar10 == param_3)) {
      *pcVar10 = '\0';
    }
  }
  pcVar11[6] = '\x01';
  if (((*pcVar11 == '\0') && (cVar7 == '\0')) && (*pcVar1 == '\0')) {
    if (pcVar11[5] != '\0') {
      bVar4 = true;
      goto LAB_1001f930;
    }
    if ((pcVar11[3] == '\0') && (pcVar11[4] == '\0')) {
      bVar4 = true;
      goto LAB_1001f930;
    }
  }
  bVar4 = false;
LAB_1001f930:
  if (bVar4) {
    local_10[0] = param_2;
    FUN_10028518(param_1 + 0x1ec0,local_10);
  }
  return;
}

