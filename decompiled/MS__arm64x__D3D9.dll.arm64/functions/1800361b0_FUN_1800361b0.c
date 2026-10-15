/*
 * FUN_1800361b0 at 1800361b0
 * undefined FUN_1800361b0(void)
 * Address ranges: 1800361b0-1800367ff
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint FUN_1800361b0(longlong param_1,ulonglong param_2,ulonglong param_3,undefined8 *param_4)

{
  int iVar1;
  code *pcVar2;
  ulonglong uVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  longlong lVar6;
  undefined8 *puVar7;
  uint uVar8;
  longlong lVar9;
  ulonglong uVar10;
  longlong lVar11;
  longlong local_140;
  undefined8 *local_138;
  undefined1 local_130 [8];
  undefined8 uStack_128;
  longlong local_120;
  undefined1 local_110 [8];
  undefined8 uStack_108;
  longlong local_100;
  undefined1 local_f0 [8];
  undefined8 uStack_e8;
  longlong local_e0;
  undefined1 auStack_d0 [8];
  undefined8 local_c8;
  longlong lStack_c0;
  undefined1 auStack_b8 [8];
  undefined8 local_b0;
  longlong lStack_a8;
  undefined1 auStack_a0 [24];
  undefined1 auStack_88 [24];
  undefined1 auStack_70 [32];
  
  *param_4 = 0;
  uVar8 = 1;
  if (*(int *)(param_1 + 0x28) != 1) {
    lVar6 = *(longlong *)
             (*(longlong *)(param_1 + 0x38) + (ulonglong)*(uint *)(param_1 + 0x4c) * 0x10);
    if ((*(int *)(lVar6 + 0x38) != 0) ||
       ((*(longlong **)(lVar6 + 0x18) != (longlong *)0x0 &&
        (uVar3 = (**(code **)(**(longlong **)(lVar6 + 0x18) + 0x40))(),
        uVar3 < *(ulonglong *)(lVar6 + 0x20))))) {
      if (*(uint *)(param_1 + 0x24) < 0x20001) {
        if (*(int *)(param_1 + 0x40) != 0) {
          uVar3 = 0;
          local_140 = CONCAT44(local_140._4_4_,1);
          lVar6 = *(longlong *)(param_1 + 0x10) + (ulonglong)*(uint *)(param_1 + 0x20) * 0x1ac0;
          local_138 = param_4;
          do {
            lVar9 = *(longlong *)(*(longlong *)(param_1 + 0x38) + uVar3 * 0x10);
            FUN_180101630(lVar6 + 0x1bc0);
            if (*(char *)(lVar6 + 0x1dc4) == '\0') {
LAB_18003660c:
              plVar4 = *(longlong **)(lVar6 + 0x1da0);
              *plVar4 = lVar6 + 0x2140;
              plVar4[1] = lVar9;
              FUN_180035ae0();
LAB_180036618:
              *(undefined4 *)(lVar6 + 0x1bc0) = 0;
            }
            else {
              puVar5 = (undefined8 *)FUN_180101500(lVar6 + 0x1bc0,0x10);
              pcVar2 = __imp_KERNEL32_dll_Sleep;
              if (puVar5 == (undefined8 *)0x0) {
                *(undefined4 *)(lVar6 + 0x1bc0) = 0;
                (*pcVar2)(100);
                FUN_180101630(lVar6 + 0x1bc0);
                goto LAB_18003660c;
              }
              FUN_1800015a0(lVar6 + 0x1dc0);
              puVar5[1] = 0x10;
              puVar5[2] = lVar6 + 0x2140;
              puVar7 = (undefined8 *)((longlong)puVar5 + 0x27U & 0xfffffffffffffff8);
              puVar5[3] = lVar9;
              *puVar7 = 0;
              *puVar5 = FUN_180035ae0;
              *(undefined8 **)(lVar6 + 0x1c50 + (ulonglong)*(uint *)(lVar6 + 0x1dbc) * 0x28) =
                   puVar7;
              pcVar2 = __imp_KERNEL32_dll_SetEvent;
              if (*(char *)(lVar6 + 0x1dc5) == '\0') goto LAB_180036618;
              *(undefined4 *)(lVar6 + 0x1bc0) = 0;
              (*pcVar2)(*(undefined8 *)(lVar6 + 0x1c40));
            }
            uVar8 = (int)uVar3 + 1;
            uVar3 = (ulonglong)uVar8;
          } while (uVar8 < *(uint *)(param_1 + 0x40));
          param_4 = local_138;
          uVar8 = (uint)local_140;
        }
        thunk_FUN_180102fc0(*(undefined8 *)(param_1 + 0x38));
        *(undefined8 *)(param_1 + 0x38) = 0;
        *(undefined4 *)(param_1 + 0x40) = 0;
        *(undefined8 *)(param_1 + 0x44) = 0;
        *(undefined4 *)(param_1 + 0x4c) = 0;
        *(undefined4 *)(param_1 + 0x28) = 1;
        *(undefined1 *)(param_1 + 0x30) = 1;
        uVar3 = FUN_180035608(param_1);
        if ((uVar3 & 1) != 0) {
          lVar6 = *(longlong *)
                   (*(longlong *)(param_1 + 0x38) + (ulonglong)*(uint *)(param_1 + 0x4c) * 0x10);
          (**(code **)(*(longlong *)(lVar6 + 0x40) + 0x20))(lVar6 + 0x40,auStack_d0,2,0,0);
          *param_4 = local_c8;
          uVar8 = (uint)(lStack_c0 == 0);
          *(undefined4 *)(param_1 + 0x2c) = 0xffffffff;
        }
      }
      else {
        puVar5 = *(undefined8 **)
                  (*(longlong *)(param_1 + 0x38) + (ulonglong)*(uint *)(param_1 + 0x4c) * 0x10);
        lVar6 = *(longlong *)(param_1 + 0x10) + (ulonglong)*(uint *)(param_1 + 0x20) * 0x1ac0;
        FUN_180101df0(lVar6 + 0x1bc0);
        lVar9 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x1b500);
        if (*(char *)((longlong)puVar5 + 0x3c) == '\0') {
          FUN_1800f2220(lVar9,puVar5);
          iVar1 = *(int *)(*(longlong *)(lVar6 + 0x1e08) + 0xb50);
          *(bool *)((longlong)puVar5 + 0x3c) = iVar1 != -1;
          puVar5 = *(undefined8 **)(param_1 + 0x18);
          if (puVar5 != (undefined8 *)0x0 && iVar1 != -1) {
            (**(code **)*puVar5)(puVar5,param_1);
          }
        }
        else {
          local_138 = puVar5;
          (*__imp_KERNEL32_dll_EnterCriticalSection)(lVar9 + 0x28);
          lVar11 = FUN_1800f24c0(lVar9 + 0x10,&local_138);
          if (lVar11 != 0) {
            FUN_1800f1048(lVar11,lVar11,0);
          }
          (*__imp_KERNEL32_dll_LeaveCriticalSection)(lVar9 + 0x28);
          while (uVar10 = puVar5[5], uVar3 = FUN_1800e9288(*(undefined8 *)(lVar6 + 0x1e08)),
                uVar3 < uVar10) {
            DataMemoryBarrier(2,2);
            Yield();
          }
        }
      }
    }
    if (*(int *)(param_1 + 0x28) == 1) {
      return uVar8;
    }
    lVar6 = *(longlong *)
             (*(longlong *)(param_1 + 0x38) + (ulonglong)*(uint *)(param_1 + 0x4c) * 0x10);
    (**(code **)(*(longlong *)(lVar6 + 0x40) + 0x20))(lVar6 + 0x40,auStack_b8,1,0,0);
    *param_4 = local_b0;
    local_e0 = lStack_a8;
    goto LAB_1800367dc;
  }
  if ((param_2 & 1) == 0) {
    lVar6 = (ulonglong)*(uint *)(param_1 + 0x4c) * 0x10;
    if ((param_3 & 1) == 0) {
      lVar6 = *(longlong *)(*(longlong *)(param_1 + 0x38) + lVar6);
      if ((*(int *)(lVar6 + 0x38) != 0) ||
         ((*(longlong **)(lVar6 + 0x18) != (longlong *)0x0 &&
          (uVar3 = (**(code **)(**(longlong **)(lVar6 + 0x18) + 0x40))(),
          uVar3 < *(ulonglong *)(lVar6 + 0x20))))) {
        lVar6 = *(longlong *)
                 (*(longlong *)(param_1 + 0x38) + (ulonglong)*(uint *)(param_1 + 0x4c) * 0x10);
        lVar9 = *(longlong *)(param_1 + 0x10) + (ulonglong)*(uint *)(param_1 + 0x20) * 0x1ac0;
        FUN_180101df0(lVar9 + 0x1bc0);
        lVar11 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x1b500);
        if (*(char *)(lVar6 + 0x3c) == '\0') {
          FUN_1800f2220(lVar11,lVar6);
          iVar1 = *(int *)(*(longlong *)(lVar9 + 0x1e08) + 0xb50);
          *(bool *)(lVar6 + 0x3c) = iVar1 != -1;
          puVar5 = *(undefined8 **)(param_1 + 0x18);
          if (puVar5 != (undefined8 *)0x0 && iVar1 != -1) {
            (**(code **)*puVar5)(puVar5,param_1);
          }
        }
        else {
          local_140 = lVar6;
          (*__imp_KERNEL32_dll_EnterCriticalSection)(lVar11 + 0x28);
          plVar4 = (longlong *)FUN_1800f24c0(lVar11 + 0x10,&local_140);
          if (((plVar4 != (longlong *)0x0) &&
              (uVar3 = (**(code **)(**(longlong **)(*plVar4 + 0x18) + 0x40))(),
              uVar3 < (ulonglong)plVar4[2])) && (plVar4[1] != -1)) {
            FUN_1800e8548(plVar4[1] + 8,0);
          }
          (*__imp_KERNEL32_dll_LeaveCriticalSection)(lVar11 + 0x28);
          while (uVar10 = *(ulonglong *)(lVar6 + 0x28),
                uVar3 = FUN_1800e9288(*(undefined8 *)(lVar9 + 0x1e08)), uVar3 < uVar10) {
            DataMemoryBarrier(2,2);
            Yield();
          }
        }
      }
      lVar6 = *(longlong *)
               (*(longlong *)(param_1 + 0x38) + (ulonglong)*(uint *)(param_1 + 0x4c) * 0x10);
      (**(code **)(*(longlong *)(lVar6 + 0x40) + 0x20))(lVar6 + 0x40,local_f0,1,0,0);
      if (local_e0 == 0) {
        lVar6 = FUN_180035ae8(param_1,auStack_70,1);
        uStack_e8 = *(undefined8 *)(lVar6 + 8);
        local_e0 = *(longlong *)(lVar6 + 0x10);
      }
    }
    else {
      lVar6 = *(longlong *)(*(longlong *)(param_1 + 0x38) + lVar6);
      (**(code **)(*(longlong *)(lVar6 + 0x40) + 0x20))(lVar6 + 0x40,local_110,1,0,0);
      uStack_e8 = uStack_108;
      local_e0 = local_100;
      if (local_100 == 0) {
        lVar6 = FUN_180035ae8(param_1,auStack_88,1);
        uStack_e8 = *(undefined8 *)(lVar6 + 8);
        local_e0 = *(longlong *)(lVar6 + 0x10);
      }
    }
  }
  else {
    if (*(int *)(param_1 + 0x40) == 0) {
      return 1;
    }
    plVar4 = (longlong *)
             (*(longlong *)(param_1 + 0x38) + (ulonglong)*(uint *)(param_1 + 0x4c) * 0x10);
    if (*(int *)(*plVar4 + 0x38) != 0) {
      if (*(int *)(*(longlong *)
                    (*(longlong *)(param_1 + 0x38) + (ulonglong)*(uint *)(param_1 + 0x48) * 0x10) +
                  0x38) == 0) {
        *(uint *)(plVar4 + 1) = *(uint *)(param_1 + 0x48);
        *(uint *)(param_1 + 0x4c) = *(uint *)(param_1 + 0x48);
        *(undefined4 *)(param_1 + 0x48) =
             *(undefined4 *)
              (*(longlong *)(param_1 + 0x38) + (ulonglong)*(uint *)(param_1 + 0x48) * 0x10 + 8);
      }
      else {
        if (0xc00000 <
            (uint)(*(int *)(param_1 + 0x24) + *(int *)(param_1 + 0x40) * *(int *)(param_1 + 0x24)))
        {
          FUN_180101df0(*(longlong *)(param_1 + 0x10) +
                        (ulonglong)*(uint *)(param_1 + 0x20) * 0x1ac0 + 0x1bc0);
          goto LAB_18003627c;
        }
        FUN_180035608();
      }
      *(undefined4 *)(param_1 + 0x2c) = 0xffffffff;
    }
LAB_18003627c:
    lVar6 = *(longlong *)
             (*(longlong *)(param_1 + 0x38) + (ulonglong)*(uint *)(param_1 + 0x4c) * 0x10);
    if (*(int *)(lVar6 + 0x38) != 0) {
      return 1;
    }
    (**(code **)(*(longlong *)(lVar6 + 0x40) + 0x20))(lVar6 + 0x40,local_130,2,0,0);
    uStack_e8 = uStack_128;
    local_e0 = local_120;
    if (local_120 == 0) {
      lVar6 = FUN_180035ae8(param_1,auStack_a0,2);
      uStack_e8 = *(undefined8 *)(lVar6 + 8);
      local_e0 = *(longlong *)(lVar6 + 0x10);
    }
  }
  *param_4 = uStack_e8;
LAB_1800367dc:
  return (uint)(local_e0 == 0);
}

