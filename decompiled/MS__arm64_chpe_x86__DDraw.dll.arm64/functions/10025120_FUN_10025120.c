/*
 * FUN_10025120 at 10025120
 * undefined FUN_10025120(void)
 * Address ranges: 10025120-10025367
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

char FUN_10025120(int param_1,int param_2,int param_3,undefined4 param_4,undefined4 param_5,
                 undefined4 param_6)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  char cVar4;
  char cVar5;
  bool bVar6;
  int iVar7;
  bool bVar8;
  undefined1 uVar9;
  char cVar10;
  int iVar11;
  undefined4 *puVar12;
  code *extraout_w11;
  undefined1 local_70 [16];
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  
  iVar7 = param_1 + -0xc0;
  if (*(char *)(param_1 + -0x83) == '\x01') {
    FUN_10090418(*(int *)(param_1 + -0x7c) + 0x11c0);
  }
  (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
  iVar11 = (*extraout_w11)(iVar7,1);
  if (iVar11 == 0) {
    return '\0';
  }
  local_70[0] = 0;
  cVar10 = FUN_10023440(iVar7,iVar11,param_2,param_3,param_4,param_5,param_6,&local_50,local_70);
  uVar9 = local_70[0];
  if (cVar10 == '\0') {
    return '\0';
  }
  uStack_58 = uStack_48;
  local_60 = local_50;
  param_2 = param_2 + *(int *)(param_1 + -0x94) * param_3;
  iVar11 = *(int *)(param_1 + -0x7c);
  puVar2 = (undefined4 *)(iVar11 + 0x11c0);
  FUN_1008fd30(puVar2);
  cVar4 = *(char *)(iVar11 + 0x12ec);
  bVar8 = true;
  if (cVar4 == '\0') {
LAB_100252e8:
    if (cVar4 != '\0') goto LAB_1002531c;
  }
  else {
    puVar12 = (undefined4 *)FUN_1008fbd8(puVar2,0x1c);
    if (puVar12 != (undefined4 *)0x0) {
      piVar1 = (int *)(iVar11 + 0x12e8);
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(ZEXT48(piVar1),0x10);
        if (bVar6) {
          *piVar1 = *piVar1 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      DataMemoryBarrier(2,3);
      puVar12[1] = 0x1c;
      puVar12[2] = iVar7;
      puVar12[3] = param_2;
      *(undefined8 *)(puVar12 + 6) = uStack_58;
      *(undefined8 *)(puVar12 + 4) = local_60;
      *(undefined1 *)(puVar12 + 8) = uVar9;
      puVar3 = (undefined4 *)((int)puVar12 + 0x27U & 0xfffffffc);
      *puVar3 = 0;
      *puVar12 = FUN_10025370;
      puVar2[*(int *)(iVar11 + 0x12e4) * 5 + 0x1a] = puVar3;
      if (*(char *)(iVar11 + 0x12ed) != '\0') {
        *puVar2 = 0;
        (*(code *)PTR_FUN_100ba12c)(*(undefined4 *)(iVar11 + 0x1220));
        bVar8 = false;
      }
      goto LAB_100252e8;
    }
    *puVar2 = 0;
    (*(code *)PTR_FUN_100ba144)(100);
    FUN_1008fd30(puVar2);
  }
  piVar1 = *(int **)(iVar11 + 0x12d0);
  *piVar1 = iVar7;
  piVar1[1] = param_2;
  *(undefined8 *)(piVar1 + 4) = uStack_58;
  *(undefined8 *)(piVar1 + 2) = local_60;
  *(undefined1 *)(piVar1 + 6) = uVar9;
  FUN_10025370(piVar1);
LAB_1002531c:
  if (bVar8) {
    *puVar2 = 0;
  }
  return cVar10;
}

