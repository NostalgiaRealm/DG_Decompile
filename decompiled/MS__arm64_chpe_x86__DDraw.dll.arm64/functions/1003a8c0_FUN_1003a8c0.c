/*
 * FUN_1003a8c0 at 1003a8c0
 * undefined FUN_1003a8c0(void)
 * Address ranges: 1003a8c0-1003aa2b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_1003a8c0(int param_1,uint *param_2,undefined4 *param_3)

{
  byte *pbVar1;
  char *pcVar2;
  char cVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined1 auStack_50 [8];
  undefined4 local_48;
  
  uVar4 = 0x80070057;
  if (param_2 != (uint *)0x0) {
    uStack_68 = 0;
    local_70 = 0;
    local_60 = 0;
    local_58 = 0;
    pcVar2 = (&PTR_DAT_100bd65c)[*(int *)(param_1 + 0x40) * 0x6a];
    iVar5 = 0;
    cVar3 = *pcVar2;
    while (cVar3 != -1) {
      pbVar1 = (byte *)(pcVar2 + iVar5);
      iVar5 = iVar5 + 1;
      *(bool *)((int)&local_70 + (uint)*pbVar1) = (*pbVar1 + 0xf2 & 0xff) < 7;
      cVar3 = pcVar2[iVar5];
    }
    pcVar2 = (&PTR_DAT_100bd658)[*(int *)(param_1 + 0x40) * 0x6a];
    iVar5 = 0;
    cVar3 = *pcVar2;
    while (cVar3 != -1) {
      pbVar1 = (byte *)(pcVar2 + iVar5);
      iVar5 = iVar5 + 1;
      *(bool *)((int)&local_70 + (uint)*pbVar1) = (*pbVar1 + 0xf2 & 0xff) < 7;
      cVar3 = pcVar2[iVar5];
    }
    uVar7 = 0;
    uVar6 = 0;
    do {
      if (*(char *)((int)&local_70 + uVar6) != '\0') {
        if (param_3 != (undefined4 *)0x0) {
          if (*param_2 <= uVar7) goto LAB_1003aa00;
          FUN_10038b50(param_1,auStack_50,uVar6);
          *param_3 = local_48;
          param_3 = param_3 + 1;
        }
        uVar7 = uVar7 + 1;
      }
LAB_1003aa00:
      uVar6 = uVar6 + 1;
    } while (uVar6 < 0x1c);
    *param_2 = uVar7;
    uVar4 = 0;
  }
  return uVar4;
}

