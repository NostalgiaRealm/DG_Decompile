/*
 * FUN_1008d3e0 at 1008d3e0
 * undefined FUN_1008d3e0(void)
 * Address ranges: 1008d3e0-1008d5c7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool FUN_1008d3e0(int param_1)

{
  char *pcVar1;
  int iVar2;
  undefined4 uVar3;
  bool bVar4;
  char cVar5;
  int iVar6;
  ulonglong uVar7;
  undefined4 local_60;
  undefined4 local_5c;
  
  pcVar1 = (char *)(param_1 + 0xd8);
  *pcVar1 = '\0';
  if (*(int *)(param_1 + 0x34) - 3U < 3) {
    FUN_100ae580(param_1,&local_60);
    iVar2 = *(int *)(param_1 + 0x24);
    uVar3 = *(undefined4 *)(param_1 + 0x20);
    iVar6 = param_1 + 0x48;
    if (*(int *)(*(int *)(param_1 + 0x40) + *(int *)(param_1 + 0x10) * 0x1510 + 0x520) == 0xa000) {
      uVar7 = FUN_1008b4c8(iVar6,*(undefined4 *)(param_1 + 0x14),*(undefined4 *)(param_1 + 0x18),
                           uVar3,iVar2,1,local_60,local_5c,0);
      if ((uVar7 & 1) != 0) {
LAB_1008d540:
        *pcVar1 = '\x01';
      }
    }
    else {
      uVar7 = FUN_1008b4c8(iVar6,*(undefined4 *)(param_1 + 0x14),*(undefined4 *)(param_1 + 0x18),
                           uVar3,iVar2,1,local_60,local_5c,0);
      if ((uVar7 & 1) != 0) {
        if (iVar2 == 1) goto LAB_1008d540;
        cVar5 = FUN_1008b758(param_1 + 0xac,*(undefined4 *)(param_1 + 0x54),local_5c);
        *pcVar1 = cVar5;
        FUN_1008cb70(param_1);
      }
    }
    if (*pcVar1 != '\0') {
      return true;
    }
    FUN_1008b890(iVar6,*(undefined4 *)(param_1 + 0x20),*(int *)(param_1 + 0x24));
LAB_1008d58c:
    bVar4 = false;
  }
  else {
    if (*(int *)(param_1 + 0x1c) == 0) {
      iVar6 = FUN_100fece0(0x400);
      *(int *)(param_1 + 8) = iVar6;
      if (iVar6 == 0) goto LAB_1008d58c;
    }
    cVar5 = FUN_1008cc68(param_1,1);
    bVar4 = cVar5 != '\0';
    *pcVar1 = cVar5;
  }
  return bVar4;
}

