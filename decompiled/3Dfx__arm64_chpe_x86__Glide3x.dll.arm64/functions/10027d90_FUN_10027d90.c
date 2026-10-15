/*
 * FUN_10027d90 at 10027d90
 * undefined FUN_10027d90(void)
 * Address ranges: 10027d90-10027f5b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10027d90(int param_1,undefined4 param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  char cVar4;
  int iVar5;
  char cVar6;
  bool bVar7;
  bool bVar8;
  undefined4 *puVar9;
  ulonglong uVar10;
  undefined1 auStack_260 [32];
  undefined1 auStack_240 [528];
  
  FUN_10021d18(param_1 + 0x35c0);
  FUN_10017a48(param_1,auStack_260,param_2);
  uVar10 = FUN_10017c08(param_1,param_2,auStack_260);
  if ((uVar10 & 1) != 0) {
    FUN_100462b8(*(int *)(param_1 + 0x3308) + 0x11c0);
    FUN_10017f58(param_1,param_2,auStack_260);
    return;
  }
  FUN_1007e4a0(auStack_240,param_2,0x20c);
  iVar5 = *(int *)(param_1 + 0x3308);
  puVar2 = (undefined4 *)(iVar5 + 0x11c0);
  FUN_10045bd0(puVar2);
  cVar4 = *(char *)(iVar5 + 0x12ec);
  bVar8 = true;
  if (cVar4 == '\0') {
LAB_10027ef4:
    if (cVar4 != '\0') goto LAB_10027f1c;
  }
  else {
    puVar9 = (undefined4 *)FUN_10045a78(puVar2,0x210);
    if (puVar9 != (undefined4 *)0x0) {
      piVar1 = (int *)(iVar5 + 0x12e8);
      do {
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(ZEXT48(piVar1),0x10);
        if (bVar7) {
          *piVar1 = *piVar1 + 1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      DataMemoryBarrier(2,3);
      puVar9[1] = 0x210;
      puVar9[2] = param_1;
      FUN_1007e4a0(puVar9 + 3,auStack_240,0x20c);
      puVar3 = (undefined4 *)((int)puVar9 + 0x21bU & 0xfffffffc);
      *puVar3 = 0;
      *puVar9 = FUN_10027f60;
      puVar2[*(int *)(iVar5 + 0x12e4) * 5 + 0x1a] = puVar3;
      if (*(char *)(iVar5 + 0x12ed) != '\0') {
        *puVar2 = 0;
        (*(code *)PTR_FUN_100a00c4)(*(undefined4 *)(iVar5 + 0x1220));
        bVar8 = false;
      }
      goto LAB_10027ef4;
    }
    *puVar2 = 0;
    (*(code *)PTR_FUN_100a00dc)(100);
    FUN_10045bd0(puVar2);
  }
  piVar1 = *(int **)(iVar5 + 0x12d0);
  *piVar1 = param_1;
  FUN_1007e4a0(piVar1 + 1,auStack_240,0x20c);
  FUN_10027f60(piVar1);
LAB_10027f1c:
  if (bVar8) {
    *puVar2 = 0;
  }
  return;
}

