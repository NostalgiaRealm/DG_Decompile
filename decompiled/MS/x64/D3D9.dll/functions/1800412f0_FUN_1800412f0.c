/*
 * FUN_1800412f0 at 1800412f0
 * bool __fastcall FUN_1800412f0(longlong * param_1, longlong param_2, uint param_3, uint param_4)
 * Address ranges: 1800412f0-180041720
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool FUN_1800412f0(longlong *param_1,longlong param_2,uint param_3,uint param_4)

{
  int *piVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  bool bVar13;
  int iVar14;
  undefined8 *puVar15;
  longlong *plVar16;
  HANDLE hEvent;
  char *pcVar17;
  ulonglong uVar18;
  longlong lVar19;
  undefined8 *puVar20;
  ulonglong uVar21;
  ulonglong uVar22;
  uint uVar23;
  longlong local_res8 [4];
  longlong local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  
  uVar18 = (ulonglong)param_4;
  if (((int)param_1[5] - 2U < 2) || ((char)param_1[6] != '\0')) {
    local_res8[0] = 0;
    iVar14 = (**(code **)(*param_1 + 0x10))(param_1,1,0,local_res8);
    if (iVar14 == 0) {
      if ((char)param_1[6] != '\0') {
        param_4 = *(uint *)((longlong)param_1 + 0x24);
      }
      uVar18 = 0;
      if ((char)param_1[6] == '\0') {
        uVar18 = (ulonglong)param_3;
      }
      FUN_1800fbec0((undefined8 *)(local_res8[0] + uVar18),(undefined8 *)(uVar18 + param_2),
                    (ulonglong)param_4);
      (**(code **)(*param_1 + 0x18))(param_1);
      return true;
    }
    return iVar14 == 0;
  }
  if ((int)param_1[5] != 0) {
    return false;
  }
  lVar19 = (ulonglong)*(uint *)(param_1 + 4) * 0x1ac0 + param_1[2];
  lVar3 = *(longlong *)(param_1[7] + (ulonglong)*(uint *)((longlong)param_1 + 0x4c) * 0x10);
  pcVar17 = (char *)&local_a8;
  bVar13 = FUN_180040970(pcVar17,lVar19 + 0x900,param_4,(undefined8 *)(param_2 + (ulonglong)param_3)
                         ,(longlong *)pcVar17);
  if (!bVar13) {
    if (param_4 == 0) {
      return true;
    }
    uVar22 = 0;
    plVar5 = (longlong *)(lVar19 + 0x1bc0);
    do {
      iVar14 = (int)uVar22;
      uVar21 = uVar18;
      if (0x1000000 < (uint)uVar18) {
        uVar21 = 0x1000000;
      }
      puVar15 = (undefined8 *)(uVar22 + (longlong)(param_2 + (ulonglong)param_3));
      uVar23 = (uint)uVar21;
      bVar13 = FUN_180040970(pcVar17,lVar19 + 0x900,uVar23,puVar15,&local_a8);
      uVar12 = uStack_80;
      uVar11 = local_88;
      uVar10 = uStack_90;
      uVar9 = local_98;
      uVar8 = uStack_a0;
      lVar4 = local_a8;
      if (bVar13) {
        lVar6 = *(longlong *)(lVar3 + 0x48);
        lVar7 = *(longlong *)(lVar19 + 0x1e08);
        plVar16 = plVar5;
        FUN_1800fab60((int *)plVar5);
        cVar2 = *(char *)(lVar19 + 0x1dc4);
        bVar13 = true;
        pcVar17 = (char *)CONCAT71((int7)((ulonglong)plVar16 >> 8),cVar2 == '\0');
        local_res8[0] = CONCAT71(local_res8[0]._1_7_,cVar2 == '\0');
        if (cVar2 != '\0') {
          puVar15 = (undefined8 *)FUN_1800fab80((longlong)plVar5,0x50);
          if (puVar15 == (undefined8 *)0x0) {
            FUN_1800facb0((undefined4 *)plVar5);
            Sleep(100);
            plVar16 = plVar5;
            FUN_1800fab60((int *)plVar5);
            pcVar17 = (char *)CONCAT71((int7)((ulonglong)plVar16 >> 8),1);
          }
          else {
            LOCK();
            *(int *)(lVar19 + 0x1dc0) = *(int *)(lVar19 + 0x1dc0) + 1;
            UNLOCK();
            puVar15[1] = 0x50;
            puVar15[2] = lVar7;
            puVar20 = (undefined8 *)((longlong)puVar15 + 99U & 0xfffffffffffffff8);
            puVar15[3] = lVar19 + 0x1fd0;
            puVar15[4] = lVar6;
            *(uint *)(puVar15 + 5) = iVar14 + param_3;
            *(longlong *)((longlong)puVar15 + 0x2c) = lVar4;
            *(undefined8 *)((longlong)puVar15 + 0x34) = uVar8;
            *(undefined8 *)((longlong)puVar15 + 0x3c) = uVar9;
            *(undefined8 *)((longlong)puVar15 + 0x44) = uVar10;
            *(undefined8 *)((longlong)puVar15 + 0x4c) = uVar11;
            *(undefined8 *)((longlong)puVar15 + 0x54) = uVar12;
            *puVar20 = 0;
            *puVar15 = FUN_180041724;
            *(undefined8 **)(lVar19 + 0x1c50 + (ulonglong)*(uint *)(lVar19 + 0x1dbc) * 0x28) =
                 puVar20;
            if (*(char *)(lVar19 + 0x1dc5) == '\0') {
              pcVar17 = (char *)CONCAT71(0x1800417,(undefined1)local_res8[0]);
            }
            else {
              FUN_1800facb0((undefined4 *)plVar5);
              hEvent = *(HANDLE *)(lVar19 + 0x1c40);
              SetEvent(hEvent);
              pcVar17 = (char *)CONCAT71((int7)((ulonglong)hEvent >> 8),(undefined1)local_res8[0]);
              bVar13 = false;
            }
          }
        }
        if ((char)pcVar17 != '\0') {
          pcVar17 = *(char **)(lVar19 + 0x1da0);
          *(longlong *)pcVar17 = lVar7;
          *(longlong *)((longlong)pcVar17 + 8) = lVar19 + 0x1fd0;
          *(longlong *)((longlong)pcVar17 + 0x10) = lVar6;
          *(uint *)((longlong)pcVar17 + 0x18) = iVar14 + param_3;
          *(longlong *)((longlong)pcVar17 + 0x1c) = lVar4;
          *(undefined8 *)((longlong)pcVar17 + 0x24) = uVar8;
          *(undefined8 *)((longlong)pcVar17 + 0x2c) = uVar9;
          *(undefined8 *)((longlong)pcVar17 + 0x34) = uVar10;
          *(undefined8 *)((longlong)pcVar17 + 0x3c) = uVar11;
          *(undefined8 *)((longlong)pcVar17 + 0x44) = uVar12;
          FUN_180041724((longlong *)pcVar17);
        }
        if (bVar13) {
          pcVar17 = (char *)plVar5;
          FUN_1800facb0((undefined4 *)plVar5);
        }
        uVar22 = (ulonglong)(iVar14 + uVar23);
        uVar18 = (ulonglong)((uint)uVar18 - uVar23);
      }
      else {
        pcVar17 = "[dgVoodoo] D3D12 Core: FATAL ERROR: Failed to allocate %s. WTF?\n";
        FUN_1800ca538("[dgVoodoo] D3D12 Core: FATAL ERROR: Failed to allocate %s. WTF?\n",
                      "an upload heap buffer",uVar21,puVar15);
        DebugBreak();
      }
    } while ((int)uVar18 != 0);
    return true;
  }
  lVar3 = *(longlong *)(lVar3 + 0x48);
  piVar1 = (int *)(lVar19 + 0x1bc0);
  lVar4 = *(longlong *)(lVar19 + 0x1e08);
  FUN_1800fab60(piVar1);
  if (*(char *)(lVar19 + 0x1dc4) != '\0') {
    puVar15 = (undefined8 *)FUN_1800fab80((longlong)piVar1,0x50);
    if (puVar15 != (undefined8 *)0x0) {
      LOCK();
      *(int *)(lVar19 + 0x1dc0) = *(int *)(lVar19 + 0x1dc0) + 1;
      UNLOCK();
      puVar15[1] = 0x50;
      puVar15[2] = lVar4;
      puVar20 = (undefined8 *)((longlong)puVar15 + 99U & 0xfffffffffffffff8);
      puVar15[3] = lVar19 + 0x1fd0;
      puVar15[4] = lVar3;
      *(uint *)(puVar15 + 5) = param_3;
      *(longlong *)((longlong)puVar15 + 0x2c) = local_a8;
      *(undefined8 *)((longlong)puVar15 + 0x34) = uStack_a0;
      *(undefined8 *)((longlong)puVar15 + 0x3c) = local_98;
      *(undefined8 *)((longlong)puVar15 + 0x44) = uStack_90;
      *(undefined8 *)((longlong)puVar15 + 0x4c) = local_88;
      *(undefined8 *)((longlong)puVar15 + 0x54) = uStack_80;
      *puVar20 = 0;
      *puVar15 = FUN_180041724;
      *(undefined8 **)(lVar19 + 0x1c50 + (ulonglong)*(uint *)(lVar19 + 0x1dbc) * 0x28) = puVar20;
      if (*(char *)(lVar19 + 0x1dc5) != '\0') {
        FUN_1800facb0(piVar1);
        SetEvent(*(HANDLE *)(lVar19 + 0x1c40));
        return true;
      }
      goto LAB_18004149d;
    }
    FUN_1800facb0(piVar1);
    Sleep(100);
    FUN_1800fab60(piVar1);
  }
  plVar5 = *(longlong **)(lVar19 + 0x1da0);
  *plVar5 = lVar4;
  plVar5[1] = lVar19 + 0x1fd0;
  plVar5[2] = lVar3;
  *(uint *)(plVar5 + 3) = param_3;
  *(longlong *)((longlong)plVar5 + 0x1c) = local_a8;
  *(undefined8 *)((longlong)plVar5 + 0x24) = uStack_a0;
  *(undefined8 *)((longlong)plVar5 + 0x2c) = local_98;
  *(undefined8 *)((longlong)plVar5 + 0x34) = uStack_90;
  *(undefined8 *)((longlong)plVar5 + 0x3c) = local_88;
  *(undefined8 *)((longlong)plVar5 + 0x44) = uStack_80;
  FUN_180041724(plVar5);
LAB_18004149d:
  FUN_1800facb0(piVar1);
  return true;
}

