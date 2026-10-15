/*
 * FUN_18004c518 at 18004c518
 * WNDPROC __cdecl FUN_18004c518(undefined8 param_1, longlong * param_2)
 * Address ranges: 18004c518-18004c807
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

WNDPROC FUN_18004c518(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  uint uVar2;
  undefined1 auVar3 [16];
  char cVar4;
  longlong lVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  FARPROC pFVar8;
  code *pcVar9;
  SIZE_T SVar10;
  WNDPROC pWVar11;
  undefined8 *puVar12;
  
  lVar5 = FUN_1800636c0(0x1b588);
  pWVar11 = (WNDPROC)(lVar5 + 0x47U & 0xffffffffffffffc0);
  *(longlong *)(pWVar11 + -8) = lVar5;
  *(undefined4 *)(pWVar11 + 8) = 0;
  puVar12 = (undefined8 *)((ulonglong)pWVar11 | 0x18);
  *(undefined2 *)(pWVar11 + 0xc) = 0;
  lVar5 = 0x10;
  *(undefined8 *)(pWVar11 + 0x10) = 0;
  *(undefined ***)pWVar11 = &PTR_LAB_180069d08;
  do {
    lVar5 = lVar5 + -1;
    FUN_180054660(puVar12);
    puVar12 = puVar12 + 5;
  } while (lVar5 != 0);
  *(undefined8 *)(pWVar11 + 0x308) = 0;
  *(undefined8 *)(pWVar11 + 0x298) = param_1;
  *(undefined8 *)(pWVar11 + 0x2a0) = 0;
  pcVar9 = pWVar11 + 0x318;
  *(undefined8 *)(pWVar11 + 0x2a8) = 0;
  *(undefined8 *)(pWVar11 + 0x2b0) = 0;
  *(undefined8 *)(pWVar11 + 0x2b8) = 0;
  *(undefined8 *)(pWVar11 + 0x2c0) = 0;
  *(undefined8 *)(pWVar11 + 0x2c8) = 0;
  *(undefined8 *)(pWVar11 + 0x2d0) = 0;
  *(undefined8 *)(pWVar11 + 0x2d8) = 0;
  *(undefined8 *)(pWVar11 + 0x2e0) = 0;
  *(undefined8 *)(pWVar11 + 0x2e8) = 0;
  *(undefined8 *)(pWVar11 + 0x2f0) = 0;
  *(undefined8 *)(pWVar11 + 0x2f8) = 0;
  *(undefined8 *)(pWVar11 + 0x300) = 0;
  *(undefined4 *)(pWVar11 + 0x310) = 0x10000;
  lVar5 = 8;
  pWVar11[0x314] = (code)0x0;
  do {
    *(undefined8 *)(pcVar9 + 8) = 0;
    *(undefined8 *)(pcVar9 + 0x10) = 0;
    lVar5 = lVar5 + -1;
    pcVar9 = pcVar9 + 0x60;
  } while (lVar5 != 0);
  *(undefined8 *)(pWVar11 + 0x618) = 0;
  *(undefined4 *)(pWVar11 + 0x678) = 0;
  *(undefined ***)(pWVar11 + 0x680) = &PTR_s_DGD3D12ROOT_18006f4d0;
  *(undefined8 *)(pWVar11 + 0x688) = 0;
  *(undefined8 *)(pWVar11 + 0x648) = 0;
  *(undefined8 *)(pWVar11 + 0x650) = 0;
  *(undefined8 *)(pWVar11 + 0x658) = 0;
  *(undefined8 *)(pWVar11 + 0x660) = 0;
  *(undefined8 *)(pWVar11 + 0x690) = 0;
  *(undefined8 *)(pWVar11 + 0x698) = 0;
  lVar5 = 0x10;
  pWVar11[0x67c] = (code)0x0;
  *(undefined8 *)(pWVar11 + 0x6a0) = 0;
  *(undefined8 *)(pWVar11 + 0x628) = 0;
  *(undefined8 *)(pWVar11 + 0x620) = 0;
  *(undefined8 *)(pWVar11 + 0x638) = 0;
  *(undefined8 *)(pWVar11 + 0x630) = 0;
  *(undefined8 *)(pWVar11 + 0x640) = 0;
  *(undefined8 *)(pWVar11 + 0x670) = 0;
  *(undefined8 *)(pWVar11 + 0x668) = 0;
  pcVar9 = pWVar11 + 0x6d0;
  do {
    *(undefined8 *)pcVar9 = 0;
    lVar5 = lVar5 + -1;
    *(undefined4 *)(pcVar9 + 0x10) = 0xc000;
    *(undefined4 *)(pcVar9 + 0x18) = 0;
    pcVar9[0x1d] = (code)0x0;
    pcVar9 = pcVar9 + 0x20;
  } while (lVar5 != 0);
  *(undefined8 *)(pWVar11 + 0x8d0) = 0;
  *(undefined ***)pWVar11 = &PTR_FUN_1800692a8;
  *(WNDPROC *)(pWVar11 + 0x6b8) = pWVar11;
  *(undefined8 *)(pWVar11 + 0x6c0) = 0;
  *(undefined8 *)(pWVar11 + 0x6c8) = 0;
  *(undefined ***)(pWVar11 + 0x6a8) = &PTR_FUN_180069460;
  *(undefined ***)(pWVar11 + 0x6b0) = &PTR_LAB_180069338;
  pcVar9 = pWVar11 + 0x900;
  lVar5 = 0x10;
  do {
    lVar5 = lVar5 + -1;
    FUN_18004a8e0((longlong)pcVar9);
    pcVar9 = pcVar9 + 0x1ac0;
  } while (lVar5 != 0);
  uVar6 = FUN_1800492d0();
  *(undefined8 *)(pWVar11 + 0x1b500) = uVar6;
  uVar7 = FUN_1800548a0(pWVar11);
  if ((uVar7 & 1) != 0) {
    pFVar8 = GetProcAddress(*(HMODULE *)(pWVar11 + 0x2d8),"D3D12SerializeRootSignature");
    *(FARPROC *)(pWVar11 + 0x8d0) = pFVar8;
    if (pFVar8 != (FARPROC)0x0) {
      pWVar11[0x312] = (code)0x0;
      if (param_2 != (longlong *)0x0) {
        thunk_FUN_180063700(*(LPVOID *)(pWVar11 + 0x6c0));
        *(undefined8 *)(pWVar11 + 0x6c0) = 0;
        *(undefined8 *)(pWVar11 + 0x6c8) = 0;
        uVar7 = 0;
        if ((int)param_2[1] != 0) {
          do {
            iVar1 = *(int *)(pWVar11 + 0x6cc);
            lVar5 = *param_2;
            if (*(int *)(pWVar11 + 0x6c8) == iVar1) {
              uVar2 = iVar1 << 1;
              if (iVar1 == 0) {
                uVar2 = 0x10;
              }
              auVar3._8_8_ = 0;
              auVar3._0_8_ = CONCAT44(0,uVar2);
              SVar10 = CONCAT44(0,uVar2) << 3;
              if (SUB168(auVar3 * ZEXT816(8),8) != 0) {
                SVar10 = 0xffffffffffffffff;
              }
              puVar12 = (undefined8 *)thunk_FUN_1800636c0(SVar10);
              if (puVar12 != (undefined8 *)0x0) {
                thunk_FUN_1800010d8(puVar12,*(undefined8 **)(pWVar11 + 0x6c0),
                                    (ulonglong)*(uint *)(pWVar11 + 0x6cc) << 3);
                thunk_FUN_180063700(*(LPVOID *)(pWVar11 + 0x6c0));
                *(undefined8 **)(pWVar11 + 0x6c0) = puVar12;
                *(uint *)(pWVar11 + 0x6cc) = uVar2;
                goto LAB_18004c748;
              }
            }
            else {
LAB_18004c748:
              *(undefined8 *)
               (*(longlong *)(pWVar11 + 0x6c0) + (ulonglong)*(uint *)(pWVar11 + 0x6c8) * 8) =
                   *(undefined8 *)(lVar5 + uVar7 * 8);
              *(int *)(pWVar11 + 0x6c8) = *(int *)(pWVar11 + 0x6c8) + 1;
            }
            uVar2 = (int)uVar7 + 1;
            uVar7 = (ulonglong)uVar2;
          } while (uVar2 < *(uint *)(param_2 + 1));
        }
      }
      cVar4 = '\x01';
      uVar7 = 0;
      if (*(int *)(pWVar11 + 0x6c8) == 0) {
        return pWVar11;
      }
      do {
        if (cVar4 == '\0') goto LAB_18004c7c8;
        puVar12 = *(undefined8 **)(*(longlong *)(pWVar11 + 0x6c0) + uVar7 * 8);
        cVar4 = (**(code **)*puVar12)
                          (puVar12,*(undefined8 *)(*(longlong *)(pWVar11 + 0x6b8) + 0x2d8),
                           pWVar11 + 0x6b0);
        uVar2 = (int)uVar7 + 1;
        uVar7 = (ulonglong)uVar2;
      } while (uVar2 < *(uint *)(pWVar11 + 0x6c8));
      if (cVar4 != '\0') {
        return pWVar11;
      }
    }
LAB_18004c7c8:
    FUN_180054b70((longlong)pWVar11);
  }
  (**(code **)(*(longlong *)pWVar11 + 0x80))(pWVar11,0);
  FUN_180063d00(*(LPVOID *)(pWVar11 + -8));
  return (WNDPROC)0x0;
}

