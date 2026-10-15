/*
 * FUN_180041034 at 180041034
 * bool __fastcall FUN_180041034(longlong param_1, char param_2, char param_3, undefined8 * param_4)
 * Address ranges: 180041034-1800412d2
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool FUN_180041034(longlong param_1,char param_2,char param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  ulonglong uVar2;
  longlong *plVar3;
  longlong lVar4;
  bool bVar5;
  undefined4 uVar6;
  bool bVar7;
  undefined1 local_68 [8];
  undefined8 uStack_60;
  longlong local_58;
  undefined8 local_50 [3];
  
  *param_4 = 0;
  bVar7 = true;
  uVar6 = 1;
  if (*(int *)(param_1 + 0x28) != 1) {
    lVar4 = *(longlong *)
             (*(longlong *)(param_1 + 0x38) + (ulonglong)*(uint *)(param_1 + 0x4c) * 0x10);
    if ((*(int *)(lVar4 + 0x38) != 0) ||
       ((bVar5 = true, *(longlong **)(lVar4 + 0x18) != (longlong *)0x0 &&
        (uVar2 = (**(code **)(**(longlong **)(lVar4 + 0x18) + 0x40))(), bVar5 = bVar7,
        uVar2 < *(ulonglong *)(lVar4 + 0x20))))) {
      if (*(uint *)(param_1 + 0x24) < 0x20001) {
        FUN_180040824(param_1);
        *(undefined4 *)(param_1 + 0x28) = 1;
        *(undefined1 *)(param_1 + 0x30) = 1;
        uVar2 = FUN_18004068c(param_1);
        bVar5 = bVar7;
        if ((char)uVar2 != '\0') {
          plVar3 = (longlong *)
                   (*(longlong *)
                     (*(longlong *)(param_1 + 0x38) + (ulonglong)*(uint *)(param_1 + 0x4c) * 0x10) +
                   0x40);
          (**(code **)(*plVar3 + 0x20))(plVar3,local_68,2,0,0);
          *param_4 = uStack_60;
          *(undefined4 *)(param_1 + 0x2c) = 0xffffffff;
          bVar5 = local_58 == 0;
        }
      }
      else {
        FUN_180040c74(param_1,*(ulonglong *)
                               (*(longlong *)(param_1 + 0x38) +
                               (ulonglong)*(uint *)(param_1 + 0x4c) * 0x10));
        bVar5 = bVar7;
      }
    }
    if (*(int *)(param_1 + 0x28) == 1) {
      return bVar5;
    }
    plVar3 = (longlong *)
             (*(longlong *)
               (*(longlong *)(param_1 + 0x38) + (ulonglong)*(uint *)(param_1 + 0x4c) * 0x10) + 0x40)
    ;
    (**(code **)(*plVar3 + 0x20))(plVar3,local_68,1,0,0);
    bVar7 = local_58 == 0;
    goto LAB_1800412b4;
  }
  if (param_2 == '\0') {
    if (param_3 == '\0') {
      lVar4 = *(longlong *)
               (*(longlong *)(param_1 + 0x38) + (ulonglong)*(uint *)(param_1 + 0x4c) * 0x10);
      if ((*(int *)(lVar4 + 0x38) != 0) ||
         ((*(longlong **)(lVar4 + 0x18) != (longlong *)0x0 &&
          (uVar2 = (**(code **)(**(longlong **)(lVar4 + 0x18) + 0x40))(),
          uVar2 < *(ulonglong *)(lVar4 + 0x20))))) {
        FUN_180040c74(param_1,*(ulonglong *)
                               (*(longlong *)(param_1 + 0x38) +
                               (ulonglong)*(uint *)(param_1 + 0x4c) * 0x10));
      }
      lVar4 = *(longlong *)
               (*(longlong *)(param_1 + 0x38) + (ulonglong)*(uint *)(param_1 + 0x4c) * 0x10);
    }
    else {
      lVar4 = *(longlong *)
               (*(longlong *)(param_1 + 0x38) + (ulonglong)*(uint *)(param_1 + 0x4c) * 0x10);
    }
    (**(code **)(*(longlong *)(lVar4 + 0x40) + 0x20))((longlong *)(lVar4 + 0x40),local_68,1,0,0);
    bVar7 = false;
    if (local_58 != 0) goto LAB_1800412b4;
  }
  else {
    if (*(int *)(param_1 + 0x40) == 0) {
      return true;
    }
    lVar4 = *(longlong *)(param_1 + 0x38);
    if (*(int *)(*(longlong *)(lVar4 + (ulonglong)*(uint *)(param_1 + 0x4c) * 0x10) + 0x38) != 0) {
      if (*(int *)(*(longlong *)(lVar4 + (ulonglong)*(uint *)(param_1 + 0x48) * 0x10) + 0x38) == 0)
      {
        *(uint *)(lVar4 + 8 + (ulonglong)*(uint *)(param_1 + 0x4c) * 0x10) =
             *(uint *)(param_1 + 0x48);
        *(uint *)(param_1 + 0x4c) = *(uint *)(param_1 + 0x48);
        *(undefined4 *)(param_1 + 0x48) =
             *(undefined4 *)
              (*(longlong *)(param_1 + 0x38) + 8 + (ulonglong)*(uint *)(param_1 + 0x48) * 0x10);
      }
      else {
        if (0xc00000 < (uint)((*(int *)(param_1 + 0x40) + 1) * *(int *)(param_1 + 0x24))) {
          FUN_1800fb1f0((ulonglong)*(uint *)(param_1 + 0x20) * 0x1ac0 +
                        *(longlong *)(param_1 + 0x10) + 0x1bc0);
          goto LAB_1800410f6;
        }
        FUN_18004068c(param_1);
      }
      *(undefined4 *)(param_1 + 0x2c) = 0xffffffff;
    }
LAB_1800410f6:
    lVar4 = *(longlong *)
             (*(longlong *)(param_1 + 0x38) + (ulonglong)*(uint *)(param_1 + 0x4c) * 0x10);
    if (*(int *)(lVar4 + 0x38) != 0) {
      return true;
    }
    plVar3 = (longlong *)(lVar4 + 0x40);
    (**(code **)(*plVar3 + 0x20))(plVar3,local_68,2,0,0);
    bVar7 = false;
    if (local_58 != 0) goto LAB_1800412b4;
    uVar6 = 2;
  }
  puVar1 = FUN_180040aa0(param_1,local_50,uVar6);
  uStack_60 = puVar1[1];
  bVar7 = puVar1[2] == 0;
LAB_1800412b4:
  *param_4 = uStack_60;
  return bVar7;
}

