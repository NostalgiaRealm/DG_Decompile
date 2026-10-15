/*
 * FUN_10006680 at 10006680
 * undefined FUN_10006680(void)
 * Address ranges: 10006680-100067d3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_10006680(int param_1,uint param_2,undefined4 param_3)

{
  int iVar1;
  uint uVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  ulonglong uVar8;
  int extraout_w1;
  
  if (*(uint *)(param_1 + 0x4c) <= param_2) {
    return 0;
  }
  cVar4 = FUN_1003a518();
  iVar5 = 0;
  iVar1 = *(int *)(*(int *)(param_1 + 0x48) + extraout_w1 * 4);
  uVar2 = *(uint *)(DAT_10170ad0 + 0x947);
  if ((uVar2 >> 1 & 1) != 0) {
    iVar5 = FUN_10003300(param_3);
    if (iVar5 == 0x10) {
      uVar6 = FUN_10003020(param_3);
      uVar8 = FUN_10003900((&PTR_DAT_1016d454)[*(int *)(param_1 + 8) * 100],uVar6);
      if ((uVar8 & 1) != 0) {
        iVar5 = 1;
        goto LAB_10006738;
      }
    }
    iVar5 = 0;
  }
LAB_10006738:
  if ((uVar2 >> 2 & 1) == 0) goto LAB_10006788;
  iVar7 = FUN_10003300(param_3);
  if (iVar7 == 0x20) {
    uVar6 = FUN_10003020(param_3);
    uVar8 = FUN_10003900((&PTR_DAT_1016d454)[*(int *)(param_1 + 8) * 100],uVar6);
    if ((uVar8 & 1) == 0) goto LAB_1000677c;
    bVar3 = true;
  }
  else {
LAB_1000677c:
    bVar3 = false;
  }
  if (bVar3) {
    iVar5 = iVar5 + 1;
  }
LAB_10006788:
  iVar7 = 0x10171590;
  if (cVar4 == '\0') {
    iVar7 = 0x10171584;
  }
  return *(int *)(iVar7 + iVar1 * 0x228) * iVar5;
}

