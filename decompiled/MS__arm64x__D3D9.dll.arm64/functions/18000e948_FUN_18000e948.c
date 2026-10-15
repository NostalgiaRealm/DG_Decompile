/*
 * FUN_18000e948 at 18000e948
 * undefined FUN_18000e948(void)
 * Address ranges: 18000e948-18000eafb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18000e948(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  uint uVar2;
  uint uVar3;
  ulonglong uVar4;
  uint uVar5;
  longlong lVar6;
  uint uVar7;
  longlong local_630;
  undefined8 local_628 [191];
  
  uVar7 = *(uint *)(param_1 + 0x80);
  if (*(char *)(param_1 + 0x89) == '\0') {
    uVar2 = 0;
    if (uVar7 != 0) {
      do {
        uVar7 = 0;
        while( true ) {
          uVar3 = (uint)*(ushort *)(param_1 + 0x3c);
          if ((*(uint *)(param_1 + 0x70) & 0x400) != 0) {
            uVar3 = 1;
          }
          if (uVar3 <= uVar7) break;
          lVar6 = *(longlong *)(*(longlong *)(param_2 + (ulonglong)(uVar7 + uVar2 * 0x10) * 8) + 8);
          FUN_180024798(lVar6);
          if (*(uint *)(lVar6 + 0x88) != 0xffffffff) {
            (**(code **)(**(longlong **)(lVar6 + 0x68) + 0x80))
                      (*(longlong **)(lVar6 + 0x68),*(undefined8 *)(lVar6 + 0x70),
                       *(undefined8 *)
                        (*(longlong *)(lVar6 + 0x78) + (ulonglong)*(uint *)(lVar6 + 0x88) * 8));
            *(undefined4 *)(lVar6 + 0x88) = 0xffffffff;
          }
          uVar7 = uVar7 + 1;
        }
        uVar2 = uVar2 + 1;
      } while (uVar2 < *(uint *)(param_1 + 0x80));
    }
  }
  else {
    uVar2 = (uint)*(ushort *)(param_1 + 0x3c);
    if ((*(uint *)(param_1 + 0x70) & 0x400) != 0) {
      uVar2 = 1;
    }
    func_0x000180222c50(&local_630,0,0x600);
    uVar3 = 0;
    if (uVar7 != 0) {
      do {
        if (uVar2 != 0) {
          uVar5 = 0;
          do {
            lVar6 = *(longlong *)
                     (*(longlong *)(param_2 + (ulonglong)(uVar5 + uVar3 * 0x10) * 8) + 8);
            uVar4 = (ulonglong)(uVar5 + uVar3 * uVar2);
            uVar5 = uVar5 + 1;
            local_628[uVar4 * 2 + -1] = *(undefined8 *)(lVar6 + 0x28);
            *(undefined4 *)(local_628 + uVar4 * 2) = *(undefined4 *)(lVar6 + 0x18);
          } while (uVar5 < uVar2);
        }
        uVar3 = uVar3 + 1;
      } while (uVar3 < uVar7);
      uVar7 = 0;
      do {
        uVar2 = 0;
        while( true ) {
          uVar3 = (uint)*(ushort *)(param_1 + 0x3c);
          if ((*(uint *)(param_1 + 0x70) & 0x400) != 0) {
            uVar3 = 1;
          }
          if (uVar3 <= uVar2) break;
          lVar6 = *(longlong *)(*(longlong *)(param_2 + (ulonglong)(uVar2 + uVar7 * 0x10) * 8) + 8);
          FUN_180024798(lVar6);
          FUN_1800240b8(lVar6 + 0x68);
          uVar2 = uVar2 + 1;
        }
        uVar7 = uVar7 + 1;
      } while (uVar7 < *(uint *)(param_1 + 0x80));
    }
    plVar1 = &local_630;
    if (local_630 == 0) {
      plVar1 = (longlong *)0x0;
    }
    (**(code **)(**(longlong **)(param_1 + 0x58) + 0x90))(*(longlong **)(param_1 + 0x58),plVar1);
    *(undefined1 *)(param_1 + 0x89) = 0;
  }
  *(undefined1 *)(param_1 + 0x3e) = 0;
  return;
}

