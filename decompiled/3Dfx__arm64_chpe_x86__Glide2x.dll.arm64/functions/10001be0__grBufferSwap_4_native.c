/*
 * _grBufferSwap@4_native at 10001be0
 * undefined _grBufferSwap@4_native(void)
 * Address ranges: 10001be0-1000207b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void _grBufferSwap_4_native(int param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  char cVar4;
  bool bVar5;
  int *piVar6;
  undefined4 *puVar7;
  int iVar8;
  code *pcVar9;
  int iVar10;
  int iVar11;
  undefined4 uVar12;
  code *extraout_w11;
  code *extraout_w11_00;
  code *extraout_w11_01;
  code *extraout_w11_02;
  int iVar13;
  int local_470;
  int iStack_46c;
  undefined4 local_468;
  undefined4 uStack_464;
  undefined1 auStack_460 [4];
  int local_45c;
  undefined4 local_458;
  undefined4 uStack_454;
  undefined1 auStack_440 [1024];
  
  iVar10 = FUN_1001ba50();
  if (*(char *)(iVar10 + 0x3c) != '\0') {
    piVar1 = (int *)(iVar10 + 0x38);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(ZEXT48(piVar1),0x10);
      if (bVar5) {
        *piVar1 = *piVar1 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    DataMemoryBarrier(2,3);
    piVar2 = (int *)(iVar10 + 0x1c);
    iVar11 = *piVar2;
    if (*(char *)(iVar11 + 0x7bb) == '\0') {
      if ((*(char *)(iVar11 + 0x971) == '\0') &&
         ((iVar13 = *(int *)(*(int *)(iVar10 + 0xc) + 0x94), iVar13 != 0 ||
          (((*(int *)(iVar11 + 0xd4) != 0 &&
            (piVar6 = (int *)(*(int *)(iVar11 + 0xd0) + *(int *)(iVar11 + 0xd4) * 0x48 + -0x48),
            piVar6 != (int *)0x0)) && (iVar13 = *piVar6, iVar13 != 0)))))) {
        iVar11 = (*(code *)PTR_FUN_1009d1c0)(auStack_460,iVar13,0x400,0x7fff,1);
        while (iVar11 != 0) {
          if (local_45c == 0x12) {
            (*(code *)PTR_FUN_1009d1c4)(iVar13,0x12,local_458,uStack_454);
            break;
          }
          (*(code *)PTR_FUN_1009d204)(auStack_460);
          (*(code *)PTR_FUN_1009d150)(auStack_460);
          iVar11 = (*(code *)PTR_FUN_1009d1c0)(auStack_460,iVar13,0x400,0x7fff,1);
        }
      }
      iVar11 = *(int *)(*piVar2 + 0xd4);
      if ((iVar11 != 0) &&
         (puVar7 = (undefined4 *)(*(int *)(*piVar2 + 0xd0) + iVar11 * 0x48 + -0x48),
         puVar7 != (undefined4 *)0x0)) {
        (*(code *)PTR_FUN_1009d1dc)(*puVar7,0x402,0x44454745,0x45474544);
      }
      *(undefined1 *)(*piVar2 + 0x971) = 0;
    }
    (*(code *)PTR_FUN_1009d03c)(*piVar2 + 0x318);
    pcVar9 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
    piVar6 = (int *)(iVar10 + 0xc);
    if (*(char *)(*piVar2 + 0x759) != '\0') {
      uVar12 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
      (*extraout_w11)(uVar12);
      uVar12 = (*pcVar9)(*piVar6,*piVar2 + 0x54c);
      (*extraout_w11_00)(uVar12);
      *(byte *)(iVar10 + 0x58) = *(byte *)(*piVar2 + 0x5a1) | *(byte *)(iVar10 + 0x58);
      *(undefined1 *)(*piVar2 + 0x759) = 0;
    }
    (*(code *)PTR_FUN_1009d090)(*piVar2 + 0x318);
    if (((*(char *)(iVar10 + 0x58) != '\0') && (*(char *)(*(int *)(iVar10 + 0x1c) + 0x7b9) != '\0'))
       && (*(int *)(iVar10 + 0x44) != 0)) {
      local_470 = 0;
      iStack_46c = 0;
      local_468 = 0;
      (*pcVar9)();
      iVar11 = (*extraout_w11_01)(&local_470,&iStack_46c,&local_468,&uStack_464);
      if (iVar11 != 0) {
        FUN_1001d018(iVar10,auStack_440);
        FUN_1001dd18(iVar10,3,8,1,1,0);
        FUN_1001db78(iVar10,3,8,1,1,0,0);
        FUN_1001d7f8(iVar10,1,5,4,0);
        FUN_1001d680(iVar10,0);
        FUN_1001d930(iVar10,7);
        FUN_1001e158(iVar10,0);
        FUN_1001de88(iVar10,1,0);
        FUN_1001df70(iVar10,2);
        FUN_1001dab0(iVar10,0);
        FUN_1001d9f0(iVar10,1);
        FUN_1001d430(iVar10,0);
        FUN_1001d378(iVar10,0x40);
        FUN_1001e028(iVar10,0,0,*(undefined4 *)(*piVar6 + 0x98),*(undefined4 *)(*piVar6 + 0x9c));
        iVar3 = *piVar6;
        iVar8 = *(int *)(iVar3 + 0x98) - local_470;
        iVar13 = *(int *)(iVar3 + 0x9c) - iStack_46c;
        if (iVar13 < 1) {
          iVar13 = 0;
        }
        if (iVar8 < 1) {
          iVar8 = 0;
        }
        FUN_1001d4e8(iVar10,*(undefined1 *)(iVar3 + 0xe0),iVar8,iVar13,uStack_464,local_470,
                     iStack_46c,local_468,iVar11);
        FUN_1001d0d0(iVar10,auStack_440,0);
      }
    }
    if (4 < param_1) {
      param_1 = 4;
    }
    uVar12 = (*pcVar9)(*piVar6,param_1);
    (*extraout_w11_02)(uVar12);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(ZEXT48(piVar1),0x10);
      if (bVar5) {
        *piVar1 = *piVar1 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    DataMemoryBarrier(2,3);
  }
  return;
}

