/*
 * FUN_18002ec00 at 18002ec00
 * undefined8 __fastcall FUN_18002ec00(uint param_1, HWND param_2, longlong * param_3, undefined4 * param_4)
 * Address ranges: 18002ec00-18002efac
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_18002ec00(uint param_1,HWND param_2,longlong *param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  char cVar7;
  int iVar8;
  HWND pHVar9;
  HWND pHVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  longlong lVar13;
  HDC hdc;
  HGDIOBJ pvVar14;
  LPCRITICAL_SECTION p_Var15;
  undefined4 *puVar16;
  ulonglong uVar17;
  longlong lVar18;
  bool bVar19;
  char local_res8 [8];
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined1 local_7d;
  byte local_78 [64];
  
  uVar17 = (ulonglong)param_1;
  lVar18 = uVar17 * 600;
  if ((&DAT_180112aee)[lVar18] == '\0') {
    return 0;
  }
  puVar16 = param_4;
  pHVar9 = (HWND)(**(code **)(*param_3 + 0x28))(param_3);
  if ((param_2 == (HWND)0x0) || (param_2 == pHVar9)) {
    bVar19 = true;
    if (param_2 != (HWND)0x0) goto LAB_18002ec6a;
  }
  else {
    bVar19 = false;
LAB_18002ec6a:
    if (!bVar19) {
      iVar8 = GetClassNameA(param_2,(LPSTR)local_78,0x40);
      if (iVar8 == 0) {
        return 0;
      }
      FUN_1800fbdf8((LPCSTR)local_78);
      iVar8 = FUN_1800fc514(local_78,(byte *)"aviwnd32");
      bVar19 = iVar8 == 0;
      if ((iVar8 != 0) && (pHVar10 = GetParent(param_2), pHVar9 == pHVar10)) {
        iVar8 = FUN_1800fc514(local_78,(byte *)"mciwndclass");
        bVar19 = iVar8 == 0;
      }
      if (!bVar19) {
        return 0;
      }
    }
  }
  cVar7 = (**(code **)(*(longlong *)(&DAT_1801128e0)[uVar17 * 0x4b] + 0x30))();
  if (cVar7 != '\0') {
    return 0;
  }
  FUN_18002db9c(local_res8);
  if (*(longlong *)(&DAT_180112ad8 + lVar18) == 0) {
    puVar11 = *(undefined8 **)(&DAT_180112ad0 + lVar18);
    if (puVar11 == (undefined8 *)0x0) {
LAB_18002ed56:
      puVar11 = (undefined8 *)FUN_1800fbccc(0xb8);
      if (puVar11 != (undefined8 *)0x0) {
        uVar1 = *(undefined4 *)(&DAT_180112a90 + lVar18);
        uVar2 = *(undefined4 *)(&DAT_180112a8c + lVar18);
        uVar3 = *(undefined4 *)(&DAT_180112a70 + uVar17 * 0x4b);
        uVar4 = *(undefined4 *)((longlong)&DAT_180112a70 + lVar18 + 4);
        puVar11[1] = (&DAT_1801128e0)[uVar17 * 0x4b];
        puVar11[2] = 0;
        puVar11[3] = 0;
        puVar11[4] = 0;
        *(undefined4 *)(puVar11 + 5) = 0xffffffff;
        FUN_1800fbea0((undefined1 *)(puVar11 + 9),0,0x48);
        *(undefined8 *)((longlong)puVar11 + 0x34) = 0;
        *puVar11 = &PTR_D3DPERF_SetMarker_180101100;
        puVar11[0x12] = param_3;
        uVar12 = (**(code **)(*param_3 + 0x28))(param_3);
        *(undefined4 *)(puVar11 + 0x14) = uVar2;
        puVar11[0x13] = uVar12;
        *(undefined4 *)((longlong)puVar11 + 0xa4) = uVar1;
        lVar13 = uVar17 * 600;
        uVar1 = *(undefined4 *)(&DAT_180112aa4 + lVar13);
        uVar2 = *(undefined4 *)(lVar13 + 0x180112aa8);
        uVar5 = *(undefined4 *)(lVar13 + 0x180112aac);
        uVar6 = *(undefined4 *)(lVar13 + 0x180112ab0);
        *(undefined4 *)((longlong)puVar11 + 0x2c) = uVar3;
        *(undefined4 *)(puVar11 + 6) = uVar4;
        *(undefined4 *)(puVar11 + 0x15) = uVar1;
        *(undefined4 *)((longlong)puVar11 + 0xac) = uVar2;
        *(undefined4 *)(puVar11 + 0x16) = uVar5;
        *(undefined4 *)((longlong)puVar11 + 0xb4) = uVar6;
        *(undefined8 *)((longlong)puVar11 + 0x34) = 0;
        *(undefined2 *)((longlong)puVar11 + 0x44) = 0;
        *(undefined1 *)((longlong)puVar11 + 0x46) = 0;
        puVar16 = (undefined4 *)0x5;
        *(undefined8 *)((longlong)puVar11 + 0x3c) = 1;
        *(undefined1 *)((longlong)puVar11 + 0x47) = local_7d;
        *(undefined8 **)(&DAT_180112ad0 + lVar18) = puVar11;
        lVar13 = (**(code **)(*(longlong *)puVar11[1] + 0x58))();
        puVar11[2] = lVar13;
        if (lVar13 != 0) {
          (**(code **)(*(longlong *)puVar11[1] + 0x40))();
          *(undefined4 *)((longlong)puVar11 + 0x4c) = local_98;
          *(undefined4 *)(puVar11 + 10) = local_94;
          *(undefined4 *)((longlong)puVar11 + 0x54) = local_90;
          *(undefined4 *)(puVar11 + 9) = 0x20;
          goto LAB_18002eee9;
        }
        puVar11 = *(undefined8 **)(&DAT_180112ad0 + lVar18);
        if (puVar11 != (undefined8 *)0x0) {
          FUN_18002fc90(puVar11);
          FUN_1800fbcf0(puVar11);
        }
      }
      *(undefined8 *)(&DAT_180112ad0 + lVar18) = 0;
    }
    else if ((*(int *)((longlong)puVar11 + 0x2c) != *(int *)(&DAT_180112a70 + uVar17 * 0x4b)) ||
            (*(int *)(puVar11 + 6) != *(int *)((longlong)&DAT_180112a70 + lVar18 + 4))) {
      FUN_18002fc90(puVar11);
      FUN_1800fbcf0(puVar11);
      goto LAB_18002ed56;
    }
LAB_18002eee9:
    hdc = (HDC)0x0;
    lVar13 = *(longlong *)(&DAT_180112ad0 + lVar18);
    if (lVar13 != 0) {
      bVar19 = FUN_1800322f0(lVar13 + 8,(HANDLE)0x0,0,puVar16,'\0');
      if ((bVar19) && (hdc = CreateCompatibleDC((HDC)0x0), hdc != (HDC)0x0)) {
        pvVar14 = SelectObject(hdc,*(HGDIOBJ *)(lVar13 + 0x58));
        *(HGDIOBJ *)(lVar13 + 0x68) = pvVar14;
      }
      *(HDC *)(&DAT_180112ad8 + lVar18) = hdc;
      *(undefined4 *)(&DAT_180112ae0 + lVar18) = 0;
    }
    if (*(longlong *)(&DAT_180112ad8 + lVar18) == 0) goto LAB_18002ef52;
  }
  *(int *)(&DAT_180112ae0 + lVar18) = *(int *)(&DAT_180112ae0 + lVar18) + 1;
LAB_18002ef52:
  *param_4 = 1;
  p_Var15 = DAT_1801123a8;
  uVar12 = *(undefined8 *)(&DAT_180112ad8 + lVar18);
  if (local_res8[0] == '\0') {
    *(undefined4 *)((longlong)&DAT_1801123a8[1].DebugInfo + 4) = 0;
  }
  else {
    LeaveCriticalSection(DAT_1801123a8);
    p_Var15 = DAT_1801123a8;
  }
  LOCK();
  p_Var15[1].LockCount = p_Var15[1].LockCount + -1;
  UNLOCK();
  return uVar12;
}

