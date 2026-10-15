/*
 * FUN_1001fa50 at 1001fa50
 * undefined FUN_1001fa50(void)
 * Address ranges: 1001fa50-1001fb8b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1001fa50(int param_1,int param_2,char param_3)

{
  char *pcVar1;
  uint uVar2;
  longlong *plVar3;
  bool bVar4;
  uint uVar5;
  char cVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  char *pcVar10;
  ulonglong uVar11;
  int local_10 [4];
  
  uVar2 = *(uint *)(param_1 + 0x1ec8);
  if (uVar2 == 0) {
LAB_1001fad8:
    pcVar10 = (char *)0x0;
  }
  else {
    uVar8 = 0;
    uVar7 = uVar2;
    do {
      uVar9 = uVar7 + uVar8 >> 1;
      uVar11 = *(ulonglong *)(*(int *)(param_1 + 0x1ec4) + uVar9 * 0x18);
      uVar5 = uVar9;
      if (uVar11 <= (ulonglong)(longlong)param_2) {
        if ((ulonglong)(longlong)param_2 <= uVar11) break;
        uVar8 = uVar9 + 1;
        uVar9 = uVar8;
        uVar5 = uVar7;
      }
      uVar7 = uVar5;
    } while (uVar7 != uVar8);
    if ((uVar9 == uVar2) ||
       (plVar3 = (longlong *)(*(int *)(param_1 + 0x1ec4) + uVar9 * 0x18),
       pcVar10 = (char *)((int)plVar3 + 0xc), *plVar3 != (longlong)param_2)) goto LAB_1001fad8;
  }
  cVar6 = pcVar10[1];
  pcVar1 = pcVar10 + 2;
  if (cVar6 == (char)(param_3 + '\x01')) {
    pcVar10[1] = '\0';
    cVar6 = '\0';
  }
  else if (*pcVar1 == (char)(param_3 + '\x01')) {
    *pcVar1 = '\0';
  }
  pcVar10[6] = '\x01';
  if (((*pcVar10 == '\0') && (cVar6 == '\0')) && (*pcVar1 == '\0')) {
    if (pcVar10[5] != '\0') {
      bVar4 = true;
      goto LAB_1001fb70;
    }
    if ((pcVar10[3] == '\0') && (pcVar10[4] == '\0')) {
      bVar4 = true;
      goto LAB_1001fb70;
    }
  }
  bVar4 = false;
LAB_1001fb70:
  if (bVar4) {
    local_10[0] = param_2;
    FUN_10028518(param_1 + 0x1ec0,local_10);
  }
  return;
}

