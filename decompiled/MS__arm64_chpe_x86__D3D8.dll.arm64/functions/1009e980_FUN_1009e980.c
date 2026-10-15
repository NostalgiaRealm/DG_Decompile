/*
 * FUN_1009e980 at 1009e980
 * undefined FUN_1009e980(void)
 * Address ranges: 1009e980-1009eb0b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

char FUN_1009e980(int param_1)

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
    FUN_100ae580(param_1,&local_60);
    piVar2 = (int *)(param_1 + 0x24);
    cVar3 = FUN_1009abb8(param_1 + 0x48,*(undefined4 *)(param_1 + 0x14),
                         *(undefined4 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x20),*piVar2,1,
                         local_60,uStack_5c,local_58);
    *pcVar1 = cVar3;
    if ((cVar3 != '\0') && (*piVar2 != 1)) {
      cVar3 = FUN_1009b030(param_1 + 0xf0,*(undefined4 *)(param_1 + 0x54),uStack_5c);
      *pcVar1 = cVar3;
      FUN_1009c760(param_1);
      if (*pcVar1 == '\0') {
        FUN_1009b228(param_1 + 0x48,*(undefined4 *)(param_1 + 0x20),*piVar2);
      }
    }
  }
  else {
    if (*(int *)(param_1 + 0x1c) == 0) {
      iVar4 = FUN_100fece0(0x400);
      *(int *)(param_1 + 8) = iVar4;
      if (iVar4 == 0) goto LAB_1009eaec;
    }
    cVar3 = FUN_1009e5a8(param_1,1,0);
    *pcVar1 = cVar3;
  }
LAB_1009eaec:
  return *pcVar1;
}

