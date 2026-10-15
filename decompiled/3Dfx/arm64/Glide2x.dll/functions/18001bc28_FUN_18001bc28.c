/*
 * FUN_18001bc28 at 18001bc28
 * undefined __cdecl FUN_18001bc28(longlong param_1)
 * Address ranges: 18001bc28-18001c023
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18001bc28(longlong param_1)

{
  uint uVar1;
  int iVar2;
  code *pcVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  char cVar9;
  undefined1 uVar10;
  ulonglong uVar11;
  uint uVar12;
  longlong lVar13;
  uint local_60;
  uint uStack_5c;
  uint local_58;
  uint uStack_54;
  
  lVar6 = param_1;
  if ((*(char *)(param_1 + 0x3170) != '\0') &&
     (plVar5 = *(longlong **)(*(longlong *)(param_1 + 0x31c0) + 8),
     lVar6 = (**(code **)(*plVar5 + 0x70))(plVar5,*(undefined8 *)(param_1 + 0x31c8),0,4,0,&local_60)
     , -1 < (int)lVar6)) {
    thunk_FUN_180001218((undefined8 *)CONCAT44(uStack_5c,local_60),(undefined8 *)(param_1 + 0x2bf0),
                        0x580);
    plVar5 = *(longlong **)(*(longlong *)(param_1 + 0x31c0) + 8);
    lVar6 = (**(code **)(*plVar5 + 0x78))(plVar5,*(undefined8 *)(param_1 + 0x31c8),0);
    *(undefined1 *)(param_1 + 0x3170) = 0;
  }
  if (*(char *)(param_1 + 0x3171) != '\0') {
    uVar7 = FUN_180022ca0(lVar6,*(int *)(param_1 + 0x2984));
    if ((int)uVar7 != -1) {
      lVar6 = param_1 + (longlong)(int)uVar7 * 0x180;
      iVar4 = *(int *)(param_1 + 0x29b0);
      iVar2 = *(int *)(param_1 + 0x29a8);
      if (*(int *)(param_1 + 0x2bf8) == 1) {
        iVar2 = *(int *)(lVar6 + 0x358c) - iVar4;
        iVar4 = *(int *)(lVar6 + 0x358c) - *(int *)(param_1 + 0x29a8);
      }
      uVar12 = *(uint *)(lVar6 + 0x3588);
      if (uVar12 == 0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(0xf004,0x18001bd18);
        (*pcVar3)();
      }
      local_60 = 0;
      if (uVar12 != 0) {
        local_60 = (uint)(*(int *)(param_1 + 0x29a4) * *(int *)(lVar6 + 0x3590)) / uVar12;
      }
      uVar1 = *(uint *)(lVar6 + 0x358c);
      if (uVar1 == 0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(0xf004,0x18001bd34);
        (*pcVar3)();
      }
      uStack_5c = 0;
      if (uVar1 != 0) {
        uStack_5c = (uint)(*(int *)(lVar6 + 0x3594) * iVar2) / uVar1;
      }
      uStack_54 = 0;
      if (uVar1 != 0) {
        uStack_54 = (uint)(*(int *)(lVar6 + 0x3594) * iVar4) / uVar1;
      }
      local_58 = 0;
      if (uVar12 != 0) {
        local_58 = (uint)(*(int *)(param_1 + 0x29ac) * *(int *)(lVar6 + 0x3590)) / uVar12;
      }
      plVar5 = *(longlong **)(*(longlong *)(param_1 + 0x31c0) + 8);
      (**(code **)(*plVar5 + 0x168))(plVar5,1,&local_60);
    }
    *(undefined1 *)(param_1 + 0x3171) = 0;
  }
  if ((*(char *)(param_1 + 0x3172) != '\0') &&
     (plVar5 = *(longlong **)(*(longlong *)(param_1 + 0x31c0) + 8),
     iVar4 = (**(code **)(*plVar5 + 0x70))(plVar5,*(undefined8 *)(param_1 + 0x31e8),0,4,0,&local_60)
     , -1 < iVar4)) {
    uVar11 = 0;
    uVar12 = 0;
    if (*(int *)(param_1 + 0xe8) != 0) {
      do {
        *(float *)(CONCAT44(uStack_5c,local_60) + uVar11 * 4) =
             (float)*(byte *)(param_1 + 0x22c + uVar11) / 255.0;
        uVar12 = *(uint *)(param_1 + 0xe8);
        uVar1 = (int)uVar11 + 1;
        uVar11 = (ulonglong)uVar1;
      } while (uVar1 < uVar12);
    }
    *(float *)(CONCAT44(uStack_5c,local_60) + (ulonglong)uVar12 * 4) =
         (float)*(byte *)(param_1 + (ulonglong)(uVar12 - 1) + 0x22c) / 255.0;
    plVar5 = *(longlong **)(*(longlong *)(param_1 + 0x31c0) + 8);
    (**(code **)(*plVar5 + 0x78))(plVar5,*(undefined8 *)(param_1 + 0x31e8),0);
    *(undefined1 *)(param_1 + 0x3172) = 0;
  }
  lVar6 = 0;
  do {
    if (*(char *)(param_1 + 0x3173 + lVar6) != '\0') {
      puVar8 = *(undefined8 **)(param_1 + 0xcf90 + lVar6 * 8);
      if (*(uint *)(puVar8[2] + 0x30) < 0x10) {
        lVar13 = (ulonglong)*(uint *)(puVar8[2] + 0x30) * 2;
        cVar9 = (&DAT_180064b00)[lVar13];
        uVar10 = (&DAT_180064b01)[lVar13];
        if ((cVar9 == '\x02') && (cVar9 = '\x02', *(int *)((longlong)puVar8 + 0x1c) != 0)) {
          cVar9 = '\x03';
        }
      }
      else {
        uVar10 = 0;
        cVar9 = '\0';
      }
      (**(code **)*puVar8)(puVar8,cVar9,uVar10);
      *(undefined1 *)(param_1 + 0x3173 + lVar6) = 0;
    }
    if (*(char *)(param_1 + 0x3176 + lVar6) != '\0') {
      lVar13 = *(longlong *)(param_1 + 0xcf90 + lVar6 * 8);
      if ((*(char *)(lVar13 + 0x3020) != '\0') &&
         (plVar5 = *(longlong **)(*(longlong *)(*(longlong *)(lVar13 + 0x3028) + 0x31c0) + 8),
         iVar4 = (**(code **)(*plVar5 + 0x70))
                           (plVar5,*(undefined8 *)(lVar13 + 0x3050),0,4,0,&local_60), -1 < iVar4)) {
        thunk_FUN_180001218((undefined8 *)CONCAT44(uStack_5c,local_60),(undefined8 *)(lVar13 + 0x20)
                            ,0x1000);
        plVar5 = *(longlong **)(*(longlong *)(*(longlong *)(lVar13 + 0x3028) + 0x31c0) + 8);
        (**(code **)(*plVar5 + 0x78))(plVar5,*(undefined8 *)(lVar13 + 0x3050),0);
        *(undefined1 *)(lVar13 + 0x3020) = 0;
      }
      if ((*(char *)(lVar13 + 0x3021) != '\0') &&
         (plVar5 = *(longlong **)(*(longlong *)(*(longlong *)(lVar13 + 0x3028) + 0x31c0) + 8),
         iVar4 = (**(code **)(*plVar5 + 0x70))
                           (plVar5,*(undefined8 *)(lVar13 + 0x3040),0,4,0,&local_60), -1 < iVar4)) {
        thunk_FUN_180001218((undefined8 *)CONCAT44(uStack_5c,local_60),
                            (undefined8 *)(lVar13 + 0x1020),0x1000);
        plVar5 = *(longlong **)(*(longlong *)(*(longlong *)(lVar13 + 0x3028) + 0x31c0) + 8);
        (**(code **)(*plVar5 + 0x78))(plVar5,*(undefined8 *)(lVar13 + 0x3040),0);
        *(undefined1 *)(lVar13 + 0x3021) = 0;
      }
      if ((*(char *)(lVar13 + 0x3022) != '\0') &&
         (plVar5 = *(longlong **)(*(longlong *)(*(longlong *)(lVar13 + 0x3028) + 0x31c0) + 8),
         iVar4 = (**(code **)(*plVar5 + 0x70))
                           (plVar5,*(undefined8 *)(lVar13 + 0x3048),0,4,0,&local_60), -1 < iVar4)) {
        thunk_FUN_180001218((undefined8 *)CONCAT44(uStack_5c,local_60),
                            (undefined8 *)(lVar13 + 0x2020),0x1000);
        plVar5 = *(longlong **)(*(longlong *)(*(longlong *)(lVar13 + 0x3028) + 0x31c0) + 8);
        (**(code **)(*plVar5 + 0x78))(plVar5,*(undefined8 *)(lVar13 + 0x3048),0);
        *(undefined1 *)(lVar13 + 0x3022) = 0;
      }
      *(undefined1 *)(param_1 + 0x3176 + lVar6) = 0;
    }
    lVar6 = lVar6 + 1;
  } while (lVar6 != 3);
  return;
}

