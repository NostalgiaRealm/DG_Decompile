/*
 * FUN_18004e830 at 18004e830
 * undefined8 __cdecl FUN_18004e830(longlong param_1, ulonglong param_2)
 * Address ranges: 18004e830-18004ebb7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_18004e830(longlong param_1,ulonglong param_2)

{
  longlong lVar1;
  uint uVar2;
  uint uVar3;
  ulonglong *puVar4;
  int iVar5;
  uint uVar6;
  code *pcVar7;
  undefined8 uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  longlong *plVar11;
  longlong lVar12;
  undefined8 local_40 [2];
  
  lVar12 = *(longlong *)(param_1 + 0xb08);
  uVar8 = 0;
  if ((lVar12 != 0) && (*(int *)(param_1 + 0x67c) == 0)) {
    uVar9 = 0;
    *(int *)(param_1 + 0x674) = *(int *)(param_1 + 0x674) + 1;
    if (*(int *)(param_1 + 0xba0) != 0) {
      do {
        (**(code **)(**(longlong **)(*(longlong *)(param_1 + 0xb98) + uVar9 * 8) + 8))();
        uVar2 = (int)uVar9 + 1;
        uVar9 = (ulonglong)uVar2;
      } while (uVar2 < *(uint *)(param_1 + 0xba0));
    }
    iVar5 = *(int *)(param_1 + 0x674) + -1;
    *(int *)(param_1 + 0x674) = iVar5;
    if ((iVar5 == 0) && (*(int *)(param_1 + 0xb20) == 0)) {
      (**(code **)(**(longlong **)(lVar12 + 0x10) + 0x70))
                (*(longlong **)(lVar12 + 0x10),*(undefined8 *)(lVar12 + 0x18),
                 *(undefined8 *)(param_1 + 0xb70));
      uVar2 = *(uint *)(param_1 + 0xb4c);
      *(undefined4 *)(param_1 + 0xb4c) = 0;
      uVar9 = 0;
      if (uVar2 != 0) {
        do {
          lVar1 = param_1 + uVar9 * 8;
          FUN_1800499a8(*(longlong **)(param_1 + 0xb10),*(ulonglong *)(lVar1 + 0x808),1);
          (**(code **)(**(longlong **)(lVar1 + 0x808) + 0x10))();
          uVar3 = (int)uVar9 + 1;
          uVar9 = (ulonglong)uVar3;
        } while (uVar3 < uVar2);
      }
      uVar2 = *(uint *)(param_1 + 0xb50);
      uVar9 = 0;
      *(undefined4 *)(param_1 + 0xb50) = 0;
      if (uVar2 != 0) {
        do {
          FUN_1800497b8(*(longlong *)(param_1 + 0xb10),
                        *(ulonglong *)(uVar9 * 0x10 + param_1 + 0x908),
                        *(undefined **)(uVar9 * 0x10 + param_1 + 0x910),1);
          uVar3 = (int)uVar9 + 1;
          uVar9 = (ulonglong)uVar3;
        } while (uVar3 < uVar2);
      }
    }
    else {
      *(int *)(param_1 + 0xba8) = *(int *)(param_1 + 0xba8) + 1;
      FUN_18004e320(param_1 + -8);
      (**(code **)(**(longlong **)(param_1 + 0x680) + 0x48))();
      local_40[0] = *(undefined8 *)(param_1 + 0x680);
      uVar8 = *(undefined8 *)(param_1 + 0xb70);
      (**(code **)(**(longlong **)(lVar12 + 0x10) + 0x50))(*(longlong **)(lVar12 + 0x10),1,local_40)
      ;
      (**(code **)(**(longlong **)(lVar12 + 0x10) + 0x70))
                (*(longlong **)(lVar12 + 0x10),*(undefined8 *)(lVar12 + 0x18),uVar8);
      *(undefined8 *)(param_1 + (ulonglong)*(uint *)(param_1 + 0xb68) * 8 + 0x748) =
           *(undefined8 *)(param_1 + 0xb70);
      uVar3 = *(uint *)(param_1 + 0xb5c);
      uVar2 = *(int *)(param_1 + 0xb68) + 1;
      if (uVar3 == 0) {
                    /* WARNING: Does not return */
        pcVar7 = (code *)SoftwareBreakpoint(0xf004,0x18004e9c8);
        (*pcVar7)();
      }
      uVar6 = 0;
      if (uVar3 != 0) {
        uVar6 = uVar2 / uVar3;
      }
      *(uint *)(param_1 + 0xb68) = uVar2 - uVar6 * uVar3;
      uVar10 = *(ulonglong *)(param_1 + (ulonglong)*(uint *)(param_1 + 0xb64) * 8 + 0x748);
      uVar9 = (**(code **)(**(longlong **)(*(longlong *)(param_1 + 0xb08) + 0x18) + 0x40))();
      uVar2 = *(uint *)(param_1 + 0xb64);
      if (uVar9 < uVar10) {
        if (*(uint *)(param_1 + 0xb68) == uVar2) {
          uVar3 = *(uint *)(param_1 + 0xb5c);
          if (uVar3 == 0) {
                    /* WARNING: Does not return */
            pcVar7 = (code *)SoftwareBreakpoint(0xf004,0x18004ea7c);
            (*pcVar7)();
          }
          uVar6 = 0;
          if (uVar3 != 0) {
            uVar6 = (uVar2 + 1) / uVar3;
          }
          *(uint *)(param_1 + 0xb64) = (uVar2 + 1) - uVar6 * uVar3;
        }
        FUN_180047910(*(longlong *)(param_1 + 0xb08),
                      *(ulonglong *)(param_1 + (ulonglong)*(uint *)(param_1 + 0xb68) * 8 + 0x748));
        plVar11 = *(longlong **)(param_1 + (ulonglong)*(uint *)(param_1 + 0xb68) * 8 + 0x688);
      }
      else {
        lVar1 = param_1 + (ulonglong)uVar2 * 8;
        plVar11 = *(longlong **)(lVar1 + 0x688);
        *(undefined8 *)(lVar1 + 0x688) =
             *(undefined8 *)(param_1 + (ulonglong)*(uint *)(param_1 + 0xb68) * 8 + 0x688);
        *(longlong **)(param_1 + (ulonglong)*(uint *)(param_1 + 0xb68) * 8 + 0x688) = plVar11;
        *(undefined8 *)(param_1 + (ulonglong)*(uint *)(param_1 + 0xb64) * 8 + 0x748) =
             *(undefined8 *)(param_1 + (ulonglong)*(uint *)(param_1 + 0xb68) * 8 + 0x748);
        uVar3 = *(uint *)(param_1 + 0xb5c);
        uVar2 = *(int *)(param_1 + 0xb64) + 1;
        if (uVar3 == 0) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(0xf004,0x18004ea50);
          (*pcVar7)();
        }
        uVar6 = 0;
        if (uVar3 != 0) {
          uVar6 = uVar2 / uVar3;
        }
        *(uint *)(param_1 + 0xb64) = uVar2 - uVar6 * uVar3;
      }
      (**(code **)(*plVar11 + 0x40))(plVar11);
      (**(code **)(**(longlong **)(param_1 + 0x680) + 0x50))
                (*(longlong **)(param_1 + 0x680),plVar11,0);
      *(undefined4 *)(param_1 + 0xb60) = 0;
      FUN_180063e98((undefined1 *)(param_1 + 0x18),0,0x660);
      *(undefined4 *)(param_1 + 0x668) = 0xffffffff;
      uVar9 = 0;
      *(undefined4 *)(param_1 + 0x660) = 0x7ff00000;
      *(undefined4 *)(param_1 + 0x664) = 0x7ff00000;
      *(undefined4 *)(param_1 + 0x658) = 0x7ff00000;
      *(undefined4 *)(param_1 + 0x65c) = 0x7ff00000;
      uVar2 = *(uint *)(param_1 + 0xb4c);
      *(undefined4 *)(param_1 + 0xb4c) = 0;
      if (uVar2 != 0) {
        do {
          lVar1 = param_1 + uVar9 * 8;
          FUN_1800499a8(*(longlong **)(param_1 + 0xb10),*(ulonglong *)(lVar1 + 0x808),1);
          (**(code **)(**(longlong **)(lVar1 + 0x808) + 0x10))();
          uVar3 = (int)uVar9 + 1;
          uVar9 = (ulonglong)uVar3;
        } while (uVar3 < uVar2);
      }
      uVar2 = *(uint *)(param_1 + 0xb50);
      uVar9 = 0;
      *(undefined4 *)(param_1 + 0xb50) = 0;
      if (uVar2 != 0) {
        do {
          FUN_1800497b8(*(longlong *)(param_1 + 0xb10),
                        *(ulonglong *)(uVar9 * 0x10 + param_1 + 0x908),
                        *(undefined **)(uVar9 * 0x10 + param_1 + 0x910),1);
          uVar3 = (int)uVar9 + 1;
          uVar9 = (ulonglong)uVar3;
        } while (uVar3 < uVar2);
      }
    }
    puVar4 = (ulonglong *)(param_1 + 0xb70);
    if ((param_2 & 1) != 0) {
      FUN_180047910(lVar12,*puVar4);
    }
    *(ulonglong *)(param_1 + 0xb78) = *puVar4;
    uVar9 = FUN_1800643f0((longlong *)(lVar12 + 0x28));
    *puVar4 = uVar9;
    uVar8 = 1;
    *(undefined8 *)(param_1 + 0xb80) = 0;
  }
  return uVar8;
}

