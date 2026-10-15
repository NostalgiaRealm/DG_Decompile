/*
 * FUN_180009e30 at 180009e30
 * undefined8 __fastcall FUN_180009e30(ulonglong param_1, longlong * param_2, int param_3, uint param_4, uint param_5, uint param_6, longlong param_7, int param_8, longlong param_9, undefined4 param_10)
 * Address ranges: 180009e30-18000a023
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8
FUN_180009e30(ulonglong param_1,longlong *param_2,int param_3,uint param_4,uint param_5,uint param_6
             ,longlong param_7,int param_8,longlong param_9,undefined4 param_10)

{
  longlong *plVar1;
  bool bVar2;
  longlong lVar3;
  undefined8 in_stack_ffffffffffffffa8;
  undefined4 uVar4;
  undefined8 in_stack_ffffffffffffffb8;
  undefined4 uVar5;
  
  uVar4 = (undefined4)((ulonglong)in_stack_ffffffffffffffa8 >> 0x20);
  uVar5 = (undefined4)((ulonglong)in_stack_ffffffffffffffb8 >> 0x20);
  FUN_1800067dc(param_1);
  lVar3 = (longlong)*(int *)(&DAT_1800fda90 + (longlong)param_3 * 4);
  if (param_2[2] == 0) {
    FUN_1800099a8(param_1,param_2,*(int *)(&DAT_1800fda90 + (longlong)param_3 * 4),
                  (ulonglong)param_4,param_5,param_6,param_7,param_8,param_9,param_10);
  }
  else {
    (**(code **)(**(longlong **)(param_1 + 0x28) + 0x148))
              (*(longlong **)(param_1 + 0x28),lVar3,*param_2,param_2[2],param_9,param_10,
               CONCAT44(uVar4,param_5),param_7,
               CONCAT44(uVar5,param_6 * *(int *)(&DAT_1800fda58 + lVar3 * 8) +
                              *(int *)(&DAT_1800fda5c + lVar3 * 8)),0,param_8 == 0x66);
  }
  if ((*(char *)(param_1 + 0xe21) == '\0') &&
     (*(char *)(*(longlong *)(param_1 + 0x18) + 0x7f2) == '\0')) {
    if (*(char *)(param_1 + 0x2cd) == '\0') goto LAB_180009fab;
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  (**(code **)(**(longlong **)(param_1 + 0x28) + 0x28))();
  (**(code **)(**(longlong **)(param_1 + 0x30) + 0x28))
            (*(longlong **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x2c4),
             *(undefined4 *)(param_1 + 0x2c8));
  if (bVar2) {
    (**(code **)(**(longlong **)(param_1 + 0x30) + 0x28))
              (*(longlong **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x2c4),
               *(undefined4 *)(param_1 + 0x2c8));
    if (*(char *)(*(longlong *)(param_1 + 0x18) + 0x7f3) != '\0') {
      DebugBreak();
    }
  }
LAB_180009fab:
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
  FUN_180006d94(param_1,'\x01');
  return 0;
}

