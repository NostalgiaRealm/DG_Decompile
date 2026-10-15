/*
 * FUN_18000e370 at 18000e370
 * undefined FUN_18000e370(void)
 * Address ranges: 18000e370-18000e65b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool FUN_18000e370(longlong *param_1,undefined8 param_2)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  char cVar4;
  undefined4 uVar5;
  longlong lVar6;
  int iVar7;
  undefined1 uVar8;
  uint uVar9;
  int extraout_w15;
  ulonglong extraout_x15;
  uint uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  uint uVar13;
  uint uVar14;
  uint local_60 [2];
  int local_58;
  uint uStack_54;
  int local_50;
  uint uStack_4c;
  undefined8 local_48;
  uint local_40;
  uint uStack_3c;
  
  uVar11 = 0;
  if (*(int *)((longlong)param_1 + 0x7c) != 3) {
    local_60[0] = (uint)*(ushort *)((longlong)param_1 + 0x3c);
    uVar5 = FUN_18000e278(param_1,local_60);
    if ((*(uint *)(param_1 + 0xe) & 3) == 0) {
      lVar6 = (**(code **)(*(longlong *)param_1[10] + 0x58))
                        ((longlong *)param_1[10],(int)param_1[0xd],
                         *(undefined4 *)((longlong)param_1 + 0x6c),(int)param_1[0xf],local_60[0],
                         extraout_x15 & 0xffffffff);
    }
    else {
      FUN_180006038(param_2,&local_58);
      uVar13 = *(uint *)(param_1 + 0xd);
      uVar14 = *(uint *)((longlong)param_1 + 0x6c);
      if (*(char *)(DAT_18024de60 + 0x9f4) == '\0') {
        iVar7 = 1;
        uVar10 = uVar13;
        uVar9 = uVar14;
      }
      else {
        if (uStack_54 == 0) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(0xf004,0x18000e458);
          (*pcVar2)();
        }
        uVar10 = 0;
        if (uStack_54 != 0) {
          uVar10 = (uVar13 * local_58) / uStack_54;
        }
        if (uStack_4c == 0) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(0xf004,0x18000e46c);
          (*pcVar2)();
        }
        uVar1 = 0;
        if (uStack_4c != 0) {
          uVar1 = (uVar14 * local_50) / uStack_4c;
        }
        uVar9 = uVar1;
        if ((extraout_w15 == 2 || extraout_w15 == 5) && (uVar9 = uVar10, uVar1 < uVar10)) {
          uVar10 = uVar1;
          uVar9 = uVar1;
        }
        iVar7 = *(int *)(DAT_18024de60 + 0x86c);
        uVar11 = 1;
        if (iVar7 == 0) {
          iVar7 = 1;
        }
      }
      lVar6 = (**(code **)(*(longlong *)param_1[10] + 0x50))
                        ((longlong *)param_1[10],uVar10,uVar9,uVar13,uVar14,iVar7,(int)param_1[0xf],
                         local_60[0],extraout_w15,uVar5);
    }
    param_1[0xb] = lVar6;
  }
  if ((param_1[0xb] != 0) || (bVar3 = false, *(int *)((longlong)param_1 + 0x7c) == 3)) {
    if (((*(uint *)(param_1 + 0xe) & 0x200) == 0) && (*(int *)((longlong)param_1 + 0x7c) == 0)) {
      uVar8 = 0;
    }
    else {
      uVar8 = 1;
    }
    *(undefined1 *)(param_1 + 0x11) = uVar8;
    if (((*(uint *)(param_1 + 0xe) & 0x200) == 0) && (*(int *)((longlong)param_1 + 0x7c) == 0)) {
      uVar12 = 0;
    }
    else {
      uVar12 = 1;
    }
    uVar13 = 0;
    uVar14 = 0;
    if ((int)param_1[0x10] == 0) {
      uVar10 = 0;
      uVar9 = 0;
    }
    else {
      do {
        uVar10 = 0;
        if (*(short *)((longlong)param_1 + 0x3c) != 0) {
          do {
            local_48 = 0;
            uStack_54 = *(uint *)(param_1 + 4);
            uStack_3c = *(uint *)((longlong)param_1 + 0x6c) >> (ulonglong)(uVar10 & 0x1f);
            local_40 = *(uint *)(param_1 + 0xd) >> (ulonglong)(uVar10 & 0x1f);
            local_50 = (int)param_1[0xe];
            local_58 = *(int *)((longlong)param_1 + 0x74);
            uStack_4c = *(uint *)((longlong)param_1 + 0x7c);
            if (local_40 == 0) {
              local_40 = 1;
            }
            if (uStack_3c == 0) {
              uStack_3c = 1;
            }
            cVar4 = (**(code **)(*param_1 + 0x28))(param_1,uVar14,uVar10,&local_58,uVar12,uVar11);
          } while ((cVar4 != '\0') &&
                  (uVar10 = uVar10 + 1, uVar10 < *(ushort *)((longlong)param_1 + 0x3c)));
        }
        uVar9 = *(uint *)(param_1 + 0x10);
        uVar13 = uVar14 + 1;
        uVar14 = uVar13;
      } while (uVar13 < uVar9);
    }
    bVar3 = uVar13 == uVar9;
    if (uVar13 != uVar9) {
      for (iVar7 = uVar13 + 1; iVar7 != 0; iVar7 = iVar7 + -1) {
        for (; uVar10 != 0; uVar10 = uVar10 - 1) {
          (**(code **)(*param_1 + 0x30))(param_1,iVar7 + -1,uVar10 - 1);
        }
        uVar10 = (uint)*(ushort *)((longlong)param_1 + 0x3c);
      }
      (**(code **)(*(longlong *)param_1[0xb] + 0x20))();
      param_1[0xb] = 0;
    }
  }
  return bVar3;
}

