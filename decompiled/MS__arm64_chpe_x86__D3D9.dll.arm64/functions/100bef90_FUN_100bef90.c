/*
 * FUN_100bef90 at 100bef90
 * undefined FUN_100bef90(void)
 * Address ranges: 100bef90-100bf123
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

char FUN_100bef90(int param_1)

{
  char *pcVar1;
  int *piVar2;
  undefined4 uVar3;
  char cVar4;
  int iVar5;
  int *extraout_w15;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  
  pcVar1 = (char *)(param_1 + 300);
  *pcVar1 = '\0';
  if (*(int *)(param_1 + 0x34) - 3U < 3) {
    FUN_100cefa0(param_1,&local_60);
    piVar2 = (int *)(param_1 + 0x24);
    uVar3 = *(undefined4 *)(&DAT_101625d0 + *extraout_w15 * 4);
    cVar4 = FUN_100bace8(param_1 + 0x48,*(undefined4 *)(param_1 + 0x14),
                         *(undefined4 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x20),*piVar2,1,
                         local_60,uStack_5c,local_58);
    *pcVar1 = cVar4;
    if ((cVar4 != '\0') && (*piVar2 != 1)) {
      cVar4 = FUN_100bb160(param_1 + 0xf0,*(undefined4 *)(param_1 + 0x54),uStack_5c,0,uVar3);
      *pcVar1 = cVar4;
      FUN_100bcd40(param_1);
      if (*pcVar1 == '\0') {
        FUN_100bb370(param_1 + 0x48,*(undefined4 *)(param_1 + 0x20),*piVar2);
      }
    }
  }
  else {
    if (*(int *)(param_1 + 0x1c) == 0) {
      iVar5 = FUN_101322b0(0x400);
      *(int *)(param_1 + 8) = iVar5;
      if (iVar5 == 0) goto LAB_100bf104;
    }
    cVar4 = FUN_100beba0(param_1,1,0);
    *pcVar1 = cVar4;
  }
LAB_100bf104:
  return *pcVar1;
}

