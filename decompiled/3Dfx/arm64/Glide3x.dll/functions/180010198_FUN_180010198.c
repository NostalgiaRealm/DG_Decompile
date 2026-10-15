/*
 * FUN_180010198 at 180010198
 * undefined __cdecl FUN_180010198(longlong param_1)
 * Address ranges: 180010198-18001059b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180010198(longlong param_1)

{
  uint uVar1;
  int iVar2;
  code *pcVar3;
  int iVar4;
  uint uVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  char cVar8;
  undefined1 uVar9;
  ulonglong uVar10;
  longlong lVar11;
  longlong lVar12;
  uint local_60;
  uint uStack_5c;
  uint local_58;
  uint uStack_54;
  
  if ((*(char *)(param_1 + 0x32f0) != '\0') &&
     (plVar6 = *(longlong **)(*(longlong *)(param_1 + 0x3340) + 8),
     iVar4 = (**(code **)(*plVar6 + 0x70))(plVar6,*(undefined8 *)(param_1 + 0x3348),0,4,0,&local_60)
     , -1 < iVar4)) {
    thunk_FUN_1800010d8((undefined8 *)CONCAT44(uStack_5c,local_60),(undefined8 *)(param_1 + 0x2c90),
                        0x660);
    plVar6 = *(longlong **)(*(longlong *)(param_1 + 0x3340) + 8);
    (**(code **)(*plVar6 + 0x78))(plVar6,*(undefined8 *)(param_1 + 0x3348),0);
    *(undefined1 *)(param_1 + 0x32f0) = 0;
  }
  if (*(char *)(param_1 + 0x32f1) != '\0') {
    uVar5 = FUN_180016f80((longlong *)(param_1 + 0x35a0),*(int *)(param_1 + 0x29fc));
    if (uVar5 != 0xffffffff) {
      lVar11 = param_1 + (longlong)(int)uVar5 * 0x180;
      iVar4 = *(int *)(param_1 + 0x2a28);
      iVar2 = *(int *)(param_1 + 0x2a20);
      if (*(int *)(param_1 + 0x2c98) == 1) {
        iVar2 = *(int *)(lVar11 + 0x370c) - iVar4;
        iVar4 = *(int *)(lVar11 + 0x370c) - *(int *)(param_1 + 0x2a20);
      }
      uVar5 = *(uint *)(lVar11 + 0x3708);
      if (uVar5 == 0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(0xf004,0x180010290);
        (*pcVar3)();
      }
      local_60 = 0;
      if (uVar5 != 0) {
        local_60 = (uint)(*(int *)(param_1 + 0x2a1c) * *(int *)(lVar11 + 0x3710)) / uVar5;
      }
      uVar1 = *(uint *)(lVar11 + 0x370c);
      if (uVar1 == 0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(0xf004,0x1800102ac);
        (*pcVar3)();
      }
      uStack_5c = 0;
      if (uVar1 != 0) {
        uStack_5c = (uint)(*(int *)(lVar11 + 0x3714) * iVar2) / uVar1;
      }
      uStack_54 = 0;
      if (uVar1 != 0) {
        uStack_54 = (uint)(*(int *)(lVar11 + 0x3714) * iVar4) / uVar1;
      }
      local_58 = 0;
      if (uVar5 != 0) {
        local_58 = (uint)(*(int *)(param_1 + 0x2a24) * *(int *)(lVar11 + 0x3710)) / uVar5;
      }
      plVar6 = *(longlong **)(*(longlong *)(param_1 + 0x3340) + 8);
      (**(code **)(*plVar6 + 0x168))(plVar6,1,&local_60);
    }
    *(undefined1 *)(param_1 + 0x32f1) = 0;
  }
  if ((*(char *)(param_1 + 0x32f2) != '\0') &&
     (plVar6 = *(longlong **)(*(longlong *)(param_1 + 0x3340) + 8),
     iVar4 = (**(code **)(*plVar6 + 0x70))(plVar6,*(undefined8 *)(param_1 + 0x3368),0,4,0,&local_60)
     , -1 < iVar4)) {
    uVar10 = 0;
    uVar5 = 0;
    if (*(int *)(param_1 + 0xe8) != 0) {
      do {
        *(float *)(CONCAT44(uStack_5c,local_60) + uVar10 * 4) =
             (float)*(byte *)(param_1 + 0x2a8 + uVar10) / 255.0;
        uVar5 = *(uint *)(param_1 + 0xe8);
        uVar1 = (int)uVar10 + 1;
        uVar10 = (ulonglong)uVar1;
      } while (uVar1 < uVar5);
    }
    *(float *)(CONCAT44(uStack_5c,local_60) + (ulonglong)uVar5 * 4) =
         (float)*(byte *)(param_1 + (ulonglong)(uVar5 - 1) + 0x2a8) / 255.0;
    plVar6 = *(longlong **)(*(longlong *)(param_1 + 0x3340) + 8);
    (**(code **)(*plVar6 + 0x78))(plVar6,*(undefined8 *)(param_1 + 0x3368),0);
    *(undefined1 *)(param_1 + 0x32f2) = 0;
  }
  lVar11 = 0;
  do {
    if (*(char *)(param_1 + 0x32f3 + lVar11) != '\0') {
      puVar7 = *(undefined8 **)(param_1 + 0xd940 + lVar11 * 8);
      if (*(uint *)(puVar7[2] + 0x30) < 0x10) {
        lVar12 = (ulonglong)*(uint *)(puVar7[2] + 0x30) * 2;
        cVar8 = (&DAT_180067930)[lVar12];
        uVar9 = (&DAT_180067931)[lVar12];
        if ((cVar8 == '\x02') && (cVar8 = '\x02', *(int *)((longlong)puVar7 + 0x1c) != 0)) {
          cVar8 = '\x03';
        }
      }
      else {
        uVar9 = 0;
        cVar8 = '\0';
      }
      (**(code **)*puVar7)(puVar7,cVar8,uVar9);
      *(undefined1 *)(param_1 + 0x32f3 + lVar11) = 0;
    }
    if (*(char *)(param_1 + 0x32f6 + lVar11) != '\0') {
      lVar12 = *(longlong *)(param_1 + 0xd940 + lVar11 * 8);
      if ((*(char *)(lVar12 + 0x3020) != '\0') &&
         (plVar6 = *(longlong **)(*(longlong *)(*(longlong *)(lVar12 + 0x3028) + 0x3340) + 8),
         iVar4 = (**(code **)(*plVar6 + 0x70))
                           (plVar6,*(undefined8 *)(lVar12 + 0x3050),0,4,0,&local_60), -1 < iVar4)) {
        thunk_FUN_1800010d8((undefined8 *)CONCAT44(uStack_5c,local_60),(undefined8 *)(lVar12 + 0x20)
                            ,0x1000);
        plVar6 = *(longlong **)(*(longlong *)(*(longlong *)(lVar12 + 0x3028) + 0x3340) + 8);
        (**(code **)(*plVar6 + 0x78))(plVar6,*(undefined8 *)(lVar12 + 0x3050),0);
        *(undefined1 *)(lVar12 + 0x3020) = 0;
      }
      if ((*(char *)(lVar12 + 0x3021) != '\0') &&
         (plVar6 = *(longlong **)(*(longlong *)(*(longlong *)(lVar12 + 0x3028) + 0x3340) + 8),
         iVar4 = (**(code **)(*plVar6 + 0x70))
                           (plVar6,*(undefined8 *)(lVar12 + 0x3040),0,4,0,&local_60), -1 < iVar4)) {
        thunk_FUN_1800010d8((undefined8 *)CONCAT44(uStack_5c,local_60),
                            (undefined8 *)(lVar12 + 0x1020),0x1000);
        plVar6 = *(longlong **)(*(longlong *)(*(longlong *)(lVar12 + 0x3028) + 0x3340) + 8);
        (**(code **)(*plVar6 + 0x78))(plVar6,*(undefined8 *)(lVar12 + 0x3040),0);
        *(undefined1 *)(lVar12 + 0x3021) = 0;
      }
      if ((*(char *)(lVar12 + 0x3022) != '\0') &&
         (plVar6 = *(longlong **)(*(longlong *)(*(longlong *)(lVar12 + 0x3028) + 0x3340) + 8),
         iVar4 = (**(code **)(*plVar6 + 0x70))
                           (plVar6,*(undefined8 *)(lVar12 + 0x3048),0,4,0,&local_60), -1 < iVar4)) {
        thunk_FUN_1800010d8((undefined8 *)CONCAT44(uStack_5c,local_60),
                            (undefined8 *)(lVar12 + 0x2020),0x1000);
        plVar6 = *(longlong **)(*(longlong *)(*(longlong *)(lVar12 + 0x3028) + 0x3340) + 8);
        (**(code **)(*plVar6 + 0x78))(plVar6,*(undefined8 *)(lVar12 + 0x3048),0);
        *(undefined1 *)(lVar12 + 0x3022) = 0;
      }
      *(undefined1 *)(param_1 + 0x32f6 + lVar11) = 0;
    }
    lVar11 = lVar11 + 1;
  } while (lVar11 != 3);
  return;
}

