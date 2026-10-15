/*
 * FUN_1800c5ea8 at 1800c5ea8
 * undefined FUN_1800c5ea8(void)
 * Address ranges: 1800c5ea8-1800c6457
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4
FUN_1800c5ea8(longlong param_1,longlong param_2,longlong param_3,longlong param_4,longlong param_5,
             uint param_6)

{
  byte bVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  longlong *plVar6;
  longlong *plVar7;
  uint uVar8;
  ulonglong uVar9;
  longlong lVar10;
  undefined4 uVar11;
  undefined8 uVar12;
  longlong lVar13;
  longlong lVar14;
  undefined1 auStack_d0 [8];
  undefined8 local_c8;
  undefined8 local_c0;
  int local_b8;
  int iStack_b4;
  undefined1 local_b0 [16];
  undefined1 local_a0 [16];
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined1 local_64;
  undefined1 auStack_60 [16];
  
  uVar8 = 0xfffffffc;
  if (*(char *)(param_1 + 0x180) != '\0') {
    uVar8 = 0xfffffe00;
  }
  if ((uVar8 & param_6) != 0) {
    return 0x8876086c;
  }
  if (param_5 != 0) {
    return 0x8876086c;
  }
  FUN_18000cd40(auStack_d0);
  bVar1 = *(byte *)(*(longlong *)(param_1 + 0x58) + 0x6819);
  uVar9 = (ulonglong)bVar1;
  uVar11 = 0x88760868;
  if (bVar1 != 0) goto LAB_1800c642c;
  uVar11 = 0x8876086c;
  uVar9 = 1;
  if (*(uint *)(param_1 + 0xd4) != 0) {
    do {
      if ((*(uint *)(*(longlong *)(*(longlong *)(param_1 + 0x60 + uVar9 * 8) + 8) + 0x100) >> 0xb &
          1) != 0) goto LAB_1800c642c;
      uVar8 = (int)uVar9 + 1;
      uVar9 = (ulonglong)uVar8;
    } while (uVar8 <= *(uint *)(param_1 + 0xd4));
  }
  FUN_180005fb8(*(longlong *)(param_1 + 0x58),*(undefined8 *)(param_1 + 0x68));
  uVar8 = *(uint *)(param_1 + 0xcc);
  bVar2 = true;
  if (((param_6 & 0x104) == 0) || (uVar9 = 0, uVar8 == 5)) {
    uVar9 = 1;
  }
  if ((uVar8 < 6) && ((0x24U >> (ulonglong)(uVar8 & 0x1f) & 1) != 0)) {
LAB_1800c5fb4:
    uVar8 = (uint)uVar9;
    if (param_3 != 0 || param_2 != 0) {
      uVar8 = 0;
    }
    uVar9 = (ulonglong)uVar8;
  }
  else {
    if (uVar8 == 1) {
      if (*(char *)(param_1 + 0x101) == '\0') goto LAB_1800c5fb4;
    }
    else if (uVar8 != 3) goto LAB_1800c642c;
    bVar2 = false;
  }
  if ((int)uVar9 != 0) {
    if (bVar2) {
      plVar7 = (longlong *)(param_1 + 0x60);
      (*(code *)**(undefined8 **)*plVar7)();
      uVar9 = 1;
      uVar8 = 1;
      uVar12 = *(undefined8 *)(*(longlong *)(*plVar7 + 8) + 0x70);
      if (*(int *)(param_1 + 0xd4) != 0) {
        do {
          local_c8 = uVar12;
          (*(code *)**(undefined8 **)plVar7[uVar9])();
          uVar8 = (int)uVar9 - 1;
          lVar13 = plVar7[uVar8];
          lVar10 = *(longlong *)(lVar13 + 8);
          uVar12 = *(undefined8 *)(*(longlong *)(plVar7[uVar9] + 8) + 0x70);
          (**(code **)(**(longlong **)(lVar10 + 0x70) + 0x30))
                    (*(longlong **)(lVar10 + 0x70),*(undefined4 *)(lVar10 + 0x94),
                     *(undefined4 *)(lVar10 + 0x98),1);
          *(undefined8 *)(*(longlong *)(lVar13 + 8) + 0x70) = uVar12;
          plVar6 = *(longlong **)(param_1 + 0x58);
          lVar10 = plVar7[uVar8];
          if ((((lVar10 == plVar6[6]) || (lVar10 == plVar6[7])) || (lVar10 == plVar6[8])) ||
             (lVar10 == plVar6[9])) {
            (**(code **)(*plVar6 + 0x48))();
          }
          uVar8 = (int)uVar9 + 1;
          uVar9 = (ulonglong)uVar8;
          uVar12 = local_c8;
        } while (uVar8 <= *(uint *)(param_1 + 0xd4));
      }
      lVar10 = param_1 + (ulonglong)(uVar8 - 1) * 8;
      lVar14 = *(longlong *)(lVar10 + 0x60);
      lVar13 = *(longlong *)(lVar14 + 8);
      (**(code **)(**(longlong **)(lVar13 + 0x70) + 0x30))
                (*(longlong **)(lVar13 + 0x70),*(undefined4 *)(lVar13 + 0x94),
                 *(undefined4 *)(lVar13 + 0x98),1);
      *(undefined8 *)(*(longlong *)(lVar14 + 8) + 0x70) = uVar12;
      plVar7 = *(longlong **)(param_1 + 0x58);
      lVar10 = *(longlong *)(lVar10 + 0x60);
      if (((lVar10 == plVar7[6]) || (lVar10 == plVar7[7])) ||
         ((lVar10 == plVar7[8] || (lVar10 == plVar7[9])))) {
        (**(code **)(*plVar7 + 0x48))();
      }
    }
    else {
      local_64 = 1;
      local_70 = 0;
      local_68 = 0;
      uStack_88 = 0;
      local_90 = 0;
      uStack_78 = 0;
      local_80 = 0;
      (*__imp_USER32_dll_SetRect)
                (&local_80,0,0,*(undefined4 *)(param_1 + 0x98),*(undefined4 *)(param_1 + 0x9c));
      if (param_2 != 0) {
        (*__imp_USER32_dll_IntersectRect)(&local_80,&local_80,param_2);
      }
      if (*(char *)(param_1 + 0x101) == '\0') {
        (*__imp_USER32_dll_SetRect)
                  (&local_90,0,0,*(undefined4 *)(param_1 + 0x98),*(undefined4 *)(param_1 + 0x9c));
        if (param_3 != 0) {
          (*__imp_USER32_dll_IntersectRect)(&local_90,&local_90,param_3);
        }
        param_3 = 0;
        param_2 = 0;
      }
      else {
        uStack_88 = uStack_78;
        local_90 = local_80;
      }
      (**(code **)**(undefined8 **)(param_1 + 0x60))();
      (**(code **)**(undefined8 **)(param_1 + 0x68))();
      (**(code **)(**(longlong **)(param_1 + 0x88) + 0x108))
                (*(longlong **)(param_1 + 0x88),0,0,0,0,
                 *(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x60) + 8) + 0x70),
                 *(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x68) + 8) + 0x70),&local_90)
      ;
    }
    *(int *)(param_1 + 0x118) = *(int *)(param_1 + 0x118) + 1;
    (*__imp_KERNEL32_dll_QueryPerformanceCounter)(param_1 + 0x110);
    lVar10 = *(longlong *)(param_1 + 0x60);
    plVar7 = *(longlong **)(*(longlong *)(lVar10 + 8) + 0x70);
    iVar4 = (**(code **)(*plVar7 + 0x10))(plVar7);
    iVar5 = (**(code **)(*plVar7 + 0x18))(plVar7);
    if (*(longlong *)(lVar10 + 0x38) == 0) {
      local_c0 = 0;
      lVar13 = 0;
      if (*(longlong *)(lVar10 + 8) != 0) {
        lVar13 = *(longlong *)(lVar10 + 8) + 0x68;
      }
      local_b8 = iVar4;
      iStack_b4 = iVar5;
      cVar3 = FUN_18000da70(param_1 + 8,lVar13);
    }
    else {
      local_c8 = CONCAT44(local_c8._4_4_,
                          (uint)(*(int *)(param_1 + 0xb4) * iVar4 !=
                                *(int *)(param_1 + 0xb0) * iVar5));
      (*__imp_USER32_dll_SetRect)
                (&local_c0,0,0,*(undefined4 *)(param_1 + 0x98),*(undefined4 *)(param_1 + 0x9c));
      if (param_2 != 0) {
        (*__imp_USER32_dll_IntersectRect)(local_b0,&local_c0,param_2);
        (*__imp_USER32_dll_EqualRect)(local_b0,&local_c0);
      }
      if (param_3 != 0) {
        if (param_4 == 0) {
          param_4 = *(longlong *)(param_1 + 0x90);
        }
        (*__imp_USER32_dll_GetClientRect)(param_4,local_a0);
        (*__imp_USER32_dll_IntersectRect)(auStack_60,local_a0,param_3);
        (*__imp_USER32_dll_EqualRect)(auStack_60,&local_c0);
      }
      lVar13 = 0;
      if (*(longlong *)(lVar10 + 8) != 0) {
        lVar13 = *(longlong *)(lVar10 + 8) + 0x68;
      }
      cVar3 = FUN_18000da70(param_1 + 8,lVar13);
    }
    uVar9 = 0x80004005;
    uVar11 = 0;
    if (cVar3 == '\0') {
      uVar11 = 0x80004005;
    }
  }
LAB_1800c642c:
  FUN_18000cde0(uVar9,auStack_d0);
  return uVar11;
}

