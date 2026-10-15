/*
 * FUN_10024670 at 10024670
 * undefined FUN_10024670(void)
 * Address ranges: 10024670-100247fb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

char FUN_10024670(int param_1)

{
  char *pcVar1;
  int *piVar2;
  char cVar3;
  int iVar4;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  
  pcVar1 = (char *)(param_1 + 300);
  *pcVar1 = '\0';
  if (*(int *)(param_1 + 0x34) - 3U < 3) {
    FUN_10034140(param_1,&local_60);
    piVar2 = (int *)(param_1 + 0x24);
    cVar3 = FUN_10020818(param_1 + 0x48,*(undefined4 *)(param_1 + 0x14),
                         *(undefined4 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x20),*piVar2,1,
                         local_60,uStack_5c,local_58);
    *pcVar1 = cVar3;
    if ((cVar3 != '\0') && (*piVar2 != 1)) {
      cVar3 = FUN_10020c90(param_1 + 0xf0,*(undefined4 *)(param_1 + 0x54),uStack_5c);
      *pcVar1 = cVar3;
      FUN_100223d0(param_1);
      if (*pcVar1 == '\0') {
        FUN_10020e88(param_1 + 0x48,*(undefined4 *)(param_1 + 0x20),*piVar2);
      }
    }
  }
  else {
    if (*(int *)(param_1 + 0x1c) == 0) {
      iVar4 = FUN_100914b0(0x400);
      *(int *)(param_1 + 8) = iVar4;
      if (iVar4 == 0) goto LAB_100247dc;
    }
    cVar3 = FUN_10024298(param_1,1,0);
    *pcVar1 = cVar3;
  }
LAB_100247dc:
  return *pcVar1;
}

