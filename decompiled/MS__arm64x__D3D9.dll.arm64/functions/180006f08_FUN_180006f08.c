/*
 * FUN_180006f08 at 180006f08
 * undefined FUN_180006f08(void)
 * Address ranges: 180006f08-18000731f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4
FUN_180006f08(undefined4 param_1,longlong param_2,uint param_3,longlong param_4,uint param_5,
             undefined4 param_6,undefined4 param_7,undefined8 param_8)

{
  uint uVar1;
  bool bVar2;
  int iVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  uint uVar6;
  ulonglong uVar7;
  uint uVar8;
  int local_178;
  int iStack_174;
  int local_170;
  int iStack_16c;
  undefined1 auStack_168 [264];
  
  if ((param_4 != 0) && (param_3 == 0)) {
    return 0x8876086c;
  }
  if (((param_5 >> 1 & 1) != 0) && (*(longlong *)(param_2 + 0x50) == 0)) {
    return 0x8876086c;
  }
  if (((param_5 >> 2 & 1) != 0) && (*(char *)(param_2 + 0x2cc) == '\0')) {
    return 0x8876086c;
  }
  if (*(char *)(param_2 + 0x6819) != '\0') {
    return 0;
  }
  if (*(longlong *)(param_2 + 0x30) == 0) {
    return 0;
  }
  local_178 = *(int *)(param_2 + 0x58);
  iStack_174 = *(int *)(param_2 + 0x5c);
  iStack_16c = *(int *)(param_2 + 100) + iStack_174;
  local_170 = *(int *)(param_2 + 0x60) + local_178;
  if (*(int *)(param_2 + 0x730) != 0) {
    (*__imp_USER32_dll_IntersectRect)(&local_178,&local_178,param_8);
  }
  (**(code **)**(undefined8 **)(param_2 + 0x30))();
  puVar4 = *(undefined8 **)(param_2 + 0x38);
  if (param_4 != 0) {
    if (puVar4 != (undefined8 *)0x0) {
      (**(code **)*puVar4)();
    }
    if (*(undefined8 **)(param_2 + 0x40) != (undefined8 *)0x0) {
      (**(code **)**(undefined8 **)(param_2 + 0x40))();
    }
    if (*(undefined8 **)(param_2 + 0x48) != (undefined8 *)0x0) {
      (**(code **)**(undefined8 **)(param_2 + 0x48))();
    }
    if (*(undefined8 **)(param_2 + 0x50) != (undefined8 *)0x0) {
      (**(code **)**(undefined8 **)(param_2 + 0x50))();
    }
    do {
      if (param_3 == 0) {
        return 0;
      }
      uVar1 = 0x10;
      if (param_3 < 0x11) {
        uVar1 = param_3;
      }
      uVar7 = 0;
      uVar8 = uVar1;
      if (uVar1 != 0) {
        do {
          iVar3 = (*__imp_USER32_dll_IntersectRect)(auStack_168 + uVar7 * 0x10,param_4,&local_178);
          param_4 = param_4 + 0x10;
          uVar8 = uVar8 - 1;
          uVar6 = (uint)uVar7;
          if (iVar3 != 0) {
            uVar6 = uVar6 + 1;
          }
          uVar7 = (ulonglong)uVar6;
        } while (uVar8 != 0);
        if (uVar6 != 0) {
          (**(code **)(**(longlong **)(param_2 + 0x28) + 0x30))
                    (param_1,*(longlong **)(param_2 + 0x28),uVar6,auStack_168,param_5,param_6,
                     param_7,0);
          if ((*(char *)(param_2 + 0xe21) == '\0') &&
             (*(char *)(*(longlong *)(param_2 + 0x18) + 0x7f2) == '\0')) {
            bVar2 = false;
            if (*(char *)(param_2 + 0x2cd) != '\0') goto LAB_1800070c0;
          }
          else {
            bVar2 = true;
LAB_1800070c0:
            (**(code **)(**(longlong **)(param_2 + 0x28) + 0x28))();
            (**(code **)(**(longlong **)(param_2 + 0x30) + 0x28))
                      (*(longlong **)(param_2 + 0x30),*(undefined4 *)(param_2 + 0x2c4),
                       *(undefined4 *)(param_2 + 0x2c8));
            if ((bVar2) &&
               ((**(code **)(**(longlong **)(param_2 + 0x30) + 0x28))
                          (*(longlong **)(param_2 + 0x30),*(undefined4 *)(param_2 + 0x2c4),
                           *(undefined4 *)(param_2 + 0x2c8)),
               *(char *)(*(longlong *)(param_2 + 0x18) + 0x7f3) != '\0')) {
              (*__imp_KERNEL32_dll_DebugBreak)();
            }
          }
          if (*(char *)(param_2 + 0x2ce) == '\0') {
            (**(code **)(**(longlong **)(param_2 + 0x30) + 0x18))();
            if (*(longlong **)(param_2 + 0x50) != (longlong *)0x0) {
              (**(code **)(**(longlong **)(param_2 + 0x50) + 0x18))();
            }
            *(undefined1 *)(param_2 + 0x2ce) = 1;
          }
          if (*(char *)(param_2 + 0x2cf) != '\0') {
            if (*(int *)(param_2 + 0x4e0) != 0) {
              plVar5 = *(longlong **)(*(longlong *)(*(longlong *)(param_2 + 0x30) + 8) + 0x70);
              (**(code **)(*plVar5 + 0x40))
                        (plVar5,*(undefined4 *)(param_2 + 0x2c4),*(undefined4 *)(param_2 + 0x2c8),1)
              ;
            }
            *(undefined1 *)(param_2 + 0x2cf) = 0;
          }
        }
      }
      param_3 = param_3 - uVar1;
    } while( true );
  }
  if (puVar4 != (undefined8 *)0x0) {
    (**(code **)*puVar4)();
  }
  if (*(undefined8 **)(param_2 + 0x40) != (undefined8 *)0x0) {
    (**(code **)**(undefined8 **)(param_2 + 0x40))();
  }
  if (*(undefined8 **)(param_2 + 0x48) != (undefined8 *)0x0) {
    (**(code **)**(undefined8 **)(param_2 + 0x48))();
  }
  if (*(undefined8 **)(param_2 + 0x50) != (undefined8 *)0x0) {
    (**(code **)**(undefined8 **)(param_2 + 0x50))();
  }
  (**(code **)(**(longlong **)(param_2 + 0x28) + 0x30))
            (param_1,*(longlong **)(param_2 + 0x28),1,&local_178,param_5,param_6,param_7,0);
  if ((*(char *)(param_2 + 0xe21) == '\0') &&
     (*(char *)(*(longlong *)(param_2 + 0x18) + 0x7f2) == '\0')) {
    bVar2 = false;
    if (*(char *)(param_2 + 0x2cd) == '\0') goto LAB_180007290;
  }
  else {
    bVar2 = true;
  }
  (**(code **)(**(longlong **)(param_2 + 0x28) + 0x28))();
  (**(code **)(**(longlong **)(param_2 + 0x30) + 0x28))
            (*(longlong **)(param_2 + 0x30),*(undefined4 *)(param_2 + 0x2c4),
             *(undefined4 *)(param_2 + 0x2c8));
  if ((bVar2) &&
     ((**(code **)(**(longlong **)(param_2 + 0x30) + 0x28))
                (*(longlong **)(param_2 + 0x30),*(undefined4 *)(param_2 + 0x2c4),
                 *(undefined4 *)(param_2 + 0x2c8)),
     *(char *)(*(longlong *)(param_2 + 0x18) + 0x7f3) != '\0')) {
    (*__imp_KERNEL32_dll_DebugBreak)();
  }
LAB_180007290:
  if (*(char *)(param_2 + 0x2ce) == '\0') {
    (**(code **)(**(longlong **)(param_2 + 0x30) + 0x18))();
    if (*(longlong **)(param_2 + 0x50) != (longlong *)0x0) {
      (**(code **)(**(longlong **)(param_2 + 0x50) + 0x18))();
    }
    *(undefined1 *)(param_2 + 0x2ce) = 1;
  }
  if (*(char *)(param_2 + 0x2cf) != '\0') {
    if (*(int *)(param_2 + 0x4e0) != 0) {
      plVar5 = *(longlong **)(*(longlong *)(*(longlong *)(param_2 + 0x30) + 8) + 0x70);
      (**(code **)(*plVar5 + 0x40))
                (plVar5,*(undefined4 *)(param_2 + 0x2c4),*(undefined4 *)(param_2 + 0x2c8),1);
    }
    *(undefined1 *)(param_2 + 0x2cf) = 0;
  }
  return 0;
}

