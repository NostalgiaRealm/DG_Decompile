/*
 * _guTexAllocateMemory@60_native at 10004a60
 * undefined _guTexAllocateMemory@60_native(void)
 * Address ranges: 10004a60-10004c83
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint _guTexAllocateMemory_60_native
               (undefined4 param_1,int param_2,undefined8 param_3,undefined4 param_4,
               undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
               undefined4 param_9,undefined4 param_10,undefined4 param_11,undefined4 param_12,
               undefined4 param_13,undefined4 param_14,undefined4 param_15,undefined4 param_16)

{
  int *piVar1;
  uint *puVar2;
  uint *puVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  undefined8 *puVar7;
  char cVar8;
  bool bVar9;
  int iVar10;
  uint uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  uint *puVar14;
  undefined4 extraout_w11;
  uint uVar15;
  undefined4 in_stack_00000028;
  
  uVar12 = FUN_1001ba50();
  uVar13 = uVar12 & 0xffffffff;
  iVar10 = (int)uVar12;
  uVar15 = 0xffffffff;
  if (*(char *)(iVar10 + 0x3c) != '\0') {
    piVar1 = (int *)(iVar10 + 0x38);
    do {
      cVar8 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(ZEXT48(piVar1),0x10);
      if (bVar9) {
        *piVar1 = *piVar1 + 1;
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
    DataMemoryBarrier(2,3);
    iVar5 = *(int *)(iVar10 + 0x5c);
    if ((iVar5 != 0) && (param_2 < *(int *)(*(int *)(iVar10 + 0x1c) + 0x797))) {
      puVar2 = (uint *)(iVar10 + 0x60);
      uVar6 = *puVar2;
      if (uVar6 < 0x400) {
        puVar3 = (uint *)(iVar10 + (param_2 + 0x19) * 4);
        puVar14 = puVar3;
        iVar10 = FUN_1001ef08(extraout_w11,param_8,param_9,param_10,param_6);
        uVar4 = iVar10 + *puVar14 + 7 & 0xfffffff8;
        uVar11 = FUN_1001e210(uVar13 & 0xffffffff,param_2);
        if (uVar4 <= uVar11) {
          puVar7 = (undefined8 *)(iVar5 + uVar6 * 0xc4);
          *puVar7 = 0x100000000;
          *(undefined4 *)(puVar7 + 1) = param_4;
          *(undefined4 *)((int)puVar7 + 0xc) = param_5;
          *(undefined4 *)(puVar7 + 2) = param_10;
          *(undefined4 *)((int)puVar7 + 0x14) = 0;
          *(undefined4 *)(puVar7 + 3) = param_6;
          *(undefined4 *)((int)puVar7 + 0x1c) = param_7;
          *(undefined4 *)(puVar7 + 4) = param_16;
          *(undefined4 *)((int)puVar7 + 0x24) = param_16;
          *(undefined4 *)(puVar7 + 5) = param_12;
          *(undefined4 *)((int)puVar7 + 0x2c) = param_14;
          builtin_strncpy((char *)(puVar7 + 6),"EGEDEGED",8);
          *(undefined4 *)(puVar7 + 7) = param_1;
          *(undefined4 *)((int)puVar7 + 0x3c) = param_8;
          *(undefined4 *)(puVar7 + 8) = param_9;
          *(int *)((int)puVar7 + 0x44) = param_2;
          *(undefined4 *)(puVar7 + 9) = extraout_w11;
          *(uint *)((int)puVar7 + 0x4c) = *puVar3;
          *(undefined4 *)(puVar7 + 10) = in_stack_00000028;
          *puVar3 = uVar4;
          uVar15 = *puVar2;
          *puVar2 = uVar15 + 1;
        }
      }
    }
    do {
      cVar8 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(ZEXT48(piVar1),0x10);
      if (bVar9) {
        *piVar1 = *piVar1 + -1;
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
    DataMemoryBarrier(2,3);
  }
  return uVar15;
}

