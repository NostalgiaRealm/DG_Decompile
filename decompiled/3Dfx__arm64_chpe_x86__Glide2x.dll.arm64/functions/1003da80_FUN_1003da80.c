/*
 * FUN_1003da80 at 1003da80
 * undefined FUN_1003da80(void)
 * Address ranges: 1003da80-1003dd4f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined1
FUN_1003da80(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,int param_7,
            int param_8,int param_9,undefined4 param_10,undefined1 param_11,undefined4 param_12,
            char param_13)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  char cVar5;
  bool bVar6;
  bool bVar7;
  undefined1 uVar8;
  undefined4 *puVar9;
  undefined1 local_50;
  char local_4f;
  int local_4c;
  int iStack_48;
  int *local_44;
  
  local_50 = 1;
  local_44 = (int *)(param_1 + 0x3188);
  local_4c = param_2;
  iStack_48 = param_3;
  if (*(int *)(*local_44 + 0x12e8) == 0) {
    uVar8 = FUN_1002d090(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9);
    return uVar8;
  }
  iVar4 = *local_44;
  puVar2 = (undefined4 *)(iVar4 + 0x11c0);
  FUN_10054e70(puVar2);
  bVar7 = true;
  local_4f = *(char *)(iVar4 + 0x12ec) == '\0';
  if (*(char *)(iVar4 + 0x12ec) == '\0') {
LAB_1003dc5c:
    if (local_4f == '\0') goto LAB_1003dce4;
  }
  else {
    puVar9 = (undefined4 *)FUN_10054d18(puVar2,0x30);
    if (puVar9 != (undefined4 *)0x0) {
      piVar1 = (int *)(iVar4 + 0x12e8);
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(ZEXT48(piVar1),0x10);
        if (bVar6) {
          *piVar1 = *piVar1 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      DataMemoryBarrier(2,3);
      puVar9[1] = 0x30;
      puVar9[2] = param_1;
      puVar9[3] = local_4c;
      puVar9[4] = iStack_48;
      puVar9[5] = param_4;
      puVar9[6] = param_5;
      puVar9[7] = param_6;
      puVar9[8] = param_7;
      puVar9[9] = param_8;
      puVar9[10] = param_9;
      *(undefined1 *)(puVar9 + 0xb) = param_11;
      *(char *)(puVar9 + 0xc) = param_13;
      puVar9[0xd] = &local_50;
      puVar3 = (undefined4 *)((int)puVar9 + 0x3bU & 0xfffffffc);
      *puVar3 = 0;
      *puVar9 = FUN_1003dd60;
      puVar2[*(int *)(iVar4 + 0x12e4) * 5 + 0x1a] = puVar3;
      if (*(char *)(iVar4 + 0x12ed) != '\0') {
        *puVar2 = 0;
        (*(code *)PTR_FUN_1009d0c4)(*(undefined4 *)(iVar4 + 0x1220));
        bVar7 = false;
      }
      goto LAB_1003dc5c;
    }
    *puVar2 = 0;
    (*(code *)PTR_FUN_1009d0dc)(100);
    FUN_10054e70(puVar2);
  }
  piVar1 = *(int **)(iVar4 + 0x12d0);
  *piVar1 = param_1;
  piVar1[1] = local_4c;
  piVar1[2] = iStack_48;
  piVar1[3] = param_4;
  piVar1[4] = param_5;
  piVar1[5] = param_6;
  piVar1[6] = param_7;
  piVar1[7] = param_8;
  piVar1[8] = param_9;
  *(undefined1 *)(piVar1 + 9) = param_11;
  *(char *)(piVar1 + 10) = param_13;
  piVar1[0xb] = (int)&local_50;
  FUN_1003dd60(piVar1);
LAB_1003dce4:
  if (bVar7) {
    *puVar2 = 0;
  }
  if (param_13 == '\0') {
    FUN_10055558(*local_44 + 0x11c0);
  }
  return local_50;
}

