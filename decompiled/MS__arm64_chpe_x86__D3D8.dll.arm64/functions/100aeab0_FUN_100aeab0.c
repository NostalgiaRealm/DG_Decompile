/*
 * FUN_100aeab0 at 100aeab0
 * undefined FUN_100aeab0(void)
 * Address ranges: 100aeab0-100aeca7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 *
FUN_100aeab0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            ,undefined4 param_6,char param_7,undefined8 *param_8)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  char cVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  undefined8 local_50;
  undefined8 uStack_48;
  
  uStack_48 = param_8[1];
  local_50 = *param_8;
  iVar7 = FUN_100febf0(0x5964);
  puVar2 = (undefined4 *)(iVar7 + 0x13U & 0xfffffff0);
  puVar2[-1] = iVar7;
  *(undefined8 *)(puVar2 + 0x1639) = 0;
  puVar3 = (undefined4 *)0x0;
  if (puVar2 != (undefined4 *)0x0) {
    puVar3 = puVar2 + 0x1638;
  }
  puVar2[0x163b] = puVar3;
  FUN_1000bbd0(puVar2,param_1,param_2,param_3,param_4,param_5,param_6,param_7,&local_50);
  puVar2[0x163c] = param_1;
  *(undefined8 *)(puVar2 + 0x1635) = 0;
  puVar2[0x1637] = 0;
  *puVar2 = &PTR_FUN_1012a4b8;
  puVar2[0x1634] = &PTR_FUN_10129290;
  puVar2[0x1638] = &PTR_FUN_1012a334;
  *(undefined8 *)(puVar2 + 0x163d) = 0;
  puVar2[0x1652] = 0;
  *(undefined8 *)(puVar2 + 0x163f) = 0;
  puVar2[0x1641] = 0;
  puVar2[0x1642] = puVar2;
  *(undefined8 *)(puVar2 + 0x1643) = 0;
  *(undefined8 *)(puVar2 + 0x1645) = 0;
  *(undefined8 *)(puVar2 + 0x1647) = 0;
  *(undefined8 *)(puVar2 + 0x1649) = 0;
  puVar2[0x164b] = puVar2;
  *(undefined8 *)(puVar2 + 0x164c) = 0;
  *(undefined8 *)(puVar2 + 0x164e) = 0;
  *(undefined8 *)(puVar2 + 0x1650) = 0;
  piVar1 = (int *)(param_1 + 0x74);
  do {
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(ZEXT48(piVar1),0x10);
    if (bVar5) {
      *piVar1 = *piVar1 + 1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  DataMemoryBarrier(2,3);
  puVar2[1] = &DAT_10137b70;
  puVar2[2] = &DAT_101380e0;
  iVar7 = FUN_10004650(param_1,param_3);
  puVar2[0x163d] = iVar7;
  uVar6 = *(uint *)(iVar7 + 0x24) >> 0x14 & 1;
  *(char *)((int)puVar2 + 0x223) = (char)uVar6;
  *(bool *)(puVar2 + 0x89) = param_7 != '\0' && uVar6 != 0;
  return puVar2;
}

