/*
 * FUN_10047f68 at 10047f68
 * undefined FUN_10047f68(void)
 * Address ranges: 10047f68-100480a3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10047f68(int param_1,int param_2,char param_3)

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
  
  uVar2 = *(uint *)(param_1 + 0xdb40);
  if (uVar2 == 0) {
LAB_10047ff0:
    pcVar10 = (char *)0x0;
  }
  else {
    uVar8 = 0;
    uVar7 = uVar2;
    do {
      uVar9 = uVar7 + uVar8 >> 1;
      uVar11 = *(ulonglong *)(*(int *)(param_1 + 0xdb3c) + uVar9 * 0x18);
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
       (plVar3 = (longlong *)(*(int *)(param_1 + 0xdb3c) + uVar9 * 0x18),
       pcVar10 = (char *)((int)plVar3 + 0xc), *plVar3 != (longlong)param_2)) goto LAB_10047ff0;
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
      goto LAB_10048088;
    }
    if ((pcVar10[3] == '\0') && (pcVar10[4] == '\0')) {
      bVar4 = true;
      goto LAB_10048088;
    }
  }
  bVar4 = false;
LAB_10048088:
  if (bVar4) {
    local_10[0] = param_2;
    FUN_10050590(param_1 + 0xdb38,local_10);
  }
  return;
}

