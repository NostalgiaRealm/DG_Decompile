/*
 * FUN_180009c8c at 180009c8c
 * undefined8 __fastcall FUN_180009c8c(ulonglong param_1, longlong * param_2, int param_3, uint param_4, longlong param_5, undefined4 param_6)
 * Address ranges: 180009c8c-180009e2e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8
FUN_180009c8c(ulonglong param_1,longlong *param_2,int param_3,uint param_4,longlong param_5,
             undefined4 param_6)

{
  longlong *plVar1;
  bool bVar2;
  longlong lVar3;
  undefined8 in_stack_ffffffffffffffb8;
  undefined4 uVar4;
  
  uVar4 = (undefined4)((ulonglong)in_stack_ffffffffffffffb8 >> 0x20);
  FUN_1800067dc(param_1);
  lVar3 = (longlong)*(int *)(&DAT_1800fda90 + (longlong)param_3 * 4);
  if (param_2[2] == 0) {
    FUN_1800099a8(param_1,param_2,*(int *)(&DAT_1800fda90 + (longlong)param_3 * 4),0,0,param_4,0,0,
                  param_5,param_6);
  }
  else {
    (**(code **)(**(longlong **)(param_1 + 0x28) + 0x140))
              (*(longlong **)(param_1 + 0x28),lVar3,*param_2,param_2[2],param_5,param_6,
               CONCAT44(uVar4,param_4 * *(int *)(&DAT_1800fda58 + lVar3 * 8) +
                              *(int *)(&DAT_1800fda5c + lVar3 * 8)));
  }
  FUN_180006d94(param_1,'\0');
  if ((*(char *)(param_1 + 0xe21) == '\0') &&
     (*(char *)(*(longlong *)(param_1 + 0x18) + 0x7f2) == '\0')) {
    if (*(char *)(param_1 + 0x2cd) == '\0') goto LAB_180009dbf;
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
LAB_180009dbf:
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
  return 0;
}

