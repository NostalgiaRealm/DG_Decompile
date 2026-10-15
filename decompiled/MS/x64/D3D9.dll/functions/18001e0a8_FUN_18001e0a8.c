/*
 * FUN_18001e0a8 at 18001e0a8
 * undefined __fastcall FUN_18001e0a8(longlong param_1, uint param_2, RECT * param_3, undefined4 param_4, undefined4 param_5, undefined4 param_6, undefined4 param_7, RECT * param_8)
 * Address ranges: 18001e0a8-18001e3aa
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18001e0a8(longlong param_1,uint param_2,RECT *param_3,undefined4 param_4,undefined4 param_5
                  ,undefined4 param_6,undefined4 param_7,RECT *param_8)

{
  longlong *plVar1;
  bool bVar2;
  BOOL BVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  uint uVar7;
  tagRECT local_158 [17];
  
  if (param_3 != (RECT *)0x0) {
    FUN_18001b8f4(param_1);
    do {
      if (param_2 == 0) {
        return;
      }
      uVar6 = 0;
      uVar5 = param_2;
      if (0x10 < param_2) {
        uVar5 = 0x10;
      }
      uVar7 = uVar5;
      if (uVar5 != 0) {
        do {
          BVar3 = IntersectRect(local_158 + uVar6,param_3,param_8);
          uVar4 = (uint)uVar6 + 1;
          if (BVar3 == 0) {
            uVar4 = (uint)uVar6;
          }
          param_3 = param_3 + 1;
          uVar6 = (ulonglong)uVar4;
          uVar7 = uVar7 - 1;
        } while (uVar7 != 0);
        if (uVar4 != 0) {
          (**(code **)(**(longlong **)(param_1 + 0x28) + 0x30))
                    (*(longlong **)(param_1 + 0x28),uVar6,local_158,param_4,param_5,param_6,param_7,
                     0);
          bVar2 = false;
          if ((*(char *)(param_1 + 0xe21) == '\0') &&
             (*(char *)(*(longlong *)(param_1 + 0x18) + 0x7f2) == '\0')) {
            if (*(char *)(param_1 + 0x2cd) != '\0') goto LAB_18001e1a4;
          }
          else {
            bVar2 = true;
LAB_18001e1a4:
            (**(code **)(**(longlong **)(param_1 + 0x28) + 0x28))();
            (**(code **)(**(longlong **)(param_1 + 0x30) + 0x28))
                      (*(longlong **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x2c4),
                       *(undefined4 *)(param_1 + 0x2c8));
            if ((bVar2) &&
               ((**(code **)(**(longlong **)(param_1 + 0x30) + 0x28))
                          (*(longlong **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x2c4),
                           *(undefined4 *)(param_1 + 0x2c8)),
               *(char *)(*(longlong *)(param_1 + 0x18) + 0x7f3) != '\0')) {
              DebugBreak();
            }
          }
          if (*(char *)(param_1 + 0x2ce) == '\0') {
            (**(code **)(**(longlong **)(param_1 + 0x30) + 0x18))();
            if (*(longlong **)(param_1 + 0x50) != (longlong *)0x0) {
              (**(code **)(**(longlong **)(param_1 + 0x50) + 0x18))();
            }
            *(undefined1 *)(param_1 + 0x2ce) = 1;
          }
          if (*(char *)(param_1 + 0x2cf) != '\0') {
            if (*(int *)(param_1 + 0x4e0) != 0) {
              plVar1 = *(longlong **)(*(longlong *)(*(longlong *)(param_1 + 0x30) + 8) + 0x70);
              (**(code **)(*plVar1 + 0x40))
                        (plVar1,*(undefined4 *)(param_1 + 0x2c4),*(undefined4 *)(param_1 + 0x2c8),1)
              ;
            }
            *(undefined1 *)(param_1 + 0x2cf) = 0;
          }
        }
      }
      param_2 = param_2 - uVar5;
    } while( true );
  }
  FUN_18001b8f4(param_1);
  (**(code **)(**(longlong **)(param_1 + 0x28) + 0x30))
            (*(longlong **)(param_1 + 0x28),1,param_8,param_4,param_5,param_6,param_7,0);
  bVar2 = false;
  if ((*(char *)(param_1 + 0xe21) == '\0') &&
     (*(char *)(*(longlong *)(param_1 + 0x18) + 0x7f2) == '\0')) {
    if (*(char *)(param_1 + 0x2cd) == '\0') goto LAB_18001e32b;
  }
  else {
    bVar2 = true;
  }
  (**(code **)(**(longlong **)(param_1 + 0x28) + 0x28))();
  (**(code **)(**(longlong **)(param_1 + 0x30) + 0x28))
            (*(longlong **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x2c4),
             *(undefined4 *)(param_1 + 0x2c8));
  if ((bVar2) &&
     ((**(code **)(**(longlong **)(param_1 + 0x30) + 0x28))
                (*(longlong **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x2c4),
                 *(undefined4 *)(param_1 + 0x2c8)),
     *(char *)(*(longlong *)(param_1 + 0x18) + 0x7f3) != '\0')) {
    DebugBreak();
  }
LAB_18001e32b:
  if (*(char *)(param_1 + 0x2ce) == '\0') {
    (**(code **)(**(longlong **)(param_1 + 0x30) + 0x18))();
    if (*(longlong **)(param_1 + 0x50) != (longlong *)0x0) {
      (**(code **)(**(longlong **)(param_1 + 0x50) + 0x18))();
    }
    *(undefined1 *)(param_1 + 0x2ce) = 1;
  }
  if (*(char *)(param_1 + 0x2cf) != '\0') {
    if (*(int *)(param_1 + 0x4e0) != 0) {
      plVar1 = *(longlong **)(*(longlong *)(*(longlong *)(param_1 + 0x30) + 8) + 0x70);
      (**(code **)(*plVar1 + 0x40))
                (plVar1,*(undefined4 *)(param_1 + 0x2c4),*(undefined4 *)(param_1 + 0x2c8),1);
    }
    *(undefined1 *)(param_1 + 0x2cf) = 0;
  }
  return;
}

