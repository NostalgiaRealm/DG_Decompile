/*
 * FUN_180042ae0 at 180042ae0
 * undefined __fastcall FUN_180042ae0(longlong * param_1)
 * Address ranges: 180042ae0-180043212
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180042ae0(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  ulonglong uVar3;
  uint uVar4;
  uint uVar5;
  longlong *plVar6;
  HMODULE hInstance;
  ulonglong uVar7;
  ulonglong uVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  ulonglong uVar12;
  
  if (param_1[0x1edb] != 0) {
    FUN_1800fb1f0(param_1[0x1edc] + 0x12c0);
    (**(code **)(*param_1 + 0x1d8))(param_1);
    FUN_1800e2ae8(*(longlong *)(param_1[0x1edc] + 0x1508) + 8,'\0');
    uVar8 = 0;
    LOCK();
    if (param_1 == *(longlong **)(param_1[0x1edb] + 0x618)) {
      *(longlong *)(param_1[0x1edb] + 0x618) = 0;
    }
    UNLOCK();
    uVar10 = *(uint *)(param_1 + 0x1f19);
    if (uVar10 != 0xffffffff) {
      lVar2 = *(longlong *)(param_1[0x1edc] + 0x1938);
      EnterCriticalSection((LPCRITICAL_SECTION)(lVar2 + 0x28));
      FUN_1800e149c(lVar2,uVar10,1);
      LeaveCriticalSection((LPCRITICAL_SECTION)(lVar2 + 0x28));
    }
    FUN_180056a00((longlong)(param_1 + 0x1f01));
    FUN_18004c8e4((longlong)param_1);
    *(undefined4 *)((longlong)param_1 + 0xf784) = 0;
    FUN_1800591f4((longlong)(param_1 + 0x1ef2));
    FUN_180056578((longlong)(param_1 + 0x1ee9));
    uVar7 = uVar8;
    do {
      iVar9 = (int)uVar7;
      uVar10 = *(uint *)((longlong)param_1 + uVar7 * 4 + 0xfa18);
      if (uVar10 != 0xffffffff) {
        uVar11 = *(uint *)(param_1[0x1edc] + 0x1a40);
        if (uVar11 != 0) {
          lVar2 = *(longlong *)(param_1[0x1edc] + 0x1a38);
          uVar12 = (ulonglong)uVar10;
          uVar7 = uVar8;
          uVar10 = uVar11;
          do {
            uVar5 = uVar10 + (int)uVar7 >> 1;
            uVar3 = *(ulonglong *)(lVar2 + (ulonglong)uVar5 * 0x18);
            uVar4 = uVar5;
            if (uVar3 <= uVar12) {
              if (uVar12 <= uVar3) break;
              uVar5 = uVar5 + 1;
              uVar7 = (ulonglong)uVar5;
              uVar4 = uVar10;
            }
            uVar10 = uVar4;
          } while (uVar10 != (uint)uVar7);
          if (((uVar5 != uVar11) && (*(ulonglong *)(lVar2 + (ulonglong)uVar5 * 0x18) == uVar12)) &&
             (plVar6 = (longlong *)(lVar2 + (ulonglong)uVar5 * 0x18 + 0x10),
             plVar6 != (longlong *)0x0)) {
            *(undefined1 *)(*plVar6 + 0x20) = 0;
          }
        }
      }
      uVar10 = *(uint *)((longlong)param_1 + (ulonglong)(iVar9 + 1) * 4 + 0xfa18);
      if (uVar10 != 0xffffffff) {
        uVar11 = *(uint *)(param_1[0x1edc] + 0x1a40);
        if (uVar11 != 0) {
          lVar2 = *(longlong *)(param_1[0x1edc] + 0x1a38);
          uVar12 = (ulonglong)uVar10;
          uVar7 = uVar8;
          uVar10 = uVar11;
          do {
            uVar5 = uVar10 + (int)uVar7 >> 1;
            uVar3 = *(ulonglong *)(lVar2 + (ulonglong)uVar5 * 0x18);
            uVar4 = uVar5;
            if (uVar3 <= uVar12) {
              if (uVar12 <= uVar3) break;
              uVar5 = uVar5 + 1;
              uVar7 = (ulonglong)uVar5;
              uVar4 = uVar10;
            }
            uVar10 = uVar4;
          } while (uVar10 != (uint)uVar7);
          if (((uVar5 != uVar11) && (*(ulonglong *)(lVar2 + (ulonglong)uVar5 * 0x18) == uVar12)) &&
             (plVar6 = (longlong *)(lVar2 + (ulonglong)uVar5 * 0x18 + 0x10),
             plVar6 != (longlong *)0x0)) {
            *(undefined1 *)(*plVar6 + 0x20) = 0;
          }
        }
      }
      uVar10 = *(uint *)((longlong)param_1 + (ulonglong)(iVar9 + 2) * 4 + 0xfa18);
      if (uVar10 != 0xffffffff) {
        uVar11 = *(uint *)(param_1[0x1edc] + 0x1a40);
        if (uVar11 != 0) {
          lVar2 = *(longlong *)(param_1[0x1edc] + 0x1a38);
          uVar12 = (ulonglong)uVar10;
          uVar7 = uVar8;
          uVar10 = uVar11;
          do {
            uVar5 = uVar10 + (int)uVar7 >> 1;
            uVar3 = *(ulonglong *)(lVar2 + (ulonglong)uVar5 * 0x18);
            uVar4 = uVar5;
            if (uVar3 <= uVar12) {
              if (uVar12 <= uVar3) break;
              uVar5 = uVar5 + 1;
              uVar7 = (ulonglong)uVar5;
              uVar4 = uVar10;
            }
            uVar10 = uVar4;
          } while (uVar10 != (uint)uVar7);
          if (((uVar5 != uVar11) && (*(ulonglong *)(lVar2 + (ulonglong)uVar5 * 0x18) == uVar12)) &&
             (plVar6 = (longlong *)(lVar2 + (ulonglong)uVar5 * 0x18 + 0x10),
             plVar6 != (longlong *)0x0)) {
            *(undefined1 *)(*plVar6 + 0x20) = 0;
          }
        }
      }
      uVar10 = *(uint *)((longlong)param_1 + (ulonglong)(iVar9 + 3) * 4 + 0xfa18);
      if (uVar10 != 0xffffffff) {
        uVar11 = *(uint *)(param_1[0x1edc] + 0x1a40);
        if (uVar11 != 0) {
          lVar2 = *(longlong *)(param_1[0x1edc] + 0x1a38);
          uVar12 = (ulonglong)uVar10;
          uVar7 = uVar8;
          uVar10 = uVar11;
          do {
            uVar5 = uVar10 + (int)uVar7 >> 1;
            uVar3 = *(ulonglong *)(lVar2 + (ulonglong)uVar5 * 0x18);
            uVar4 = uVar5;
            if (uVar3 <= uVar12) {
              if (uVar12 <= uVar3) break;
              uVar5 = uVar5 + 1;
              uVar7 = (ulonglong)uVar5;
              uVar4 = uVar10;
            }
            uVar10 = uVar4;
          } while (uVar10 != (uint)uVar7);
          if (((uVar5 != uVar11) && (*(ulonglong *)(lVar2 + (ulonglong)uVar5 * 0x18) == uVar12)) &&
             (plVar6 = (longlong *)(lVar2 + (ulonglong)uVar5 * 0x18 + 0x10),
             plVar6 != (longlong *)0x0)) {
            *(undefined1 *)(*plVar6 + 0x20) = 0;
          }
        }
      }
      uVar7 = (ulonglong)(iVar9 + 4U);
    } while (iVar9 + 4U < 0x10);
    if (*(uint *)(param_1 + 0x1f78) != 0xffffffff) {
      uVar10 = *(uint *)(param_1[0x1edc] + 0x1a40);
      if (uVar10 != 0) {
        lVar2 = *(longlong *)(param_1[0x1edc] + 0x1a38);
        uVar12 = (ulonglong)*(uint *)(param_1 + 0x1f78);
        uVar7 = uVar8;
        uVar11 = uVar10;
        do {
          uVar5 = uVar11 + (int)uVar7 >> 1;
          uVar3 = *(ulonglong *)(lVar2 + (ulonglong)uVar5 * 0x18);
          uVar4 = uVar5;
          if (uVar3 <= uVar12) {
            if (uVar12 <= uVar3) break;
            uVar5 = uVar5 + 1;
            uVar7 = (ulonglong)uVar5;
            uVar4 = uVar11;
          }
          uVar11 = uVar4;
        } while (uVar11 != (uint)uVar7);
        if (((uVar5 != uVar10) && (*(ulonglong *)(lVar2 + (ulonglong)uVar5 * 0x18) == uVar12)) &&
           (plVar6 = (longlong *)(lVar2 + (ulonglong)uVar5 * 0x18 + 0x10), plVar6 != (longlong *)0x0
           )) {
          *(undefined1 *)(*plVar6 + 0x20) = 0;
        }
      }
    }
    if (*(uint *)((longlong)param_1 + 0xfbc4) != 0xffffffff) {
      uVar10 = *(uint *)(param_1[0x1edc] + 0x1a40);
      if (uVar10 != 0) {
        lVar2 = *(longlong *)(param_1[0x1edc] + 0x1a38);
        uVar12 = (ulonglong)*(uint *)((longlong)param_1 + 0xfbc4);
        uVar7 = uVar8;
        uVar11 = uVar10;
        do {
          uVar5 = uVar11 + (int)uVar7 >> 1;
          uVar3 = *(ulonglong *)(lVar2 + (ulonglong)uVar5 * 0x18);
          uVar4 = uVar5;
          if (uVar3 <= uVar12) {
            if (uVar12 <= uVar3) break;
            uVar5 = uVar5 + 1;
            uVar7 = (ulonglong)uVar5;
            uVar4 = uVar11;
          }
          uVar11 = uVar4;
        } while (uVar11 != (uint)uVar7);
        if (((uVar5 != uVar10) && (*(ulonglong *)(lVar2 + (ulonglong)uVar5 * 0x18) == uVar12)) &&
           (plVar6 = (longlong *)(lVar2 + (ulonglong)uVar5 * 0x18 + 0x10), plVar6 != (longlong *)0x0
           )) {
          *(undefined1 *)(*plVar6 + 0x20) = 0;
        }
      }
    }
    if (*(uint *)(param_1 + 0x1f79) != 0xffffffff) {
      uVar10 = *(uint *)(param_1[0x1edc] + 0x1a40);
      if (uVar10 != 0) {
        lVar2 = *(longlong *)(param_1[0x1edc] + 0x1a38);
        uVar12 = (ulonglong)*(uint *)(param_1 + 0x1f79);
        uVar7 = uVar8;
        uVar11 = uVar10;
        do {
          uVar5 = uVar11 + (int)uVar7 >> 1;
          uVar3 = *(ulonglong *)(lVar2 + (ulonglong)uVar5 * 0x18);
          uVar4 = uVar5;
          if (uVar3 <= uVar12) {
            if (uVar12 <= uVar3) break;
            uVar5 = uVar5 + 1;
            uVar7 = (ulonglong)uVar5;
            uVar4 = uVar11;
          }
          uVar11 = uVar4;
        } while (uVar11 != (uint)uVar7);
        if (((uVar5 != uVar10) && (*(ulonglong *)(lVar2 + (ulonglong)uVar5 * 0x18) == uVar12)) &&
           (plVar6 = (longlong *)(lVar2 + (ulonglong)uVar5 * 0x18 + 0x10), plVar6 != (longlong *)0x0
           )) {
          *(undefined1 *)(*plVar6 + 0x20) = 0;
        }
      }
    }
    if (*(uint *)((longlong)param_1 + 0xfbcc) != 0xffffffff) {
      uVar10 = *(uint *)(param_1[0x1edc] + 0x1a40);
      if (uVar10 != 0) {
        lVar2 = *(longlong *)(param_1[0x1edc] + 0x1a38);
        uVar12 = (ulonglong)*(uint *)((longlong)param_1 + 0xfbcc);
        uVar7 = uVar8;
        uVar11 = uVar10;
        do {
          uVar5 = uVar11 + (int)uVar7 >> 1;
          uVar3 = *(ulonglong *)(lVar2 + (ulonglong)uVar5 * 0x18);
          uVar4 = uVar5;
          if (uVar3 <= uVar12) {
            if (uVar12 <= uVar3) break;
            uVar5 = uVar5 + 1;
            uVar7 = (ulonglong)uVar5;
            uVar4 = uVar11;
          }
          uVar11 = uVar4;
        } while (uVar11 != (uint)uVar7);
        if (((uVar5 != uVar10) && (*(ulonglong *)(lVar2 + (ulonglong)uVar5 * 0x18) == uVar12)) &&
           (plVar6 = (longlong *)(lVar2 + (ulonglong)uVar5 * 0x18 + 0x10), plVar6 != (longlong *)0x0
           )) {
          *(undefined1 *)(*plVar6 + 0x20) = 0;
        }
      }
    }
    if (*(uint *)(param_1 + 0x1f7a) != 0xffffffff) {
      uVar10 = *(uint *)(param_1[0x1edc] + 0x1a40);
      if (uVar10 != 0) {
        lVar2 = *(longlong *)(param_1[0x1edc] + 0x1a38);
        uVar7 = (ulonglong)*(uint *)(param_1 + 0x1f7a);
        uVar11 = uVar10;
        do {
          uVar5 = uVar11 + (int)uVar8 >> 1;
          uVar12 = *(ulonglong *)(lVar2 + (ulonglong)uVar5 * 0x18);
          uVar4 = uVar5;
          if (uVar12 <= uVar7) {
            if (uVar7 <= uVar12) break;
            uVar5 = uVar5 + 1;
            uVar8 = (ulonglong)uVar5;
            uVar4 = uVar11;
          }
          uVar11 = uVar4;
        } while (uVar11 != (uint)uVar8);
        if (((uVar5 != uVar10) && (*(ulonglong *)(lVar2 + (ulonglong)uVar5 * 0x18) == uVar7)) &&
           (plVar6 = (longlong *)(lVar2 + (ulonglong)uVar5 * 0x18 + 0x10), plVar6 != (longlong *)0x0
           )) {
          *(undefined1 *)(*plVar6 + 0x20) = 0;
        }
      }
    }
    plVar6 = (longlong *)param_1[0x1ee6];
    if (plVar6 != (longlong *)0x0) {
      FUN_1800ea1d0(*(longlong **)(param_1[0x1edb] + 0x1b500),(ulonglong)plVar6,'\x01');
      (**(code **)(*plVar6 + 0x10))(plVar6);
    }
    param_1[0x1ee6] = 0;
    if ((undefined8 *)param_1[0x1ee7] != (undefined8 *)0x0) {
      FUN_1800428b0((undefined8 *)param_1[0x1ee7],1);
    }
    param_1[0x1ee7] = 0;
    if ((undefined8 *)param_1[0x1ee5] != (undefined8 *)0x0) {
      FUN_1800428b0((undefined8 *)param_1[0x1ee5],1);
    }
    param_1[0x1ee5] = 0;
    if (param_1[0x1ee2] != 0) {
      FUN_1800ea030(*(longlong *)(param_1[0x1edb] + 0x1b500),param_1[0x1ee2],(undefined *)0x0,'\x01'
                   );
    }
    if (param_1[0x1ee3] != 0) {
      FUN_1800ea030(*(longlong *)(param_1[0x1edb] + 0x1b500),param_1[0x1ee3],(undefined *)0x0,'\x01'
                   );
    }
    if ((undefined8 *)param_1[0x1ee2] != (undefined8 *)0x0) {
      FUN_1800428b0((undefined8 *)param_1[0x1ee2],1);
    }
    param_1[0x1ee2] = 0;
    if ((undefined8 *)param_1[0x1ee3] != (undefined8 *)0x0) {
      FUN_1800428b0((undefined8 *)param_1[0x1ee3],1);
    }
    param_1[0x1ee3] = 0;
    if ((undefined8 *)param_1[0x1ee1] != (undefined8 *)0x0) {
      FUN_1800429f0((undefined8 *)param_1[0x1ee1]);
    }
    param_1[0x1ee1] = 0;
    if ((undefined8 *)param_1[0x1ee0] != (undefined8 *)0x0) {
      FUN_1800429f0((undefined8 *)param_1[0x1ee0]);
    }
    param_1[0x1ee0] = 0;
    FUN_1800fbcf0((LPVOID)param_1[5]);
    param_1[5] = 0;
    FUN_1800fbcf0((LPVOID)param_1[4]);
    plVar6 = (longlong *)param_1[0x1edb];
    param_1[4] = 0;
    if (plVar6 != (longlong *)0x0) {
      LOCK();
      plVar1 = plVar6 + 1;
      lVar2 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar2 == 1) {
        if (*(short *)((longlong)plVar6 + 0xc) != 0) {
          hInstance = GetModuleHandleW((LPCWSTR)0x0);
          UnregisterClassW((LPCWSTR)(ulonglong)*(ushort *)((longlong)plVar6 + 0xc),hInstance);
          if ((HMODULE)plVar6[2] != (HMODULE)0x0) {
            FreeLibrary((HMODULE)plVar6[2]);
            plVar6[2] = 0;
          }
        }
        (**(code **)(*plVar6 + 0x88))(plVar6);
      }
    }
    param_1[0x1edb] = 0;
  }
  return;
}

